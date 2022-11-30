#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

#include <memory>

namespace Quag
{
	class QUAG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Logging Macros
#define QU_CORE_TRACE(...) ::Quag::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define QU_CORE_INFO(...)  ::Quag::Log::GetCoreLogger()->info(__VA_ARGS__)
#define QU_CORE_WARN(...)  ::Quag::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define QU_CORE_ERROR(...) ::Quag::Log::GetCoreLogger()->error(__VA_ARGS__)
#define QU_CORE_FATAL(...) ::Quag::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Logging Macros
#define QU_TRACE(...) ::Quag::Log::GetClientLogger()->trace(__VA_ARGS__)
#define QU_INFO(...)  ::Quag::Log::GetClientLogger()->info(__VA_ARGS__)
#define QU_WARN(...)  ::Quag::Log::GetClientLogger()->warn(__VA_ARGS__)
#define QU_ERROR(...) ::Quag::Log::GetClientLogger()->error(__VA_ARGS__)
#define QU_FATAL(...) ::Quag::Log::GetClientLogger()->fatal(__VA_ARGS__)
