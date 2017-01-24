---
title: "Mancata generazione di codice in seguito all&#39;utilizzo di nomi di funzione senza () | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni [C++], senza parentesi"
ms.assetid: edf4a177-a160-44aa-8436-e077b5b27809
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Mancata generazione di codice in seguito all&#39;utilizzo di nomi di funzione senza ()
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando il nome di una funzione dichiarata nel programma viene utilizzato senza parentesi, il compilatore non genera codice.  Questo comportamento si verifica indipendentemente dal fatto che la funzione accetti parametri, in quanto il compilatore calcola l'indirizzo della funzione, ma poiché l'operatore di chiamata della funzione "\(\)" non è presente, non viene effettuata alcuna chiamata.  Il risultato è simile al seguente:  
  
```  
// compile with /Wall to generate a warning  
int a;  
a;      // no code generated here either  
```  
  
 In Visual C\+\+, anche impostando il livello di avvisi 4, non viene generato alcun output diagnostico.  Non viene generato alcun avviso né codice.  
  
 Il codice di esempio riportato di seguito viene compilato, con un avviso, e collegato correttamente, senza errori, ma non produce codice in riferimento a `funcn( )`.  Per il corretto funzionamento del codice, è necessario aggiungere l'operatore di chiamata della funzione "\(\)".  
  
```  
#include <stdio.h>  
void funcn();  
  
int main() {  
   funcn;      /* missing function call operator;   
                  call will fail.  Use funcn() */  
   }  
  
void funcn() {  
   printf("\nHello World\n");  
}  
```  
  
## Vedere anche  
 [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)