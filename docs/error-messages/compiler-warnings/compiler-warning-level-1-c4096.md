---
title: "Avviso del compilatore (livello 1) C4096 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4096"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4096"
ms.assetid: abf3cca2-2f21-45d8-b025-6b513b00681e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4096
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'a': l'interfaccia non è un'interfaccia COM. Non verrà inviata all'IDL  
  
 Una definizione di interfaccia che poteva essere ritenuta un'interfaccia COM non è stata definita come tale e, di conseguenza, non verrà inviata al file IDL.  
  
 Per un elenco degli attributi che caratterizzano le interfacce COM, vedere [Attributi di interfaccia](../../windows/interface-attributes.md).  
  
 Il seguente codice di esempio genera l'errore C4096:  
  
```  
// C4096.cpp  
// compile with: /W1 /LD  
#include "windows.h"  
[module(name="xx")];  
  
// [object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface a  
{  
};  
  
[coclass, uuid("00000000-0000-0000-0000-000000000002")]  
struct b : a  
{  
};   // C4096, remove coclass or uncomment object  
```