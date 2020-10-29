---
title: Enumerazione FILE_TYPE_CODE
description: Informazioni di riferimento sull'enumerazione FILE_TYPE_CODE per C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FILE_TYPE_CODE
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ddd625829e94786c0daddf0e78b914e225b2ecfb
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921023"
---
# <a name="file_type_code-enum"></a>Enumerazione FILE_TYPE_CODE

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

L' `FILE_TYPE_CODE` enumerazione descrive il tipo di un file.

## <a name="members"></a>Members

| Nome | valore | Descrizione |
|--|--|--|
| `FILE_TYPE_CODE_OTHER` | 0 (0x00000000) | Tipo di file non elencato in questa enumerazione. |
| `FILE_TYPE_CODE_OBJ` | 1 (0x00000001) | Un file oggetto ( \* . obj). |
| `FILE_TYPE_CODE_EXECUTABLE_IMAGE` | 2 (0x00000002) | File eseguibile (con estensione \* exe) o dll (con estensione \* dll). |
| `FILE_TYPE_CODE_LIB` | 3 (0x00000003) | Un file di libreria statica (*. lib). |
| `FILE_TYPE_CODE_IMP_LIB` | 4 (0x00000004) | Una libreria di importazione (*. lib) |
| `FILE_TYPE_CODE_EXP` | 5 (0x00000005) | Un file di esportazione (*. exp). |

## <a name="remarks"></a>Osservazioni

::: moniker-end
