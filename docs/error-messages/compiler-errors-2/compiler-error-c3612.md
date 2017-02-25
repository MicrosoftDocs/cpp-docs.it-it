---
title: "Errore del compilatore C3612 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3612"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3612"
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3612
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': le classi sealed non possono essere dichiarate come abstract  
  
 I tipi definiti con `value` \(o [\_\_value](../../misc/value.md)\) sono sealed per impostazione predefinita e una classe viene dichiarata abstract a meno che non implementi tutti i metodi della relativa classe base.  Non è possibile creare un'istanza di una classe astratta sealed e non è possibile utilizzarla come classe base.  
  
 Per ulteriori informazioni, vedere [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3612:  
  
```  
// C3612.cpp  
// compile with: /clr /c  
value struct V: public System::ICloneable {};   // C3612  
  
// OK  
value struct V2: public System::ICloneable {  
   Object^ Clone();  
};  
```