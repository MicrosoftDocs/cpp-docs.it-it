---
title: Concetti di base su WinInet
ms.date: 11/04/2016
helpviewer_keywords:
- OnStatusCallback method [MFC]
- WinInet classes [MFC], displaying progress
- WinInet classes [MFC], about WinInet classes
ms.assetid: 665de5ac-e80d-427d-8d91-2ae466885940
ms.openlocfilehash: 79ec102aa27440c64f03c6e22b9f2fe959cac6b9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399551"
---
# <a name="wininet-basics"></a>Concetti di base su WinInet

Per aggiungere il supporto FTP per scaricare e caricare file da all'interno dell'applicazione, è possibile utilizzare WinInet. È possibile eseguire l'override [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) e utilizzare il *dwContext* parametro per specificare le informazioni sullo stato per gli utenti perché è cercare e scaricare file.

Questo articolo contiene i seguenti argomenti:

- [Creare un Browser molto semplice](#_core_create_a_very_simple_browser)

- [Scaricare una pagina Web](#_core_download_a_web_page)

- [Un File FTP](#_core_ftp_a_file)

- [Recuperare una Directory Gopher](#_core_retrieve_a_gopher_directory)

- [Visualizzare le informazioni di stato di avanzamento durante il trasferimento di file](#_core_display_progress_information_while_transferring_files)

Estratti di codice seguente viene illustrato come creare un semplice browser, scaricare una pagina Web, un file, FTP e cercare un file gopher. Non sono a livello esemplificativo completo e non contengono la gestione delle eccezioni.

Per ulteriori informazioni su WinInet, vedere [estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md).

##  <a name="_core_create_a_very_simple_browser"></a> Creare un Browser molto semplice

[!code-cpp[NVC_MFCWinInet#1](../mfc/codesnippet/cpp/wininet-basics_1.cpp)]

##  <a name="_core_download_a_web_page"></a> Scaricare una pagina Web

[!code-cpp[NVC_MFCWinInet#2](../mfc/codesnippet/cpp/wininet-basics_2.cpp)]

##  <a name="_core_ftp_a_file"></a> Un File FTP

[!code-cpp[NVC_MFCWinInet#3](../mfc/codesnippet/cpp/wininet-basics_3.cpp)]

##  <a name="_core_retrieve_a_gopher_directory"></a> Recuperare una Directory Gopher

[!code-cpp[NVC_MFCWinInet#4](../mfc/codesnippet/cpp/wininet-basics_4.cpp)]

## <a name="use-onstatuscallback"></a>Usare OnStatusCallback

Quando si usano le classi WinInet, è possibile usare la [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) membro dell'applicazione in uso [CInternetSession](../mfc/reference/cinternetsession-class.md) oggetto per recuperare informazioni sullo stato. Se si deriva il proprio `CInternetSession` dell'oggetto, eseguire l'override `OnStatusCallback`e abilitare i callback dello stato, MFC chiamerà il `OnStatusCallback` funzione con le informazioni sullo stato su tutte le attività in tale sessione Internet.

Poiché una singola sessione può supportare più connessioni (che, durante il ciclo di vita, potrebbero eseguire numerose operazioni di distinte diverse), `OnStatusCallback` richiede un meccanismo per identificare ogni modifica dello stato con una determinata connessione o delle transazioni. Tale meccanismo viene fornito dal parametro ID di contesto assegnato a molte delle funzioni membro in classi di supporto di WinInet. Questo parametro è sempre di tipo **DWORD** ed è sempre denominato *dwContext*.

Il contesto assegnato a un determinato oggetto Internet viene utilizzato solo per identificare l'attività fa sì che l'oggetto nel `OnStatusCallback` membro del `CInternetSession` oggetto. La chiamata a `OnStatusCallback` riceve parametri diversi, questi parametri collaborano per indicare all'applicazione che lo stato di avanzamento è stata eseguita per le transazioni e connessione.

Quando si crea una `CInternetSession` oggetti, è possibile specificare un *dwContext* parametro al costruttore. `CInternetSession` stesso non usa l'ID di contesto. al contrario, passa l'ID del contesto con una **InternetConnection**-gli oggetti derivati da Don ' t get in modo esplicito un ID di contesto autonomamente. A sua volta, quelli `CInternetConnection` oggetti passerà l'ID del contesto lungo a `CInternetFile` gli oggetti creati se non si specifica in modo esplicito un ID di contesto diverso. Se, d'altra parte, si specifica un ID specifico contesto personalizzato, l'oggetto e qualsiasi lavoro sarà associato a tale ID del contesto. È possibile usare gli ID di contesto per identificare le informazioni di stato sono in corso fornite sotto il `OnStatusCallback` (funzione).

##  <a name="_core_display_progress_information_while_transferring_files"></a> Visualizzare le informazioni di stato di avanzamento durante il trasferimento di file

Ad esempio, se si scrive un'applicazione che crea una connessione con un server FTP per leggere un file e inoltre di connettersi a un server HTTP per ottenere una pagina Web, è possibile un `CInternetSession` object, due `CInternetConnection` oggetti (uno sarebbe un `CFtpSession` e l'altro sarebbe una `CHttpSession`) e due `CInternetFile` oggetti (uno per ogni connessione). Se sono stati usati valori predefiniti per il *dwContext* i parametri, non sarebbe in grado di distinguere tra la `OnStatusCallback` chiamate che indicano lo stato di avanzamento per la connessione FTP e le chiamate che indicano lo stato di avanzamento per il Connessione HTTP. Se si specifica un *dwContext* ID, che in un secondo momento è possibile testare nel `OnStatusCallback`, sarà possibile sapere quale operazione ha generato il callback.

## <a name="see-also"></a>Vedere anche

[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)
