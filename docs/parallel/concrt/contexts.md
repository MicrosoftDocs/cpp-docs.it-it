---
title: Contesti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: contexts [Concurrency Runtime]
ms.assetid: 10c1d861-8fbb-4ba0-b2ec-61876b11176e
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e77ee30c284797f0e16f5a28787c065faa9e9e29
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="contexts"></a>Contesti

Questo documento descrive il ruolo dei contesti nel Runtime di concorrenza. Un thread che è collegato a un'utilità di pianificazione è noto come un *contesto di esecuzione*, o semplicemente *contesto*. Il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione e la concorrenza::[classe contesto](../../parallel/concrt/reference/context-class.md) consentono di controllare il comportamento dei contesti. Utilizzare il `wait` funzione di sospendere il contesto corrente per un tempo specificato. Utilizzare la `Context` classe quando è necessario un maggiore controllo su quando contesti di bloccano, sbloccare e restituire o quando si desidera oversubscription nel contesto corrente.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
## <a name="the-wait-function"></a>Funzione wait  

 Il [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione restituisce in modo cooperativo l'esecuzione del contesto corrente per un numero specificato di millisecondi. Il runtime utilizza il tempo di restituzione per eseguire altre attività. Una volta trascorso il tempo specificato, il runtime Ripianifica il contesto per l'esecuzione. Pertanto, il `wait` funzione potrebbe sospendere il contesto corrente supera il valore fornito per il `milliseconds` parametro.  
  
 Il valore 0 (zero) il `milliseconds` parametro, il runtime di sospendere il contesto corrente fino a quando tutti gli altri contesti attivi hanno la possibilità di eseguire operazioni. Ciò consente di restituire un'attività per tutte le altre attività attive.  
  
### <a name="example"></a>Esempio  
 Per un esempio che utilizza il `wait` funzione per restituire il contesto corrente e consentono quindi altri contesti di esecuzione, vedere [procedura: utilizzare i gruppi di pianificazione per influiscono sull'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md).  
  
## <a name="the-context-class"></a>La classe Context  
 La concorrenza::[classe contesto](../../parallel/concrt/reference/context-class.md) fornisce un'astrazione di programmazione per un contesto di esecuzione e offre due funzionalità importanti: la possibilità di bloccare, sbloccare e restituire il contesto corrente in modo cooperativo e la possibilità di oversubscription nel contesto corrente.  
  
### <a name="cooperative-blocking"></a>Il blocco cooperativo  
 La `Context` classe consente di bloccare o restituire il contesto di esecuzione corrente. Blocca o cede il controllo è utile quando il contesto corrente non può continuare perché non è disponibile una risorsa.  
  

 Il [concurrency::Context::Block](reference/context-class.md#block) metodo blocca il contesto corrente. Un contesto bloccato restituisce le risorse di elaborazione in modo che il runtime può eseguire altre attività. Il [concurrency::Context::Unblock](reference/context-class.md#unblock) metodo sblocca un contesto bloccato. Il `Context::Unblock` metodo deve essere chiamato da un contesto diverso da quello che ha chiamato `Context::Block`. Il runtime genera [Concurrency:: context_self_unblock](../../parallel/concrt/reference/context-self-unblock-class.md) se un contesto tenta di sbloccarsi.  
  
 Per fare in modo cooperativo bloccare e sbloccare un contesto, in genere si chiama [concurrency::Context::CurrentContext](reference/context-class.md#currentcontext) per recuperare un puntatore per il `Context` oggetto associato al thread corrente e salvare il risultato. Chiamare quindi il `Context::Block` metodo per bloccare il contesto corrente. Successivamente, chiamare `Context::Unblock` da un contesto separato per sbloccare il contesto bloccato.  
  
 È necessario far corrispondere ogni coppia di chiamate a `Context::Block` e `Context::Unblock`. Il runtime genera [Concurrency:: context_unblock_unbalanced](../../parallel/concrt/reference/context-unblock-unbalanced-class.md) quando il `Context::Block` o `Context::Unblock` metodo viene chiamato consecutivamente senza una chiamata corrispondente a altro metodo. Tuttavia, non è necessario chiamare `Context::Block` prima di chiamare `Context::Unblock`. Ad esempio, se un contesto chiama `Context::Unblock` prima che un altro contesto chiami `Context::Block` per lo stesso contesto, tale contesto rimarrà sbloccato.  
  
 Il [Concurrency](reference/context-class.md#yield) metodo restituisce l'esecuzione in modo che il runtime può eseguire altre attività e quindi ripianificare il contesto per l'esecuzione. Quando si chiama il `Context::Block` (metodo), il runtime Ripianifica il contesto.  

  
#### <a name="example"></a>Esempio  
 Per un esempio che utilizza il `Context::Block`, `Context::Unblock`, e `Context::Yield` metodi per implementare una classe semaforo di cooperazione, vedere [procedura: utilizzare la classe Context per implementare una classe semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md).  
  
##### <a name="oversubscription"></a>Oversubscription  
 Utilità di pianificazione predefinita crea lo stesso numero di thread sono disponibili thread hardware disponibili. È possibile utilizzare *l'oversubscription* per creare thread aggiuntivi per un thread di hardware specificato.  
  
 Per le operazioni con calcoli complessi, l'oversubscription in genere non è scalabile perché introduce un ulteriore sovraccarico. Tuttavia, per le attività che dispongono di una quantità elevata di latenza, ad esempio, la lettura dei dati dal disco o da una connessione di rete, l'oversubscription può migliorare l'efficienza complessiva di alcune applicazioni.  
  
> [!NOTE]
>  Abilitare l'oversubscription solo da un thread creato dal runtime di concorrenza. Oversubscription non ha effetto quando viene chiamato da un thread che non è stato creato dal runtime (incluso il thread principale).  
  
 Per abilitare l'oversubscription nel contesto corrente, chiamare il [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) metodo con il `_BeginOversubscription` parametro impostato su `true`. Quando si abilita l'oversubscription su un thread che è stato creato dal Runtime di concorrenza, viene generata al runtime di creare un thread aggiuntivo. Dopo tutte le attività che richiedono l'oversubscription, chiamare il metodo `Context::Oversubscribe` con il `_BeginOversubscription` parametro impostato su `false`.  

  
 È possibile abilitare l'oversubscription più volte dal contesto corrente, ma è necessario disabilitare lo stesso numero di volte in cui è abilitarlo. L'oversubscription può anche essere nidificata. vale a dire, un'attività che viene creata da un'altra attività che utilizza l'oversubscription può inoltre abilitare l'oversubscription relativo contesto. Tuttavia, se un'attività annidata sia padre appartengono allo stesso contesto solo la chiamata più esterno per `Context::Oversubscribe` determina la creazione di un altro thread.  
  
> [!NOTE]
>  Il runtime genera [Concurrency:: invalid_oversubscribe_operation](../../parallel/concrt/reference/invalid-oversubscribe-operation-class.md) se l'oversubscription viene disabilitato prima di essere abilitato.  
  
###### <a name="example"></a>Esempio  
 Per un esempio che utilizza l'oversubscription per compensare la latenza causata dalla lettura dei dati da una connessione di rete, vedere [procedura: utilizzare l'Oversubscription alla latenza di Offset](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: utilizzare i gruppi di pianificazione per influenzare l'ordine di esecuzione](../../parallel/concrt/how-to-use-schedule-groups-to-influence-order-of-execution.md)   
 [Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)   
 [Procedura: Usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)

