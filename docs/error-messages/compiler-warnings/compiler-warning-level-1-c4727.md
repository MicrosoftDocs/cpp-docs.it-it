---
title: Compilatore avviso (livello 1) C4727 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4727
dev_langs:
- C++
helpviewer_keywords:
- C4727
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b9d169ec9d08f06831370fa68c4049076dbfc582
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053739"
---
# <a name="compiler-warning-level-1-c4727"></a>Avviso del compilatore (livello 1) C4727

"PCH denominato file_pch con lo stesso timestamp trovato in file_obj_1 e file_obj_2.  Tramite il primo PCH.

Durante la compilazione di più moduli con avviso C4727 **/Yc**, e in cui il compilatore non è in grado di contrassegnare tutti i file con estensione obj con lo stesso timestamp di PCH.

Per risolvere, compilare un file di origine con **/c /Yc** (Crea file pch), e compilare gli altri separatamente con **/Yu/c** (Usa pch), quindi collegarli tra loro.

Pertanto, se è stato eseguito quanto segue e genera C4727:

**cl /clr /GL a.cpp cpp b. cpp c.cpp /Ycstdafx.h**

È necessario effettuare le seguenti invece:

**cl /clr /GL a.cpp /Ycstdafx.h /c**

**cl /clr /GL cpp b. cpp c.cpp /Yustdafx.h /link. obj**

Per altre informazioni, vedere

- [/Yc (crea il file di intestazione precompilato)](../../build/reference/yc-create-precompiled-header-file.md)

- [/Yu (usa il file di intestazione precompilato)](../../build/reference/yu-use-precompiled-header-file.md)