---
title: I passaggi in un'applicazione Client HTTP tipica | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTTP client applications [MFC]
- client applications [MFC], HTTP
- Internet applications [MFC], HTTP client applications
- applications [MFC], HTTP client
- Internet client applications [MFC], HTTP table
- WinInet classes [MFC], HTTP
ms.assetid: f86552e8-8acd-4b23-bdc5-0c3a247ebd74
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c25402662296a9ebf2f15fe902dcefabb9d47073
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="steps-in-a-typical-http-client-application"></a>Passaggi in un'applicazione client HTTP tipica
Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in un'applicazione client HTTP tipica:  
  
|Obiettivo|Azioni da effettuare|Effetti|  
|---------------|----------------------|-------------|  
|Iniziare una sessione HTTP.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|  
|Connettersi a un server HTTP.|Utilizzare [CInternetSession:: GetHttpConnection](../mfc/reference/cinternetsession-class.md#gethttpconnection).|Restituisce un [CHttpConnection](../mfc/reference/chttpconnection-class.md) oggetto.|  
|Aprire una richiesta HTTP.|Utilizzare [CHttpConnection:: OpenRequest](../mfc/reference/chttpconnection-class.md#openrequest).|Restituisce un [CHttpFile](../mfc/reference/chttpfile-class.md) oggetto.|  
|Inviare una richiesta HTTP.|Utilizzare [CHttpFile:: AddRequestHeaders](../mfc/reference/chttpfile-class.md#addrequestheaders) e [CHttpFile:: SendRequest](../mfc/reference/chttpfile-class.md#sendrequest).|Trova il file. Restituisce FALSE se il file non viene trovato.|  
|Leggere il file.|Utilizzare [CHttpFile](../mfc/reference/chttpfile-class.md).|Legge il numero specificato di byte usando un buffer che è fornire.|  
|Gestire le eccezioni.|Utilizzare il [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|  
|Terminare la sessione HTTP.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi Client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
