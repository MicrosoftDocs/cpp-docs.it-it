---
title: Passaggi in un'applicazione client gopher tipica
ms.date: 11/04/2016
helpviewer_keywords:
- WinInet classes [MFC], gopher
- Internet applications [MFC], gopher client applications
- Gopher client applications [MFC]
- Internet client applications [MFC], gopher table
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
ms.openlocfilehash: 123b8abd2ca65356c584fa52f9415504bcb701c6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486424"
---
# <a name="steps-in-a-typical-gopher-client-application"></a>Passaggi in un'applicazione client gopher tipica

Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in un'applicazione client gopher tipica.

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Avviare una sessione di gopher.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|
|Connettersi a un server gopher.|Uso [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection).|Restituisce un [CGopherConnection](../mfc/reference/cgopherconnection-class.md) oggetto.|
|Trovare la prima risorsa in gopher.|Uso [CGopherFileFind:: FindFile](../mfc/reference/cgopherfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|
|Trovare la risorsa successiva nel gopher.|Uso [CGopherFileFind:: FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|
|Aprire il file è stato trovato dal `FindFile` o `FindNextFile` per la lettura.|Ottenere un localizzatore gopher usando [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Uso [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Apre il file specificato dall'indicatore di posizione. `OpenFile` Restituisce un [CGopherFile](../mfc/reference/cgopherfile-class.md) oggetto.|
|Aprire un file mediante un localizzatore gopher che è fornire.|Creare un localizzatore gopher usando [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator). Uso [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Apre il file specificato dall'indicatore di posizione. `OpenFile` Restituisce un [CGopherFile](../mfc/reference/cgopherfile-class.md) oggetto.|
|Lettura dal file.|Uso [CGopherFile](../mfc/reference/cgopherfile-class.md).|Legge il numero specificato di byte, usando un buffer che è fornire.|
|Gestire le eccezioni.|Usare la [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione gopher.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
