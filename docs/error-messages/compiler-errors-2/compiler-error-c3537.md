---
title: Errore del compilatore C3537 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3537
dev_langs:
- C++
helpviewer_keywords:
- C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7f03f02062e61e4034f0a809784ba571ce532e07
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33252605"
---
# <a name="compiler-error-c3537"></a>Errore del compilatore C3537
'type': è possibile eseguire il cast a un tipo che contiene 'auto'  
  
 È Impossibile eseguire il cast di una variabile per il tipo indicato perché contiene il tipo di `auto` (parola chiave) e il valore predefinito [/Zc: Auto](../../build/reference/zc-auto-deduce-variable-type.md) è attiva l'opzione del compilatore.  
  
## <a name="example"></a>Esempio  
 Il codice seguente generato l'errore C3537 perché le variabili di cui vengono eseguito il cast a un tipo che contiene il `auto` (parola chiave).  
  
```  
// C3537.cpp  
// Compile with /Zc:auto  
int main()  
{  
   int value = 123;  
   auto(value);                        // C3537  
   (auto)value;                        // C3537  
   auto x1 = auto(value);              // C3537  
   auto x2 = (auto)value;              // C3537  
   auto x3 = static_cast<auto>(value); // C3537  
   return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Auto (parola chiave)](../../cpp/auto-keyword.md)