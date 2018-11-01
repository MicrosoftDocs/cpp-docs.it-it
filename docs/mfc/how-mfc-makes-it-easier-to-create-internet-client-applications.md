---
title: Come MFC agevola la creazione di applicazioni Client Internet
ms.date: 11/04/2016
helpviewer_keywords:
- Internet client applications [MFC], MFC
- Internet applications [MFC], MFC
- MFC, Internet applications
ms.assetid: 94437b3f-f15c-437d-b5fd-264a2efec9ab
ms.openlocfilehash: b288db54a020b0074766ee69debdb9f397d3bd03
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573435"
---
# <a name="how-mfc-makes-it-easier-to-create-internet-client-applications"></a>Come MFC agevola la creazione di applicazioni Client Internet

Microsoft Foundation Classes incapsulano le funzioni di estensione per Internet Win32 (WinInet) in modo che fornisce un contesto familiare ai programmatori MFC. MFC fornisce tre classi di file di Internet ([CInternetFile](../mfc/reference/cinternetfile-class.md), [CHttpFile](../mfc/reference/chttpfile-class.md), e [CGopherFile](../mfc/reference/cgopherfile-class.md)) derivata dal [CStdioFile](../mfc/reference/cstdiofile-class.md) classe . Non solo queste classi per rendere il recupero e modifica dei dati Internet familiare ai programmatori che hanno usato `CStdioFile` per i file locali, ma con queste classi è possibile gestire i file locali e i file Internet in modo trasparente e coerente.

Le classi WinInet MFC forniscono la stessa funzionalità `CStdioFile` per i dati trasferiti attraverso la rete Internet. Queste classi di astraggono i protocolli Internet per HTTP, FTP e gopher in un'applicazione ad alto livello di interfaccia di programmazione, fornendo un percorso rapido e semplice per rendere le applicazioni compatibili con Internet. Ad esempio, la connessione a un server FTP richiede ancora alcuni passaggi di basso livello, ma gli sviluppatori MFC, è sufficiente effettuare una chiamata a `CInternetSession::GetFTPConnection` per creare tale connessione.

Inoltre, le classi WinInet MFC offrono i vantaggi seguenti:

- Memorizzata nel buffer i/o

- Handle indipendente dai tipi per i tuoi dati

- Parametri predefiniti per molte funzioni

- Gestione delle eccezioni per gli errori comuni di Internet

- Pulizia automatica di handle aperti e connessioni

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Come WinInet agevola la creazione di applicazioni client Internet](../mfc/how-wininet-makes-it-easier-to-create-internet-client-applications.md)

