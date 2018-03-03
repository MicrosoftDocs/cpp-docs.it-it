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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c10b493284ed4f81b15a1f045a3053743d919cc5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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