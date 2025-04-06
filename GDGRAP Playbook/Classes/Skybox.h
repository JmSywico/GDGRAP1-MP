#ifndef SKYBOX_H
#define SKYBOX_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <vector>
#include <string>

class Skybox {
public:
    Skybox(const std::vector<std::string>& faces);
    ~Skybox();

    void Draw(const glm::mat4& view, const glm::mat4& projection);

private:
    GLuint skyboxVAO, skyboxVBO, cubemapTexture, skyboxEBO; 
    GLuint skyboxShader;

    GLuint LoadCubemap(const std::vector<std::string>& faces);

    GLuint LoadShader(const char* vertexPath, const char* fragmentPath);
};

#endif
