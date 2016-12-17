---
title: "Avviso del compilatore (livello 1) C4945 | Microsoft Docs"
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
  - "C4945"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4945"
ms.assetid: 6d2079ea-dc59-4611-bc68-9a22c06f7587
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4945
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': impossibile importare il simbolo da 'assembly2' perché 'simbolo' è già stato importato da un altro assembly 'assembly1'  
  
 Lo stesso simbolo è stato importato da due diversi assembly a cui si fa riferimento.  Non fare riferimento a uno degli assembly o modificare il nome del simbolo in uno degli assembly.  
  
 Negli esempi riportati di seguito viene generato l'errore C4945:  
  
```  
// C4945a.cs  
// compile with: /target:library  
// C# source code to create a dll  
public class ClassA {  
   public int i;  
}  
```  
  
 quindi  
  
```  
// C4945b.cs  
// compile with: /target:library  
// C# source code to create a dll  
public class ClassA {  
   public int i;  
}  
```  
  
 quindi  
  
```  
// C4945c.cpp  
// compile with: /clr /LD /W1  
#using "C4945a.dll"  
#using "C4945b.dll"   // C4945  
```