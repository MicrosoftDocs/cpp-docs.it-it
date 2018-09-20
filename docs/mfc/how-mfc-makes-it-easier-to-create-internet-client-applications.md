---
title: Come MFC agevola la creazione di applicazioni Client Internet | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Internet client applications [MFC], MFC
- Internet applications [MFC], MFC
- MFC, Internet applications
ms.assetid: 94437b3f-f15c-437d-b5fd-264a2efec9ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 26380dc7e01449e4700ddf403c7395714287ed38
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407166"
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

