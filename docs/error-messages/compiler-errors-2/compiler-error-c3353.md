---
title: Errore del compilatore C3353
ms.date: 11/04/2016
f1_keywords:
- C3353
helpviewer_keywords:
- C3353
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
ms.openlocfilehash: c38642d7abd4f2fd50792c548c9a5521b2da10ad
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58776141"
---
# <a name="compiler-error-c3353"></a>Errore del compilatore C3353

'delegate': un delegato può essere creato solo da una funzione globale o da una funzione membro di un tipo gestito o WinRT

I delegati, dichiarati con la [delegare](../../extensions/delegate-cpp-component-extensions.md) (parola chiave), possono essere dichiarati solo in ambito globale.

L'esempio seguente genera l'errore C3353:

```
// C3353.cpp
// compile with: /clr
delegate int f;   // C3353
```