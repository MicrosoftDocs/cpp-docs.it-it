---
title: 'Windows Sockets: Socket notifiche | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], notifications
- notifications [MFC], socket
- sockets [MFC], notifications
ms.assetid: 87d5bf70-6e77-49a9-9a64-aaadee2ad018
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b51bf2b562f0d4eff5b9cfef557e62f996d53470
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="windows-sockets-socket-notifications"></a>Windows Sockets: notifiche socket
In questo articolo descrive le funzioni di notifica nelle classi di socket. Queste funzioni membro sono funzioni di callback che il framework chiama per notificare all'oggetto socket di eventi importanti. Le funzioni di notifica sono:  
  
-   [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive): notifica che sono presenti dati nel buffer per poter recuperare tramite una chiamata a questo socket [ricezione](../mfc/reference/casyncsocket-class.md#receive).  
  
-   [OnSend](../mfc/reference/casyncsocket-class.md#onsend): notifica che può inviare i dati tramite una chiamata a questo socket [inviare](../mfc/reference/casyncsocket-class.md#send).  
  
-   [OnAccept](../mfc/reference/casyncsocket-class.md#onaccept): notifica questo socket in attesa che può accettare richieste di connessione in sospeso chiamando [Accept](../mfc/reference/casyncsocket-class.md#accept).  
  
-   [OnConnect](../mfc/reference/casyncsocket-class.md#onconnect): notifica questo socket che il tentativo di connessione completato: forse correttamente o forse in errore.  
  
-   [OnClose](../mfc/reference/casyncsocket-class.md#onclose): notifica questo socket che ha chiuso il socket è connesso.  
  
    > [!NOTE]
    >  È una funzione di notifica aggiuntivo [OnOutOfBandData](../mfc/reference/casyncsocket-class.md#onoutofbanddata). Questa notifica indica il socket di ricezione che il socket di invio "out of band" dati da inviare. Dati fuori banda sono un canale logicamente indipendente associato a ogni coppia di socket di flusso connessi. Il canale out of band in genere viene utilizzato per inviare dati di "urgenza". MFC supporta dati fuori banda. Avanzate agli utenti che lavorano con la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) potrebbe essere necessario utilizzare il canale fuori banda, ma gli utenti della classe [CSocket](../mfc/reference/csocket-class.md) sconsiglia di utilizzarlo. Il modo più semplice consiste nel creare un secondo socket per il passaggio di tali dati. Per ulteriori informazioni sui dati fuori banda, vedere la specifica Windows Sockets disponibile in Windows SDK.  
  
 Se si deriva dalla classe `CAsyncSocket`, è necessario eseguire l'override delle funzioni di notifica per gli eventi di interesse per l'applicazione di rete. Se si deriva una classe dalla classe `CSocket`, è la scelta se si desidera eseguire l'override delle funzioni di notifica di interesse. È inoltre possibile utilizzare `CSocket` stesso, nel qual caso la notifica funzioni predefinite per eseguire alcuna operazione.  
  
 Queste funzioni sono funzioni di callback sottoponibile a override. `CAsyncSocket` e `CSocket` convert messaggi alle notifiche di avviso, ma è necessario implementare la notifica di funzionamento di rispondere se si desidera utilizzarli. Le funzioni di notifica vengono chiamate quando che il socket riceve una notifica di un evento di interesse, ad esempio la presenza di dati da leggere.  
  
 MFC chiama le funzioni di notifica per consentono di personalizzare il comportamento del socket al momento che riceve la notifica. Ad esempio, è possibile chiamare **ricezione** dal `OnReceive` funzione di notifica, vale a dire in corso una notifica che non ci sono dati per la lettura, chiamare **ricezione** per la lettura. Questo approccio non è necessario, ma è uno scenario valido. In alternativa, è possibile utilizzare la funzione di notifica per rilevare lo stato di avanzamento, stampare **traccia** messaggi e così via.  
  
 È possibile sfruttare queste notifiche si esegue l'override delle funzioni di notifica in una classe derivata di socket e fornendo un'implementazione.  
  
 Durante un'operazione, ad esempio ricevendo o inviando dati, un `CSocket` oggetto diventa sincrono. Durante lo stato sincrono, eventuali notifiche destinate ad altri socket vengono messe in coda quando il socket corrente è in attesa per la notifica desiderata. (Ad esempio, durante un **ricezione** chiamata, il socket attende una notifica da leggere.) Una volta il socket viene completata l'operazione sincrona e asincrono diventa nuovamente, altri socket possano iniziare a ricevere le notifiche in coda.  
  
> [!NOTE]
>  In `CSocket`, `OnConnect` funzione di notifica non viene mai chiamato. Per le connessioni, si chiama **Connetti**, che restituisce quando la connessione è stata completata (correttamente o errore). Gestione delle notifiche di connessione è un dettaglio di implementazione di MFC.  
  
 Per informazioni dettagliate su ogni funzione di notifica, vedere la funzione nella classe `CAsyncSocket` nel *riferimenti alla libreria MFC*. Per informazioni sugli esempi MFC e codice sorgente, vedere [degli esempi di MFC](../visual-cpp-samples.md).  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)  
  
-   [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

