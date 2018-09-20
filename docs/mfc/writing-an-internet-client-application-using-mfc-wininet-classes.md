---
title: La scrittura di un'applicazione Client Internet con classi WinInet MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Internet client applications [MFC]
- WinInet classes [MFC], programming
- Internet client applications [MFC], writing
- Internet applications [MFC], WinInet
- Internet applications [MFC], client applications
- MFC, Internet applications
ms.assetid: a2c4a40c-a94e-4b3e-9dbf-f8a8dc8e5428
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4e048ff64632c2ffdb263e7dcf33a51b9d50d528
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46443865"
---
# <a name="writing-an-internet-client-application-using-mfc-wininet-classes"></a>Scrittura di un'applicazione client Internet con classi WinInet MFC

La base di tutte le applicazioni client Internet è la sessione di Internet. MFC implementa le sessioni Internet come gli oggetti della classe [CInternetSession](../mfc/reference/cinternetsession-class.md). Utilizzare questa classe, è possibile creare una o più sessioni simultanee.

Per comunicare con un server, è necessario un [CInternetConnection](../mfc/reference/cinternetconnection-class.md) oggetti, nonché un `CInternetSession`. È possibile creare un `CInternetConnection` usando [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection), [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection), o [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection). Ognuna di queste chiamate è specifico per il tipo di protocollo. Queste chiamate non aprire un file nel server per la lettura o scrittura. Se si prevede di leggere o scrivere dati, è necessario aprire il file come passaggio separato.

La maggior parte delle sessioni in Internet, il `CInternetSession` oggetto opera in stretta associazione con un [CInternetFile](../mfc/reference/cinternetfile-class.md) oggetto:

- Per una sessione di Internet, è necessario creare un'istanza di [CInternetSession](../mfc/reference/cinternetsession-class.md).

- Se la sessione di Internet legge o scrive i dati, è necessario creare un'istanza di `CInternetFile` (o delle relative sottoclassi [CHttpFile](../mfc/reference/chttpfile-class.md) oppure [CGopherFile](../mfc/reference/cgopherfile-class.md)). Il modo più semplice per leggere i dati consiste nel chiamare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl). Questa funzione analizza un localizzatore URL (Universal Resource) forniti dall'utente, viene aperta una connessione al server specificato dall'URL e restituisce una proprietà di sola lettura `CInternetFile` oggetto. `CInternetSession::OpenURL` non è specifico di un tipo di protocollo, ovvero la stessa chiamata funziona per tutti gli URL di FTP, HTTP o gopher. `CInternetSession::OpenURL` funziona anche con i file locali (restituzione di un `CStdioFile` anziché un `CInternetFile`).

- Se il servizio Internet sessione non leggere o scrivere dati, ma esegue altre operazioni, ad esempio l'eliminazione di un file in una directory FTP, non si potrebbe essere necessario creare un'istanza di `CInternetFile`.

Esistono due modi per creare un `CInternetFile` oggetto:

- Se si usa `CInternetSession::OpenURL` per stabilire la connessione al server, la chiamata a `OpenURL` restituisce un `CStdioFile`.

- Se uso `CInternetSession::GetFtpConnection`, `GetGopherConnection`, o `GetHttpConnection` per stabilire la connessione al server, è necessario chiamare `CFtpConnection::OpenFile`, `CGopherConnection::OpenFile`, o `CHttpConnection::OpenRequest`, rispettivamente, per restituire un `CInternetFile`, `CGopherFile`, o `CHttpFile`, rispettivamente.

I passaggi dell'implementazione di un'applicazione client Internet variano a seconda se si crea un client Internet generico basato sui `OpenURL` o un client specifico del protocollo usando uno del `GetConnection` funzioni.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Come scrivere un'applicazione client Internet che funziona in modo generico con FTP, HTTP e gopher](../mfc/steps-in-a-typical-internet-client-application.md)

- [Come scrivere un'applicazione client FTP che apre un file](../mfc/steps-in-a-typical-ftp-client-application.md)

- [Come scrivere un'applicazione client FTP che non si apre un file, ma esegue un'operazione di directory, ad esempio l'eliminazione di un file](../mfc/steps-in-a-typical-ftp-client-application-to-delete-a-file.md)

- [Come è possibile scrivere un'applicazione client gopher](../mfc/steps-in-a-typical-gopher-client-application.md)

- [Come è possibile scrivere un'applicazione client HTTP](../mfc/steps-in-a-typical-http-client-application.md)

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Classi MFC per la creazione di applicazioni client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)
