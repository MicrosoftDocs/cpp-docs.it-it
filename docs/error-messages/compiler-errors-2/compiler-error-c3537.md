---
title: Errore del compilatore C3537 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3537
dev_langs: C++
helpviewer_keywords: C3537
ms.assetid: f537ebd1-4fb0-4e09-a453-4f38db2c6881
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3a131b7bab9c89c7a5ea39a4b5b05d8e91b572fe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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