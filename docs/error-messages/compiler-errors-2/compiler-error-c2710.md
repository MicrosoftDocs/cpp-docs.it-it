---
title: "Errore del compilatore C2710 | Microsoft Docs"
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
  - "C2710"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2710"
ms.assetid: a2a6bb5b-86ad-4a6c-acd0-e2bef8464e0e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2710
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'costrutto': è possibile applicare '\_\_declspec \(modificatore\)' solo a una funzione che restituisce un puntatore  
  
 L'unico costrutto al quale è possibile applicare `modifier` è una funzione il cui valore restituito è un puntatore.  
  
 Il seguente codice di esempio genera l'errore C2710:  
  
```  
// C2710.cpp  
__declspec(restrict) void f();   // C2710  
// try the following line instead  
__declspec(restrict) int * g();  
```