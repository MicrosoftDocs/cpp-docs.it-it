---
description: 'Altre informazioni su: contesti'
title: Contesti
ms.date: 11/04/2016
helpviewer_keywords:
- contexts [Concurrency Runtime]
ms.assetid: 10c1d861-8fbb-4ba0-b2ec-61876b11176e
ms.openlocfilehash: 70c97b74afaaa755a85532c7bc08a3a5c5fe3e17
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325771"
---
# <a name="contexts"></a>Contesti

In questo documento viene descritto il ruolo dei contesti nella runtime di concorrenza. Un thread associato a un'utilità di pianificazione è noto come contesto di *esecuzione* oppure solo come *contesto*. La funzione [Concurrency:: wait](reference/concurrency-namespace-functions.md#wait) e la classe Concurrency::[context](../../parallel/concrt/reference/context-class.md) consentono di controllare il comportamento dei contesti. Utilizzare la `wait` funzione per sospendere il contesto corrente per un periodo di tempo specificato. Utilizzare la `Context` classe quando è necessario un maggiore controllo sui casi in cui i contesti sono Block, Unblock e yield oppure quando si desidera sovrascrivere il contesto corrente.

> [!TIP]
> Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché il Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con l'runtime di concorrenza.

## <a name="the-wait-function"></a>Funzione wait

La funzione [Concurrency:: wait](reference/concurrency-namespace-functions.md#wait) restituisce in modo cooperativo l'esecuzione del contesto corrente per un numero specificato di millisecondi. Il runtime usa il tempo di snervamento per eseguire altre attività. Dopo che è trascorso il tempo specificato, il runtime Ripianifica il contesto per l'esecuzione. La `wait` funzione potrebbe pertanto sospendere il contesto corrente più a lungo del valore specificato per il `milliseconds` parametro.

Se si passa 0 (zero) per il `milliseconds` parametro, il Runtime sospende il contesto corrente fino a quando tutti gli altri contesti attivi non hanno la possibilità di eseguire il lavoro. Ciò consente di generare un'attività per tutte le altre attività attive.

### <a name="example"></a>Esempio

Per un esempio in cui viene `wait` usata la funzione per produrre il contesto corrente e consentire l'esecuzione di altri contesti, vedere [procedura: usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

## <a name="the-context-class"></a>Classe Context

La classe Concurrency::[context](../../parallel/concrt/reference/context-class.md) fornisce un'astrazione di programmazione per un contesto di esecuzione e offre due funzionalità importanti: la possibilità di bloccare, sbloccare e restituire il contesto corrente in modo cooperativo e la possibilità di sovrascrivere il contesto corrente.

### <a name="cooperative-blocking"></a>Blocco cooperativo

La `Context` classe consente di bloccare o produrre il contesto di esecuzione corrente. Il blocco o il cedimento è utile quando il contesto corrente non può continuare perché una risorsa non è disponibile.

Il metodo [Concurrency:: context:: Block](reference/context-class.md#block) blocca il contesto corrente. Un contesto bloccato restituisce le risorse di elaborazione in modo che il runtime possa eseguire altre attività. Il metodo [Concurrency:: context:: Unblock](reference/context-class.md#unblock) sblocca un contesto bloccato. Il `Context::Unblock` metodo deve essere chiamato da un contesto diverso da quello che ha chiamato `Context::Block` . Il runtime genera [Concurrency:: context_self_unblock](../../parallel/concrt/reference/context-self-unblock-class.md) se un contesto tenta di sbloccarsi.

Per bloccare e sbloccare in modo cooperativo un contesto, in genere si chiama [Concurrency:: context:: CurrentContext](reference/context-class.md#currentcontext) per recuperare un puntatore all' `Context` oggetto associato al thread corrente e salvare il risultato. Chiamare quindi il `Context::Block` metodo per bloccare il contesto corrente. In un secondo momento, chiamare `Context::Unblock` da un contesto separato per sbloccare il contesto bloccato.

È necessario associare ogni coppia di chiamate a `Context::Block` e `Context::Unblock` . Il runtime genera [Concurrency:: context_unblock_unbalanced](../../parallel/concrt/reference/context-unblock-unbalanced-class.md) quando il `Context::Block` `Context::Unblock` metodo o viene chiamato consecutivamente senza una chiamata corrispondente all'altro metodo. Tuttavia, non è necessario chiamare prima di `Context::Block` chiamare `Context::Unblock` . Se, ad esempio, un contesto chiama `Context::Unblock` prima che un altro contesto chiami `Context::Block` per lo stesso contesto, il contesto rimane sbloccato.

Il metodo [Concurrency:: context:: Yield](reference/context-class.md#yield) produce l'esecuzione in modo che il runtime possa eseguire altre attività e quindi ripianificare il contesto per l'esecuzione. Quando si chiama il `Context::Block` metodo, il runtime non esegue la ripianificazione del contesto.

#### <a name="example"></a>Esempio

Per un esempio in cui vengono usati i `Context::Block` `Context::Unblock` metodi, e `Context::Yield` per implementare una classe semaforo cooperativa, vedere [procedura: usare la classe Context per implementare un semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).

##### <a name="oversubscription"></a>Oversubscription

L'utilità di pianificazione predefinita crea lo stesso numero di thread in quanto sono presenti thread hardware disponibili. È possibile usare l' *oversubscription* per creare thread aggiuntivi per un determinato thread hardware.

Per le operazioni con utilizzo intensivo di calcolo, l'oversubscription non viene in genere ridimensionato perché introduce un sovraccarico aggiuntivo. Tuttavia, per le attività con una latenza elevata, ad esempio la lettura di dati dal disco o da una connessione di rete, l'oversubscription può migliorare l'efficienza complessiva di alcune applicazioni.

> [!NOTE]
> Abilitare l'oversubscription solo da un thread creato dal runtime di concorrenza. L'oversubscription non ha alcun effetto quando viene chiamato da un thread che non è stato creato dal runtime (incluso il thread principale).

Per abilitare l'oversubscription nel contesto corrente, chiamare il metodo [Concurrency:: context:: Oversubscribe](reference/context-class.md#oversubscribe) con il `_BeginOversubscription` parametro impostato su **`true`** . Quando si Abilita l'oversubscription in un thread creato dal runtime di concorrenza, il runtime crea un thread aggiuntivo. Al termine di tutte le attività che richiedono l'oversubscription, chiamare `Context::Oversubscribe` con il `_BeginOversubscription` parametro impostato su **`false`** .

È possibile abilitare l'oversubscription più volte dal contesto corrente, ma è necessario disabilitarlo lo stesso numero di volte in cui lo si Abilita. L'oversubscription può anche essere annidato; ovvero un'attività creata da un'altra attività che utilizza oversubscription può anche sovrascrivere il proprio contesto. Tuttavia, se un'attività annidata e il relativo elemento padre appartengono allo stesso contesto, solo la chiamata più esterna a `Context::Oversubscribe` causa la creazione di un thread aggiuntivo.

> [!NOTE]
> Il runtime genera [Concurrency:: invalid_oversubscribe_operation](../../parallel/concrt/reference/invalid-oversubscribe-operation-class.md) se oversubscription è disabilitato prima di essere abilitato.

###### <a name="example"></a>Esempio

Per un esempio che usa l'oversubscription per compensare la latenza causata dalla lettura dei dati da una connessione di rete, vedere [procedura: usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

## <a name="see-also"></a>Vedi anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)<br/>
[Procedura: usare la classe Context per implementare un semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br/>
[Procedura: usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)
