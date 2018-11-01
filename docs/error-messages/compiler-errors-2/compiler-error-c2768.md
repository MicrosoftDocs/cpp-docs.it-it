---
title: Errore del compilatore C2768
ms.date: 11/04/2016
f1_keywords:
- C2768
helpviewer_keywords:
- C2768
ms.assetid: a7f6047a-6a80-4737-ad5c-c12868639fb5
ms.openlocfilehash: 9c0fb8fb0a98830aaf061ba980e7bdd7903f25e1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50626174"
---
# <a name="compiler-error-c2768"></a>Errore del compilatore C2768

'function': utilizzo non valido di argomenti di modello espliciti

Il compilatore non è riuscito a determinare se una definizione di funzione doveva per essere una specializzazione esplicita di un modello di funzione o se la definizione di funzione doveva per essere per una nuova funzione.

Questo errore è stato introdotto in Visual Studio .NET 2003 come parte dei miglioramenti della conformità del compilatore.

L'esempio seguente genera l'errore C2768:

```
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