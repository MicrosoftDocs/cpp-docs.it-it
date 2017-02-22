---
title: "Errore del compilatore C2027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2027"
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2027
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzo di tipo non definito 'tipo'  
  
 Non è possibile utilizzare un tipo finché non viene definito.  Per correggere l'errore, accertarsi che la definizione del tipo sia completa prima di farvi riferimento.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2027:  
  
```  
// C2027.cpp  
class C;  
class D {  
public:  
   void func() {  
   }  
};  
  
int main() {  
   C *pC;  
   pC->func();   // C2027  
  
   D *pD;  
   pD->func();  
}  
```  
  
## Esempio  
 È possibile dichiarare un puntatore a un tipo dichiarato, purché si tratti di un tipo non definito.  Visual C\+\+ non consente tuttavia riferimenti a tipi non definiti.  
  
 Nell'esempio seguente viene generato l'errore C2027:  
  
```  
// C2027_b.cpp  
class A;  
A& CreateA();  
  
class B;  
B* CreateB();  
  
int main() {  
   CreateA();   // C2027  
   CreateB();   // OK  
}  
```