---
title: "Errore del compilatore C2695 | Microsoft Docs"
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
  - "C2695"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2695"
ms.assetid: 3f6f2091-c38b-40ea-ab6c-f1846f5702d7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2695
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione1': la funzione virtual in override differisce da 'funzione2' solo per la convenzione di chiamata  
  
 La firma di una funzione in una classe derivata non può eseguire l'override di una funzione in una classe base e modificare la convenzione di chiamata.  
  
 Il seguente codice di esempio genera l'errore C2695:  
  
```  
// C2695.cpp  
class C {  
   virtual void __fastcall func();  
};  
  
class D : public C {  
   virtual void __clrcall func();   // C2695  
};  
```