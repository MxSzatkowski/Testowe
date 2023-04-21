#pragma once

#include "../Core/Entity.h"		// needed for EXAMPLEUNMANAGEDDLL_API

#ifndef __ExampleUnmanagedDLL_h__
#define __ExampleUnmanagedDLL_h__

#ifdef EXAMPLEUNMANAGEDDLL_EXPORTS
#define EXAMPLEUNMANAGEDDLL_API __declspec(dllexport)
#else
#define EXAMPLEUNMANAGEDDLL_API __declspec(dllimport)
#endif

class EXAMPLEUNMANAGEDDLL_API Ent : public Entity
{};

#endif	// __ExampleUnmanagedDLL_h__