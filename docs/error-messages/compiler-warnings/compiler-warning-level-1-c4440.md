---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4440'
title: Avviso del compilatore (livello 1) C4440
ms.date: 11/04/2016
f1_keywords:
- C4440
helpviewer_keywords:
- C4440
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
ms.openlocfilehash: 9e0a126ea1461e0b98bcef5117b893ea232fe262
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311045"
---
# <a name="compiler-warning-level-1-c4440"></a>Avviso del compilatore (livello 1) C4440

ridefinizione della convenzione di chiamata da' calling_convention1' a' calling_convention2' ignorata

Il tentativo di modificare la convenzione di chiamata è stato ignorato.

L'esempio seguente genera l'C4440:

```cpp
// C4440.cpp
// compile with: /W1 /LD /clr
typedef void __clrcall F();
typedef F __cdecl *PFV;   // C4440
```
