---
title: Errore del compilatore C2593 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2593
dev_langs:
- C++
helpviewer_keywords:
- C2593
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: cb0b752259503f7e14cd78298e487f5304e13a0d
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2593"></a>Errore del compilatore C2593
'operatore identifier' è ambiguo  
  
 Esistono più possibili è definito per un operatore di overload.  
  
 Questo errore può essere fissato se si utilizza un cast esplicito in uno o più parametri effettivi.  
  
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
  
 Questo errore può essere causato dalla serializzazione di una variabile a virgola mobile utilizzando una `CArchive` oggetto. Il compilatore identifica il `<<` operatore venga contrassegnata come ambigua. I soli tipi C++ primitivi che `CArchive` può serializzare i tipi di dimensioni fisse `BYTE`, `WORD`, `DWORD`, e `LONG`. Tutti i tipi integer devono essere impostati su uno di questi tipi per la serializzazione. Tipi a virgola mobile devono essere archiviati utilizzando il `CArchive::Write()` funzione membro.  
  
 Nell'esempio seguente viene illustrato come archiviare una variabile a virgola mobile (`f`) archivio `ar`:  
  
```  
ar.Write(&f, sizeof( float ));  
```
