---
title: "Errore del compilatore C2584 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2584"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2584"
ms.assetid: 836e2c0a-86c0-4742-b432-beb0191ad20e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C2584
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'Classe': la base diretta 'Base2' non è accessibile. Già base di 'Base1'  
  
 Il parametro `Class` deriva già direttamente dal parametro `Base1`.  Anche il parametro `Base2` deriva dal parametro `Base1`.  Il parametro `Class` non può derivare dal parametro `Base2` poiché questo significherebbe ereditare di nuovo \(indirettamente\) dal parametro `Base1`. Questa operazione non è valida poiché il parametro `Base1` è già una classe base diretta.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2584:  
  
```  
// C2584.cpp  
// compile with: /c  
struct A1 {  
   virtual int MyFunction();  
};  
  
struct A2 {  
    virtual int MyFunction();  
};  
  
struct B1: public virtual A1, virtual A2 {  
    virtual int MyFunction();  
};  
  
struct B2: public virtual A2, virtual A1 {  
    virtual int MyFunction();  
};  
  
struct C: virtual B1, B2 {  
    virtual int MyFunction();  
};  
  
struct Z : virtual B2, virtual C {   // C2584  
// try the following line insted  
// struct Z : virtual C {  
    virtual int MyFunction();  
};  
```