---
description: 'Altre informazioni su: errore del compilatore C3353'
title: Errore del compilatore C3353
ms.date: 11/04/2016
f1_keywords:
- C3353
helpviewer_keywords:
- C3353
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
ms.openlocfilehash: 50ff7a6b104f3e16ce17f1398da49a146c0d41a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335045"
---
# <a name="compiler-error-c3353"></a>Errore del compilatore C3353

'delegate': un delegato può essere creato solo da una funzione globale o da una funzione membro di un tipo gestito o WinRT

I delegati, dichiarati con la parola chiave [delegate](../../extensions/delegate-cpp-component-extensions.md) , possono essere dichiarati solo in ambito globale.

L'esempio seguente genera l'errore C3353:

```cpp
// C3353.cpp
// compile with: /clr
delegate int f;   // C3353
```
