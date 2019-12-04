---
title: Errore del compilatore C2593
ms.date: 11/04/2016
f1_keywords:
- C2593
helpviewer_keywords:
- C2593
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
ms.openlocfilehash: 2a385e35376ddce528678980705595bfb98aca95
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759347"
---
# <a name="compiler-error-c2593"></a>Errore del compilatore C2593

' operator Identifier ' è ambiguo

È possibile definire più di un operatore per un operatore di overload.

Questo errore può essere corretto se si usa un cast esplicito su uno o più parametri effettivi.

L'esempio seguente genera l'C2593:

```cpp
// C2593.cpp
struct A {};
struct B : A {};
struct X {};
struct D : B, X {};
void operator+( X, X );
void operator+( A, B );
D d;

int main() {
   d +  d;         // C2593, D has an A, B, and X
   (X)d + (X)d;    // OK, uses operator+( X, X )
}
```

Questo errore può essere causato dalla serializzazione di una variabile a virgola mobile mediante un oggetto `CArchive`. Il compilatore identifica l'operatore `<<` come ambiguo. Gli unici tipi C++ primitivi che `CArchive` possibile serializzare sono i tipi a dimensione fissa `BYTE`, `WORD`, `DWORD`e `LONG`. Per la serializzazione è necessario eseguire il cast di tutti i tipi Integer a uno di questi tipi. I tipi a virgola mobile devono essere archiviati usando la funzione membro `CArchive::Write()`.

Nell'esempio seguente viene illustrato come archiviare una variabile a virgola mobile (`f`) per archiviare `ar`:

```
ar.Write(&f, sizeof( float ));
```
