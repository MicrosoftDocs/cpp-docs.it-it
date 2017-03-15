---
title: "Errore del compilatore C2449 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2449"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2449"
ms.assetid: 544bf0b6-daa0-40e8-9f21-8e583d472a2d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2449
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

trovato '{' in ambito file. Si è omesso di specificare un'intestazione di funzione?  
  
 È presente una parentesi graffa aperta in ambito file.  
  
 Questo errore può essere causato dalla presenza di un punto e virgola tra un'intestazione di funzione e la parentesi graffa aperta della definizione di funzione.  
  
 Il seguente codice di esempio genera l'errore C2499:  
  
```  
// C2449.c  
// compile with: /c  
void __stdcall func(void) {}   // OK  
void __stdcall func(void);  // extra semicolon on this line  
{                         // C2449 detected here  
```