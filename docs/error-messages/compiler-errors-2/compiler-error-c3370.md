---
title: "Errore del compilatore C3370 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3370"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3370"
ms.assetid: ee6d4c85-78fc-42b2-836e-5cc491a3b2ba
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3370
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'idl\_module name': idl\_module non ancora definito  
  
 Prima di poter usare [idl\_module](../../windows/idl-module.md) per specificare un punto di ingresso in una DLL, è necessario usare `idl_module` per specificare il nome della DLL.  
  
 L'esempio seguente genera l'errore C3370:  
  
```  
// C3370.cpp [module(name=MyLibrary)]; // uncomment the following line to resolve the error // [idl_module(name="name1", dllname=x.dll)]; [idl_module(name="name1"), entry(100)] // C3370 int f1(); int main() { }  
```