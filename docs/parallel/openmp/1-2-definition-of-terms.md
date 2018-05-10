---
title: 1.2 definizione dei termini | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: fcaa8eb8-bbbf-4a24-ad0e-e299c442db79
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8563bb757ad8d30f1639f017769bfd6c4084efa0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="12-definition-of-terms"></a>1.2 Definizione dei termini
In questo documento vengono utilizzati i seguenti termini:  
  
 barrier  
 Un punto di sincronizzazione che deve essere raggiunto da tutti i thread in un team.  Ogni thread attende l'arrivano di tutti i thread del team a questo punto. Sono presenti ostacoli espliciti identificati da direttive e barriere implicite create dall'implementazione.  
  
 construct  
 Un costrutto è un'istruzione. È costituito da una direttiva e il successivo blocco strutturato. Si noti che alcune direttive non fanno parte di un costrutto. (Vedere *direttiva openmp* in [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)).  
  
 direttiva  
 Una C o C++ **#pragma** aggiungendo il **omp** identificatore, altre stringhe di testo e una nuova riga. La direttiva specifica il comportamento del programma.  
  
 extent dinamica  
 Tutte le istruzioni di *extent lessicale*, oltre a qualsiasi istruzione all'interno di una funzione che viene eseguita come risultato dell'esecuzione di istruzioni all'interno di extent lessicale. Un extent dinamico è detta anche un *area*.  
  
 extent lessicale  
 Istruzioni lessicale contenute all'interno di un *blocco strutturato*.  
  
 thread master  
 Il thread che crea un team quando un *area parallela* viene immesso.  
  
 area parallela  
 Istruzioni che associare a un costrutto parallelo OpenMP e possono essere eseguite da più thread.  
  
 private  
 Una variabile privata denomina un blocco di memoria che è univoco per il thread che effettua il riferimento. Si noti che esistono diversi modi per specificare che una variabile privata: una definizione in un'area parallela, un **threadprivate** direttiva, un **privata**, **firstprivate**, **lastprivate**, o **riduzione** clausola o l'utilizzo della variabile, come un **per**variabile di controllo del ciclo in un **per** ciclo subito dopo un **per** o **parallela per** direttiva.  
  
 area  
 Un extent dinamico.  
  
 area seriale  
 Le istruzioni eseguite solo dal *master thread* di fuori di extent dinamica di qualsiasi *area parallela*.  
  
 Serializzare  
 Per eseguire un costrutto parallelo con un team di thread costituito da un solo thread (ovvero il thread principale per tale costrutto parallelo), serial ordine di esecuzione per le istruzioni all'interno del blocco strutturato (lo stesso ordine come se il blocco non è stato in parte di un costrutto parallelo) e senza alcun effetto sul valore restituito da **omp_in_parallel()** (oltre gli effetti di qualsiasi costrutti paralleli annidati).  
  
 shared  
 Una variabile condivisa denomina un singolo blocco di archiviazione. Tutti i thread in un team di accedono a questa variabile avrà accesso questo singolo blocco di archiviazione.  
  
 blocco strutturato  
 Un blocco strutturato è un'istruzione (singola o composita) che dispone di una singola voce e una singola chiusura. Istruzione non è un blocco strutturato se è presente un collegamento interno o all'esterno di tale istruzione (inclusa una chiamata a **longjmp**(3 C) o l'utilizzo di **generare**, ma una chiamata a **uscire** è consentito). Un'istruzione composta è un blocco strutturato se l'esecuzione sempre inizia in corrispondenza dell'apertura **{** e termina sempre con la chiusura **}**. Un'istruzione di espressione, istruzioni di selezione, l'istruzione di iterazione o **provare** blocco è un blocco strutturato se l'istruzione composta corrispondente includendolo in **{** e **}** sarebbe un blocco strutturato. Un'istruzione di salto, l'istruzione con etichetta o istruzione di dichiarazione non è un blocco strutturato.  
  
 Team  
 Uno o più thread che hanno collaborato durante l'esecuzione di un costrutto.  
  
 thread  
 Un'entità di esecuzione con un flusso di controllo seriale, un set di variabili private e l'accesso alle variabili condivise.  
  
 variabile  
 Un identificatore qualificato facoltativamente con spazi dei nomi, che denomina un oggetto.