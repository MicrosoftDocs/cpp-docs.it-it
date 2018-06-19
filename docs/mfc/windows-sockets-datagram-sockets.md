---
title: 'Windows Sockets: Socket di datagramma | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- sockets [MFC], datagram
- Windows Sockets [MFC], bi-directional data flow
- datagram sockets [MFC]
- Windows Sockets [MFC], datagram
- sockets [MFC], bi-directional data flow
ms.assetid: bec16a1c-74c0-4ff9-8c18-c2d87897d264
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 30ad7cab43301ae2cb7ebcb1fb4dfa850090955d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33383942"
---
# <a name="windows-sockets-datagram-sockets"></a>Windows Sockets: socket di datagramma
Questo articolo vengono descritti i socket di datagramma, uno dei due tipi di Socket Windows disponibili. (L'altro tipo è il [socket di flusso](../mfc/windows-sockets-stream-sockets.md).)  
  
 Socket di datagramma supportano un flusso di dati bidirezionale che potrebbe non essere in sequenza o la non duplicazione. I datagrammi inoltre non sono necessariamente essere affidabili. è possibile non giunge a. Dati datagramma possono arrivare senza ordine e duplicati, ma vengono mantenuti i limiti di record nei dati, fino a quando i record sono inferiori al limite di dimensioni interne del ricevitore. Si è responsabili della gestione di sequenziazione e affidabilità. (L'affidabilità tende a essere correttamente su reti LAN LAN ma meno così via WAN reti WAN, ad esempio Internet).  
  
 I datagrammi sono "senza connessione", vale a dire, viene stabilita alcuna connessione esplicita; si invia un messaggio di datagramma a un socket specificato ed è possibile ricevere messaggi da un socket specificato.  
  
 Un esempio di un socket di datagramma è un'applicazione che mantiene gli orologi di sistema nella rete sincronizzata. Mostra una funzionalità aggiuntiva dei socket di datagramma almeno alcune impostazioni: trasmissione di messaggi a un numero elevato di indirizzi di rete.  
  
 Socket di datagramma sono migliori di socket di flusso per orientato ai record di dati. Per ulteriori informazioni sui socket di datagramma, vedere la specifica Windows Sockets disponibile in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets di MFC](../mfc/windows-sockets-in-mfc.md)   
 [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

