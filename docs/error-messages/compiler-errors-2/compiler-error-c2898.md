---
title: "Errore del compilatore C2898 | Microsoft Docs"
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
  - "C2898"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2898"
ms.assetid: 68466e11-2541-4f6b-b772-13a642f30dfb
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2898
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'dichiarazione': i modelli di funzioni membro non possono essere virtuali  
  
 Il seguente codice di esempio genera l'errore C2898:  
  
```  
// C2898.cpp  
// compile with: /c  
class X {  
public:  
   template<typename T> virtual void f(T t) {}   // C2898  
};  
```