---
title: Errore del compilatore C3707 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3707
dev_langs:
- C++
helpviewer_keywords:
- C3707
ms.assetid: ac63a5dd-7a4b-48d2-9f2a-be9cb090134c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7268f584d9f269b4f2f15b837379ec12ab0185d8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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