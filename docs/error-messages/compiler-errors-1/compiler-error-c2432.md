---
title: "Errore del compilatore C2432 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2432"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2432"
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2432
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

riferimento non valido ai dati a 16 bit in 'identificatore'  
  
 Un registro a 16 bit viene utilizzato come registro base o indice.  I riferimenti ai dati a 16 bit non sono supportati dal compilatore. Il registro a 16 bit non può essere utilizzato come registro base o indice nella compilazione di codice a 32 bit.  
  
 Il seguente codice di esempio genera l'errore C2432:  
  
```  
// C2432.cpp  
// processor: x86  
int main() {  
   _asm mov eax, DWORD PTR [bx]   // C2432  
}  
```