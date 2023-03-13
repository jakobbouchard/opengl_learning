#pragma once

#include <GLFW/glfw3.h>

class Application {
public:
    Application();
    ~Application();

    static Application& Get();

    void Run();
    void Close();

    float GetTime();
    GLFWwindow* GetWindowHandle() const { return m_WindowHandle; }

private:
    void Init();
    void Shutdown();
private:
    GLFWwindow* m_WindowHandle = nullptr;
    bool m_Running = false;

    float m_TimeStep = 0.0f;
    float m_FrameTime = 0.0f;
    float m_LastFrameTime = 0.0f;
};