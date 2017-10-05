---
title: Istruzione null | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 606f5953-55f0-40c8-ae03-3ee3a819b851
caps.latest.revision: 8
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
ms.openlocfilehash: f15fda458fe604d0501c4daa87e6a76cd0422260
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="null-statement"></a>Istruzione Null
L'istruzione"null" è un'istruzione di espressione con il *espressione* mancante. Risulta utile quando la sintassi del linguaggio chiama un'istruzione ma non la relativa valutazione. È costituita da un punto e virgola.  
  
 Le istruzioni null vengono comunemente utilizzate come segnaposto nelle istruzioni di iterazione o come istruzioni su cui posizionare le etichette alla fine delle istruzioni composte o delle funzioni.  
  
 Nel frammento di codice seguente viene illustrato come copiare una stringa in un'altra e incorporare l'istruzione null:  
  
```  
// null_statement.cpp  
char *myStrCpy( char *Dest, const char *Source )  
{  
    char *DestStart = Dest;  
  
    // Assign value pointed to by Source to  
    // Dest until the end-of-string 0 is  
    // encountered.  
    while( *Dest++ = *Source++ )  
        ;   // Null statement.  
  
    return DestStart;  
}  
  
int main()  
{  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione di espressione](../cpp/expression-statement.md)
