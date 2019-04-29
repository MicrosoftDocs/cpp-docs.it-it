---
title: Errore del compilatore C2593
ms.date: 11/04/2016
f1_keywords:
- C2593
helpviewer_keywords:
- C2593
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
ms.openlocfilehash: c358553a36104b5c389076f5a5ce02f94f85e85a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386915"
---
# <a name="compiler-error-c2593"></a>Errore del compilatore C2593

'operatore identifier' è ambiguo

Più di un operatore possibili è definito per un operatore di overload.

Questo errore può essere risolto se si usa un cast esplicito in una o più parametri effettivi.

L'esempio seguente genera l'errore C2593:

```
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

Questo errore può essere causato dalla serializzazione di una variabile a virgola mobile utilizzando una `CArchive` oggetto. Il compilatore identifica la `<<` operatore come ambigua. Tipi di C++ solo primitivi `CArchive` può essere serializzato sono i tipi a dimensione fissa `BYTE`, `WORD`, `DWORD`, e `LONG`. Tutti i tipi integer devono essere impostati su uno di questi tipi per la serializzazione. Tipi a virgola mobile devono essere archiviati utilizzando il `CArchive::Write()` funzione membro.

Nell'esempio seguente viene illustrato come archiviare una variabile a virgola mobile (`f`) all'archivio `ar`:

```
ar.Write(&f, sizeof( float ));
```