---
title: "Avviso del compilatore C4867 | Microsoft Docs"
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
  - "C4867"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4867"
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4867
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': chiamata di funzione senza elenco di argomenti; utilizzare 'chiamata' per creare un puntatore al membro  
  
 Un puntatore a una funzione membro è stato inizializzato in modo errato.  
  
 Questo avviso può essere generato in seguito alle operazioni di conformità eseguite per Visual C\+\+ 2005: conformità avanzata puntatore a membro.  Il codice compilato con una versione precedente a Visual C\+\+ 2005 genererà l'errore C4867.  
  
 Questo avviso viene sempre generato come un errore.  Per disabilitarlo, utilizzare il pragma [warning](../../preprocessor/warning.md).  Per ulteriori informazioni sull'avviso C4867 e su MFC\/ATL, vedere [\_ATL\_ENABLE\_PTM\_WARNING](../Topic/_ATL_ENABLE_PTM_WARNING.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4867:  
  
```  
// C4867.cpp  
// compile with: /c  
class A {  
public:  
   void f(int) {}  
  
   typedef void (A::*TAmtd)(int);  
  
   struct B {  
      TAmtd p;  
   };  
  
   void g() {  
      B b = {f};   // C4867  
      B b2 = {&A::f};   // OK  
   }  
};  
```