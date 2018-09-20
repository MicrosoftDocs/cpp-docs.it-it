---
title: 1.3 modello di esecuzione | Microsoft Docs
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
ms.openlocfilehash: c284563a47d21abc9a1dacf045238449d64205d5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394010"
---
# <a name="13-execution-model"></a>1.3 Modello di esecuzione

OpenMP Usa il modello fork-join di esecuzione parallela. Sebbene questo modello fork-join può essere utile per risolvere una serie di problemi, è un po' ottimizzata per applicazioni basate su matrici di grandi dimensioni. OpenMP è destinato ai programmi di supporto che verranno eseguito correttamente entrambe come i programmi parallelo (più thread di esecuzione e una libreria di supporto OpenMP completa) e sotto forma di programmi sequenziali (una semplice libreria di stub di OpenMP e direttive ignorate). Tuttavia, è possibile e la possibilità di sviluppare un programma che non funziona correttamente quando eseguita in modo sequenziale. Inoltre, diversi gradi di parallelismo possono comportare risultati numerici diversi a causa delle modifiche nell'associazione di operazioni numeriche. Ad esempio, una riduzione di addizione seriale abbia un motivo diverso delle associazioni di aggiunta a una riduzione parallela. Queste associazioni diverse possono modificare i risultati dell'addizione a virgola mobile.

Un programma scritto con l'API C/C++ OpenMP inizia l'esecuzione come un singolo thread di esecuzione denominato il *master thread*. Il thread principale viene eseguito in un'area seriale finché non viene rilevato un costrutto parallelo prima. Nell'API OpenMP C/C++, il **parallele** direttiva costituisce un costrutto parallelo. Quando viene rilevato un costrutto parallelo, il thread principale crea un team di thread, mentre il master diventa master del team. Ogni thread del team esegue le istruzioni dell'extent dinamica di un'area parallela, fatta eccezione per i costrutti di condivisione del lavoro. Costrutti di condivisione lavoro devono essere rilevati da tutti i thread del team nello stesso ordine e le istruzioni all'interno del blocco strutturato associato vengono eseguite da uno o più thread. La barriera in cui è inclusa la fine di un costrutto di condivisione del lavoro senza un `nowait` clausola viene eseguita da tutti i thread del team.

Se un thread viene modificato un oggetto condiviso, influisce non solo il proprio ambiente di esecuzione, ma anche quelli di altri thread nel programma. La modifica è garantita a essere completati, dal punto di vista di uno degli altri thread, in corrispondenza del punto di sequenza successivo (come definito nella lingua di base) solo se l'oggetto viene dichiarato per essere volatile. In caso contrario, la modifica è garantita a essere completati dopo la modifica di un thread prima di tutto, e quindi (o contemporaneamente) incontrare altri thread, un **flush** direttiva che specifica l'oggetto (in modo implicito o esplicito). Si noti che quando la **flush** direttive che sono previste dall'altre direttive OpenMP non sono sufficienti per garantire l'ordinamento desiderato degli effetti collaterali, è compito del programmatore per fornire aggiuntive, esplicite  **scaricamento** direttive.

Al termine di un costrutto parallelo, sincronizzare i thread del team in una barriera implicita e continua l'esecuzione solo il thread master. In un unico programma, è possibile specificare un numero qualsiasi di costrutti paralleli. Di conseguenza, un programma potrebbe fork e join più volte durante l'esecuzione.

L'API di OpenMP C/C++ consente ai programmatori di utilizzare le direttive nelle funzioni chiamate all'interno di costrutti paralleli. Le direttive che non vengono visualizzati nell'ambito lessicale di un costrutto parallelo, ma i punti più soggetti dell'extent dinamici vengono chiamate *orfani* direttive. Direttive orfane programmatori hanno la possibilità di eseguire fasi principali del proprio programma in parallelo con solo modifiche minime al programma sequenza. Con questa funzionalità, gli utenti possono costrutti paralleli nei livelli superiore della struttura di chiamata del programma di codice e utilizzare le direttive per controllare l'esecuzione in una delle funzioni chiamate.

Le funzioni che scrivono nello stesso file possono comportare output in cui i dati scritti da thread diversi vengono visualizzati in ordine non deterministico di output non sincronizzate le chiamate a C e C++. Analogamente, non sincronizzate le chiamate a funzioni che leggono da nello stesso file di input possono leggere i dati in ordine non deterministica. Uso non sincronizzata dei / o, in modo che ogni thread accede a un altro file, produce gli stessi risultati di esecuzione seriale di funzioni dei / o.