#pragma once

#if __has_include("d3d11.h")
#include <d3d11.h>
#else
#include "WindowsSpecificTypes.h"
#endif
#if __has_include("Windows.h")
#include <Windows.h>
#else
#include "WindowsSpecificTypes.h"
#endif

#if ARCDPS_EXTENSION_IMGUI
#include <imgui/imgui.h>
#endif

namespace ArcdpsExtension {
#if ARCDPS_EXTENSION_IMGUI
	void Setup(HMODULE pDll, ID3D11Device* pD11Device, ImGuiContext* pImGuiContext);
#else
	void Setup(HMODULE pDll, ID3D11Device* pD11Device);
#endif

	void Shutdown();
} // namespace ArcdpsExtension
