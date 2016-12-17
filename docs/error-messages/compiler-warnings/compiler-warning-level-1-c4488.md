---
title: "Avviso del compilatore (livello 1) C4488 | Microsoft Docs"
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
  - "C4488"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4488"
ms.assetid: 55625e46-ddb5-4c7c-99c7-cd4aa9f879bd
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4488
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': richiede la parola chiave 'parola chiave' per implementare il metodo di interfaccia 'metodo\_interfaccia'  
  
 Le classi devono implementare tutti i membri di un'interfaccia da cui eredita in modo diretto.  Un membro implementato deve avere accessibilità pubblica ed essere contrassegnato come virtual.  
  
## Esempio  
 L'errore C4488 può verificarsi se un membro implementato non è pubblico.  Nell'esempio seguente viene generato l'errore C4488:  
  
```  
// C4488.cpp  
// compile with: /clr /c /W1 /WX  
interface struct MyI {  
   void f1();  
};  
  
// implemented member not public  
ref class B : MyI { virtual void f1() {} };  // C4488  
  
// OK  
ref class C : MyI {  
public:  
   virtual void f1() {}  
};  
```  
  
## Esempio  
 L'errore C4488 può verificarsi se un membro implementato non è contrassegnato come virtual.  Nell'esempio seguente viene generato l'errore C4488:  
  
```  
// C4488_b.cpp  
// compile with: /clr /c /W1 /WX  
interface struct MyI {  
   void f1();  
};  
  
ref struct B : MyI { void f1() {} };   // C4488  
ref struct C : MyI { virtual void f1() {} };   // OK  
```