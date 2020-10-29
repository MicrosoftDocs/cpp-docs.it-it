---
title: Avviso del compilatore (livello 1) C4727
ms.date: 08/19/2019
f1_keywords:
- C4727
helpviewer_keywords:
- C4727
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
ms.openlocfilehash: e1eeb7e466e325772d6a1522e77983fd3de04293
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923955"
---
# <a name="compiler-warning-level-1-c4727"></a>Avviso del compilatore (livello 1) C4727

"PCH denominato pch_file con lo stesso timestamp trovato in obj_file_1 e obj_file_2.  Uso del primo PCH.

> [!NOTE]
> In Visual Studio 2017 e versioni precedenti, l'intestazione precompilata è denominata *stdafx. h* per impostazione predefinita e in visual studio 2019 e versioni successive viene chiamato *PCH. h* per impostazione predefinita.

C4727 si verifica quando si compila più moduli con **/YC** e dove il compilatore è stato in grado di contrassegnare tutti i file con estensione obj con lo stesso timestamp. pch.

Per risolvere, compilare un file di origine con **/Yc/c** (crea PCH) e gli altri vengono compilati separatamente con **/Yu/c** (USA PCH), quindi collegarli insieme.

Quindi, se sono state effettuate le operazioni seguenti e viene generato C4727:

::: moniker range="<=msvc-150"

**CL/CLR/GL a. cpp b. cpp c. cpp/Ycstdafx.h**

Verranno invece eseguite le operazioni seguenti:

**CL/CLR/GL a. cpp/Ycstdafx.h/c**

**CL/CLR/GL b. cpp c. cpp/Yustdafx.h/link a. obj**

::: moniker-end

::: moniker range=">=msvc-160"

**CL/CLR/GL a. cpp b. cpp c. cpp/YC%s**

Verranno invece eseguite le operazioni seguenti:

**CL/CLR/GL a. cpp/YC%s/c**

**CL/CLR/GL b. cpp c. cpp/Yupch.h/link a. obj**

::: moniker-end

Per ulteriori informazioni, vedere

- [/YC (crea il file di intestazione precompilata)](../../build/reference/yc-create-precompiled-header-file.md)

- [/Yu (USA il file di intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md)
