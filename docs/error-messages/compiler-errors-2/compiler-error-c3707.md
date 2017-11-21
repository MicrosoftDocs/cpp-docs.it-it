---
title: Errore del compilatore C3707 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3707
dev_langs: C++
helpviewer_keywords: C3707
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7167ea0df9bc0846de16be40d722c63bfea11c32
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3707"></a>Errore del compilatore C3707
'function': il metodo di interfaccia dispatch deve avere un dispid  
  
 Se si utilizza un `dispinterface` (metodo), è necessario assegnargli una `dispid`. Per risolvere questo problema, assegnare un `dispid` per il `dispinterface` metodo, ad esempio, rimuovendo il `id` attributo del metodo nell'esempio seguente. Per ulteriori informazioni, vedere gli attributi [dispinterface](../../windows/dispinterface.md) e [id](../../windows/id.md).  
  
 L'esempio seguente genera l'errore C3707:  
  
```  
// C3707.cpp  
#include <atlbase.h>  
#include <atlcom.h>  
#include <atlctl.h>  
  
[module(name="xx")];  
[dispinterface]  
__interface IEvents : IDispatch  
{  
   HRESULT event1([in] int i);   // C3707  
   // try the following line instead  
   // [id(1)] HRESULT event1([in] int i);  
};  
  
int main() {  
}  
```