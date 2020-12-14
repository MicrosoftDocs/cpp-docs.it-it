---
description: "Altre informazioni su: passaggi in un'applicazione client Gopher tipica"
title: Passaggi in un'applicazione client gopher tipica
ms.date: 11/04/2016
helpviewer_keywords:
- WinInet classes [MFC], gopher
- Internet applications [MFC], gopher client applications
- Gopher client applications [MFC]
- Internet client applications [MFC], gopher table
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
ms.openlocfilehash: 23940457acf52009b6d334deec129324a53a7583
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216626"
---
# <a name="steps-in-a-typical-gopher-client-application"></a>Passaggi in un'applicazione client gopher tipica

Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in un'applicazione client Gopher tipica.

|Obiettivo|Azioni da effettuare|Effetti|
|---------------|----------------------|-------------|
|Inizia una sessione gopher.|Creare un oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Inizializza WinInet e si connette al server.|
|Connettersi a un server gopher.|Usare [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection).|Restituisce un oggetto [CGopherConnection](../mfc/reference/cgopherconnection-class.md) .|
|Trovare la prima risorsa in gopher.|Usare [CGopherFileFind:: FindFile](../mfc/reference/cgopherfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|
|Trovare la risorsa successiva in gopher.|Usare [CGopherFileFind:: FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|
|Aprire il file trovato da `FindFile` o `FindNextFile` per la lettura.|Ottenere un localizzatore Gopher usando [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Usare [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Apre il file specificato dal localizzatore. `OpenFile` Restituisce un oggetto [CGopherFile](../mfc/reference/cgopherfile-class.md) .|
|Aprire un file utilizzando un localizzatore Gopher fornito.|Creare un localizzatore Gopher usando [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator). Usare [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Apre il file specificato dal localizzatore. `OpenFile` Restituisce un oggetto [CGopherFile](../mfc/reference/cgopherfile-class.md) .|
|Leggere dal file.|Usare [CGopherFile](../mfc/reference/cgopherfile-class.md).|Legge il numero di byte specificato, usando un buffer fornito.|
|Gestire le eccezioni.|Usare la classe [CInternetException](../mfc/reference/cinternetexception-class.md) .|Gestisce tutti i tipi di eccezioni comuni di Internet.|
|Terminare la sessione gopher.|Elimina l'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) .|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|

## <a name="see-also"></a>Vedi anche

[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](../mfc/prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet di MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
