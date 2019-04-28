---
title: Passaggi in un'applicazione client HTTP tipica
ms.date: 11/04/2016
helpviewer_keywords:
- HTTP client applications [MFC]
- client applications [MFC], HTTP
- Internet applications [MFC], HTTP client applications
- applications [MFC], HTTP client
- Internet client applications [MFC], HTTP table
- WinInet classes [MFC], HTTP
ms.assetid: f86552e8-8acd-4b23-bdc5-0c3a247ebd74
ms.openlocfilehash: 59b585d3e6b8c9f13c585f5a712d33abd6123f67
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62306964"
---
# <a name="steps-in-a-typical-http-client-application"></a>Passaggi in un'applicazione client HTTP tipica

La tabella seguente illustra i passaggi, che eseguibili in un'applicazione client HTTP tipica:

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Avviare una sessione HTTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|
|Connettersi a un server HTTP.|Uso [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection).|Restituisce un [CHttpConnection](../mfc/reference/chttpconnection-class.md) oggetto.|
|Aprire una richiesta HTTP.|Uso [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest).|Restituisce un [CHttpFile](../mfc/reference/chttpfile-class.md) oggetto.|
|Inviare una richiesta HTTP.|Uso [CHttpFile:: AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders) e [CHttpFile:: SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|Trova il file. Restituisce FALSE se il file non viene trovato.|
|Lettura dal file.|Uso [CHttpFile](../mfc/reference/chttpfile-class.md).|Legge il numero specificato di byte usando un buffer che è fornire.|
|Gestire le eccezioni.|Usare la [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione HTTP.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
