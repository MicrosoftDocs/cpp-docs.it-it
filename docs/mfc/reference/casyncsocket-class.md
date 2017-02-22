---
title: "CAsyncSocket Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAsyncSocket"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asynchronous Windows Sockets"
  - "CAsyncSocket class"
  - "comunicazioni [C++], rete"
  - "network communications"
  - "sockets [C++], Windows"
  - "Windows Sockets [C++], asincrono"
ms.assetid: cca4d5a1-aa0f-48bd-843e-ef0e2d7fc00b
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CAsyncSocket Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un socket di Windows a un endpoint di comunicazione di rete.  
  
## Sintassi  
  
```  
class CAsyncSocket : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::CAsyncSocket](../Topic/CAsyncSocket::CAsyncSocket.md)|Costruisce un oggetto `CAsyncSocket`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::Accept](../Topic/CAsyncSocket::Accept.md)|Accetta una connessione su socket.|  
|[CAsyncSocket::AsyncSelect](../Topic/CAsyncSocket::AsyncSelect.md)|Richiede la notifica degli eventi per il socket.|  
|[CAsyncSocket::Attach](../Topic/CAsyncSocket::Attach.md)|Associa un handle di socket a un oggetto `CAsyncSocket`.|  
|[CAsyncSocket::Bind](../Topic/CAsyncSocket::Bind.md)|Associa un indirizzo locale con un socket.|  
|[CAsyncSocket::Close](../Topic/CAsyncSocket::Close.md)|Consente di socket.|  
|[CAsyncSocket::Connect](../Topic/CAsyncSocket::Connect.md)|Stabilisce una connessione a un socket peer.|  
|[CAsyncSocket::Create](../Topic/CAsyncSocket::Create.md)|Crea un socket.|  
|[CAsyncSocket::Detach](../Topic/CAsyncSocket::Detach.md)|Rimuove un handle di socket da un oggetto `CAsyncSocket`.|  
|[CAsyncSocket::FromHandle](../Topic/CAsyncSocket::FromHandle.md)|Restituisce un puntatore a un oggetto `CAsyncSocket`, dato un handle di socket.|  
|[CAsyncSocket::GetLastError](../Topic/CAsyncSocket::GetLastError.md)|Ottiene lo stato di errore per l'ultima operazione non riuscito.|  
|[CAsyncSocket::GetPeerName](../Topic/CAsyncSocket::GetPeerName.md)|Ottiene l'indirizzo di socket peer in cui un socket è connesso.|  
|[CAsyncSocket::GetPeerNameEx](../Topic/CAsyncSocket::GetPeerNameEx.md)|Ottiene l'indirizzo di socket peer in cui un socket è connesso \(indirizzi IPv6 di handle\).|  
|[CAsyncSocket::GetSockName](../Topic/CAsyncSocket::GetSockName.md)|Ottiene il nome locale per un socket.|  
|[CAsyncSocket::GetSockNameEx](../Topic/CAsyncSocket::GetSockNameEx.md)|Ottiene il nome locale per un socket \(indirizzi IPv6 di handle\).|  
|[CAsyncSocket::GetSockOpt](../Topic/CAsyncSocket::GetSockOpt.md)|Recupera un'opzione di socket.|  
|[CAsyncSocket::IOCtl](../Topic/CAsyncSocket::IOCtl.md)|Controlla la modalità di socket.|  
|[CAsyncSocket::Listen](../Topic/CAsyncSocket::Listen.md)|Stabilisce un socket per ascoltare le richieste di connessione in ingresso.|  
|[CAsyncSocket::Receive](../Topic/CAsyncSocket::Receive.md)|Riceve dati da socket.|  
|[CAsyncSocket::ReceiveFrom](../Topic/CAsyncSocket::ReceiveFrom.md)|Riceve un datagram e archivia l'indirizzo di destinazione.|  
|[CAsyncSocket::ReceiveFromEx](../Topic/CAsyncSocket::ReceiveFromEx.md)|Riceve un datagram e archivia l'indirizzo di destinazione \(indirizzi IPv6 di handle\).|  
|[CAsyncSocket::Send](../Topic/CAsyncSocket::Send.md)|Invia i dati a un socket collegato.|  
|[CAsyncSocket::SendTo](../Topic/CAsyncSocket::SendTo.md)|Invia i dati a una destinazione specifica.|  
|[CAsyncSocket::SendToEx](../Topic/CAsyncSocket::SendToEx.md)|Invia i dati a una destinazione specifica \(indirizzi IPv6 di handle\).|  
|[CAsyncSocket::SetSockOpt](../Topic/CAsyncSocket::SetSockOpt.md)|Imposta un'opzione di socket.|  
|[CAsyncSocket::ShutDown](../Topic/CAsyncSocket::ShutDown.md)|Disabilita **Invia** e\/o le chiamate **Ricezione** su socket.|  
|[CASyncSocket::Socket](../Topic/CASyncSocket::Socket.md)|Alloca un handle di socket.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::OnAccept](../Topic/CAsyncSocket::OnAccept.md)|Notifica un socket in ascolto che può accettare in attesa di richieste di connessione chiamando **Accept**.|  
|[CAsyncSocket::OnClose](../Topic/CAsyncSocket::OnClose.md)|Notifica un socket che il socket connessi a chiuso.|  
|[CAsyncSocket::OnConnect](../Topic/CAsyncSocket::OnConnect.md)|Notifica un connettore che il tentativo di connessione è completo, se correttamente o per errore.|  
|[CAsyncSocket::OnOutOfBandData](../Topic/CAsyncSocket::OnOutOfBandData.md)|Notifica un socket di ricezione che sono presenti dati fuori banda da leggere su socket, in genere un messaggio urgente.|  
|[CAsyncSocket::OnReceive](../Topic/CAsyncSocket::OnReceive.md)|Notifica un socket in ascolto che vi sono dati da recuperare **Ricezione**chiamando.|  
|[CAsyncSocket::OnSend](../Topic/CAsyncSocket::OnSend.md)|Notifica un socket che può inviare dati chiamando **Invia**.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::operator \=](../Topic/CAsyncSocket::operator%20=.md)|Assegna un valore a un oggetto `CAsyncSocket`.|  
|[CAsyncSocket::operator SOCKET](../Topic/CAsyncSocket::operator%20SOCKET.md)|Consente di recuperare l'handle **SOCKET** dell'oggetto `CAsyncSocket`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::m\_hSocket](../Topic/CAsyncSocket::m_hSocket.md)|Indica un handle **SOCKET** associato a questo oggetto `CAsyncSocket`.|  
  
## Note  
 La classe `CAsyncSocket` incapsula le funzioni API di socket di Windows, fornendo un'astrazione orientata a oggetti per i programmatori che desiderano utilizzare Windows Sockets insieme con MFC.  
  
 Questa classe è basata su presupposti comprendere le comunicazioni di rete.  È responsabile della gestione del blocco, le differenze di ordine dei byte e le conversioni tra Unicode e stringhe con i set di caratteri multibyte \(MBCS\).  Se si desidera un'interfaccia più pratico che gestisce questi problemi di, vedere la classe [CSocket](../../mfc/reference/csocket-class.md).  
  
 Per utilizzare un oggetto `CAsyncSocket`, chiamare il costruttore, quindi chiamare la funzione [Crea](../Topic/CAsyncSocket::Create.md) per creare un handle sottostante di socket \(tipo `SOCKET`\), tranne nei socket accettati.  Per un socket del server chiamare la funzione membro [È in ascolto](../Topic/CAsyncSocket::Listen.md) e un socket client richiedono la funzione membro [Connetti](../Topic/CAsyncSocket::Connect.md).  Socket il server deve chiamare la funzione [Accettare](../Topic/CAsyncSocket::Accept.md) a ricevere una richiesta di connessione.  Utilizzare le funzioni rimanenti `CAsyncSocket` per gestire le comunicazioni tra i socket.  Al completamento, eliminare l'oggetto `CAsyncSocket` se è stato creato nell'heap; il distruttore chiama automaticamente la funzione [Chiudi](../Topic/CAsyncSocket::Close.md).  Il tipo di dati `SOCKET` è descritto nell'articolo [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).  
  
> [!NOTE]
>  In utilizzare sockets MFC nei thread secondari in un'applicazione collegata in modo statico MFC, è necessario chiamare `AfxSocketInit` in ogni thread che utilizza i socket per inizializzare le librerie di socket.  Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread primario.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di classe CAsyncSocket](../../mfc/windows-sockets-using-class-casyncsocket.md) e gli articoli correlati. nonché [Windows Sockets 2 API](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CAsyncSocket`  
  
## Requisiti  
 **intestazione:** afxsock.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CSocket Class](../../mfc/reference/csocket-class.md)   
 [CSocketFile Class](../../mfc/reference/csocketfile-class.md)