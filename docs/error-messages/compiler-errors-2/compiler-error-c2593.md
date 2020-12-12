---
description: 'Altre informazioni su: errore del compilatore C2593'
title: Errore del compilatore C2593
ms.date: 11/04/2016
f1_keywords:
- C2593
helpviewer_keywords:
- C2593
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
ms.openlocfilehash: 849cd79b1d469d957cf1bde499ce66bd54a64074
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120165"
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

Questo errore può essere causato dalla serializzazione di una variabile a virgola mobile con un `CArchive` oggetto. Il compilatore identifica l' `<<` operatore come ambiguo. Gli unici tipi C++ primitivi che `CArchive` possono serializzare sono i tipi a dimensione fissa `BYTE` ,, `WORD` `DWORD` e `LONG` . Per la serializzazione è necessario eseguire il cast di tutti i tipi Integer a uno di questi tipi. I tipi a virgola mobile devono essere archiviati usando la `CArchive::Write()` funzione membro.

Nell'esempio seguente viene illustrato come archiviare una variabile a virgola mobile ( `f` ) da archiviare `ar` :

```
ar.Write(&f, sizeof( float ));
```
