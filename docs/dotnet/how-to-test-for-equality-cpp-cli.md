---
title: "Procedura: verificare l'uguaglianza (C + + CLI) | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- equality, testing for
ms.assetid: 9115e298-9f75-452d-bdfb-6eeb0fa0b3c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0c32bd9c73b7251f311593b547d4f3abdd33d7c5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33127981"
---
# <a name="how-to-test-for-equality-ccli"></a>Procedura: verificare l'uguaglianza (C++/CLI)
Nell'esempio seguente, un test di uguaglianza che usa le estensioni gestite per C++ si basa su ciò che gli handle fanno riferimento a.  
  
## <a name="example"></a>Esempio  
  
```  
// mcppv2_equality_test.cpp  
// compile with: /clr /LD  
using namespace System;  
  
bool Test1() {  
   String ^ str1 = "test";  
   String ^ str2 = "test";  
   return (str1 == str2);  
}  
```  
  
 Il livello di integrità per questo programma indica che il valore restituito viene implementato mediante una chiamata a op_Equality.  
  
```  
IL_0012:  call       bool [mscorlib]System.String::op_Equality(string,  
                                                               string)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi gestiti (C++/CLI)](../dotnet/managed-types-cpp-cli.md)