---
title: "Errore del compilatore C3136 | Microsoft Docs"
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
  - "C3136"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3136"
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3136
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': un'interfaccia COM può ereditare solo da un'altra interfaccia COM. 'Interfaccia' non è un'interfaccia COM  
  
 Un'interfaccia alla quale è stato applicato un [attributo di interfaccia](../../windows/interface-attributes.md) eredita da un'interfaccia non COM.  In ultima analisi, un'interfaccia COM eredita da `IUnknown`.  Qualsiasi interfaccia preceduta da un attributo di interfaccia è di tipo COM.  
  
 Nell'esempio seguente viene generato l'errore C3136:  
  
```  
// C3136.cpp  
#include "unknwn.h"  
  
__interface A   // C3136  
// try the following line instead  
// _interface A : IUnknown  
{  
   int a();  
};  
  
[object]  
__interface B : A  
{  
   int aa();  
};  
```