---
title: Compilatore avviso (livello 4) C4221 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4221
dev_langs:
- C++
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6a08b300961bd19cc0355cc556d52dd00d05632e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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