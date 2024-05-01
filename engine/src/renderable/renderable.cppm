module;
#include <glm/glm.hpp>
export module engine:renderable;
import :shader;

export namespace Engine {
    class Renderable {
    public:
        Renderable(const unsigned vao, const unsigned vbo, const glm::vec3 &color_, const glm::vec3 position_,
                   const Shader &shader_) : vao(vao), vbo(vbo), color(color_), position(position_), shader(shader_){};
        virtual void render() = 0;
        virtual ~Renderable() = default;
        [[nodiscard]] glm::vec3 getColor() const { return color; }

        void setColor(const glm::vec3 &color_) { color = color_; }


        [[nodiscard]] glm::vec3 getPosition() const { return position; }

        void setPosition(const glm::vec3 &position_) { color = position_; }


        [[nodiscard]] const Shader &getShader() const { return shader; }

    protected:
        unsigned vao, vbo;
        glm::vec3 color, position;
        const Shader &shader;
    };
} // namespace Engine
