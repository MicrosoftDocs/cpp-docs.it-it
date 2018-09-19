---
title: Errore del compilatore C3222 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3222
dev_langs:
- C++
helpviewer_keywords:
- C3222
ms.assetid: 5624bde8-2fd0-4b8b-92ce-5dfbaf91cf93
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 30231f74b379cd9d69806fbd4b49ba0cb55ad871
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46048318"
---
# <a name="compiler-error-c3222"></a>Errore del compilatore C3222

'parameter': impossibile dichiarare argomenti predefiniti per funzioni membro di un tipo gestito o WinRT o funzioni generiche

Non è consentito dichiarare un parametro di metodo con un argomento predefinito. Un overload del metodo è un modo per ovviare al problema, vale a dire, definire un metodo con lo stesso nome senza parametri e quindi inizializzare la variabile nel corpo del metodo.

L'esempio seguente genera l'errore C3222:

```
// C3222_2.cpp
// compile with: /clr
public ref class G {
   void f( int n = 0 );   // C3222
};
```
