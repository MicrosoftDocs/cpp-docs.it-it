---
title: "Errore del compilatore C2632 | Microsoft Docs"
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
  - "C2632"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2632"
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2632
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo1' non può essere seguito da 'tipo2'  
  
 Questo errore può essere causato dalla mancanza di codice tra due identificatori di tipo.  
  
 Il seguente codice di esempio genera l'errore C2632:  
  
```  
// C2632.cpp  
int float i;   // C2632  
```  
  
 Questo errore viene generato anche come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003.  `bool` è ora un tipo corretto.  Nelle precedenti versioni `bool` era un typedef e consentiva la creazione di identificatori.  
  
 Il seguente codice di esempio genera l'errore C2632:  
  
```  
// C2632_2.cpp  
// compile with: /LD  
void f(int bool);   // C2632  
```  
  
 Per risolvere il problema in modo che il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+, ridenominare l'identificatore.