---
title: Errore del compilatore C2092
ms.date: 11/04/2016
f1_keywords:
- C2092
helpviewer_keywords:
- C2092
ms.assetid: 037e44ae-16c8-489a-a512-dcdf7f7795a6
ms.openlocfilehash: d3d0b0e62fbc5f8ad90b3fee5fe39c6bdaba7c2e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62376009"
---
# <a name="compiler-error-c2092"></a>Errore del compilatore C2092

TYP prvku pole 'nome della matrice' non può essere (funzione)

Le matrici di funzioni non sono consentite. Usare una matrice di puntatori a funzioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2092:

```
// C2092.cpp
typedef void (F) ();
typedef F AT[10];   // C2092
```

## <a name="example"></a>Esempio

Possibile soluzione:

```
// C2092b.cpp
// compile with: /c
typedef void (F) ();
typedef F * AT[10];
```