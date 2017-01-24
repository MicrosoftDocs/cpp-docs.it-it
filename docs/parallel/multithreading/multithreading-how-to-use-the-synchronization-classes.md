---
title: "Multithreading: utilizzo delle classi di sincronizzazione | Microsoft Docs"
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
helpviewer_keywords: 
  - "MFC [C++], multithreading"
  - "multithreading [C++], classi di sincronizzazione"
  - "risorse [C++], multithreading"
  - "sincronizzazione [C++], multithreading"
  - "sincronizzazione (classi) [C++]"
  - "threading [C++], sincronizzazione"
  - "threading [C++], progettazione di classi thread-safe"
  - "threading [MFC], classi di sincronizzazione"
  - "threading [MFC], progettazione di classi thread-safe"
  - "classi thread-safe [C++]"
ms.assetid: f266d4c6-0454-4bda-9758-26157ef74cc5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading: utilizzo delle classi di sincronizzazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La sincronizzazione dell'accesso alle risorse tra i thread è un problema comune quando si scrivono applicazioni multithread.  La presenza di due o più thread che accedono contemporaneamente agli stessi dati può portare a risultati indesiderati e imprevisti.  È possibile, ad esempio, che in un thread sia in corso l'aggiornamento del contenuto di una struttura, mentre in un altro la lettura del contenuto della stessa struttura.  Non è possibile stabilire quali dati verranno ricevuti dal thread di lettura: se quelli vecchi, quelli appena scritti oppure una combinazione di entrambi.  Per risolvere il problema, in MFC sono disponibili diverse classi di sincronizzazione e classi di accesso alla sincronizzazione.  In questo argomento vengono descritte le classi disponibili e come utilizzarle per creare classi thread\-safe all'interno di una tipica applicazione multithread.  
  
 In una tipica applicazione multithread è disponibile una classe che rappresenta una risorsa da condividere tra i thread.  Una classe progettata in modo corretto e completamente thread\-safe, non è necessaria la chiamata di alcuna funzione di sincronizzazione.  Ogni operazione viene gestita all'interno della classe, consentendo di concentrarsi sull'utilizzo ottimale della classe, anziché sui danni che potrebbe subire.  Una tecnica efficace per creare una classe completamente thread\-safe consiste nell'unione di una classe di sincronizzazione alla classe della risorsa.  L'unione delle classi di sincronizzazione alla classe condivisa è un processo semplice.  
  
 Si consideri ad esempio un'applicazione che consente di gestire un elenco collegato di account.  L'applicazione consente di esaminare fino a tre account all'interno di finestre distinte, ma è possibile aggiornare solo un account alla volta.  Quando un account viene aggiornato, i dati aggiornati vengono inviati in rete a un archivio di dati.  
  
 Nell'applicazione di esempio vengono utilizzati tutti e tre i tipi di classi di sincronizzazione.  Poiché è consentito esaminare contemporaneamente fino a tre account, viene utilizzata [CSemaphore](../../mfc/reference/csemaphore-class.md) per limitare l'accesso ai tre oggetti.  Quando si tenta di visualizzare un quarto account, viene attesa la chiusura di una delle tre finestre oppure viene restituito un errore.  Quando un account viene aggiornato, viene utilizzata [CCriticalSection](../../mfc/reference/ccriticalsection-class.md) per garantire che venga aggiornato un solo account alla volta.  L'aggiornamento, una volta terminato, viene segnalato a [CEvent](../../mfc/reference/cevent-class.md), che rilascia un thread in attesa della segnalazione dell'evento.  Con questo thread, i nuovi dati vengono inviati all'archivio dati.  
  
##  <a name="_mfc_designing_a_thread.2d.safe_class"></a> Progettazione di una classe thread\-safe  
 Per creare una classe completamente thread\-safe, aggiungere innanzitutto la classe di sincronizzazione corretta alle classi condivise come membro dati.  Nel precedente esempio di gestione degli account, un membro dati **CSemaphore** viene aggiunto alla classe di visualizzazione, un membro dati `CCriticalSection` viene aggiunto alla classe di elenco collegato e un membro dati `CEvent` viene aggiunto alla classe di archiviazione dei dati.  
  
 Aggiungere quindi le chiamate di sincronizzazione a tutte le funzioni membro che modificano i dati della classe o che accedono a una risorsa controllata.  In ogni funzione è necessario creare un oggetto [CSingleLock](../../mfc/reference/csinglelock-class.md) oppure [CMultiLock](../../mfc/reference/cmultilock-class.md) e chiamare la funzione `Lock` dell'oggetto.  Quando l'oggetto di accesso alla sincronizzazione non rientra più nell'area di validità e viene eliminato, viene chiamato automaticamente `Unlock` dal relativo distruttore, rilasciando la risorsa.  Naturalmente, se si desidera, è possibile chiamare direttamente `Unlock`.  
  
 Le classi thread\-safe progettate in questo modo possono essere utilizzate all'interno di un'applicazione multithread con la stessa facilità delle classi dipendenti dai thread, ma con un livello di sicurezza superiore.  Incapsulando l'oggetto di sincronizzazione e l'oggetto di accesso alla sincronizzazione nella classe della risorsa, si ottengono tutti i vantaggi di una programmazione completamente thread\-safe, senza lo svantaggio di dover gestire il codice di sincronizzazione.  
  
 Nell'esempio di codice riportato di seguito viene illustrato questo metodo utilizzando un membro dati, `m_CritSection` di tipo `CCriticalSection`, dichiarato nella classe della risorsa condivisa e un oggetto `CSingleLock`.  La sincronizzazione della risorsa condivisa, derivata da `CWinThread`, viene eseguita mediante la creazione di un oggetto `CSingleLock` tramite l'indirizzo dell'oggetto `m_CritSection`.  Viene eseguito un tentativo di bloccare la risorsa e, una volta impostato il blocco, l'operazione viene eseguita sull'oggetto condiviso.  Una volta terminata l'operazione, la risorsa viene sbloccata tramite una chiamata a `Unlock`.  
  
```  
CSingleLock singleLock(&m_CritSection);  
singleLock.Lock();  
// resource locked  
//.usage of shared resource...  
  
singleLock.Unlock();  
```  
  
> [!NOTE]
>  Diversamente da altre classi di sincronizzazione di MFC, `CCriticalSection` non dispone dell'opzione di richiesta di blocco temporizzata.  Il periodo di attesa prima che un thread diventi disponibile è infinito.  
  
 Lo svantaggio principale di tale approccio consiste nella maggiore lentezza della classe rispetto alla stessa classe a cui non siano stati aggiunti oggetti di sincronizzazione.  Se inoltre esiste la possibilità che l'oggetto venga cancellato da più thread, l'approccio di unione potrebbe non funzionare sempre.  In questa situazione è preferibile gestire oggetti di sincronizzazione distinti.  
  
 Per informazioni sulla determinazione della classe di sincronizzazione da utilizzare nelle diverse situazioni, vedere [Multithreading: quando utilizzare le classi di sincronizzazione](../../parallel/multithreading-when-to-use-the-synchronization-classes.md).  Per ulteriori informazioni sulla sincronizzazione, vedere [Synchronization](http://msdn.microsoft.com/library/windows/desktop/ms686353) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  Per ulteriori informazioni sul supporto delle operazioni multithread in MFC, vedere [Multithreading con C\+\+ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md).  
  
## Vedere anche  
 [Multithreading con C\+\+ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md)