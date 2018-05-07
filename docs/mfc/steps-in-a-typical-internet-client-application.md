---
title: I passaggi in un'applicazione Client Internet tipica | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Internet client applications [MFC], general table
- WinInet classes [MFC], programming
- Internet applications [MFC], client applications
ms.assetid: 7aba135c-7c15-4e2f-8c34-bbaf792c89a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b1c7a7053b8378ea62dc0291dba1b79b794dd099
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="steps-in-a-typical-internet-client-application"></a>Passaggi in un'applicazione client Internet tipica
Nella tabella seguente vengono illustrati i passaggi che è possibile eseguire in una tipica applicazione client Internet.  
  
|Obiettivo|Azioni da effettuare|Effetti|  
|---------------|----------------------|-------------|  
|Iniziare una sessione di Internet.|Creare un [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Inizializza WinInet e si connette al server.|  
|Impostare un'opzione di query Internet (limite di timeout o un numero di tentativi, ad esempio).|Utilizzare [CInternetSession:: SetOption](../mfc/reference/cinternetsession-class.md#setoption).|Restituisce FALSE se l'operazione non è riuscita.|  
|Definire una funzione di callback per monitorare lo stato della sessione.|Utilizzare [CInternetSession:: EnableStatusCallback](../mfc/reference/cinternetsession-class.md#enablestatuscallback).|Stabilisce un callback a [CInternetSession:: OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback). Eseguire l'override `OnStatusCallback` per creare una propria routine di callback.|  
|Connettersi a un server Internet, server della rete intranet o file locale.|Utilizzare [CInternetSession:: OpenURL](../mfc/reference/cinternetsession-class.md#openurl).|Analizza l'URL e apre una connessione al server specificato. Restituisce un [CStdioFile](../mfc/reference/cstdiofile-class.md) (se si passa `OpenURL` un nome di file locale). Si tratta dell'oggetto tramite cui si accede ai dati recuperati dal server o file.|  
|Leggere il file.|Utilizzare [CInternetFile:: Read](../mfc/reference/cinternetfile-class.md#read).|Legge il numero specificato di byte usando un buffer che è fornire.|  
|Gestire le eccezioni.|Utilizzare il [CInternetException](../mfc/reference/cinternetexception-class.md) classe.|Gestisce tutti i tipi di eccezioni comuni di Internet.|  
|Terminare la sessione di Internet.|Smaltire la [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto.|Effettua la pulizia automatica degli handle e delle connessioni del file aperto.|  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisiti per le classi Client Internet](../mfc/prerequisites-for-internet-client-classes.md)   
 [Scrittura di un'applicazione client Internet con classi WinInet MFC](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)
