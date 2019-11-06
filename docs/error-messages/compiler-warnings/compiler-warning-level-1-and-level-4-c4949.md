---
title: Avviso del compilatore (livello 1 e livello 4) C4949
ms.date: 11/04/2016
f1_keywords:
- C4949
helpviewer_keywords:
- C4949
ms.assetid: 34f45a05-c115-49cb-9f67-0bd4f0735d9b
ms.openlocfilehash: f2876813131271ebb2561f8ea7435bb96dc2ce17
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627406"
---
# <a name="compiler-warning-level-1-and-level-4-c4949"></a>Avviso del compilatore (livello 1 e livello 4) C4949

i pragma ' Managed ' è unmanaged ' sono significativi solo se compilati con '/CLR [: Option]'

Il compilatore ignora i pragma [gestiti](../../preprocessor/managed-unmanaged.md) e non gestiti se il codice sorgente non viene compilato con [/CLR](../../build/reference/clr-common-language-runtime-compilation.md). Si tratta di un avviso informativo.

L'esempio seguente genera l'C4949:

```cpp
// C4949.cpp
// compile with: /LD /W1
#pragma managed   // C4949
```

Quando **#pragma non gestito** viene usato senza **/CLR**, C4949 è un avviso di livello 4.

L'esempio seguente genera l'C4949:

```cpp
// C4949b.cpp
// compile with: /LD /W4
#pragma unmanaged   // C4949
```