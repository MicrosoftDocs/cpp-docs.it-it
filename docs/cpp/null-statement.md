---
title: Istruzione null | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 606f5953-55f0-40c8-ae03-3ee3a819b851
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 624ff1051977804e6cefd97a813dce36cacdc3e5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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