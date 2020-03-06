---
title: Enumerazione FILE_TYPE_CODE
description: Informazioni C++ di riferimento sull'enum di build Insights SDK FILE_TYPE_CODE.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FILE_TYPE_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: e64f9315c62ce40c436032d6c96fdfa725847a7f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333720"
---
# <a name="file_type_code-enum"></a>Enumerazione FILE_TYPE_CODE

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Il `FILE_TYPE_CODE` enum descrive il tipo di un file.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `FILE_TYPE_CODE_OTHER` | 0 (0x00000000) | Tipo di file non elencato in questa enumerazione. |
| `FILE_TYPE_CODE_OBJ` | 1 (0x00000001) | File oggetto (\*. obj). |
| `FILE_TYPE_CODE_EXECUTABLE_IMAGE` | 2 (0x00000002) | File eseguibile (\*. exe) o DLL (\*. dll). |
| `FILE_TYPE_CODE_LIB` | 3 (0x00000003) | Un file di libreria statica (*. lib). |
| `FILE_TYPE_CODE_IMP_LIB` | 4 (0x00000004) | Una libreria di importazione (*. lib) |
| `FILE_TYPE_CODE_EXP` | 5 (0x00000005) | Un file di esportazione (*. exp). |

## <a name="remarks"></a>Osservazioni

::: moniker-end
