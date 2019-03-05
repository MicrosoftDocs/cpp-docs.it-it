---
title: 'Multithreading: Come usare le classi di sincronizzazione di MFC'
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
ms.openlocfilehash: 6115d942abc61fbfc9d60ca1ccf97d4b423ff7c1
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304652"
---
# <a name="multithreading-how-to-use-the-mfc-synchronization-classes"></a>Multithreading: Come usare le classi di sincronizzazione di MFC

La sincronizzazione di accesso alle risorse tra i thread è un problema comune quando si scrivono applicazioni a thread multipli. Presenza di due o più thread che accedono contemporaneamente che gli stessi dati possono portare a risultati indesiderati e imprevedibili. Ad esempio, un thread è stato possibile l'aggiornamento del contenuto di una struttura mentre un altro thread sta leggendo il contenuto della stessa struttura. Non è possibile determinare quali dati riceverà il thread di lettura: i dati precedenti, i dati appena scritti o eventualmente una combinazione di entrambi. MFC fornisce una serie di sincronizzazione e le classi di accesso di sincronizzazione per aiuto nella risoluzione del problema. Questo argomento illustra le classi disponibili e su come usarli per creare classi thread-safe in una tipica applicazione a thread multipli.

Una tipica applicazione a thread multipli dispone di una classe che rappresenta una risorsa per essere condivisa tra thread. Una classe correttamente progettata, completamente thread-safe non richiede di chiamare le funzioni di sincronizzazione. Tutto ciò che viene gestito internamente per la classe, consentendo di concentrarsi su come utilizzare al meglio la classe, non sul modo in cui potrebbe ottenere danneggiato. Una tecnica efficace per la creazione di una classe completamente thread-safe è la classe di sincronizzazione di tipo merge nella classe di risorse. Unione delle classi di sincronizzazione alla classe condivisa è un processo semplice.

Ad esempio, eseguire un'applicazione che gestisce un elenco collegato dell'account. Questa applicazione consente fino a tre account da esaminare in finestre separate, ma solo uno può essere aggiornato in qualsiasi momento specifico. Quando viene aggiornato un account, i dati aggiornati vengono inviati attraverso la rete a un archivio dati.

Questa applicazione di esempio Usa tutti i tre tipi di classi di sincronizzazione. Poiché è consentito un massimo di tre account da esaminare in una sola volta, viene utilizzata [CSemaphore](../mfc/reference/csemaphore-class.md) per limitare l'accesso a tre oggetti di visualizzazione. Quando si tenta di visualizzare un quarto account si verifica, l'applicazione sia in attesa fino a quando una delle prime tre finestre chiude o si verifica un errore. Quando viene aggiornato un account, l'applicazione utilizza [CCriticalSection](../mfc/reference/ccriticalsection-class.md) per garantire che solo un account venga aggiornato contemporaneamente. Dopo l'aggiornamento ha esito positivo, viene segnalato [CEvent](../mfc/reference/cevent-class.md), che rilascia un thread in attesa per l'evento venga segnalato. Questo thread invia i dati di nuovo all'archivio dati.

##  <a name="_mfc_designing_a_thread.2d.safe_class"></a> Progettazione di una classe di Thread-Safe

Per rendere completamente thread-safe di una classe, aggiungere prima di tutto la classe di sincronizzazione appropriata alle classi condivise di un membro dati. Nell'esempio precedente di gestione degli account, un `CSemaphore` membro dati viene aggiunto alla classe di visualizzazione, una `CCriticalSection` membro dati viene aggiunto alla classe di elenco collegato e un `CEvent` membro dati viene aggiunto alla classe di archiviazione dei dati.

Aggiungere quindi le chiamate di sincronizzazione per tutte le funzioni membro che modificano i dati nella classe o accedono a una risorsa controllata. In ogni funzione, è necessario creare un [CSingleLock](../mfc/reference/csinglelock-class.md) oppure [CMultiLock](../mfc/reference/cmultilock-class.md) dell'oggetto e chiamare tale oggetto `Lock` (funzione). Quando l'oggetto di blocco diventa esterno all'ambito e viene eliminato definitivamente, viene chiamato il distruttore dell'oggetto `Unlock` , rilasciare la risorsa. Naturalmente, è possibile chiamare `Unlock` direttamente se si desidera.

Progettare le classi thread-safe in questo modo consente di poter essere utilizzato in un'applicazione multithreading come facilmente come una classe non thread-safe, ma con un livello superiore di sicurezza. Che incapsula l'oggetto di sincronizzazione e l'oggetto di accesso di sincronizzazione nella classe della risorsa fornisce tutti i vantaggi della programmazione completamente thread-safe senza lo svantaggio della gestione del codice di sincronizzazione.

Esempio di codice seguente viene illustrato questo metodo con un membro di dati `m_CritSection` (di tipo `CCriticalSection`), dichiarati nella classe di risorse condivise e un `CSingleLock` oggetto. La sincronizzazione della risorsa condivisa (derivato da `CWinThread`) viene eseguita mediante la creazione di un `CSingleLock` dell'oggetto usando l'indirizzo del `m_CritSection` oggetto. Viene effettuato un tentativo di bloccare la risorsa e, quando è stato acquistato, l'operazione viene eseguita sull'oggetto condiviso. Al termine il lavoro, la risorsa viene sbloccata con una chiamata a `Unlock`.

```
CSingleLock singleLock(&m_CritSection);
singleLock.Lock();
// resource locked
//.usage of shared resource...

singleLock.Unlock();
```

> [!NOTE]
> `CCriticalSection`, a differenza di altre classi di sincronizzazione di MFC, non dispone dell'opzione di una richiesta di blocco programmate. Il periodo di attesa per un thread diventi disponibile è infinito.

Lo svantaggio principale di questo approccio sono che la classe sarà leggermente più lenta rispetto alla stessa classe senza gli oggetti di sincronizzazione aggiunti. Inoltre, se è probabile che più thread potrebbero eliminare l'oggetto, l'approccio di unione potrebbe non funzionare. In questo caso, è preferibile mantenere gli oggetti di sincronizzazione separato.

Per informazioni su come determinare quale classe di sincronizzazione da usare in situazioni diverse, vedere [Multithreading: Quando usare le classi di sincronizzazione](multithreading-when-to-use-the-synchronization-classes.md). Per altre informazioni sulla sincronizzazione, vedere [sincronizzazione](/windows/desktop/Sync/synchronization) nel SDK di Windows. Per altre informazioni sul supporto del multithreading in MFC, vedere [Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md).

## <a name="see-also"></a>Vedere anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
