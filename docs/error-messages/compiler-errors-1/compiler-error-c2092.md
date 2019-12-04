---
title: Errore del compilatore C2092
ms.date: 11/04/2016
f1_keywords:
- C2092
helpviewer_keywords:
- C2092
ms.assetid: 037e44ae-16c8-489a-a512-dcdf7f7795a6
ms.openlocfilehash: b530663cae2292ebeab1b871e495e9a45e4633cf
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754667"
---
# <a name="compiler-error-c2092"></a>Errore del compilatore C2092

il tipo di elemento di matrice ' nome matrice ' non può essere una funzione

Non sono consentite matrici di funzioni. Usare una matrice di puntatori a funzioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2092:

```cpp
// C2092.cpp
typedef void (F) ();
typedef F AT[10];   // C2092
```

## <a name="example"></a>Esempio

Possibile soluzione:

```cpp
// C2092b.cpp
// compile with: /c
typedef void (F) ();
typedef F * AT[10];
```
