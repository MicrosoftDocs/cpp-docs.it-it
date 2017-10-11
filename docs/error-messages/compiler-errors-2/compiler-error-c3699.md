---
title: Errore del compilatore C3699 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3699
dev_langs:
- C++
helpviewer_keywords:
- C3699
ms.assetid: 47c29afc-ab8b-4238-adfe-788dd6e00b3b
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: caabe5d8d9e956081211ef23546f0d720ecdcbd6
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3699"></a>Errore del compilatore C3699
'operator': non è possibile utilizzare questo riferimento indiretto nel tipo 'type'  
  
 Si è verificato un tentativo di utilizzare un riferimento indiretto non consentito in `type`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3699.  
  
```  
// C3699.cpp  
// compile with: /clr /c  
using namespace System;  
int main() {  
   String * s;   // C3699  
   // try the following line instead  
   // String ^ s2;  
}  
```  
  
## <a name="example"></a>Esempio  
 Una proprietà trivial non può avere il tipo di riferimento. Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md) . L'esempio seguente genera l'errore C3699.  
  
```  
// C3699_b.cpp  
// compile with: /clr /c  
ref struct C {  
   property System::String % x;   // C3699  
   property System::String ^ y;   // OK  
};  
```  
  
## <a name="example"></a>Esempio  
 L'equivalente di una sintassi di "puntatore a un puntatore" è un handle a un riferimento di rilevamento. L'esempio seguente genera l'errore C3699.  
  
```  
// C3699_c.cpp  
// compile with: /clr /c  
using namespace System;  
void Test(String ^^ i);   // C3699  
void Test2(String ^% i);  
```
