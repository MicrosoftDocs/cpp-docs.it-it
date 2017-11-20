---
title: Errore del compilatore C3136 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3136
dev_langs: C++
helpviewer_keywords: C3136
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 9e6a8e3c958c6c1293b20451f632910001ef24f2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3136"></a>Errore del compilatore C3136
'interface': un'interfaccia COM può ereditare solo da un'altra interfaccia COM, 'interface' non è un'interfaccia COM  
  
 Un'interfaccia a cui è applicato un [attributo interfaccia](../../windows/interface-attributes.md) eredita da un'interfaccia che non è un'interfaccia COM. Un'interfaccia COM eredita infine `IUnknown`. Qualsiasi interfaccia preceduta da un attributo di interfaccia è un'interfaccia COM.  
  
 Nell'esempio seguente genera l'errore C3136:  
  
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