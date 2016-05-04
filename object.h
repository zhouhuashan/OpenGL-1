#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <btBulletDynamicsCommon.h>

class Object
{
public:
	Object() {}
	virtual ~Object() {}
	virtual void bind();
	virtual void render() {}
	virtual void renderWireframe() {}
	virtual void renderPoints() {}
	virtual void renderNormal() {}
	virtual btRigidBody *createRigidBody(btScalar /*mass*/, btScalar /*scale*/, btTransform /*T*/) {return 0;}

protected:
	virtual void setupVAO();

	GLuint vao;
	std::vector<glm::vec3> vertices, normals;
	std::vector<glm::vec2> texCoords;
	std::vector<GLuint> indices;
};

#endif // OBJECT_H