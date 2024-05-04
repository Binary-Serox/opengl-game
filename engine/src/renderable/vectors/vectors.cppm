module;
#include <glm/glm.hpp>
#include <vector>
export module engine:renderable.vectors;
import :shader;
import :renderable;

export namespace Engine {
    class Vectors final: public Renderable {
    public:
        explicit Vectors(const glm::vec3 &color, const Shader &shader_, const std::vector<float> &vertex_);
        void render() override;
        ~Vectors() override;
    };
}
