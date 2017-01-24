---
title: "Errore del compilatore C2733 | Microsoft Docs"
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
  - "C2733"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2733"
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2733
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

secondo collegamento C della funzione in overload 'funzione' non consentito  
  
 Sono state dichiarate più funzioni in overload con il collegamento C.  Quando si utilizza il collegamento C, solo un formato di funzione specificata può essere esterno.  Poiché le funzioni in overload hanno lo stesso nome non decorato, non possono essere utilizzate con programmi C.  
  
 Il seguente codice di esempio genera l'errore C2733:  
  
```  
// C2733.cpp  
extern "C" {  
   void F1(int);  
}  
  
extern "C" {  
   void F1();   // C2733  
   // try the following line instead  
   // void F2();  
}  
```