---
title: Errore del compilatore C3138 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3138
dev_langs:
- C++
helpviewer_keywords:
- C3138
ms.assetid: 364ee9e8-9358-410e-bd35-9c4a226a3753
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0ba06bed1ce02c8a3030720152892e0e35760afa
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3138"></a>Errore del compilatore C3138
'interface': un'interfaccia 'attribute' deve ereditare da IDispatch o da un'interfaccia che eredita da IDispatch  
  
 Un'interfaccia con il [dual](../../windows/dual.md) o [dispinterface](../../windows/dispinterface.md) non dispone di attributi `IDispatch` come interfaccia di base diretta o indiretta.  
  
 Nell'esempio seguente genera l'errore C3138:  
  
```  
// C3138.cpp  
#include <unknwn.h>  
  
[ object, uuid("77ac9240-6e9a-11d2-97de-0000f805d73b") ]  
__interface IMyCustomInterface  
{  
   HRESULT mf1(void);  
};  
  
[ dispinterface, uuid("3536f8a0-6e9a-11d2-97de-0000f805d73b") ]  
__interface IMyDispInterface : IUnknown  
{  
   [id(1)] HRESULT mf2(void);  
};  
  
[ object, dual, uuid("34e90a10-6e9a-11d2-97de-0000f805d73b") ]  
__interface IMyDualInterface : IMyCustomInterface  // C3138 expected  
{  
   HRESULT mf3(void);  
};  
```
