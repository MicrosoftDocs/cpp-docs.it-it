---
title: "Errore del compilatore C2458 | Microsoft Docs"
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
  - "C2458"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2458"
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2458
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': ridefinizione all'interno di una definizione  
  
 Una classe, una struttura, un'unione o un'enumerazione viene ridefinita nella propria dichiarazione.  
  
 Il seguente codice di esempio genera l'errore C2458:  
  
```  
// C2458.cpp  
class C {  
   enum i { C };   // C2458  
};  
```