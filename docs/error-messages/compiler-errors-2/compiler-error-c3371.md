---
title: "Errore del compilatore C3371 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3371"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3371"
ms.assetid: f7ecf1aa-ed0a-4f73-81e5-62cf98f88ea1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3371
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'idl\_module': solo la proprietà 'name' è ammessa in questo contesto  
  
 L'utilizzo diretto di [idl\_module](../../windows/idl-module.md) in una dichiarazione di funzione non consente altri parametri oltre al nome.  
  
 L'esempio seguente genera l'errore C3371:  
  
```  
// C3371.cpp [idl_module(name="Name", dllname="Some.dll")]; [idl_module(name="Name", helpstring="Some help")]   // C3371 int f1(); // try // [idl_module(name="Name")] // int f1(); int main() { }  
```