---
title: "Errore del compilatore C3174 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3174"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3174"
ms.assetid: fe6b3b5a-8196-485f-a45f-0b2e51df4086
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3174
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

attributo module non specificato  
  
 Per un programma che utilizza gli attributi di Visual C\+\+ non è stato specificato l'attributo [module](../../windows/module-cpp.md), necessario in qualsiasi programma con attributi.  
  
 Il seguente codice di esempio genera l'errore C3174:  
  
```  
// C3174.cpp  
// C3174 expected  
// uncomment the following line to resolve this C3174  
// [module(name="x")];  
[export]  
struct S  
{  
   int i;  
};  
  
int main()  
{  
}  
```