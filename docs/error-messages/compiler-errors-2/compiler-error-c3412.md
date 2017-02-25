---
title: "Errore del compilatore C3412 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3412"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3412"
ms.assetid: aa4dd43b-54ce-4cda-85c1-1a77dd6e34fa
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3412
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'modello': impossibile specializzare un template nell'ambito corrente  
  
 Non è possibile specializzare un template nell'ambito della classe, ma solo in ambito globale o dello spazio dei nomi.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3412:  
  
```  
// C3412.cpp  
template <class T>  
struct S {  
   template <>  
   struct S<int> {};   // C3412 in a class  
};  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrata una possibile soluzione.  
  
```  
// C3412b.cpp  
// compile with: /c  
template <class T>  
struct S {};  
  
template <>  
struct S<int> {};  
```