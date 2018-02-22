/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*******************************************************************************
 * AUTOGENERATED - DO NOT EDIT
 *******************************************************************************
 * This file has been generated from the protobuf message
 * perfetto/config/data_source_config.proto
 * by
 * ../../tools/proto_to_cpp/proto_to_cpp.cc.
 * If you need to make changes here, change the .proto file and then run
 * ./tools/gen_tracing_cpp_headers_from_protos.py
 */

#ifndef INCLUDE_PERFETTO_TRACING_CORE_DATA_SOURCE_CONFIG_H_
#define INCLUDE_PERFETTO_TRACING_CORE_DATA_SOURCE_CONFIG_H_

#include <stdint.h>
#include <string>
#include <type_traits>
#include <vector>

// Forward declarations for protobuf types.
namespace perfetto {
namespace protos {
class DataSourceConfig;
class DataSourceConfig_FtraceConfig;
}  // namespace protos
}  // namespace perfetto

namespace perfetto {

class DataSourceConfig {
 public:
  class FtraceConfig {
   public:
    FtraceConfig();
    ~FtraceConfig();
    FtraceConfig(FtraceConfig&&) noexcept;
    FtraceConfig& operator=(FtraceConfig&&);
    FtraceConfig(const FtraceConfig&);
    FtraceConfig& operator=(const FtraceConfig&);

    // Conversion methods from/to the corresponding protobuf types.
    void FromProto(const perfetto::protos::DataSourceConfig_FtraceConfig&);
    void ToProto(perfetto::protos::DataSourceConfig_FtraceConfig*) const;

    int event_names_size() const {
      return static_cast<int>(event_names_.size());
    }
    const std::vector<std::string>& event_names() const { return event_names_; }
    std::string* add_event_names() {
      event_names_.emplace_back();
      return &event_names_.back();
    }

    int atrace_categories_size() const {
      return static_cast<int>(atrace_categories_.size());
    }
    const std::vector<std::string>& atrace_categories() const {
      return atrace_categories_;
    }
    std::string* add_atrace_categories() {
      atrace_categories_.emplace_back();
      return &atrace_categories_.back();
    }

    int atrace_apps_size() const {
      return static_cast<int>(atrace_apps_.size());
    }
    const std::vector<std::string>& atrace_apps() const { return atrace_apps_; }
    std::string* add_atrace_apps() {
      atrace_apps_.emplace_back();
      return &atrace_apps_.back();
    }

    uint32_t buffer_size_kb() const { return buffer_size_kb_; }
    void set_buffer_size_kb(uint32_t value) { buffer_size_kb_ = value; }

    uint32_t drain_period_ms() const { return drain_period_ms_; }
    void set_drain_period_ms(uint32_t value) { drain_period_ms_ = value; }

   private:
    std::vector<std::string> event_names_;
    std::vector<std::string> atrace_categories_;
    std::vector<std::string> atrace_apps_;
    uint32_t buffer_size_kb_ = {};
    uint32_t drain_period_ms_ = {};

    // Allows to preserve unknown protobuf fields for compatibility
    // with future versions of .proto files.
    std::string unknown_fields_;
  };

  DataSourceConfig();
  ~DataSourceConfig();
  DataSourceConfig(DataSourceConfig&&) noexcept;
  DataSourceConfig& operator=(DataSourceConfig&&);
  DataSourceConfig(const DataSourceConfig&);
  DataSourceConfig& operator=(const DataSourceConfig&);

  // Conversion methods from/to the corresponding protobuf types.
  void FromProto(const perfetto::protos::DataSourceConfig&);
  void ToProto(perfetto::protos::DataSourceConfig*) const;

  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; }

  uint32_t target_buffer() const { return target_buffer_; }
  void set_target_buffer(uint32_t value) { target_buffer_ = value; }

  uint32_t trace_duration_ms() const { return trace_duration_ms_; }
  void set_trace_duration_ms(uint32_t value) { trace_duration_ms_ = value; }

  const FtraceConfig& ftrace_config() const { return ftrace_config_; }
  FtraceConfig* mutable_ftrace_config() { return &ftrace_config_; }

 private:
  std::string name_ = {};
  uint32_t target_buffer_ = {};
  uint32_t trace_duration_ms_ = {};
  FtraceConfig ftrace_config_ = {};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;
};

}  // namespace perfetto
#endif  // INCLUDE_PERFETTO_TRACING_CORE_DATA_SOURCE_CONFIG_H_
