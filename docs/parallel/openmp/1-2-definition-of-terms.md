---
title: "1.2 Definition of Terms | Microsoft Docs"
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
ms.assetid: fcaa8eb8-bbbf-4a24-ad0e-e299c442db79
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 1.2 Definition of Terms
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I seguenti termini utilizzati in questo documento:  
  
 barriera  
 un punto di sincronizzazione che deve essere raggiunto da tutti i thread in un team.  Attende di ogni thread fino a tutti i thread del team segnala in questa fase.  Esistono barriere esplicite identificate le direttive e barriere implicite creato dall'implementazione.  
  
 costrutto  
 Un costrutto è un'istruzione.  È costituito da una direttiva e il blocco strutturato successivo.  si noti che alcune direttive non fanno parte di un costrutto.  \(Vedere openmp\-direttiva in [Appendice C\#](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)\).  
  
 direttiva  
 Tipo c o C\+\+ **\#pragma** seguito da  **omp** identificatore, altro testo e una nuova riga.  La direttiva specifica il comportamento del programma.  
  
 ambito dinamico  
 Le istruzioni in *ambito lessicale*, all'interno di una funzione che viene eseguito come risultato dell'esecuzione di istruzioni nell'ambito lessicale.  Un ambito dinamico è anche detto a *area*.  
  
 ambito lessicale  
 Istruzioni contenuto lessicale all'interno di un oggetto *blocco strutturato*.  
  
 thread master  
 il thread che crea un team quando a *area parallela* verrà inserito.  
  
 area parallela  
 Istruzioni che associano a un costrutto parallelo di OpenMP e possono essere eseguiti da più thread.  
  
 private  
 Nomi di variabili private un blocco di archiviazione univoche al thread che ha creato il riferimento.  Si noti che esistono diversi modi per specificare che una variabile è privata: una definizione all'interno di un'area parallela, a **threadprivate** direttiva.  
  
 area  
 un ambito dinamico.  
  
 area seriale  
 Istruzioni eseguiti solo da *thread master* i dinamico di qualsiasi *area parallela*.  
  
 serializzare  
 Per eseguire un costrutto parallelo con un team di thread che sono costituite solo di un singolo thread \(il thread master per tale costrutto parallelo\), con un ordine seriale di esecuzione delle istruzioni all'interno del blocco strutturato \(lo stesso ordine come se il blocco non faccia parte di un costrutto parallelo\) e senza effetto sul valore restituito da **omp\_in\_parallel \(\)** \(oltre agli effetti dei costrutti paralleli annidati\).  
  
 condiviso  
 Nomi di variabili condivise un unico blocco di archiviazione.  Tutti i thread del team che accedono a questa variabile accederanno questo singolo blocco di archiviazione.  
  
 blocco strutturato  
 Un blocco strutturato è un'istruzione \(singolo o composta\) con una sola voce e una singola uscita.  Nessun istruzione un blocco strutturato se c " è un ramo in o da tale istruzione \(denominata anche a **longjmp**\(3C\) o l'utilizzo di  **generare**, ma una chiamata a  **uscita** è consentito\).  Un'istruzione composta è un blocco strutturato se l'esecuzione inizia sempre all'apertura **{** e termina sempre la chiusura **}**.  Un'istruzione di espressione, istruzione di selezione, istruzione iterazione, o **prova** il blocco è un blocco strutturato se l'istruzione composto corrispondente ottenuto accludendolo in  **{** e **}**essere un blocco strutturato.  Un'istruzione di salto, contrassegnati istruzione, o un'istruzione di dichiarazione sia un blocco strutturato.  
  
 team  
 Uno o più thread che prevedono l'esecuzione di un costrutto.  
  
 thread  
 Un'entità di esecuzione che ha un flusso seriale di controllo, un set di variabili private e di un accesso alle variabili condivise.  
  
 variabile  
 Un identificatore, eventualmente qualificato dai nomi dello spazio dei nomi, che indica un oggetto.