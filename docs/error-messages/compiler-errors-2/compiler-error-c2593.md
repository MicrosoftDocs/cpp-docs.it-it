---
title: "Errore del compilatore C2593 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2593"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2593"
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2593
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator identificatore' ambiguo  
  
 Sono stati definiti più operatori possibili per un operatore di overload.  
  
 È possibile correggere l'errore utilizzando un cast esplicito su uno o più parametri effettivi.  
  
 Il seguente codice di esempio genera l'errore C2593:  
  
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
  
 Questo errore può essere causato dalla serializzazione di una variabile a virgola mobile tramite un oggetto `CArchive`.  L'operatore `<<` viene identificato come ambiguo.  I soli tipi C\+\+ primitivi che `CArchive` può serializzare sono i tipi a dimensione fissa `BYTE`, `WORD`, `DWORD` e `LONG`.  Per la serializzazione di ogni tipo integer, è necessario eseguirne il cast su uno di questi tipi.  I tipi a virgola mobile devono essere archiviati utilizzando la funzione membro `CArchive::Write()`.  
  
 Nell'esempio seguente viene illustrato come archiviare una variabile a virgola mobile \(`f`\) nell'archivio `ar`:  
  
```  
ar.Write(&f, sizeof( float ));  
```