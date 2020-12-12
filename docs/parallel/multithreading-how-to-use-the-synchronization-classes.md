---
description: 'Altre informazioni su: multithreading: come usare le classi di sincronizzazione MFC'
title: 'Multithreading: come usare le classi di sincronizzazione MFC'
ms.date: 08/27/2018
helpviewer_keywords:
- MFC [C++], multithreading
- threading [MFC], synchronization classes
- resources [C++], multithreading
- thread-safe classes [C++]
- synchronization classes [C++]
- synchronization [C++], multithreading
- threading [MFC], thread-safe class design
- threading [C++], synchronization
- multithreading [C++], synchronization classes
- threading [C++], thread-safe class design
ms.assetid: f266d4c6-0454-4bda-9758-26157ef74cc5
ms.openlocfilehash: a62bdba992ef8b65c14991da26e098f545c30ccd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149916"
---
# <a name="multithreading-how-to-use-the-mfc-synchronization-classes"></a>Multithreading: come usare le classi di sincronizzazione MFC

La sincronizzazione dell'accesso alle risorse tra thread è un problema comune durante la scrittura di applicazioni multithread. La presenza di due o più thread che accedono contemporaneamente agli stessi dati può produrre risultati indesiderati e imprevedibili. Ad esempio, un thread potrebbe aggiornare il contenuto di una struttura mentre un altro thread sta leggendo il contenuto della stessa struttura. Sono sconosciuti i dati che il thread di lettura riceverà: i dati precedenti, i dati appena scritti o eventualmente una combinazione di entrambi. MFC offre una serie di classi di accesso sincronizzate e di sincronizzazione per facilitare la risoluzione di questo problema. In questo argomento vengono illustrate le classi disponibili e viene illustrato come utilizzarle per creare classi thread-safe in una tipica applicazione multithreading.

Una tipica applicazione multithreading dispone di una classe che rappresenta una risorsa da condividere tra i thread. Una classe adeguatamente progettata e completamente thread-safe non richiede la chiamata di alcuna funzione di sincronizzazione. Tutto viene gestito internamente alla classe, consentendo di concentrarsi su come usare al meglio la classe, non su come potrebbe essere danneggiata. Una tecnica efficace per la creazione di una classe completamente thread-safe consiste nell'unire la classe di sincronizzazione alla classe di risorse. Il merge delle classi di sincronizzazione nella classe condivisa è un processo semplice.

Si prenda ad esempio un'applicazione che gestisce un elenco collegato di account. Questa applicazione consente di esaminare fino a tre account in finestre separate, ma solo una può essere aggiornata in un determinato momento. Quando viene aggiornato un account, i dati aggiornati vengono inviati in rete a un archivio dati.

Questa applicazione di esempio utilizza tutti e tre i tipi di classi di sincronizzazione. Poiché consente di esaminare fino a un massimo di tre account contemporaneamente, USA [CSemaphore](../mfc/reference/csemaphore-class.md) per limitare l'accesso a tre oggetti visualizzazione. Quando si verifica un quarto account, l'applicazione attende fino alla chiusura di una delle prime tre finestre o l'esito negativo. Quando un account viene aggiornato, l'applicazione utilizza [CCriticalSection](../mfc/reference/ccriticalsection-class.md) per garantire che un solo account venga aggiornato alla volta. Una volta completato l'aggiornamento, viene segnalato [CEvent](../mfc/reference/cevent-class.md), che rilascia un thread in attesa che venga segnalato l'evento. Questo thread invia i nuovi dati all'archivio dati.

## <a name="designing-a-thread-safe-class"></a><a name="_mfc_designing_a_thread.2d.safe_class"></a> Progettazione di una classe Thread-Safe

Per rendere una classe completamente thread-safe, aggiungere prima di tutto la classe di sincronizzazione appropriata alle classi condivise come membro dati. Nell'esempio precedente di gestione degli account, un `CSemaphore` membro dati viene aggiunto alla classe di visualizzazione, un `CCriticalSection` membro dati viene aggiunto alla classe elenco collegato e un `CEvent` membro dati viene aggiunto alla classe di archiviazione dati.

Aggiungere quindi le chiamate di sincronizzazione a tutte le funzioni membro che modificano i dati nella classe o accedono a una risorsa controllata. In ogni funzione è necessario creare un oggetto [CSingleLock](../mfc/reference/csinglelock-class.md) o [CMultiLock](../mfc/reference/cmultilock-class.md) e chiamare la funzione dell'oggetto `Lock` . Quando l'oggetto Lock esce dall'ambito e viene eliminato definitivamente, il distruttore dell'oggetto chiama `Unlock` per l'utente, rilasciando la risorsa. Naturalmente, è possibile chiamare `Unlock` direttamente se lo si desidera.

La progettazione di una classe thread-safe in questo modo consente di usarla in un'applicazione multithreading con la stessa facilità di una classe non thread-safe, ma con un livello di sicurezza più elevato. L'incapsulamento dell'oggetto di sincronizzazione e dell'oggetto di accesso alla sincronizzazione nella classe della risorsa fornisce tutti i vantaggi della programmazione completamente thread-safe senza la necessità di gestire il codice di sincronizzazione.

Nell'esempio di codice riportato di seguito viene illustrato questo metodo utilizzando un membro dati, `m_CritSection` (di tipo `CCriticalSection` ), dichiarati nella classe di risorse condivisa e in un `CSingleLock` oggetto. Si tenta di eseguire la sincronizzazione della risorsa condivisa (derivata da `CWinThread` ) creando un `CSingleLock` oggetto utilizzando l'indirizzo dell' `m_CritSection` oggetto. Si è tentato di bloccare la risorsa e, se ottenuta, il lavoro viene eseguito sull'oggetto condiviso. Al termine del lavoro, la risorsa viene sbloccata con una chiamata a `Unlock` .

```cpp
CSingleLock singleLock(&m_CritSection);
singleLock.Lock();
// resource locked
//.usage of shared resource...

singleLock.Unlock();
```

> [!NOTE]
> `CCriticalSection`, a differenza di altre classi di sincronizzazione MFC, non ha l'opzione di una richiesta di blocco temporizzata. Il periodo di attesa per un thread diventa libero è infinito.

Gli svantaggi di questo approccio sono che la classe sarà leggermente più lenta rispetto alla stessa classe senza gli oggetti di sincronizzazione aggiunti. Inoltre, se è possibile che più thread eliminino l'oggetto, l'approccio Unito potrebbe non sempre funzionare. In questa situazione è preferibile mantenere oggetti di sincronizzazione distinti.

Per informazioni su come determinare la classe di sincronizzazione da usare in situazioni diverse, vedere [multithreading: quando usare le classi di sincronizzazione](multithreading-when-to-use-the-synchronization-classes.md). Per ulteriori informazioni sulla sincronizzazione, vedere la pagina relativa alla [sincronizzazione](/windows/win32/Sync/synchronization) nella Windows SDK. Per ulteriori informazioni sul supporto del multithreading in MFC, vedere [multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md).

## <a name="see-also"></a>Vedi anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
