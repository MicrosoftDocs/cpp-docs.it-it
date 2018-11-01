---
title: Avviso del compilatore (livello 1) C4727
ms.date: 11/04/2016
f1_keywords:
- C4727
helpviewer_keywords:
- C4727
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
ms.openlocfilehash: be1a248fc2709706e137b543344966735c19064e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490571"
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