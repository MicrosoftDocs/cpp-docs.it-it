---
title: "Errore del compilatore C3800 | Microsoft Docs"
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
  - "C3800"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3800"
ms.assetid: c653240a-b6db-4437-8d65-fa58f0e6fcf4
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3800
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'dichiarazione': impossibile combinare proprietà ed eventi  
  
 Non è possibile dichiarare un costrutto come proprietà ed evento.  
  
 L'errore C3800 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
 Il seguente codice di esempio genera l'errore C3800:  
  
```  
// C3800.cpp  
// compile with: /clr:oldSyntax  
#using "mscorlib.dll"  
  
__delegate void MyDel();  
public __gc struct S  
{  
   __property __event void set_E(MyDel*)  
   {  
   }   // C3800  
};  
  
int main()  
{  
}  
```