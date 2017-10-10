---
title: Errore del compilatore C2777 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2777
dev_langs:
- C++
helpviewer_keywords:
- C2777
ms.assetid: 5fe158c0-2a65-488a-aca2-61d4a8b32d43
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 6c774ad6f3a4f388f9428ead64e9d0a1fbc5882a
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2777"></a>Errore del compilatore C2777
per ciascuna proprietà è possibile specificare un solo metodo 'put'  
  
 Oggetto [proprietà](../../cpp/property-cpp.md) modificatore declspec ha più di una `put` proprietà.  
  
 L'esempio seguente genera l'errore C2777:  
  
```  
// C2777.cpp  
struct A {  
   __declspec(property(put=PutProp,put=PutPropToo))   // C2777  
   // try the following line instead  
   // __declspec(property(put=PutProp))  
      int prop;  
   int PutProp(void);  
   int PutPropToo(void);  
};  
```
