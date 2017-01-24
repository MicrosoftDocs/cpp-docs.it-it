---
title: "Errore del compilatore C2698 | Microsoft Docs"
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
  - "C2698"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2698"
ms.assetid: 3ebfe395-c20b-4c56-9980-ca9ed8653382
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2698
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la dichiarazione using per 'dichiarazione 1' non può coesistere con la dichiarazione using per 'dichiarazione 2'  
  
 Quando è presente una [dichiarazione using](../../cpp/using-declaration.md) per un membro dati, non sono consentite dichiarazioni using nello stesso ambito che utilizzano lo stesso nome, in quanto è possibile eseguire l'overload solo delle funzioni.  
  
 Il seguente codice di esempio genera l'errore C2698:  
  
```  
// C2698.cpp  
struct A {  
   int x;  
};  
  
struct B {  
   int x;  
};  
  
struct C : A, B {  
   using A::x;  
   using B::x;   // C2698  
}  
```