---
title: Errore del compilatore C2593 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2593
dev_langs: C++
helpviewer_keywords: C2593
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 675c929995e7b0c4043586cf081343136d8e7a5e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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