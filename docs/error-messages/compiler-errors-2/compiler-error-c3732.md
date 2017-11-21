---
title: Errore del compilatore C3732 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3732
dev_langs: C++
helpviewer_keywords: C3732
ms.assetid: 2d55a7e1-9c39-4379-a093-2f7beb27e2ca
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c545391883d4e2becd21fbb4b3279e3f0c1d60f1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3732"></a>Errore del compilatore C3732
'interface': un'interfaccia personalizzata che genera eventi COM non può ereditare da IDispatch  
  
 Un'interfaccia che supporta gli eventi COM non può ereditare da `IDispatch`. Per ulteriori informazioni, vedere [gestione degli eventi in COM](../../cpp/event-handling-in-com.md).  
  
 L'errore seguente genera l'errore C3732:  
  
```  
// C3732.cpp  
#define _ATL_ATTRIBUTES 1  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="test")];  
  
// to resolve this C3732, use dual instead of object  
// or inherit from IUnknown  
[ object ]  
__interface I : IDispatch  
{  
};  
  
[ event_source(com), coclass ]  
struct A  
{  
   __event __interface I;   // C3732  
};  
  
int main()  
{  
}  
```