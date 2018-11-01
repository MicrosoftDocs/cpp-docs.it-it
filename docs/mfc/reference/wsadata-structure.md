---
title: Struttura WSADATA
ms.date: 11/04/2016
f1_keywords:
- WSADATA
helpviewer_keywords:
- WSADATA structure [MFC]
ms.assetid: 80cc60e5-f9ae-4290-8ed5-07003136627d
ms.openlocfilehash: 06e8423a00ecfe5179dbfe3e03f61dbf1ef870b3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474022"
---
# <a name="wsadata-structure"></a>Struttura WSADATA

Il `WSADATA` struttura viene usata per archiviare le informazioni di inizializzazione socket di Windows restituite da una chiamata al `AfxSocketInit` funzione globale.

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

*wVersion*<br/>
La versione della specifica di Windows Sockets che la DLL di socket di Windows prevede che il chiamante di usare.

*wHighVersion*<br/>
La versione più recente della specifica del socket di Windows in grado di supportare questa DLL (inoltre codificata come sopra). In genere, ciò è identico *wVersion*.

*szDescription*<br/>
Una ASCII stringa a terminazione null in cui la DLL di socket Windows copia una descrizione dell'implementazione di socket di Windows, inclusi l'identificazione del fornitore. Il testo (fino a 256 caratteri) può contenere qualsiasi carattere, ma i fornitori vengono avvisati contro incluso il controllo e caratteri di formattazione: l'uso più probabile che verrà inserire il codice seguente per un'applicazione che corrisponde a visualizzarla (probabilmente troncato) di un messaggio di stato.

*szSystemStatus*<br/>
Una ASCII stringa a terminazione null in cui la DLL di socket Windows copia le informazioni di configurazione o lo stato. La DLL di socket di Windows devono usare questo campo solo se le informazioni potrebbero essere utili all'utente o lo staff; non deve essere considerato come un'estensione della *szDescription* campo.

*iMaxSockets*<br/>
Il numero massimo di socket che potenzialmente è possibile aprire un singolo processo. Un'implementazione di Windows Sockets può fornire un pool globale di socket per l'allocazione a qualsiasi processo. In alternativa, è possibile allocare le risorse per ogni processo per i socket. Il numero e può rispecchiare il modo in cui è stato configurato la DLL di socket di Windows o il software di rete. Gli autori di applicazioni possono utilizzare questo numero come rudimentale indicazione del fatto che l'implementazione di Windows Sockets è utilizzabile dall'applicazione. Ad esempio, un server Windows X è possibile controllare *iMaxSockets* al primo avvio: se è minore di 8, l'applicazione visualizza un messaggio di errore chiedendo all'utente di riconfigurare il software di rete. (Si tratta di una situazione in cui il *szSystemStatus* testo può essere usato.) Ovviamente non c'è garanzia che una determinata applicazione può allocare effettivamente *iMaxSockets* socket, poiché possono essere presenti altre applicazioni di Windows Socket in uso.

*iMaxUdpDg*<br/>
La dimensione in byte del protocollo UDP (User Datagram) datagramma più grande che può essere inviato o ricevuto da un'applicazione Windows Sockets. Se l'implementazione non impone alcun limite *iMaxUdpDg* è uguale a zero. In molte implementazioni dei socket Berkeley è previsto un limite implicito di 8192 byte su datagrammi UDP (che vengono frammentati se necessario). Un'implementazione di Windows Sockets può imporre un limite di base, ad esempio, l'allocazione di buffer di riassemblaggio frammento. Il valore minimo del *iMaxUdpDg* per un socket di Windows compatibili con l'implementazione è 512. Si noti che, indipendentemente dal valore della *iMaxUdpDg*, non è consigliabile tentare di inviare un datagramma trasmissione di dimensioni maggiore rispetto la MTU Maximum Transmission Unit () per la rete. (L'API di socket di Windows non fornisce un meccanismo per individuare il valore MTU, ma deve essere non meno di 512 byte).

*lpVendorInfo*<br/>
Un puntatore far a una struttura di dati specifici del fornitore. La definizione della struttura (se fornito) è oltre l'ambito della specifica di Windows Sockets.

> [!NOTE]
>  In MFC, il `WSADATA` restituita dalla struttura il `AfxSocketInit` (funzione), che viene chiamato nel `InitInstance` (funzione). È possibile recuperare la struttura e archiviarlo nel programma, se è necessario usare le informazioni da quest'ultimo in un secondo momento.

## <a name="requirements"></a>Requisiti

**Intestazione:** winsock2.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit)

