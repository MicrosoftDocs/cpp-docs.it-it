---
title: "Struttura WSADATA | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WSADATA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WSADATA (struttura)"
ms.assetid: 80cc60e5-f9ae-4290-8ed5-07003136627d
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura WSADATA
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `WSADATA` viene utilizzata per archiviare le informazioni di inizializzazione Windows Sockets restituite da una chiamata alla funzione globale di `AfxSocketInit`.  
  
## Sintassi  
  
```  
  
      struct WSAData {  
   WORD wVersion;  
   WORD wHighVersion;  
   char szDescription[WSADESCRIPTION_LEN+1];  
   char szSystemStatus[WSASYSSTATUS_LEN+1];  
   unsigned short iMaxSockets;  
   unsigned short iMaxUdpDg;  
   char FAR * lpVendorInfo;  
};  
```  
  
#### Parametri  
 *wVersion*  
 La versione della specifica di Windows Sockets che la DLL Windows Sockets prevede che il chiamante di utilizzare.  
  
 *wHighVersion*  
 La versione più recente della specifica di Windows Sockets che questa DLL può supportare anche codificato come in precedenza\).  In genere, è uguale a **wVersion**.  
  
 *szDescription*  
 Una stringa ASCII con terminazione null in cui la DLL Windows Sockets copia una descrizione dell'implementazione Windows Sockets, incluso l'id del fornitore.  Il testo \(fino a 256 caratteri di lunghezza\) può contenere tutti i caratteri, ma i fornitori è avvertito sull'inclusione il controllo e dei caratteri di formattazione: l'utilizzo più probabile che un'applicazione può essere utilizzata questa è di visualizzare \(eventualmente SBR\) in un messaggio di stato.  
  
 *szSystemStatus*  
 Una stringa ASCII con terminazione null in cui la DLL Windows Sockets copia lo stato o le informazioni di configurazione relativo.  La DLL Windows Sockets deve utilizzare questo campo solo se le informazioni possono essere utili all'utente o a staff di supporto; non deve essere considerato estensione del campo di **szDescription**.  
  
 *iMaxSockets*  
 Il numero massimo di socket che un singolo processo può potenzialmente apri.  Implementazione Windows Sockets può fornire un pool globale di socket per l'allocazione a qualsiasi processo; in alternativa, è possibile riservare le risorse a livello di singolo processo per i socket.  Il numero rifletta correttamente la modalità in cui la DLL Windows Sockets o il software di rete è stato configurato.  Gli autori di applicazioni possono utilizzare questo numero un'indicazione grezza dell'implementazione Windows Sockets è utilizzabile dall'applicazione.  Ad esempio, un server di X Windows può controllare **iMaxSockets** al primo avvio: se è minore di 8, viene visualizzato un messaggio di errore che indica all'utente riconfigurare il software di rete. \(Si tratta di una situazione in cui il testo di **szSystemStatus** potrebbe essere utilizzato.\) Ovviamente non è garantito che una determinata applicazione consente di allocare sockets di **iMaxSockets**, poiché possono essere presenti altre applicazioni Windows Sockets in uso.  
  
 *iMaxUdpDg*  
 La dimensione in byte del più ampio datagram di \(UDP\) di User Datagram Protocol\) che possa essere inviati o ricevuti da un'applicazione Windows Sockets.  Se l'implementazione non impone limite, **iMaxUdpDg** è zero.  In molte implementazioni sockets di Berkeley, esiste un limite implicito a 8192 byte in datagrams di UDP che sono spezzettati se necessario\).  Implementazione Windows Sockets può imporre un limite base, ad esempio, sull'allocazione del buffer di rimontaggio snippet.  Il valore minimo di **iMaxUdpDg** per un'implementazione operativo Windows Sockets è 512.  Si noti che indipendentemente dal valore di **iMaxUdpDg**, è sconsigliabile da tentare di inviare un datagram di trasmissione maggiore di Maximum Transmission Unit \(MTU\) per la rete. Windows Sockets \(API non fornisce un meccanismo per individuare il MTU, ma deve essere inferiore a 512 byte\).  
  
 *lpVendorInfo*  
 Un puntatore lontano a una struttura di dati fornitore\- specifica.  La definizione della struttura \(se disponibile\) esula della specifica di Windows Sockets.  
  
> [!NOTE]
>  In MFC, la struttura di `WSADATA` viene restituita dalla funzione di `AfxSocketInit`, che chiama la funzione di `InitInstance`.  È possibile recuperare la struttura e memorizzarlo nel programma se è necessario utilizzare le informazioni riportate più avanti.  
  
## Requisiti  
 **Intestazione:** winsock2.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxSocketInit](../Topic/AfxSocketInit.md)