@echo off

set PROJECT_NAME=MyCppProject
set SOURCE_FILE=main.cpp
set EXE_NAME=%PROJECT_NAME%.exe
set SERVER_DIR=C:\Server\Deploy

echo Building the project...
g++ %SOURCE_FILE% -o %EXE_NAME%

if %ERRORLEVEL% NEQ 0 (
    echo Error: Build failed.
    exit /b 1
)

echo Build successful!

echo Running the project...
%EXE_NAME%

echo Deploying the project to the server...
copy %EXE_NAME% %SERVER_DIR%

if %ERRORLEVEL% NEQ 0 (
    echo Error: Deployment failed.
    exit /b 1
)

echo Deployment successful!

echo All tasks completed successfully.
exit /b 0