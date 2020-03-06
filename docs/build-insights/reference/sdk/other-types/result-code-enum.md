---
title: Enumerazione RESULT_CODE
description: Informazioni C++ di riferimento sull'enum di build Insights SDK RESULT_CODE.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RESULT_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ee563d148b3456b288bc418255ec46f8cbade7ec
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332299"
---
# <a name="result_code-enum"></a>Enumerazione RESULT_CODE

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Il `RESULT_CODE` enum descrive le condizioni di esito positivo e negativo.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `RESULT_CODE_SUCCESS` | 0 (0x00000000) | L'operazione è riuscita. |
| `RESULT_CODE_FAILURE_ANALYSIS_ERROR` | 1 (0x00000001) | Una delle funzioni di callback in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md) ha restituito il valore di `CALLBACK_CODE_ANALYSIS_FAILURE`. Questo valore è un membro dell'enumerazione [CALLBACK_CODE](callback-code-enum.md) . |
| `RESULT_CODE_FAILURE_CANCELLED` | 2 (0x00000002) | Una delle funzioni di callback in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md) ha restituito il valore di `CALLBACK_CODE_ANALYSIS_CANCEL`. Questo valore è un membro dell'enumerazione [CALLBACK_CODE](callback-code-enum.md) . |
| `RESULT_CODE_FAILURE_INVALID_INPUT_LOG_FILE` | 3 (0x00000003) | La traccia di input Event Tracing for Windows (ETW) specificata non è valida. |
| `RESULT_CODE_FAILURE_INVALID_OUTPUT_LOG_FILE` | 4 (0x00000004) | La traccia ETW di output specificata non è valida. |
| `RESULT_CODE_FAILURE_MISSING_ANALYSIS_CALLBACK` | 5 (0x00000005) | La struttura [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) non è stata inizializzata correttamente. |
| `RESULT_CODE_FAILURE_MISSING_RELOG_CALLBACK` | 6 (0x00000006) | La struttura [RELOG_CALLBACKS](relog-callbacks-struct.md) non è stata inizializzata correttamente. |
| `RESULT_CODE_FAILURE_OPEN_INPUT_TRACE` | 7 (0x00000007) | Non è stato possibile aprire la traccia ETW di input. |
| `RESULT_CODE_FAILURE_PROCESS_TRACE` | 8 (0x00000008) | Si è verificato un errore durante l'elaborazione della traccia ETW di input. |
| `RESULT_CODE_FAILURE_START_RELOGGER` | 9 (0x00000009) | Si è verificato un errore durante il tentativo di avviare la sessione di registrazione. |
| `RESULT_CODE_FAILURE_DROPPED_EVENTS` | 10 (0x0000000A) | Nella traccia ETW di input mancano eventi importanti. |
| `RESULT_CODE_FAILURE_UNSUPPORTED_OS` | 11 (0x0000000B) | Si usa C++ la compilazione Insights in una versione non supportata di Windows. |
| `RESULT_CODE_FAILURE_INVALID_TRACING_SESSION_NAME` | 12 (0x0000000C) | Il nome della sessione specificato non è valido. |
| `RESULT_CODE_FAILURE_INSUFFICIENT_PRIVILEGES` | 13 (0x0000000D) | Questa operazione richiede privilegi di amministratore. |
| `RESULT_CODE_FAILURE_GENERATE_GUID` | 14 (0x0000000E) | Si è verificato un errore durante la generazione di un GUID. |
| `RESULT_CODE_FAILURE_OBTAINING_TEMP_DIRECTORY` | 15 (0x0000000F) | Si è verificato un errore durante il tentativo di determinare il percorso della directory temporanea. |
| `RESULT_CODE_FAILURE_CREATE_TEMPORARY_DIRECTORY` | 16 (0x00000010) | Si è verificato un errore durante il tentativo di creare una directory temporanea per la sessione di traccia avviata. |
| `RESULT_CODE_FAILURE_START_SYSTEM_TRACE` | 17 (0x00000011) | Si è verificato un errore durante il tentativo di avviare la traccia di sistema. |
| `RESULT_CODE_FAILURE_START_MSVC_TRACE` | 18 (0x00000012) | Si è verificato un errore durante il tentativo di avviare la traccia MSVC. |
| `RESULT_CODE_FAILURE_STOP_MSVC_TRACE` | 19 (0x00000013) | Si è verificato un errore durante il tentativo di arrestare la traccia MSVC. |
| `RESULT_CODE_FAILURE_STOP_SYSTEM_TRACE` | 20 (0x00000014) | Si è verificato un errore durante il tentativo di avviare la traccia di sistema. |
| `RESULT_CODE_FAILURE_SESSION_DIRECTORY_RESOLUTION` | 21 (0x00000015) | Traccia arrestata, ma non è possibile trovare la directory temporanea della sessione di traccia. |
| `RESULT_CODE_FAILURE_MSVC_TRACE_FILE_NOT_FOUND` | 22 (0x00000016) | Impossibile trovare il file di traccia per la traccia MSVC da arrestare. |
| `RESULT_CODE_FAILURE_MERGE_TRACES` | 23 (0x00000017) | Si è verificato un errore durante l'Unione delle tracce tramite il controllo Trace del kernel. |
| `RESULT_CODE_FAILURE_UNKNOWN_ERROR` | 24 (0x00000018) | Si è verificato un errore sconosciuto. |

::: moniker-end
