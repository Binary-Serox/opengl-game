module;
#include <glm/glm.hpp>
#include <vector>
export module engine:renderable.points;
import :shader;
import :renderable;

export namespace Engine {
    class Points final: public Renderable<float> {
    public:
        explicit Points(const glm::vec3 &color, const Shader &shader_, const std::vector<float> &vertices_);
        void render() override;
        ~Points() override;
        void setVertices(const std::vector<float> &vertices_);
    };
}
