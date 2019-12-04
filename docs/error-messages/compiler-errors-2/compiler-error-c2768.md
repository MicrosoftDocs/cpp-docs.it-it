---
title: Errore del compilatore C2768
ms.date: 11/04/2016
f1_keywords:
- C2768
helpviewer_keywords:
- C2768
ms.assetid: a7f6047a-6a80-4737-ad5c-c12868639fb5
ms.openlocfilehash: bcc801bb5802598e936d577f08729214bb7e13a1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759789"
---
# <a name="compiler-error-c2768"></a>Errore del compilatore C2768

' Function ': utilizzo non valido di argomenti di modello espliciti

Il compilatore non è riuscito a determinare se una definizione di funzione doveva essere una specializzazione esplicita di un modello di funzione o se la definizione di funzione doveva essere per una nuova funzione.

Questo errore è stato introdotto in Visual Studio .NET 2003, come parte dei miglioramenti apportati alla conformità del compilatore.

L'esempio seguente genera l'C2768:

```cpp
// C2768.cpp
template<typename T>
void f(T) {}

void f<int>(int) {}   // C2768

// an explicit specialization
template<>
void f<int>(int) {}

// global nontemplate function overload
void f(int) {}
```
