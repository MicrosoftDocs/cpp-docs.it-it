---
title: Nozioni fondamentali di WinInet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OnStatusCallback method [MFC]
- WinInet classes [MFC], displaying progress
- WinInet classes [MFC], about WinInet classes
ms.assetid: 665de5ac-e80d-427d-8d91-2ae466885940
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7061c3203436197eb1bd03ae56058e0bd0f26f9d
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955583"
---
# <a name="wininet-basics"></a>Concetti di base su WinInet
È possibile utilizzare WinInet per aggiungere il supporto FTP per scaricare e caricare i file da all'interno dell'applicazione. È possibile eseguire l'override [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) e usare i *dwContext* parametro fornisca le informazioni sullo stato agli utenti cercare e scaricare i file.  
  
 In questo articolo contiene i seguenti argomenti:  
  
-   [Creare un Browser semplice](#_core_create_a_very_simple_browser)  
  
-   [Scaricare una pagina Web](#_core_download_a_web_page)  
  
-   [Un File FTP](#_core_ftp_a_file)  
  
-   [Recuperare una Directory Gopher](#_core_retrieve_a_gopher_directory)  
  
-   [Visualizzare le informazioni sullo stato durante il trasferimento di file](#_core_display_progress_information_while_transferring_files)  
  
 Gli estratti di codice seguente viene illustrato come creare un browser semplice, scaricare una pagina Web, un file, FTP e cercare un file gopher. Non sono come esempi completi e non contengono la gestione delle eccezioni.  
  
 Per ulteriori informazioni su WinInet, vedere [estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md).  
  
##  <a name="_core_create_a_very_simple_browser"></a> Creare un Browser semplice  
 [!code-cpp[NVC_MFCWinInet#1](../mfc/codesnippet/cpp/wininet-basics_1.cpp)]  
  
##  <a name="_core_download_a_web_page"></a> Scaricare una pagina Web  
 [!code-cpp[NVC_MFCWinInet#2](../mfc/codesnippet/cpp/wininet-basics_2.cpp)]  
  
##  <a name="_core_ftp_a_file"></a> Un File FTP  
 [!code-cpp[NVC_MFCWinInet#3](../mfc/codesnippet/cpp/wininet-basics_3.cpp)]  
  
##  <a name="_core_retrieve_a_gopher_directory"></a> Recuperare una Directory Gopher  
 [!code-cpp[NVC_MFCWinInet#4](../mfc/codesnippet/cpp/wininet-basics_4.cpp)]  
  
## <a name="use-onstatuscallback"></a>Utilizzare OnStatusCallback  
 Quando si utilizza il WinInet (classi), è possibile usare il [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) membro di un'applicazione [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto per recuperare le informazioni sullo stato. Se è possibile derivare la propria `CInternetSession` dell'oggetto, eseguire l'override `OnStatusCallback`e abilitare i callback dello stato, MFC chiamerà il `OnStatusCallback` funzione con lo stato di avanzamento informazioni tutte le attività in tale sessione Internet.  
  
 Poiché una singola sessione può supportare più connessioni (ovvero, nel relativo ciclo, potrebbero eseguire diverse operazioni distinte), `OnStatusCallback` richiede un meccanismo per identificare ogni modifica di stato con una determinata connessione o una transazione. Tale meccanismo viene fornito dal parametro ID contesto assegnato a molte delle funzioni membro in classi di supporto WinInet. Questo parametro è sempre di tipo **DWORD** ed è sempre denominato *dwContext*.  
  
 Il contesto assegnato a un determinato oggetto Internet viene utilizzato solo per identificare l'attività fa sì che l'oggetto nel `OnStatusCallback` membro del `CInternetSession` oggetto. La chiamata a `OnStatusCallback` riceve diversi parametri; questi parametri lavorano insieme per indicare l'applicazione dei progressi effettuati per la connessione e le transazioni.  
  
 Quando si crea un `CInternetSession` oggetto, è possibile specificare un *dwContext* parametro al costruttore. `CInternetSession` se stesso non usa l'ID del contesto; al contrario, viene passato l'ID del contesto a qualsiasi **InternetConnection**-gli oggetti derivati da non richiedere in modo esplicito un ID del contesto di propri. A sua volta, quelli `CInternetConnection` oggetti passerà l'ID di contesto lungo `CInternetFile` oggetti creano se non si specifica in modo esplicito un ID di contesto diverso. Se, invece, si specifica un ID di contesto specifico personalizzata, l'oggetto e qualsiasi lavoro sarà associato a tale ID del contesto. È possibile utilizzare gli ID di contesto per identificare le informazioni sullo stato vengono fornite nel `OnStatusCallback` (funzione).  
  
##  <a name="_core_display_progress_information_while_transferring_files"></a> Visualizzare le informazioni sullo stato durante il trasferimento di file  
 Ad esempio, se si scrive un'applicazione che crea una connessione al server FTP per leggere un file e inoltre si connette a un server HTTP per ottenere una pagina Web, è necessario un `CInternetSession` oggetto, due `CInternetConnection` oggetti (uno sarà un `CFtpSession` e l'altro sarebbe un `CHttpSession`) e due `CInternetFile` oggetti (uno per ogni connessione). Se si utilizza valori predefiniti per il *dwContext* parametri, non sarà in grado di distinguere tra il `OnStatusCallback` chiamate che indicano lo stato di avanzamento per la connessione FTP e le chiamate che indicano lo stato di avanzamento per il Connessione HTTP. Se si specifica un *dwContext* ID, che in un secondo momento è possibile testare nel `OnStatusCallback`, si recupererà l'operazione che ha generato il callback.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)

