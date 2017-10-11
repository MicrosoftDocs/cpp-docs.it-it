---
title: Errore del compilatore C3384 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3384
dev_langs:
- C++
helpviewer_keywords:
- C3384
ms.assetid: c9f92c6a-62a9-4333-b2b1-bc55c7f288b6
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ce70a37639288bce3244f48635ae4b756bb98cad
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3384"></a>Errore del compilatore C3384
'type_parameter': i vincoli value e ref si escludono a vicenda  
  
 Non è possibile vincolare un tipo generico sia a `value class` che `ref class`.  
  
 Vedere [vincoli sui parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3384.  
  
```  
// C3384.cpp  
// compile with: /c /clr  
generic <typename T>  
where T : ref class  
where T : value class   // C3384  
ref class List {};  
```
