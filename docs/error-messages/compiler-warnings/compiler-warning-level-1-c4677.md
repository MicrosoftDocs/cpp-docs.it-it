---
title: "Avviso del compilatore (livello 1) C4677 | Microsoft Docs"
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
  - "C4677"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4677"
ms.assetid: a8d656a1-e2ff-4f8b-9028-201765131026
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4677
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': la firma del membro non privato contiene il tipo privato di assembly 'tipo\_privato'  
  
 Un tipo con accessibilità pubblica all'esterno dell'assembly utilizza un tipo con accesso privato all'esterno dell'assembly.  Un componente che fa riferimento al tipo di assembly pubblico non può utilizzare il membro o i membri del tipo che fanno riferimento al tipo privato di assembly.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4677:  
  
```  
// C4677.cpp  
// compile with: /clr /c /W1  
delegate void TestDel();  
public delegate void TestDel2();  
  
public ref class MyClass {  
public:  
   static event TestDel^ MyClass_Event;   // C4677  
   static event TestDel2^ MyClass_Event2;   // OK  
};  
```