---
title: "Compiler Error C3386 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3386"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3386"
ms.assetid: 93fa8c33-0f10-402b-8eec-b0a217a1f8dc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Compiler Error C3386
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': impossibile applicare \_\_declspec\(dllexport\)\/\_\_declspec\(dllimport\) a un tipo gestito o WinRT  
  
 I modificatori `dllimport` e [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` non sono validi in un tipo gestito o Windows Runtime.  
  
 L'esempio seguente genera l'errore C3386 e mostra come risolverlo:  
  
```  
// C3386.cpp  
// compile with: /clr /c  
ref class __declspec(dllimport) X1 {   // C3386  
// try the following line instead  
// ref class X1 {  
};  
```