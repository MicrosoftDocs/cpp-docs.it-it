---
title: Avviso del compilatore (livello 2) C4156
ms.date: 11/04/2016
f1_keywords:
- C4156
helpviewer_keywords:
- C4156
ms.assetid: 9adf3acb-c0fe-42a8-a4db-5822b1493f77
ms.openlocfilehash: 95605aa29e1faba449e19dcf20e6895d31cc5874
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052136"
---
# <a name="compiler-warning-level-2-c4156"></a>Avviso del compilatore (livello 2) C4156

eliminazione di un'espressione di matrice senza utilizzare il formato di matrice ' Delete '; form di matrice sostituito

Il formato non di matrice di **Delete** non può eliminare una matrice. Il compilatore ha convertito l' **eliminazione** nel formato della matrice.

Questo avviso viene visualizzato solo in Microsoft Extensions (/Ze).

## <a name="example"></a>Esempio

```cpp
// C4156.cpp
// compile with: /W2
int main()
{
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];
   delete array; // C4156, changed by compiler to "delete [] array;"
}
```