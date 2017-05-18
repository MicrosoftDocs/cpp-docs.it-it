---
title: Errore del compilatore C3156 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3156
dev_langs:
- C++
helpviewer_keywords:
- C3156
ms.assetid: 1876da78-b94e-4af7-9795-28f72b209b3e
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 170a76ba617396d716243e215d13c264f48cf5bf
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3156"></a>Errore del compilatore C3156
'class': impossibile avere una definizione locale di un tipo gestito o WinRT  
  
 Una funzione non può contenere la definizione, o dichiarazione, di una classe, struct o interfaccia gestita o WinRT.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3156.  
  
```  
// C3156.cpp  
// compile with: /clr /c  
void f() {  
   ref class X {};   // C3156  
   ref class Y;   // C3156  
}  
```  

