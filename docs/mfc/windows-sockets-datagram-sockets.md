---
description: 'Altre informazioni su: Windows Sockets: socket di datagramma'
title: 'Windows Sockets: socket di datagramma'
ms.date: 11/04/2016
helpviewer_keywords:
- sockets [MFC], datagram
- Windows Sockets [MFC], bi-directional data flow
- datagram sockets [MFC]
- Windows Sockets [MFC], datagram
- sockets [MFC], bi-directional data flow
ms.assetid: bec16a1c-74c0-4ff9-8c18-c2d87897d264
ms.openlocfilehash: 8de374d6e96348504d4b1fc126c1607c029cd6c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132977"
---
# <a name="windows-sockets-datagram-sockets"></a>Windows Sockets: socket di datagramma

Questo articolo descrive i socket di datagramma, uno dei due tipi di socket di Windows disponibili. (L'altro tipo è il [socket del flusso](../mfc/windows-sockets-stream-sockets.md)).

I socket di datagramma supportano un flusso di dati bidirezionale non necessariamente sequenziato o non duplicato. Non è inoltre garantito che i datagrammi siano affidabili. possono non essere in arrivo. I dati del datagramma possono arrivare senza ordine e possibilmente duplicati, ma i limiti dei record nei dati vengono conservati, purché i record siano inferiori al limite di dimensione interna del ricevitore. L'utente è responsabile della gestione della sequenziazione e dell'affidabilità. (L'affidabilità tende a essere efficace nelle reti locali [LAN], ma in modo minore nelle reti WAN (Wide Area Network), ad esempio Internet.

I datagrammi sono "senza connessione", ovvero non viene stabilita alcuna connessione esplicita; inviare un messaggio di datagramma a un socket specificato ed è possibile ricevere messaggi da un socket specificato.

Un esempio di socket del datagramma è un'applicazione che mantiene sincronizzati gli orologi di sistema sulla rete. In questo modo viene illustrata una funzionalità aggiuntiva dei socket di datagramma in almeno alcune impostazioni: trasmissione dei messaggi a un numero elevato di indirizzi di rete.

I socket di datagramma sono migliori dei socket di flusso per i dati orientati ai record. Per ulteriori informazioni sui socket di datagramma, vedere la specifica di Windows Sockets, disponibile nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)
