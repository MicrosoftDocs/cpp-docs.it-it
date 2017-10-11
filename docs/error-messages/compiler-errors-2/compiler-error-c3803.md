---
title: Errore del compilatore C3803 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3803
dev_langs:
- C++
helpviewer_keywords:
- C3803
ms.assetid: bad5fb9a-ed9a-4c15-96e7-cf06e200a50d
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: aec9e416833894bcd4c4d430b293e0867f544757
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3803"></a>Errore del compilatore C3803
'property': proprietà è di tipo non compatibile con una delle relative funzioni di accesso 'della funzione di accesso'  
  
 Il tipo di una proprietà definita con [proprietà](../../cpp/property-cpp.md) non corrisponde al tipo restituito per una delle funzioni di accesso.  
  
 L'esempio seguente genera l'errore C3803:  
  
```  
// C3803.cpp  
struct A  
{  
   __declspec(property(get=GetIt)) int i;  
   char GetIt()  
   {  
      return 0;  
   }  
  
   /*  
   // try the following definition instead  
   int GetIt()  
   {  
      return 0;  
   }  
   */  
}; // C3803  
  
int main()  
{  
}  
```
