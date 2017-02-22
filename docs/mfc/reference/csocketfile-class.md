---
title: "CSocketFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSocketFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "archives [C++], rete"
  - "CSocketFile class"
  - "networks [C++], archive"
  - "networks [C++], serializing to"
  - "serializzazione [C++], rete"
  - "SOCKET handle"
ms.assetid: 7924c098-5f72-40d6-989d-42800a47958f
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CSocketFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un oggetto `CFile` utilizzato per l'invio e la ricezione dei dati tramite una rete mediante Windows Sockets.  
  
## Sintassi  
  
```  
class CSocketFile : public CFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocketFile::CSocketFile](../Topic/CSocketFile::CSocketFile.md)|Costruisce un oggetto `CSocketFile`.|  
  
## Note  
 È possibile associare l'oggetto `CSocketFile` a un oggetto `CSocket` a questo scopo.  È anche possibile e generalmente accade, associare l'oggetto `CSocketFile` a un oggetto `CArchive` per semplificare l'invio e la ricezione dei dati mediante la serializzazione MFC.  
  
 Per serializzare \(inviare i dati, la inserisce nell'archivio, che chiama le funzioni membro `CSocketFile` per scrivere i dati all'oggetto `CSocket`.  Per deserializzare \(ricevere i dati, vengono estratti dall'archivio.  In questo modo il file a chiamare le funzioni membro `CSocketFile` per leggere i dati dall'oggetto `CSocket`.  
  
> [!TIP]
>  Oltre a utilizzare `CSocketFile` come descritto di seguito, è possibile utilizzarlo come oggetto file autonomo, come accade per `CFile`, la classe di base.  È inoltre possibile utilizzare `CSocketFile` con tutte le funzioni all'archivio di serializzazione MFC.  Poiché `CSocketFile` non supporta tutte le funzionalità di `CFile`, alcune impostazione predefinita MFC serializza le funzioni non è compatibile con `CSocketFile`.  Ciò è particolarmente vero per la classe `CEditView`.  Non tentare di serializzare i dati `CEditView` tramite un oggetto `CArchive` associato a un oggetto `CSocketFile` utilizzando `CEditView::SerializeRaw`; utilizzo **CEditView::Serialize** anziché.  La funzione `SerializeRaw` che l'oggetto file per avere funzioni, come `Seek`, che `CSocketFile` non ha.  
  
 Quando si utilizza `CArchive` con `CSocketFile` e `CSocket`, potrebbe verificarsi una situazione in cui **CSocket::Receive** immette un ciclo \(da **PumpMessages\(FD\_READ\)**\) che attende la quantità richiesta di byte.  Questo perché i socket di Windows consente solo una chiamata di recv per notifica di FD\_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di recv per FD\_READ.  Se viene visualizzato un FD\_READ quando non vi sono dati da leggere, verrà bloccato.  Se non si ottengono mai un altro FD\_READ, l'applicazione termina la sessione di per comunicare su socket.  
  
 È possibile risolvere questo problema come segue.  Nel metodo `OnReceive` della classe di socket, chiamata **CAsyncSocket::IOCtl\(FIONREAD, ...\)** prima di chiamare il metodo `Serialize` della classe di messaggio quando i dati previsti da leggere da socket supera la dimensione di un pacchetto TCP \(Maximum Transmission Unit il supporto della rete, in genere di almeno 1096 byte\).  Se la dimensione dei dati disponibili è minore di quello necessario, aspetti tutti i dati da ricevere solo e quindi avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero di byte approssimativo che l'utente prevede di ricevere.  Si presuppone che lo dichiara altrove nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/CPP/csocketfile-class_1.cpp)]  
  
 Per ulteriori informazioni, vedere [In Windows Sockets MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: Utilizzo di socket con gli archivi](../../mfc/windows-sockets-using-sockets-with-archives.md)nonché [Windows Sockets 2 API](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 `CSocketFile`  
  
## Requisiti  
 **Header:** afxsock.h  
  
## Vedere anche  
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket Class](../../mfc/reference/casyncsocket-class.md)   
 [CSocket Class](../../mfc/reference/csocket-class.md)