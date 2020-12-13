---
description: 'Ulteriori informazioni su: come MFC semplifica la creazione di applicazioni client Internet'
title: Come MFC agevola la creazione di applicazioni Client Internet
ms.date: 11/04/2016
helpviewer_keywords:
- Internet client applications [MFC], MFC
- Internet applications [MFC], MFC
- MFC, Internet applications
ms.assetid: 94437b3f-f15c-437d-b5fd-264a2efec9ab
ms.openlocfilehash: 7cc201c67cf4964e5bd561cd173186bc57feb89b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343602"
---
# <a name="how-mfc-makes-it-easier-to-create-internet-client-applications"></a>Come MFC agevola la creazione di applicazioni Client Internet

Il Microsoft Foundation Classes incapsula le funzioni di estensione Internet Win32 (WinInet) in modo da fornire un contesto familiare ai programmatori MFC. MFC fornisce tre classi di file Internet ([CInternetFile](reference/cinternetfile-class.md), [CHttpFile](reference/chttpfile-class.md)e [CGopherFile](reference/cgopherfile-class.md)) derivate dalla classe [CStdioFile](reference/cstdiofile-class.md) . Queste classi non solo consentono di recuperare e modificare i dati Internet noti ai programmatori che hanno usato `CStdioFile` per i file locali, ma con queste classi è possibile gestire file locali e file Internet in modo coerente e trasparente.

Le classi WinInet di MFC forniscono la stessa funzionalità `CStdioFile` di per i dati trasferiti su Internet. Queste classi astraggono i protocolli Internet per HTTP, FTP e gopher in un Application Programming Interface di alto livello, offrendo un percorso rapido e semplice per rendere le applicazioni compatibili con Internet. Per la connessione a un server FTP, ad esempio, sono necessari diversi passaggi a un livello basso, ma come sviluppatore MFC è necessario effettuare una sola chiamata a `CInternetSession::GetFTPConnection` per creare tale connessione.

Inoltre, le classi WinInet di MFC offrono i vantaggi seguenti:

- I/O memorizzato nel buffer

- Handle indipendenti dai tipi per i dati

- Parametri predefiniti per molte funzioni

- Gestione delle eccezioni per errori Internet comuni

- Pulizia automatica di handle e connessioni aperte

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](win32-internet-extensions-wininet.md)<br/>
[Come WinInet semplifica la creazione di applicazioni client Internet](how-wininet-makes-it-easier-to-create-internet-client-applications.md)
