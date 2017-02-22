---
title: "Istruzione Null | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "espressioni [C++], null"
  - "istruzione null"
  - "valori null, espressioni"
ms.assetid: 606f5953-55f0-40c8-ae03-3ee3a819b851
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Istruzione Null
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione "null" è un'istruzione di espressione con *expression* mancante.  Risulta utile quando la sintassi del linguaggio chiama un'istruzione ma non la relativa valutazione.  È costituita da un punto e virgola.  
  
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
  
## Vedere anche  
 [Istruzione di espressione](../cpp/expression-statement.md)