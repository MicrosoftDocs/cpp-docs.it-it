---
title: unaligned | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __unaligned_cpp
- __unaligned
dev_langs:
- C++
helpviewer_keywords:
- __unaligned keyword [C++]
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 9f899add9a1306344a10840220f3b7504e917d91
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="unaligned"></a>__unaligned
Quando si dichiara un puntatore con il modificatore `__unaligned`, il compilatore presuppone che il puntatore faccia riferimento a dati non allineati. Di conseguenza, per un'applicazione da eseguire in un computer della famiglia di processori Itanium, il compilatore genera codice che legge i dati non allineati un byte alla volta.  
  
## <a name="remarks"></a>Note  
 Il `__unaligned` modificatore è valido per il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] e [!INCLUDE[vcpritanium](../cpp/includes/vcpritanium_md.md)] compilatori, ma influisce solo su applicazioni destinate a un computer con processori Itanium. Questo modificatore descrive l'allineamento solo dei dati indirizzati poiché si presuppone che il puntatore sia allineato.  
  
 Il [!INCLUDE[vcpritanium](../cpp/includes/vcpritanium_md.md)] processore genera un errore di allineamento quando accede ai dati disallineati e il tempo di elaborazione dell'errore rallenta le prestazioni. Utilizzare il modificatore `__unaligned` per indicare al processore di leggere i dati byte alla volta ed evitare l'errore. Questo modificatore non è necessario per [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] applicazioni perché il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] processore gestisce i dati disallineati senza generare un errore.  
  
 Per ulteriori informazioni sull'allineamento, vedere:  
  
-   [align](../cpp/align-cpp.md)  
  
-   [Operatore __alignof](../cpp/alignof-operator.md)  
  
-   [pack](../preprocessor/pack.md)  
  
-   [/Zp (Allineamento membri Struct)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md)  
  
## <a name="example"></a>Esempio  
  
```  
// unaligned_keyword.cpp  
// compile with: /c  
// processor: x64 IPF  
#include <stdio.h>  
int main() {  
   char buf[100];  
  
   int __unaligned *p1 = (int*)(&buf[37]);  
   int *p2 = (int *)p1;  
  
   *p1 = 0;   // ok  
  
   __try {  
      *p2 = 0;  // throws an exception  
   }  
   __except(1) {  
      puts("exception");  
   }  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)
