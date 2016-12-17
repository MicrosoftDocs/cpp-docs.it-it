---
title: "Allocazione nello stack | Microsoft Docs"
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
ms.assetid: 098e51f2-eda6-40d0-b149-0b618aa48b47
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Allocazione nello stack
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il prologo di una funzione è responsabile dell'allocazione nello stack delle variabili locali, dei registri salvati, dei parametri di stack e dei parametri di registro.  
  
 Poiché si trova sempre nella parte inferiore dello stack \(anche se si utilizza l'istruzione alloca\), l'area dei parametri sarà sempre adiacente all'indirizzo di ritorno durante una qualsiasi chiamata di funzione.  Questa area contiene almeno quattro voci, ma deve avere sempre spazio sufficiente per contenere tutti i parametri richiesti da una qualsiasi funzione che possa essere chiamata.  Tenere presente che per i parametri di registro viene sempre allocato spazio, anche se tali parametri non vengono mai trasferiti nello stack. Questo assicura che un chiamato disporrà sempre di spazio allocato per tutti i propri parametri.  Poiché gli argomenti di registro richiedono indirizzi iniziali, occorre che sia disponibile un'area contigua nel caso in cui la funzione chiamata debba accettare l'indirizzo dell'elenco di argomenti \(va\_list\) o di un singolo argomento.  Questa area può essere inoltre utilizzata per salvare gli argomenti di registro durante l'esecuzione dei thunk e come opzione di debug, facilitando ad esempio la ricerca degli argomenti durante il debug se sono archiviati nei relativi indirizzi iniziali nel codice di prologo.  Anche se la funzione chiamata ha meno di 4 parametri, queste 4 posizioni dello stack vengono effettivamente assegnate alla funzione chiamata, che può quindi utilizzarle per scopi diversi dal salvataggio dei valori dei parametri di registro.  Per questo motivo, il chiamante non può salvare informazioni in questa area dello stack durante una chiamata di funzione.  
  
 Se lo spazio viene allocato dinamicamente \(istruzione alloca\) in una funzione, è necessario utilizzare un registro non volatile come puntatore ai frame per contrassegnare la base della parte fissa dello stack e tale registro deve essere salvato e inizializzato nel prologo.  Quando si utilizza l'istruzione alloca, è possibile che le chiamate effettuate allo stesso chiamato dallo stesso chiamante abbiano indirizzi iniziali differenti per i relativi parametri di registro.  
  
 Lo stack verrà sempre mantenuto allineato a 16 byte, tranne che all'interno del prologo, ad esempio dopo l'inserimento dell'indirizzo di ritorno, e quando indicato in [Tipi di funzioni](../build/function-types.md) per una determinata classe di funzioni frame.  
  
 Di seguito è riportato un esempio del layout stack in cui una funzione A chiama una funzione non foglia B.  Il prologo della funzione A ha già allocato lo spazio per tutti i parametri di registro e di stack richiesti da B nella parte inferiore dello stack.  La chiamata inserisce l'indirizzo di ritorno nello stack mentre il prologo di B alloca lo spazio per le variabili locali e i registri non volatili della funzione, oltre allo spazio necessario per chiamare le funzioni.  Se B utilizza l'istruzione alloca, lo spazio verrà allocato tra l'area di salvataggio delle variabili locali e dei registri non volatili e l'area dei parametri di stack.  
  
 ![Esempio di conversione AMD](../build/media/vcamd_conv_ex_5.png "vcAmd\_conv\_ex\_5")  
  
 Quando B chiama un'altra funzione, l'indirizzo di ritorno viene inserito subito dopo l'indirizzo iniziale di RCX.  
  
## Vedere anche  
 [Utilizzo dello stack](../build/stack-usage.md)