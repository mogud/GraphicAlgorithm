#include "Sponza.h"
#include "Interface.h"

CSponza::CSponza(const std::string& vGameObjectName, int vExecutionOrder) : IGameObject(vGameObjectName, vExecutionOrder)
{
}

CSponza::~CSponza()
{
}

void CSponza::initV()
{
	setModel(ElayGraphics::ResourceManager::getOrCreateModel("../Model/sponza/sponza.obj"));	//../Model/CornellBox/HalfCornell/HalfCornell.obj
	//auto AABB = getAABB();
	//setScale({ 300,300,300 });
}

void CSponza::updateV()
{
}