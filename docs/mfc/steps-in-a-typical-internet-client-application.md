---
description: "Altre informazioni su: passaggi in un'applicazione client Internet tipica"
title: Passaggi in un'applicazione client Internet tipica
ms.date: 11/04/2016
helpviewer_keywords:
- Internet client applications [MFC], general table
- WinInet classes [MFC], programming
- Internet applications [MFC], client applications
ms.assetid: 7aba135c-7c15-4e2f-8c34-bbaf792c89a6
ms.openlocfilehash: 9660687136361efb0256ecdd1fd19b577c46ab26
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216548"
---
# <a name="steps-in-a-typical-internet-client-application"></a>Passaggi in un'applicazione client Internet tipica

Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in una tipica applicazione client Internet.

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Inizia una sessione Internet.|Creare un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Inizializza WinInet e si connette al server.|
|Impostare un'opzione di query Internet (ad esempio, il limite di timeout o il numero di tentativi).|Usare [CInternetSession:: SetOption](../mfc/reference/cinternetsession-class.md#setoption).|Restituisce FALSE se l'operazione non è riuscita.|
|Stabilire una funzione di callback per monitorare lo stato della sessione.|Usare [CInternetSession:: EnableStatusCallback](../mfc/reference/cinternetsession-class.md#enablestatuscallback).|Stabilisce un callback a [CInternetSession:: OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback). Eseguire l'override `OnStatusCallback` di per creare una routine di callback personalizzata.|
|Connettersi a un server Internet, a un server Intranet o a un file locale.|Usare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl).|Analizza l'URL e apre una connessione al server specificato. Restituisce un [CStdioFile](../mfc/reference/cstdiofile-class.md) (se si passa `OpenURL` un nome di file locale). Si tratta dell'oggetto tramite il quale si accede ai dati recuperati dal server o dal file.|
|Leggere dal file.|Usare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|Legge il numero di byte specificato utilizzando un buffer fornito.|
|Gestire le eccezioni.|Usare la classe [CInternetException](../mfc/reference/cinternetexception-class.md) .|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione Internet.|Elimina l'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet di MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
