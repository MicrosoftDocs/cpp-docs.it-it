---
title: I passaggi in un'applicazione Client Gopher tipica | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- WinInet classes [MFC], gopher
- Internet applications [MFC], gopher client applications
- Gopher client applications [MFC]
- Internet client applications [MFC], gopher table
ms.assetid: 3e4e1869-5da0-453d-8ba9-b648c894bb90
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a85e178f59eab88844b1990922870f52463f54a8
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955622"
---
# <a name="steps-in-a-typical-gopher-client-application"></a>Passaggi in un'applicazione client gopher tipica
Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in un'applicazione client gopher tipica.  
  
|Obiettivo|Azioni da effettuare|Effetti|  
|---------------|----------------------|-------------|  
|Avviare la sessione gopher.|Creare una [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|  
|Connettersi a un server gopher.|Uso [CInternetSession:: GetGopherConnection](../mfc/reference/cinternetsession-class.md#getgopherconnection).|Restituisce un [CGopherConnection](../mfc/reference/cgopherconnection-class.md) oggetto.|  
|Trovare la prima risorsa nel gopher.|Uso [CGopherFileFind:: FindFile](../mfc/reference/cgopherfilefind-class.md#findfile).|Trova il primo file. Restituisce FALSE se non viene trovato alcun file.|  
|Trovare la risorsa successiva nel gopher.|Uso [CGopherFileFind:: FindNextFile](../mfc/reference/cgopherfilefind-class.md#findnextfile).|Individua il file successivo. Restituisce FALSE se il file non viene trovato.|  
|Aprire il file trovato da `FindFile` o `FindNextFile` per la lettura.|Ottenere un localizzatore gopher utilizzando [CGopherFileFind:: GetLocator](../mfc/reference/cgopherfilefind-class.md#getlocator). Uso [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Apre il file specificato dall'indicatore di posizione. `OpenFile` Restituisce un [CGopherFile](../mfc/reference/cgopherfile-class.md) oggetto.|  
|Aprire un file usando un localizzatore gopher che è fornire.|Creare un localizzatore gopher utilizzando [CGopherConnection:: CreateLocator](../mfc/reference/cgopherconnection-class.md#createlocator). Uso [CGopherConnection:: OpenFile](../mfc/reference/cgopherconnection-class.md#openfile).|Apre il file specificato dall'indicatore di posizione. `OpenFile` Restituisce un [CGopherFile](../mfc/reference/cgopherfile-class.md) oggetto.|  
|Leggere il file.|Uso [CGopherFile](../mfc/reference/cgopherfile-class.md).|Legge il numero specificato di byte, usando un buffer che è fornire.|  
|Gestire le eccezioni.|Usare la [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|  
|Terminare la sessione gopher.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi Client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
