---
description: "Altre informazioni su: passaggi in un'applicazione client HTTP tipica"
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
ms.openlocfilehash: 0f08ca7629c389df67b579b8c20acceeb16b0cd3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216600"
---
# <a name="steps-in-a-typical-http-client-application"></a>Passaggi in un'applicazione client HTTP tipica

Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in un'applicazione client HTTP tipica:

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Inizia una sessione HTTP.|Creare un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Inizializza WinInet e si connette al server.|
|Connettersi a un server HTTP.|Usare [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection).|Restituisce un oggetto [CHttpConnection](../mfc/reference/chttpconnection-class.md) .|
|Aprire una richiesta HTTP.|Usare [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest).|Restituisce un oggetto [CHttpFile](../mfc/reference/chttpfile-class.md) .|
|Inviare una richiesta HTTP.|Usare [CHttpFile:: AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders) e [CHttpFile:: SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|Trova il file. Restituisce FALSE se il file non viene trovato.|
|Leggere dal file.|Usare [CHttpFile](../mfc/reference/chttpfile-class.md).|Legge il numero di byte specificato utilizzando un buffer fornito.|
|Gestire le eccezioni.|Usare la classe [CInternetException](../mfc/reference/cinternetexception-class.md) .|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione HTTP.|Elimina l'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet di MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
