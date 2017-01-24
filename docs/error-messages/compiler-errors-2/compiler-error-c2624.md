---
title: "Errore del compilatore C2624 | Microsoft Docs"
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
  - "C2624"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2624"
ms.assetid: 32f2ec15-a7cd-4049-a64b-131746d3152b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2624
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le classi locali non possono essere utilizzate per dichiarare variabili 'extern'  
  
 Una struttura o classe locale non può essere utilizzata per dichiarare variabili `extern`.  
  
 Il seguente codice di esempio genera l'errore C2624:  
  
```  
// C2624.cpp  
int main() {  
   struct C {};  
   extern C ac;   // C2624  
}  
```