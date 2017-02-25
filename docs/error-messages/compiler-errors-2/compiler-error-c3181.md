---
title: "Errore del compilatore C3181 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3181"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3181"
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3181
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': operando non valido per operatore  
  
 È stato passato un parametro non valido all'operatore [\_\_typeof](../../misc/typeof.md) o [typeid](../../windows/typeid-cpp-component-extensions.md).  È richiesto un tipo gestito.  
  
 Il compilatore utilizza gli alias per i tipi nativi mappati ai tipi in Common Language Runtime.  
  
 Il seguente codice di esempio genera l'errore C3181:  
  
```  
// C3181a.cpp  
// compile with: /clr  
using namespace System;  
  
int main() {  
   Type ^pType1 = interior_ptr<int>::typeid;   // C3181  
   Type ^pType2 = int::typeid;   // OK  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3181:  
  
```  
// C3181b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
int main() {  
   Type *pType1 = __typeof(int __gc*);   // C3181  
   Type *pType2 = __typeof(int*);   // OK  
}  
```