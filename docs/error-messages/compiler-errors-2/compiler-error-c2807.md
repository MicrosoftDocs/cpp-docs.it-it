---
title: "Errore del compilatore C2807 | Microsoft Docs"
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
  - "C2807"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2807"
ms.assetid: bd7a207a-f379-4de6-8ee8-c7cab78b3480
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2807
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il secondo parametro della forma suffissa di operator 'operatore' deve essere 'int'  
  
 Il secondo parametro di un operatore suffisso è di tipo errato.  
  
 Il seguente codice di esempio genera l'errore C2807:  
  
```  
// C2807.cpp  
// compile with: /c  
class X {  
public:  
   X operator++ ( X );   // C2807 nonvoid parameter  
   X operator++ ( int );   // OK, int parameter  
};  
```