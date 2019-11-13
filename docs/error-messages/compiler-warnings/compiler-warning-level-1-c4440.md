---
title: Avviso del compilatore (livello 1) C4440
ms.date: 11/04/2016
f1_keywords:
- C4440
helpviewer_keywords:
- C4440
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
ms.openlocfilehash: a2d4bf160cbbabacc1dc3d747a8e4ddb37c6ad46
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966038"
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