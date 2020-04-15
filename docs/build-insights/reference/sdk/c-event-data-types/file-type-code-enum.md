---
title: enum FILE_TYPE_CODE
description: L'SDK di Build Insights FILE_TYPE_CODE riferimento all'enumerazione.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FILE_TYPE_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: dea603a072d7b2f472112a75b2e9ccded78399a9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325557"
---
# <a name="file_type_code-enum"></a>enum FILE_TYPE_CODE

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

L'enum `FILE_TYPE_CODE` descrive il tipo di un file.

## <a name="members"></a>Membri

| Nome | valore | Descrizione |
|--|--|--|
| `FILE_TYPE_CODE_OTHER` | 0 (0x00000000) | Un tipo di file non elencato in questa enumerazione. |
| `FILE_TYPE_CODE_OBJ` | 1 (0x00000001) | File oggetto\*(obj). |
| `FILE_TYPE_CODE_EXECUTABLE_IMAGE` | 2 (0x00000002) | File eseguibile (con\*estensione\*exe) o DLL (DLL). |
| `FILE_TYPE_CODE_LIB` | 3 (0x00000003) | Un file di libreria statica (con estensione lib). |
| `FILE_TYPE_CODE_IMP_LIB` | 4 (0x00000004) | Una libreria di importazione (.lib) |
| `FILE_TYPE_CODE_EXP` | 5 (0x00000005) | Un file di esportazione (con estensione exp). |

## <a name="remarks"></a>Osservazioni

::: moniker-end
