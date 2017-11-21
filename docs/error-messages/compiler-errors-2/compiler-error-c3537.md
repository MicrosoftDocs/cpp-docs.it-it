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
ms.openlocfilehash: f425ee0d93a277bac5dc1f0a798c1a7cc3ed3bac
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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