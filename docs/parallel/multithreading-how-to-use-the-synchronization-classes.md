---
title: 'Multithreading: Utilizzo delle classi di sincronizzazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 49b0737a794216c4899b280bc049a1cdc0fe0948
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="multithreading-how-to-use-the-synchronization-classes"></a>Multithreading: utilizzo delle classi di sincronizzazione
La sincronizzazione di accesso alle risorse tra i thread è un problema comune quando si scrivono applicazioni multithreading. Presenza di due o più thread che accedono contemporaneamente che gli stessi dati possono produrre risultati indesiderati e imprevedibili. Ad esempio, un thread può essere l'aggiornamento il contenuto di una struttura mentre un altro thread sta leggendo il contenuto della stessa struttura. Non è noto a quali dati verrà visualizzato il thread di lettura: i dati precedenti, i dati appena scritti o eventualmente una combinazione di entrambi. MFC fornisce una serie di sincronizzazione e le classi di accesso di sincronizzazione per facilitare la risoluzione del problema. In questo argomento illustra le classi disponibili e come utilizzarle per creare classi thread-safe in una tipica applicazione multithread.  
  
 Una tipica applicazione multithread dispone di una classe che rappresenta una risorsa condivisa tra thread. Una classe progettata correttamente completamente thread-safe non è necessario chiamare le funzioni di sincronizzazione. Tutto ciò che viene gestita internamente alla classe, consentendo di concentrarsi su come ottimizzare l'utilizzo della classe, non sulla modalità potrebbe ottenere danneggiato. Una tecnica efficace per la creazione di una classe completamente thread-safe è la classe di sincronizzazione alla classe della risorsa di tipo merge. L'unione delle classi di sincronizzazione alla classe condivisa è un processo semplice.  
  
 Ad esempio, eseguire un'applicazione che mantiene un elenco collegato di account. Questa applicazione consente di esaminare in finestre distinte fino a tre account, ma solo uno può essere aggiornato in un determinato momento. Quando viene aggiornato un account, i dati aggiornati sono inviati in rete in un archivio dati.  
  
 Questa applicazione di esempio utilizza i tre tipi di classi di sincronizzazione. Poiché è consentito un massimo di tre account da esaminare in una sola volta, viene usata la [CSemaphore](../mfc/reference/csemaphore-class.md) per limitare l'accesso ai tre oggetti. Quando si tenta di visualizzare un quarto account si verifica, l'applicazione sia attende fino a quando una delle prime tre finestre chiude o si verifica un errore. Quando viene aggiornato un account, l'applicazione utilizza [CCriticalSection](../mfc/reference/ccriticalsection-class.md) per assicurare che solo un account di aggiornamento alla volta. Dopo l'aggiornamento ha esito positivo, viene segnalato [CEvent](../mfc/reference/cevent-class.md), che rilascia un thread in attesa per l'evento venga segnalato. Questo thread invia i nuovi dati nell'archivio dati.  
  
##  <a name="_mfc_designing_a_thread.2d.safe_class"></a> Progettazione di una classe Thread-Safe  
 Per creare una classe completamente thread-safe, aggiungere prima la classe di sincronizzazione appropriate alle classi condivise di un membro dati. Nell'esempio precedente, gestione degli account un **CSemaphore** membro dati viene aggiunto alla classe di visualizzazione, un `CCriticalSection` membro dati viene aggiunto alla classe di elenco collegato e un `CEvent` membro dati viene aggiunto ai dati classe di archiviazione.  
  
 Successivamente, aggiungere le chiamate di sincronizzazione per tutte le funzioni membro che modificano i dati nella classe o di accedono a una risorsa controllata. In ogni funzione, è necessario creare un [CSingleLock](../mfc/reference/csinglelock-class.md) o [CMultiLock](../mfc/reference/cmultilock-class.md) e chiamare l'oggetto `Lock` (funzione). Quando l'oggetto di blocco diventa esterno all'ambito e viene eliminato, viene chiamato il distruttore dell'oggetto `Unlock` , il rilascio della risorsa. Naturalmente, è possibile chiamare `Unlock` direttamente se si desidera.  
  
 Progettare le classi thread-safe in questo modo consente che venga utilizzata in un'applicazione multithreading come facilmente come una classe non thread-safe, ma con un livello più elevato di sicurezza. Che incapsula l'oggetto di sincronizzazione e l'oggetto di accesso di sincronizzazione nella classe della risorsa fornisce tutti i vantaggi della programmazione completamente thread-safe senza lo svantaggio di gestione del codice di sincronizzazione.  
  
 Esempio di codice seguente viene illustrato questo metodo con un membro dati, `m_CritSection` (di tipo `CCriticalSection`), dichiarato nella classe della risorsa condivisa e un `CSingleLock` oggetto. La sincronizzazione della risorsa condivisa (derivato da `CWinThread`) viene eseguita mediante la creazione di un `CSingleLock` oggetto utilizzando l'indirizzo del `m_CritSection` oggetto. Viene effettuato un tentativo di bloccare la risorsa e, quando ottenuto, l'operazione viene eseguita sull'oggetto condiviso. Al termine il lavoro, la risorsa viene sbloccata con una chiamata a `Unlock`.  
  
```  
CSingleLock singleLock(&m_CritSection);  
singleLock.Lock();  
// resource locked  
//.usage of shared resource...  
  
singleLock.Unlock();  
```  
  
> [!NOTE]
>  `CCriticalSection`, a differenza di altre classi di sincronizzazione di MFC, non ha l'opzione di una richiesta di blocco programmato. Il periodo di attesa per un thread diventi disponibile è infinito.  
  
 Gli svantaggi di questo approccio sono che la classe sarà leggermente più lenta rispetto alla stessa classe senza aggiungere gli oggetti di sincronizzazione. Inoltre, se esiste una possibilità che più thread elimini l'oggetto, l'approccio di unione potrebbe non funzionare sempre. In questo caso, è preferibile mantenere gli oggetti di sincronizzazione separato.  
  
 Per informazioni su come determinare le classi di sincronizzazione da usare in situazioni diverse, vedere [Multithreading: quando utilizzare le classi di sincronizzazione](../parallel/multithreading-when-to-use-the-synchronization-classes.md). Per ulteriori informazioni sulla sincronizzazione, vedere [sincronizzazione](http://msdn.microsoft.com/library/windows/desktop/ms686353) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)]. Per ulteriori informazioni sul supporto multithreading in MFC, vedere [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)