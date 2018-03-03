---
title: Struttura WSADATA | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- WSADATA
dev_langs:
- C++
helpviewer_keywords:
- WSADATA structure [MFC]
ms.assetid: 80cc60e5-f9ae-4290-8ed5-07003136627d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 24cfbeb0e917914881587cb70fd345a903a08ecc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wsadata-structure"></a>Struttura WSADATA
Il `WSADATA` struttura viene utilizzata per archiviare le informazioni di inizializzazione socket di Windows restituite da una chiamata al `AfxSocketInit` funzione globale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct WSAData {  
    WORD wVersion;  
    WORD wHighVersion;  
    char szDescription[WSADESCRIPTION_LEN+1];  
    char szSystemStatus[WSASYSSTATUS_LEN+1];  
    unsigned short iMaxSockets;  
    unsigned short iMaxUdpDg;  
    char FAR* lpVendorInfo;  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 *wVersion*  
 La versione della specifica Windows Sockets che la DLL di socket di Windows prevede che al chiamante di usare.  
  
 *wHighVersion*  
 La versione più recente della specifica Windows Sockets in grado di supportare questa DLL (inoltre codificata come sopra). In genere, questo è lo stesso come **wVersion**.  
  
 *szDescription*  
 Una stringa con terminazione null ASCII in cui la DLL Windows Socket copia una descrizione dell'implementazione di Windows Sockets, inclusi l'identificazione del fornitore. Il testo (fino a 256 caratteri) può contenere qualsiasi carattere, ma vengono avvisati fornitori di base includono il controllo e caratteri di formattazione: l'uso più probabile che un'applicazione verrà inseriti a è per visualizzarlo (probabilmente troncato) in un messaggio di stato.  
  
 *szSystemStatus*  
 Una stringa con terminazione null ASCII in cui la DLL Windows Socket copia le informazioni di configurazione o di stato. La DLL di socket di Windows devono utilizzare questo campo solo se le informazioni potrebbero essere utili all'utente o; personale di supporto non deve essere considerato come un'estensione del **szDescription** campo.  
  
 *iMaxSockets*  
 Il numero massimo di socket che potenzialmente consente di aprire un singolo processo. Un'implementazione di Windows Sockets può fornire un pool di socket globale per l'allocazione a qualsiasi processo. In alternativa, è possibile allocare risorse per processo per i socket. Il numero e può riflettere il modo in cui è stato configurato la DLL di socket di Windows o il software di rete. Gli autori di applicazioni è possono utilizzare questo numero come essenziale è costituita dall'indicazione se l'implementazione di Windows Sockets è utilizzabile dall'applicazione. Ad esempio, può a esaminare un server Windows X **iMaxSockets** al primo avvio: se è minore di 8, l'applicazione visualizza un messaggio di errore che indica all'utente per riconfigurare il software di rete. (Si tratta di una situazione in cui il **szSystemStatus** testo può essere utilizzato.) Ovviamente, non c'è garanzia che una determinata applicazione può allocare effettivamente **iMaxSockets** socket, poiché possono essere altre applicazioni di Windows Socket in uso.  
  
 *iMaxUdpDg*  
 Le dimensioni in byte del datagramma più grande di protocollo UDP (User Datagram) che possono essere inviati o ricevuti da un'applicazione Windows Sockets. Se l'implementazione non impone alcun limite, **iMaxUdpDg** è zero. In molte implementazioni dei socket Berkeley, è previsto un limite implicito di 8192 byte in datagrammi UDP (che sono frammentati se necessario). Un'implementazione di Windows Sockets può imporre un limite, ad esempio, in base all'allocazione di buffer di riassemblaggio frammento. Il valore minimo di **iMaxUdpDg** per un socket di Windows conformi implementazione è 512. Si noti che, indipendentemente dal valore di **iMaxUdpDg**, non è consigliabile tentare di inviare un datagramma broadcast maggiore rispetto all'unità MTU (Maximum Transmission) per la rete. (Windows Sockets API non fornisce un meccanismo per individuare il valore MTU, ma deve essere non inferiore a 512 byte).  
  
 *lpVendorInfo*  
 Puntatore far a una struttura di dati specifici del fornitore. La definizione della struttura (se fornito) è oltre l'ambito della specifica Windows Sockets.  
  
> [!NOTE]
>  In MFC, la `WSADATA` struttura viene restituita dal `AfxSocketInit` (funzione), che viene chiamato nel `InitInstance` (funzione). È possibile recuperare la struttura e archiviarlo nel programma, se è necessario utilizzare le informazioni da quest'ultimo in un secondo momento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Winsock2. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit)

