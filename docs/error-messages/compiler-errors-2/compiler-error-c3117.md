---
title: "Errore del compilatore C3117 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3117"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3117"
ms.assetid: dceee392-d4c7-4599-b75e-7aaac7c36fdd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3117
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'%$S': un'interfaccia può avere una sola classe base  
  
 È stata dichiarata un'interfaccia che eredita da più classi base.  
  
 Il seguente codice di esempio genera l'errore C3117:  
  
```  
// C3117.cpp  
#include <windows.h>  
  
[ object, uuid("00000000-0000-0000-0000-000000000001") ]  
__interface I1  
{  
};  
  
[ object, uuid("00000000-0000-0000-0000-000000000002") ]  
__interface I2  
{  
};  
  
[ object, uuid("00000000-0000-0000-0000-000000000003") ]  
__interface I3 : I1, I2  
{   // C3117  
};  
```