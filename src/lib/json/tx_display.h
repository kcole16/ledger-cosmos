/*******************************************************************************
*   (c) 2018, 2019 ZondaX GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// This is the main function called from ledger that updates key and value strings
/// that are going to be displayed in the UI.
/// This function assumes that the tx_ctx has been properly set
int16_t tx_display_get_item(uint16_t itemIndex);

/// Return number of UI pages that we'll have for the current json transaction (only if the tx is valid)
/// \return number of pages (msg pages + 5 required)
int16_t tx_display_numItems();

//---------------------------------------------

#ifdef __cplusplus
}
#endif