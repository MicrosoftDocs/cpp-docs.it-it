---
title: "Errore del compilatore C3062 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3062"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3062"
ms.assetid: 78632e6d-255f-42c3-b124-31a9194ff86d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3062
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'enum': l'enumeratore richiede un valore poiché il tipo sottostante è 'tipo'  
  
 È possibile specificare un tipo sottostante per un'enumerazione.  Per alcuni tipi è tuttavia necessario assegnare valori a ogni enumeratore.  
  
 Per ulteriori informazioni sulle enumerazioni, vedere [enum class](../../windows/enum-class-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3062:  
  
```  
// C3062.cpp  
// compile with: /clr  
  
enum class MyEnum : bool { a };   // C3062  
enum class MyEnum2 : bool { a = true};   // OK  
```