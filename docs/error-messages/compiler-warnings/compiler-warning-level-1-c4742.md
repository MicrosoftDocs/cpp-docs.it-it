---
title: Compilatore avviso (livello 1) C4742 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4742
dev_langs: C++
helpviewer_keywords: C4742
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 934c7d14d95d0b90cfdcdb694f743e6b13abd0e2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4742"></a>Avviso del compilatore (livello 1) C4742
'var' ha un diverso allineamento in 'file1' e 'file2': numero e il numero  
  
 Una variabile esterna a cui fa riferimento o definita in due file ha un diverso allineamento in tali file. Questo avviso viene generato quando il compilatore rileva che `__alignof` per la variabile nella *file1* è diverso da `__alignof` per la variabile nella *file2*. È possibile che con tipi incompatibili durante la dichiarazione di variabile in file diversi, o non corrispondenti `#pragma pack` in file diversi.  
  
 Per risolvere il problema, utilizzare la stessa definizione di tipo o usare un nome diverso per le variabili.  
  
 Per ulteriori informazioni, vedere [pack](../../preprocessor/pack.md) e [operatore alignof](../../cpp/alignof-operator.md).  
  
## <a name="example"></a>Esempio  
 Questo è il primo file che definisce il tipo.  
  
```  
// C4742a.c  
// compile with: /c  
struct X {  
   char x, y, z, w;  
} global;  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4742.  
  
```  
// C4742b.c  
// compile with: C4742a.c /W1 /GL  
// C4742 expected  
extern struct X {  
   int a;  
} global;  
  
int main() {  
   global.a = 0;  
}  
```