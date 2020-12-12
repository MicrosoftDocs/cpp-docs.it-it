---
description: 'Altre informazioni su: errore del compilatore C3222'
title: Errore del compilatore C3222
ms.date: 11/04/2016
f1_keywords:
- C3222
helpviewer_keywords:
- C3222
ms.assetid: 5624bde8-2fd0-4b8b-92ce-5dfbaf91cf93
ms.openlocfilehash: 77883b6bd9be034fff2a0bcf3babdb1489c9a937
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267716"
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
