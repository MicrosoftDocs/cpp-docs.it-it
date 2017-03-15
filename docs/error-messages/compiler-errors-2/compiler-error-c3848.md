---
title: "Errore del compilatore C3848 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3848"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3848"
ms.assetid: 32d3ccef-01ec-4f8b-bbff-fb9b1a76b4c4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3848
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

espressione con tipo 'tipo' deve perdere alcuni qualificatori const\-volatile per poter chiamare 'funzione'  
  
 Una variabile con un tipo const\-volatile specificato può chiamare solo funzioni membro definite con qualificazioni const\-volatile uguali o maggiori.  
  
 Negli esempi seguenti viene generato l'errore C3848:  
  
```  
// C3848.cpp  
void glbFunc1()  
{  
}  
  
typedef void (* pFunc1)();  
  
struct S3  
{  
   operator pFunc1() // const  
   {  
      return &glbFunc1;  
   }  
};  
  
int main()  
{  
   const S3 s3;  
   s3();   // C3848, uncomment const qualifier  
}  
```