---
title: "Avviso del compilatore (livello 4) C4239 | Microsoft Docs"
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
  - "C4239"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4239"
ms.assetid: a23dc16a-649e-4870-9a24-275de1584fcd
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4239
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: 'token'. Conversione da 'tipo' a 'tipo'  
  
 Questa conversione di tipo non è consentita da C\+\+ standard, ma è consentita qui come estensione.  Questo avviso è sempre seguito da almeno una riga di spiegazione che descrive la regola di linguaggio violata.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4239:  
  
```  
// C4239.cpp  
// compile with: /W4 /c  
struct C {  
   C() {}  
};  
  
void func(void) {  
   C & rC = C();   // C4239  
   const C & rC2 = C();   // OK  
   rC2;  
}  
```  
  
## Esempio  
 La conversione da tipo integrale a tipo enum non è consentita in modo esplicito.  
  
 Nell'esempio seguente viene generato l'errore C4239:  
  
```  
// C4239b.cpp  
// compile with: /W4 /c  
enum E { value };   
struct S {   
   E e : 2;   
} s = { 5 };   // C4239   
// try the following line instead  
// } s = { (E)5 };  
```