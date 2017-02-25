---
title: "Errore del compilatore C3126 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3126"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3126"
ms.assetid: e72658a3-5d85-4a31-89a4-dbc3d475973d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3126
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile definire l'unione 'unione' all'interno del tipo gestito 'tipo'  
  
 Non è possibile definire un'unione all'interno di un tipo gestito.  
  
 Il seguente codice di esempio genera l'errore C3126:  
  
```  
// C3126_2.cpp  
// compile with: /clr /c  
ref class Test  
{  
   union x  
   {   // C3126  
      int a;  
      int b;  
   };  
};  
```  
  
 Il seguente codice di esempio genera l'errore C3126:  
  
```  
// C3126.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
  
__gc class Test  
{  
   union x  
   {   // C3126  
      int a;  
      int b;  
   };  
};  
```