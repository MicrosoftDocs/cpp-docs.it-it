---
title: "Errore del compilatore C2431 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2431"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2431"
ms.assetid: 88a5b648-c89f-47d1-a20e-63231ab4f0f7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2431
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

registro di indice non valido in 'identificatore'  
  
 Il registro ESP viene scalato o utilizzato come registro base e indice.  La codifica SIB per il processore x86 non consente tali operazioni.  
  
 Il seguente codice di esempio genera l'errore C2431:  
  
```  
// C2431.cpp  
// processor: x86  
int main() {  
   _asm mov ax, [ESI + 2*ESP]   // C2431  
   _asm mov ax, [esp + esp]   // C2431  
}  
```