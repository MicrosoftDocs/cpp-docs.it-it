---
title: Errore del compilatore C3539 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3539
dev_langs:
- C++
helpviewer_keywords:
- C3539
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1f704bd283ab5228a8988d587707e978aa5b49e1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33256402"
---
# <a name="compiler-error-c3539"></a>Errore del compilatore C3539
'type': un argomento di modello non può essere un tipo che contiene 'auto'  
  
 Il tipo di argomento di modello indicato non può contenere un utilizzo del `auto` (parola chiave).  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Non si specifica l'argomento del modello con il `auto` (parola chiave).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C3539.  
  
```  
// C3539.cpp  
// Compile with /Zc:auto  
template<class T> class C{};  
int main()  
{  
   C<auto> c;   // C3539  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../../cpp/auto-keyword.md)