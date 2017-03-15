---
title: "Avviso del compilatore (livello 1) C4526 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4526"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4526"
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4526
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': una funzione membro statica non può eseguire l'override della funzione virtuale 'funzione virtuale'. Override ignorato. La funzione virtuale verrà nascosta  
  
 La funzione membro static soddisfa i criteri per eseguire l'override della funzione virtuale, diventando così sia virtuale che statica.  
  
 Nel codice seguente viene generato l'errore C4526:  
  
```  
// C4526.cpp  
// compile with: /W1 /c  
// C4526 expected  
struct myStruct1 {  
   virtual void __stdcall func( int ) = 0;  
};  
  
struct myStruct2: public myStruct1 {  
   static void __stdcall func( int );  
};  
```  
  
 Di seguito sono indicate le possibili correzioni:  
  
-   Se si desidera utilizzare la funzione per eseguire l'override della funzione virtuale della classe base, rimuovere l'identificatore static.  
  
-   Se si desidera utilizzare la funzione come funzione membro statica, rinominarla in modo che non sia in conflitto con la funzione virtuale della classe base.