---
title: Errore del compilatore C3803 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3803
dev_langs:
- C++
helpviewer_keywords:
- C3803
ms.assetid: bad5fb9a-ed9a-4c15-96e7-cf06e200a50d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d720e2f94cc4a480122413e31b897ec1718ebc15
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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