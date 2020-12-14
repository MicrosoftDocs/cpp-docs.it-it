---
description: "Altre informazioni su: scrittura di un'applicazione client Internet con classi WinInet di MFC"
title: Scrittura di un'applicazione client Internet con classi WinInet MFC
ms.date: 11/04/2016
helpviewer_keywords:
- Internet client applications [MFC]
- WinInet classes [MFC], programming
- Internet client applications [MFC], writing
- Internet applications [MFC], WinInet
- Internet applications [MFC], client applications
- MFC, Internet applications
ms.assetid: a2c4a40c-a94e-4b3e-9dbf-f8a8dc8e5428
ms.openlocfilehash: 61cfe3e9892f2bde6d233728b7b95ca0edd16ee8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189132"
---
# <a name="writing-an-internet-client-application-using-mfc-wininet-classes"></a>Scrittura di un'applicazione client Internet con classi WinInet MFC

La base di ogni applicazione client Internet è la sessione Internet. MFC implementa le sessioni Internet come oggetti della classe [CInternetSession](../mfc/reference/cinternetsession-class.md). Utilizzando questa classe, è possibile creare una sessione Internet o più sessioni simultanee.

Per comunicare con un server, è necessario un oggetto [CInternetConnection](../mfc/reference/cinternetconnection-class.md) , oltre a un oggetto `CInternetSession` . È possibile creare un `CInternetConnection` usando [CInternetSession:: GetFtpConnection](../mfc/reference/cinternetsession-class.md#getftpconnection), [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection)o [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection). Ognuna di queste chiamate è specifica del tipo di protocollo. Queste chiamate non aprono un file nel server per la lettura o la scrittura. Se si intende leggere o scrivere dati, è necessario aprire il file come passaggio separato.

Per la maggior parte delle sessioni Internet, l' `CInternetSession` oggetto funziona manualmente con un oggetto [CInternetFile](../mfc/reference/cinternetfile-class.md) :

- Per una sessione Internet è necessario creare un'istanza di [CInternetSession](../mfc/reference/cinternetsession-class.md).

- Se la sessione Internet legge o scrive dati, è necessario creare un'istanza di `CInternetFile` (o le relative sottoclassi, [CHttpFile](../mfc/reference/chttpfile-class.md) o [CGopherFile](../mfc/reference/cgopherfile-class.md)). Il modo più semplice per leggere i dati consiste nel chiamare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl). Questa funzione analizza un URL (Universal Resource Locator) fornito dall'utente, apre una connessione al server specificato dall'URL e restituisce un oggetto di sola lettura `CInternetFile` . `CInternetSession::OpenURL` non è specifico di un tipo di protocollo: la stessa chiamata funziona per qualsiasi URL FTP, HTTP o gopher. `CInternetSession::OpenURL` funziona anche con i file locali (che restituiscono un `CStdioFile` anziché un `CInternetFile` ).

- Se la sessione Internet non legge o scrive dati, ma esegue altre attività, ad esempio l'eliminazione di un file in una directory FTP, potrebbe non essere necessario creare un'istanza di `CInternetFile` .

Esistono due modi per creare un `CInternetFile` oggetto:

- Se si usa `CInternetSession::OpenURL` per stabilire la connessione al server, la chiamata a `OpenURL` restituisce `CStdioFile` .

- Se `CInternetSession::GetFtpConnection` si utilizza, `GetGopherConnection` o `GetHttpConnection` per stabilire la connessione al server, è necessario chiamare rispettivamente `CFtpConnection::OpenFile` , o, `CGopherConnection::OpenFile` `CHttpConnection::OpenRequest` per restituire rispettivamente, `CInternetFile` , `CGopherFile` o `CHttpFile` .

I passaggi per l'implementazione di un'applicazione client Internet variano a seconda che si crei un client Internet generico basato su `OpenURL` o un client specifico del protocollo utilizzando una delle `GetConnection` funzioni.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Ricerca per categorie scrivere un'applicazione client Internet che funziona in modo generico con FTP, HTTP e gopher](../mfc/steps-in-a-typical-internet-client-application.md)

- [Ricerca per categorie scrivere un'applicazione client FTP che apre un file](../mfc/steps-in-a-typical-ftp-client-application.md)

- [Ricerca per categorie scrivere un'applicazione client FTP che non apre un file ma esegue un'operazione di directory, ad esempio l'eliminazione di un file](../mfc/steps-in-a-typical-ftp-client-application-to-delete-a-file.md)

- [Ricerca per categorie scrivere un'applicazione client Gopher](../mfc/steps-in-a-typical-gopher-client-application.md)

- [Ricerca per categorie scrivere un'applicazione client HTTP](../mfc/steps-in-a-typical-http-client-application.md)

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Classi MFC per la creazione di applicazioni client Internet](../mfc/mfc-classes-for-creating-internet-client-applications.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)
