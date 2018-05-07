---
title: Compilatore avviso (livello 4) C4221 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4221
dev_langs:
- C++
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1e602eb662533207a1f2957d3b11a0823e4b83af
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4221"></a>Avviso del compilatore (livello 4) C4221
utilizzata estensione non standard: 'identifier': non può essere inizializzato con l'indirizzo della variabile automatica  
  
 Con le estensioni Microsoft predefinite (/Ze), è possibile inizializzare un tipo di aggregazione (**matrice**, `struct`, o **unione**) con l'indirizzo di una variabile locale (automatica).  
  
## <a name="example"></a>Esempio  
  
```  
// C4221.c  
// compile with: /W4  
struct S  
{  
   int *i;  
};  
  
void func()  
{  
   int j;  
   struct S s1 = { &j };   // C4221  
}  
  
int main()  
{  
}  
```  
  
 Tali inizializzazione non sono validi in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).