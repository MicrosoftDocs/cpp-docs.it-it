---
title: Errore del compilatore C3222
ms.date: 11/04/2016
f1_keywords:
- C3222
helpviewer_keywords:
- C3222
ms.assetid: 5624bde8-2fd0-4b8b-92ce-5dfbaf91cf93
ms.openlocfilehash: 96a6b1b81d2d82328dcb4ceaca376f247f785c13
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737946"
---
# <a name="compiler-error-c3222"></a>Errore del compilatore C3222

'parameter': impossibile dichiarare argomenti predefiniti per funzioni membro di un tipo gestito o WinRT o funzioni generiche

Non è consentito dichiarare un parametro di metodo con un argomento predefinito. Un overload del metodo è un modo per ovviare al problema, vale a dire, definire un metodo con lo stesso nome senza parametri e quindi inizializzare la variabile nel corpo del metodo.

L'esempio seguente genera l'errore C3222:

```cpp
// C3222_2.cpp
// compile with: /clr
public ref class G {
   void f( int n = 0 );   // C3222
};
```
