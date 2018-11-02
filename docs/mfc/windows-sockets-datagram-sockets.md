---
title: 'Windows Sockets: socket di datagramma'
ms.date: 11/04/2016
helpviewer_keywords:
- sockets [MFC], datagram
- Windows Sockets [MFC], bi-directional data flow
- datagram sockets [MFC]
- Windows Sockets [MFC], datagram
- sockets [MFC], bi-directional data flow
ms.assetid: bec16a1c-74c0-4ff9-8c18-c2d87897d264
ms.openlocfilehash: 886409d4072a77244cff415c6f0a6a3f533e42d4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462127"
---
# <a name="windows-sockets-datagram-sockets"></a>Windows Sockets: socket di datagramma

Questo articolo descrive i socket di datagramma, uno dei due tipi di Socket Windows disponibili. (L'altro tipo è il [socket di flusso](../mfc/windows-sockets-stream-sockets.md).)

I socket di datagramma supportano un flusso di dati bidirezionale che non è garantito a essere ordinati in sequenza o la non duplicazione. Datagrammi inoltre non sono necessariamente essere affidabili. è possibile non giunge a destinazione. I dati del datagramma potrebbero arrivare non in ordine e duplicati, ma vengono mantenuti i limiti di record nei dati, fino a quando i record sono inferiori a limite di dimensioni interne del ricevitore. Si è responsabili della gestione di sequenziazione e l'affidabilità. (Affidabilità tende a essere ottimale in reti LAN [LAN] ma meno così via WAN delle reti WAN, ad esempio Internet).

I datagrammi sono "senza connessione", vale a dire, non viene stabilita alcuna connessione esplicita; si invia un messaggio del datagramma a un socket specificato e si può ricevere messaggi da un socket specificato.

Un esempio di un socket di datagramma è un'applicazione che mantiene gli orologi di sistema sulla rete sincronizzata. L'esempio illustra una funzionalità aggiuntiva del socket di datagramma in almeno alcune impostazioni: trasmissione di messaggi a un numero elevato di indirizzi della rete.

I socket di datagramma sono migliori di socket di flusso per orientato ai record dei dati. Per altre informazioni sui socket di datagramma, vedere la specifica di Windows Sockets, disponibile nel SDK Windows.

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

