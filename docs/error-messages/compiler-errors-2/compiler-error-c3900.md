---
title: "Errore del compilatore C3900 | Microsoft Docs"
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
  - "C3900"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3900"
ms.assetid: a94cc561-8fa8-4344-9e01-e81ff462fae5
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3900
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': non consentito nell'ambito corrente  
  
 I blocchi di proprietà possono contenere solo dichiarazioni di funzione e definizioni di funzione inline.  Gli unici membri consentiti nei blocchi di proprietà sono le funzioni.  Non sono ammessi operatori, definizioni di tipo né funzioni friend.  Per ulteriori informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
 Le definizioni di evento possono contenere solo metodi e funzioni di accesso.  
  
 Il seguente codice di esempio genera l'errore C3900:  
  
```  
// C3900.cpp  
// compile with: /clr  
ref class X {  
   property int P {  
      void set(int);   // OK  
      int i;   // C3900 variable declaration  
   };  
};  
```  
  
 Il seguente codice di esempio genera l'errore C3900:  
  
```  
// C3900b.cpp  
// compile with: /clr  
using namespace System;  
delegate void H();  
ref class X {  
   event H^ E {  
      int m;   // C3900  
  
      // OK  
      void Test() {}  
  
      void add( H^ h ) {}  
      void remove( H^ h ) {}  
      void raise( ) {}  
   }  
};  
```