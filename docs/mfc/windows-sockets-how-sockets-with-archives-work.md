---
title: "Windows Sockets: funzionamento dei socket con archivi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "socket [C++], operazione sincrona"
  - "socket [C++], con archivi"
  - "socket di stato sincrono"
  - "oggetto socket a due stati"
  - "Windows Sockets [C++], sincrono"
  - "Windows Sockets [C++], con archivi"
ms.assetid: d8ae4039-391d-44f0-a19b-558817affcbb
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Windows Sockets: funzionamento dei socket con archivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato un oggetto di [CSocket](../mfc/reference/csocket-class.md), un oggetto [CSocketFile](../mfc/reference/csocketfile-class.md) e un oggetto di [CArchive](../mfc/reference/carchive-class.md) combinati per semplificare l'invio e la ricezione di dati da un socket di windows.  
  
 L'articolo [Windows Sockets: Esempio di socket utilizzando gli archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md) verifica la funzione di **PacketSerialize**.  L'oggetto dell'archivio di funzioni di esempio di **PacketSerialize** analogamente a un oggetto dell'archivio passato a una funzione MFC [Serializzare](../Topic/CObject::Serialize.md).  La differenza fondamentale è che per i socket, l'archivio non è associata a un oggetto standard di [File C](../mfc/reference/cfile-class.md) \(in genere associato a un file su disco\) ma a un oggetto di `CSocketFile`.  Anziché connessione a un file su disco, l'oggetto di `CSocketFile` connette a `CSocket` un oggetto.  
  
 Un oggetto di `CArchive` gestisce un buffer.  Quando il buffer di un archivio \(inviando\) archiviando è completo, un oggetto collegato di `CFile` scrive il contenuto del buffer.  Svuotare il buffer da un archivio associato a un socket equivale a inviare un messaggio.  Quando il buffer di un archivio di caricamento \(ricevere\) è completo, l'oggetto di `CFile` smette di lettura finché il buffer non sia ancora disponibile.  
  
 La classe `CSocketFile` deriva da `CFile`, ma non supporta le funzioni membro di [File C](../mfc/reference/cfile-class.md) come funzioni di posizionamento \(`Seek`, `GetLength`, `SetLength`, e così via\), il blocco viene eseguito \(`LockRange`, `UnlockRange`\), o la funzione di `GetPosition`.  Qualsiasi oggetto di [CSocketFile](../mfc/reference/csocketfile-class.md) deve fare è scrivere o leggere le sequenze di byte a `CSocket` collegato l'oggetto.  Poiché un file non è coinvolto, operazioni quali `Seek` e `GetPosition` non hanno significato.  `CSocketFile` è derivato da `CFile`, pertanto in genere erediterebbe tutte queste funzioni membro.  Per impedire questa, le funzioni membro non supportate di `CFile` a override in `CSocketFile` per generare [CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md).  
  
 Le funzioni membro di chiamate dell'oggetto di `CSocketFile` del `CSocket` oggetto per inviare o ricevere i dati.  
  
 Nella figura seguente vengono illustrate le relazioni tra questi oggetti da entrambi i lati di comunicazione.  
  
 ![CArchive, CSocketFile e CSocket](../mfc/media/vc38ia1.png "vc38IA1")  
CArchive, CSocketFile e CSocket  
  
 Lo scopo di questa complessità è evidente di salvaguardarsi dal rischio di necessità di gestire i dettagli di socket.  Creazione di socket, il file e l'archivio quindi avviare invio e ricezione di dati inserendolo nell'archivio o estraendolo dall'archivio.  [CArchive](../mfc/reference/carchive-class.md), [CSocketFile](../mfc/reference/csocketfile-class.md) e [CSocket](../mfc/reference/csocket-class.md) gestisce i dettagli in background.  
  
 Un oggetto di `CSocket` è in realtà un oggetto a due stati: talvolta asincrono \(lo stato normale\) e talvolta sincrono.  In lo stato asincrono, un blocco può ricevere notifiche asincrone dal framework.  Tuttavia, durante un'operazione come ricevere o inviare dati il blocco diventa sincrono.  Ciò significa che il blocco riceva notifiche asincrone non ulteriori l'operazione sincrona non è stato completato.  Poiché passa le modalità, è possibile, ad esempio, essere analogo al seguente:  
  
 [!code-cpp[NVC_MFCSimpleSocket#2](../mfc/codesnippet/CPP/windows-sockets-how-sockets-with-archives-work_1.cpp)]  
  
 Se `CSocket` non è stato implementato come un oggetto a due stati, potrebbe essere possibile ricevere le notifiche aggiuntive per lo stesso tipo di evento mentre si sviluppa una notifica precedente.  Ad esempio, è possibile ottenere una notifica di `OnReceive` mentre elaboravi `OnReceive`.  Nel frammento di codice riportato sopra, disegnare `str` dall'archivio potrebbe causare la ricorsione.  Passaggio degli stati, `CSocket` impedisce la ricorsione impedendo le notifiche aggiuntive.  La regola generale non è notifiche all'interno delle notifiche.  
  
> [!NOTE]
>  `CSocketFile` può essere utilizzato come file \(limitato\) a senza alcun oggetto di `CArchive`.  Per impostazione predefinita, il parametro di `bArchiveCompatible` del costruttore di `CSocketFile` è **TRUE**.  Viene specificato che l'oggetto file è con un archivio.  Per utilizzare l'oggetto file senza un archivio, passare **FALSE** nel parametro di `bArchiveCompatible`.  
  
 Nella modalità "compatibile dell'archivio", un oggetto `CSocketFile` offre prestazioni migliori e riduce il pericolo "di un deadlock." Un deadlock si verifica quando i socket l'invio di ricezioni in attesa su tra loro, o in attesa di una risorsa comune.  Questa situazione può verificarsi se l'oggetto di `CArchive` funzioni con `CSocketFile` il modo in cui in un oggetto di `CFile`.  Con `CFile`, l'archivio può presupporre che se riceve meno byte che ha richiesto, il fine del file è stato raggiunto.  Con `CSocketFile`, tuttavia, i dati vengono messaggio in base a; il buffer può contenere più messaggi, pertanto la ricezione di meno che il numero di byte richiesto non implica fine del file.  L'applicazione non si blocca in questo caso potrebbe ad esempio con `CFile` e può continuare a leggere i messaggi dal buffer fino a quando il buffer non sia vuoto.  La funzione di [IsBufferEmpty](../Topic/CArchive::IsBufferEmpty.md) in `CArchive` è utile per monitorare lo stato del buffer in questo caso.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con gli archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [CObject::Serialize](../Topic/CObject::Serialize.md)