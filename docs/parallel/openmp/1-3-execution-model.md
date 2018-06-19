---
title: 1.3 modello di esecuzione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 85ae8bc4-5bf0-45e0-a45f-02de9adaf716
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0acdd7a5d9f2dcb58850254281b5c18fd0d1123c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687894"
---
# <a name="13-execution-model"></a>1.3 Modello di esecuzione
OpenMP utilizza il modello fork-join dell'esecuzione parallela. Sebbene il modello fork-join possa risultare utile per risolvere vari problemi, piuttosto progettato per applicazioni basate su matrici di grandi dimensioni. OpenMP è progettato per applicazioni di supporto che verranno eseguito correttamente entrambe come i programmi parallelo (più thread di esecuzione e una libreria di supporto OpenMP completa) e come i programmi sequenziali (direttive ignorate e una libreria di stub OpenMP semplice). Tuttavia, è possibile ed è consentito per lo sviluppo di un programma che non si comporta correttamente quando eseguita in modo sequenziale. Inoltre, diversi gradi di parallelismo potrebbe risultati numerici diversi a causa delle modifiche nell'associazione di operazioni numeriche. Ad esempio, una riduzione dell'addizione seriale potrebbe essere un modello di associazioni di aggiunta di una riduzione parallela. Queste associazioni diverse possono modificare i risultati di addizione a virgola mobile.  
  
 Un programma scritto con l'API di C/C++ OpenMP inizia l'esecuzione come un singolo thread di esecuzione chiamato il *master thread*. Il thread principale viene eseguito in un'area seriale finché non viene rilevato un costrutto parallelo prima. Nell'API di C/C++ OpenMP, il **parallela** direttiva costituisce un costrutto parallelo. Quando viene rilevato un costrutto parallelo, il thread principale crea un team di thread e il master diventa master del team. Ogni thread del team esegue le istruzioni dell'extent dinamica di un'area parallela, tranne i costrutti di condivisione del lavoro. Costrutti di condivisione del lavoro devono essere rilevati da tutti i thread del team nello stesso ordine e le istruzioni all'interno del blocco strutturato associato vengono eseguite da uno o più thread. La barriera implicita alla fine di un costrutto di condivisione lavoro senza un `nowait` clausola viene eseguita da tutti i thread del team.  
  
 Se un thread viene modificato un oggetto condiviso, influisce su non solo il proprio ambiente di esecuzione, ma anche quelli di altri thread nel programma. La modifica è completo, dal punto di vista di uno degli altri thread, nel punto di sequenza successivo (come definito nella lingua di base) solo se l'oggetto è dichiarato come volatile. In caso contrario, la modifica è garantita per il completamento dopo la modifica del primo, e quindi (o contemporaneamente) verificarsi altri thread, un **scaricamento** direttiva che specifica l'oggetto (in modo implicito o esplicito). Si noti che quando il **scaricamento** direttive impliciti di altre direttive OpenMP non sono sufficienti per garantire l'ordinamento desiderato degli effetti collaterali, è compito del programmatore di fornire ulteriori espliciti  **scaricare** direttive.  
  
 Al termine di un costrutto parallelo, sincronizzano i thread del team in una barriera implicita e continua l'esecuzione solo il thread principale. In un programma singolo, è possibile specificare un numero qualsiasi di costrutti paralleli. Di conseguenza, un programma può fork e join più volte durante l'esecuzione.  
  
 L'API di C/C++ OpenMP consente ai programmatori di utilizzare le direttive nelle funzioni chiamate all'interno di costrutti paralleli. Le direttive che non sono visualizzati in quanto lessicale di un costrutto parallelo, ma possono trovarsi in quanto dinamica vengono chiamate *orfani* direttive. Direttive orfane programmatori hanno la possibilità di eseguire le parti principali del programma in parallelo solo modifiche minime per il programma sequenza. Con questa funzionalità, gli utenti possono paralleli costrutti di livello superiore il programma dell'albero delle chiamate del codice e utilizzare direttive per controllare l'esecuzione delle funzioni chiamate.  
  
 Chiamate non sincronizzate a C e C++ di output possono comportare le funzioni che scrivono allo stesso file di output in cui i dati scritti da thread diversi vengono visualizzati nell'ordine non deterministico. Analogamente, non sincronizzate le chiamate a funzioni che leggono allo stesso file di input possono leggere i dati in ordine non deterministico. Utilizzo non sincronizzata dei / o, in modo che ogni thread accede a un altro file, produce gli stessi risultati di esecuzione seriale delle funzioni dei / o.