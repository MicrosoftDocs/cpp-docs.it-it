---
title: "Errore del compilatore C3183 | Microsoft Docs"
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
  - "C3183"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3183"
ms.assetid: dbd0f020-c739-43c9-947e-9ce21537331b
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3183
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile definire una classe, uno struct o un'unione senza nome all'interno del tipo gestito o WinRT 'type'  
  
 Un tipo incorporato in un tipo gestito o WinRT deve essere denominato.  
  
 L'esempio seguente genera l'errore C3183:  
  
```  
// C3183a.cpp  
// compile with: /clr /c  
ref class Test  
{  
   ref class  
   {  // C3183, delete class or name it  
      int a;  
      int b;  
   };  
};  
```  
  
 L'esempio seguente genera l'errore C3183:  
  
```  
// C3183b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class Test  
{  
   __gc class  
   {  // C3183, delete class or name it  
      int a;  
      int b;  
   };  
};  
  
int main()  
{  
}  
```