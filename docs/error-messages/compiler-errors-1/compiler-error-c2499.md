---
title: "Errore del compilatore C2499 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2499"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2499"
ms.assetid: b323ff4d-b3c1-4bfd-b052-ae7292d53222
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2499
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': una classe non può essere classe base di se stessa  
  
 Si è tentato di specificare la classe da definire come classe base.  
  
 Il seguente codice di esempio genera l'errore C2499:  
  
```  
// C2499.cpp  
// compile with: /c  
class CMyClass : public CMyClass {};   // C2499  
class CMyClass{};   // OK  
```