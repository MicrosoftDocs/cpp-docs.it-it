---
title: Errore del compilatore C3136 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3136
dev_langs:
- C++
helpviewer_keywords:
- C3136
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f892c7f3d1ca7bf2aebf3ecfe7574182b544fd01
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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