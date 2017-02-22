---
title: "Errore del compilatore C3610 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3610"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3610"
ms.assetid: 9349a348-9d37-4a00-9eab-481039268d31
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3610
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipovalore': il tipo di valore deve essere 'boxed' prima della chiamata del metodo 'metodo'  
  
 Per impostazione predefinita, un tipo di valore non si trova sull'heap gestito.  Prima di chiamare i metodi dalle classi della libreria di runtime .NET, come `Object`, è necessario spostare il tipo di valore sull'heap gestito.  
  
 L'errore C3610 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
 Il seguente codice di esempio genera l'errore C3610:  
  
```  
// C3610.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value class A {};  
  
int main() {  
   A a;  
   a.GetType(); // C3610  
  
   // OK  
   __box A* ovar = __box(a);  
   ovar->GetType();  
}  
```