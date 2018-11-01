---
title: Errore del compilatore C2756
ms.date: 11/04/2016
f1_keywords:
- C2756
helpviewer_keywords:
- C2756
ms.assetid: 42eb988d-4043-4dee-8fd4-596949f69a55
ms.openlocfilehash: ccbbb7875fdae48fd00f87f9a63f3764c143daae
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442835"
---
# <a name="compiler-error-c2756"></a>Errore del compilatore C2756

'template type': argomenti di modello predefiniti non consentiti in una specializzazione parziale

Il modello per una specializzazione parziale non può contenere un argomento predefinito.

L'esempio seguente genera l'errore C2756 e mostra come risolverlo:

```
// C2756.cpp
template <class T>
struct S {};

template <class T=int>
// try the following line instead
// template <class T>
struct S<T*> {};   // C2756
```