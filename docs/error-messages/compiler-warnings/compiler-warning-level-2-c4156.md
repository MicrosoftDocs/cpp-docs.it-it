---
title: Compilatore avviso (livello 2) C4156
ms.date: 11/04/2016
f1_keywords:
- C4156
helpviewer_keywords:
- C4156
ms.assetid: 9adf3acb-c0fe-42a8-a4db-5822b1493f77
ms.openlocfilehash: 7d9a4ed09f026267e2c0f37fbbe4550ecd668dfc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62350465"
---
# <a name="compiler-warning-level-2-c4156"></a>Compilatore avviso (livello 2) C4156

eliminazione di un'espressione di matrice senza utilizzare la forma di matrice di 'delete'. forma di matrice sostituita

Non-matrice costituiti **eliminare** non è possibile eliminare una matrice. Il compilatore tradotto **eliminare** forma per le matrici.

Questo avviso viene visualizzato solo in estensioni Microsoft (/Ze).

## <a name="example"></a>Esempio

```
// C4156.cpp
// compile with: /W2
int main()
{
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];
   delete array; // C4156, changed by compiler to "delete [] array;"
}
```