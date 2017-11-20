---
title: Costanti globali in C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
dev_langs: C++
helpviewer_keywords:
- global constants
- constants, global
ms.assetid: df5a9bd4-d0a8-4c1c-956e-b481d0bded7d
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f47be9bad6cf7c8ccafac5dc8ce3786f8ada0dfb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="global-constants-in-c"></a>Costanti globali in C++
Costanti globali C++ dispongono di collegamento statico. Questa è diversa da C. Se si tenta di utilizzare globale costante in C++ in più file si verifica un errore esterno non risolto. Il compilatore ottimizza le costanti globali sono, senza lasciare spazio riservato per la variabile.  
  
 Un modo per correggere l'errore è per includere le inizializzazioni const in un file di intestazione e includere l'intestazione nei file CPP quando necessario, come se fosse un prototipo di funzione. Un'altra possibilità consiste nel rendere la variabile non costante e usare un riferimento costante nel valutarla.  
  
 L'esempio seguente genera l'errore C2019:  
  
```  
// global_constants.cpp  
// LNK2019 expected  
void test(void);  
const int lnktest1 = 0;  
  
int main() {  
   test();  
}  
```  
  
 E quindi,  
  
```  
// global_constants_2.cpp  
// compile with: global_constants.cpp  
extern int lnktest1;  
  
void test() {  
  int i = lnktest1;   // LNK2019  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)