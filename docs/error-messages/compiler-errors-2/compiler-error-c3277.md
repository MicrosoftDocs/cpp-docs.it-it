---
title: "Errore del compilatore C3277 | Microsoft Docs"
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
  - "C3277"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3277"
ms.assetid: 8ac5f476-e30c-4879-92c6-f03cdbd74045
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3277
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile definire un enum non gestito 'enum' all'interno di un 'tipo' gestito  
  
 Un'enumerazione non è stata definita correttamente all'interno di un tipo gestito.  
  
 Il seguente codice di esempio genera l'errore C3277:  
  
```  
// C3277a.cpp  
// compile with: /clr  
ref class A  
{  
   enum E {e1,e2};   // C3277  
   // try the following line instead  
   // enum class E {e1,e2};  
};  
  
int main()  
{  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3277:  
  
```  
// C3277b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__gc class A  
{  
   enum E {e1,e2};   // C3277  
   // try the following line instead  
   // __value enum E {e1,e2};  
};  
  
int main()  
{  
}  
```