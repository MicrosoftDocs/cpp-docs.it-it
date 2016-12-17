---
title: "Avviso del compilatore (livello 1) C4716 | Microsoft Docs"
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
  - "C4716"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4716"
ms.assetid: d95ecfe5-870f-461f-a746-7913af98414b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4716
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione' deve restituire un valore  
  
 La funzione specificata non ha restituito un valore.  
  
 Solo le funzioni con un tipo restituito void possono utilizzare il comando return senza un valore restituito.  
  
 Quando si chiama questa funzione verrà restituito un valore non definito.  
  
 Questo avviso viene automaticamente trasformato in errore.  Per modificare tale comportamento, utilizzare [\#pragma warning](../../preprocessor/warning.md).  
  
 Il seguente codice di esempio genera l'errore C4716:  
  
```  
// C4716.cpp  
// compile with: /c /W1  
// C4716 expected  
#pragma warning(default:4716)  
int test() {  
   // uncomment the following line to resolve  
   // return 0;  
}  
```