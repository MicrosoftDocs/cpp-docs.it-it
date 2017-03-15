---
title: "1.3 Execution Model | Microsoft Docs"
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
ms.assetid: 85ae8bc4-5bf0-45e0-a45f-02de9adaf716
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 1.3 Execution Model
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

OpenMP utilizza il modello fork\-join dell'esecuzione parallela.  Sebbene questo modello fork\-join possa risultare utile per la soluzione di vari problemi, è adatto anziché per le grandi dimensioni alle applicazioni basate su matrici.  OpenMP è destinato ai programmi di supporto che eseguiranno correttamente sia come programmi paralleli \(thread di esecuzione di una raccolta completa di supporto OpenMP\) e come programmi sequenziali \(direttive ignorate e un OpenMP semplice viene generato la raccolta\).  Tuttavia, è possibile e valida elaborare un programma che non funziona correttamente quando viene eseguito in sequenza.  Inoltre, i livelli diversi di parallelismo possono dare risultati numerici diversi a causa delle modifiche verrà associato delle operazioni numeriche.  Ad esempio, una riduzione di addizione seriale può avere un modello diverso di associazioni di addizione che una riduzione parallela.  Queste associazioni diversi possono modificare i risultati di addizione a virgola mobile.  
  
 Un programma scritto con l'esecuzione di inizio di OpenMP C\/C\+\+ API come singolo thread di esecuzione ha chiamato *thread master*.  Il thread master esegue in un'area seriale fino al raggiungimento del primo costrutto parallelo.  In OpenMP C\/C\+\+ API, **parallelo** la direttiva costituisce un costrutto parallelo.  Quando un costrutto parallelo viene rilevato, il thread principale crea un team di thread e il master diventa la pagina master del team.  Ogni thread del team esegue le istruzioni in dinamico di un'area parallela, ad eccezione dei costrutti di suddivisione del lavoro.  I costrutti di suddivisione del lavoro devono essere rilevati da tutti i thread del team nello stesso ordine e istruzioni all'interno del blocco strutturato associato vengono eseguiti da uno o più thread.  La barriera implicita alla fine di un costrutto di suddivisione del lavoro senza `nowait` la clausola viene eseguita da tutti i thread del team.  
  
 Se un thread modifica un oggetto condiviso, influisce non solo il proprio ambiente di esecuzione, ma anche quelli degli altri thread nel programma.  La modifica è sempre completa, dal punto di vista di uno degli altri thread, i punti di sequenza seguente \(come definito nel linguaggio di base\) solo se l'oggetto è dichiarata sia volatile.  In caso contrario, la modifica è sempre completo dopo innanzitutto il thread modificando quindi \(o contemporaneamente\) gli altri thread, incontrano un oggetto **arrossir** direttiva che specifica l'oggetto \(in modo implicito o esplicito\).  si noti che quando **arrossir** le direttive che sono interessate da altre direttive di OpenMP non sono sufficienti per garantire ordine desiderato degli effetti collaterali, è responsabilità del programmatore di fornire aggiuntivo, esplicito  **arrossir** direttive.  
  
 Al termine del costrutto parallelo, i thread nel team di sincronizzazione a una barriera implicita e solo il thread master l'esecuzione continua.  Qualsiasi numero di costrutti paralleli possono essere specificati in un unico programma.  Di conseguenza, un programma può biforcarsi e unire più volte durante l'esecuzione.  
  
 Il OpenMP C\/C\+\+ l'api consente ai programmatori le direttive di utilizzo nelle funzioni chiamate dall'interno dei costrutti paralleli.  Le direttive che non vengono visualizzati nell'ambito lessicale di un costrutto parallelo ma possono rientrare in dinamico sono chiamate *orfano* direttive.  Le direttive orfane forniscono a programmatori la possibilità di eseguire le parti importanti del programma in parallelo solo con modifiche minime del programma sequenziale.  Con questa funzionalità, gli utenti possono codificare costrutti paralleli ai livelli della struttura ad albero delle chiamate del programma e utilizzare direttive per controllare l'esecuzione nelle funzioni chiamate.  
  
 Le chiamate non sincronizzate le funzioni di output e C\+\+ che scrivono nello stesso file possono generare l'output in cui i dati letti da thread diversi vengono visualizzate in ordine non deterministico.  Analogamente, le chiamate non sincronizzate le funzioni di input che leggono dallo stesso file possono leggere i dati in ordine non deterministico.  L'utilizzo non sincronizzato I\/O, in modo che ogni thread accede a un file diverso, produce gli stessi risultati dell'esecuzione in serie di funzioni di I\/O.