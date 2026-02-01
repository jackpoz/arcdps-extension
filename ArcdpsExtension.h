#pragma once

#include <CrossplatformMocks/Graphic.h>
#include <CrossplatformMocks/Module.h>

#if ARCDPS_EXTENSION_IMGUI
#include <imgui/imgui.h>
#endif

namespace ArcdpsExtension {
#if ARCDPS_EXTENSION_IMGUI
	void Setup(LibraryHandle pDll, GraphicDevice* pD11Device, ImGuiContext* pImGuiContext);
#else
	void Setup(LibraryHandle pDll, GraphicDevice* pD11Device);
#endif

	void Shutdown();
} // namespace ArcdpsExtension
