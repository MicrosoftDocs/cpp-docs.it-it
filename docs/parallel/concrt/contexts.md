---
title: Contesti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- contexts [Concurrency Runtime]
ms.assetid: 10c1d861-8fbb-4ba0-b2ec-61876b11176e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fb14544a799861053c2fdf2a5bb92f210eb5c46
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163829"
---
# <a name="contexts"></a>Contesti

Questo documento descrive il ruolo dei contesti di Runtime di concorrenza. Un thread in cui è collegato a un'utilità di pianificazione è noto come un *contesto di esecuzione*, o semplicemente *contesto*. Il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione e la concorrenza::[alla classe contesto](../../parallel/concrt/reference/context-class.md) consentono di controllare il comportamento dei contesti. Usare il `wait` funzione sospendere il contesto corrente per un tempo specificato. Usare il `Context` classe quando è necessario maggiore controllo sulla quando contesti di bloccano, sbloccare e producono o quando si desidera oversubscription nel contesto corrente.

> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o nella [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.

## <a name="the-wait-function"></a>Il tempo di attesa (funzione)

Il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione in modo cooperativo l'esecuzione del contesto corrente per un numero specificato di millisecondi. Il runtime usa il tempo di restituzione per eseguire altre attività. Dopo che è trascorso il tempo specificato, il runtime Ripianifica il contesto per l'esecuzione. Pertanto, il `wait` funzione potrebbe sospendere il contesto corrente supera il valore fornito per il `milliseconds` parametro.

Passaggio 0 (zero) per il `milliseconds` parametro fa in modo che il runtime di sospendere il contesto corrente fino a quando tutti gli altri contesti attivi sono ha la possibilità di eseguire operazioni. Ciò consente di produrre un'attività per tutte le altre attività attive.

### <a name="example"></a>Esempio

Per un esempio che usa il `wait` funzione per restituire il contesto corrente e consente pertanto di altri contesti di esecuzione, vedere [procedura: usare i gruppi di pianificazione per influiscono sull'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).

## <a name="the-context-class"></a>La classe del contesto

La concorrenza::/[alla classe contesto](../../parallel/concrt/reference/context-class.md) fornisce un'astrazione di programmazione per un contesto di esecuzione e offre due funzionalità importanti: la possibilità di bloccare, sbloccare e restituire il contesto corrente in modo cooperativo e la possibilità di oversubscription nel contesto corrente.

### <a name="cooperative-blocking"></a>Blocco cooperativo

Il `Context` classe consente di bloccare o restituire il contesto di esecuzione corrente. Blocca o cede il controllo è utile quando il contesto corrente non può continuare perché non è disponibile una risorsa.

Il [Concurrency](reference/context-class.md#block) metodo si blocca il contesto corrente. Un contesto bloccato produce le relative risorse di elaborazione in modo che il runtime può eseguire altre attività. Il [concurrency::Context::Unblock](reference/context-class.md#unblock) metodo sblocca un contesto bloccato. Il `Context::Unblock` metodo deve essere chiamato da un contesto diverso da quello che ha chiamato `Context::Block`. Il runtime genera un'eccezione [context_self_unblock](../../parallel/concrt/reference/context-self-unblock-class.md) se il tentativo di sblocco di un contesto.

Per assegnare in modo cooperativo un blocco e sblocco di un contesto, in genere si chiama [concurrency::Context::CurrentContext](reference/context-class.md#currentcontext) per recuperare un puntatore per il `Context` oggetto associato al thread corrente e salvare il risultato. È quindi possibile chiamare il `Context::Block` per il blocco del contesto corrente. In un secondo momento, chiamare `Context::Unblock` da un contesto separato per sbloccare il contesto bloccato.

È necessario far corrispondere ogni coppia di chiamate a `Context::Block` e `Context::Unblock`. Il runtime genera un'eccezione [Concurrency:: context_unblock_unbalanced](../../parallel/concrt/reference/context-unblock-unbalanced-class.md) quando il `Context::Block` o `Context::Unblock` metodo viene chiamato consecutivamente senza una corrispondente chiamata all'altro metodo. Tuttavia, non è necessario chiamare `Context::Block` prima di chiamare `Context::Unblock`. Ad esempio, se un contesto chiama `Context::Unblock` prima che un altro contesto chiami `Context::Block` allo stesso contesto, tale contesto rimane sbloccato.

Il [Concurrency](reference/context-class.md#yield) metodo restituisce l'esecuzione in modo che il runtime può eseguire altre attività e quindi ripianificato il contesto per l'esecuzione. Quando si chiama il `Context::Block` metodo, il runtime non ripianificato il contesto.

#### <a name="example"></a>Esempio

Per un esempio che usa il `Context::Block`, `Context::Unblock`, e `Context::Yield` metodi da implementare una classe semaforo di cooperazione, vedere [procedura: usare la classe Context per implementare un semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).

##### <a name="oversubscription"></a>Oversubscription

L'utilità di pianificazione predefinita crea lo stesso numero di thread come thread hardware disponibili. È possibile usare *oversubscription* creare thread aggiuntivi per un thread di hardware specifico.

Per le operazioni con calcoli complessi, l'oversubscription in genere non scalabilità perché introduce un ulteriore sovraccarico. Tuttavia, per le attività che hanno una quantità elevata della latenza, ad esempio, la lettura dei dati dal disco o da una connessione di rete, l'oversubscription possa migliorare l'efficienza complessiva di alcune applicazioni.

> [!NOTE]
>  Abilitare l'oversubscription solo da un thread creato dal runtime di concorrenza. L'oversubscription non ha alcun effetto quando viene chiamato da un thread che non è stato creato dal runtime (tra cui il thread principale).

Per abilitare l'oversubscription nel contesto corrente, chiamare il [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) metodo con il `_BeginOversubscription` parametro impostato su **true**. Quando si abilita l'oversubscription su un thread creato dal Runtime di concorrenza, è possibile che il runtime creare un thread aggiuntivo. Dopo tutte le attività che richiedono l'oversubscription, chiamare `Context::Oversubscribe` con il `_BeginOversubscription` parametro impostato su **false**.

È possibile abilitare l'oversubscription più volte dal contesto corrente, ma è necessario disabilitare lo stesso numero di volte in cui viene abilitata. Oversubscription può anche essere annidata; vale a dire, un'attività che viene creata da un'altra attività che usa l'oversubscription può inoltre abilitare l'oversubscription relativo contesto. Tuttavia, se un'attività annidata sia padre appartengono allo stesso contesto, solo la chiamata più esterno per `Context::Oversubscribe` determina la creazione di un altro thread.

> [!NOTE]
>  Il runtime genera un'eccezione [Concurrency:: invalid_oversubscribe_operation](../../parallel/concrt/reference/invalid-oversubscribe-operation-class.md) se l'oversubscription viene disabilitato prima di essere abilitato.

###### <a name="example"></a>Esempio

Per un esempio che usa l'oversubscription per compensare la latenza causata dalla lettura di dati da una connessione di rete, vedere [procedura: usare l'Oversubscription alla latenza di Offset](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: Usare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)<br/>
[Procedura: Usare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br/>
[Procedura: Usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)

