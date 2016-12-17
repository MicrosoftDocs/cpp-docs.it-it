---
title: "Errore del compilatore C2553 | Microsoft Docs"
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
  - "C2553"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2553"
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2553
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione\_base': il tipo restituito dalla funzione virtuale in override differisce da 'funzione\_override'  
  
 Una funzione in una classe derivata ha tentato di eseguire l'override di una funzione virtuale in una classe base, ma i tipi restituiti della funzione della classe derivata e della funzione della classe base sono diversi.  La firma di una funzione di override deve corrispondere a quella della funzione sottoposta a override.  
  
 Il seguente codice di esempio genera l'errore C2553:  
  
```  
// C2553.cpp  
// compile with: /clr /c  
ref struct C {  
   virtual void f();  
};  
  
ref struct D : C {  
   virtual int f() override ;   // C2553   
  
   // try the following line instead  
   // virtual void f() override;  
};  
```