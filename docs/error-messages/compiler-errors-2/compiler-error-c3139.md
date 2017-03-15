---
title: "Errore del compilatore C3139 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3139"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3139"
ms.assetid: 95c92263-10ac-4ff3-b385-6312dd92adbc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3139
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'struttura': impossibile esportare un tipo definito dall'utente senza membri  
  
 Si è tentato di applicare l'attributo [export](../../windows/export.md) a un tipo vuoto definito dall'utente.  Di seguito è riportato un esempio.  
  
```  
// C3139.cpp  
#include "unknwn.h"  
[emitidl];  
[module(name=xx)];  
  
[export] struct MyStruct {   // C3139 empty type  
};  
int main(){}  
```