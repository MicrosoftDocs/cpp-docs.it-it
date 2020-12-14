---
description: 'Altre informazioni su: errore del compilatore C2768'
title: Errore del compilatore C2768
ms.date: 11/04/2016
f1_keywords:
- C2768
helpviewer_keywords:
- C2768
ms.assetid: a7f6047a-6a80-4737-ad5c-c12868639fb5
ms.openlocfilehash: 0911153b9b89996631433d8a19bde9d19fc5f6b3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239467"
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
