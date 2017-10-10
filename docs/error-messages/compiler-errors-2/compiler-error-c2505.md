---
title: Errore del compilatore C2505 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2505
dev_langs:
- C++
helpviewer_keywords:
- C2505
ms.assetid: b19f5c53-399d-425e-90db-fe3ca9b40858
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: e703a5f36a5edd5febbcfaf4b75394bbbb28ee4d
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2505"></a>Errore del compilatore C2505
'symbol': '__declspec(modifer)' può essere applicato solo a dichiarazioni o definizioni di oggetti globali o membri dati statici  
  
 Oggetto `__declspec` modificatore che è progettato per essere utilizzato solo in ambito globale è stato utilizzato in una funzione.  
  
 Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 L'esempio seguente genera l'errore C2505:  
  
```  
// C2505.cpp  
// compile with: /clr  
  
// OK  
__declspec(process) int ii;  
__declspec(appdomain) int jj;  
  
int main() {  
   __declspec(process) int i;   // C2505  
   __declspec(appdomain) int j;   // C2505  
}  
```
