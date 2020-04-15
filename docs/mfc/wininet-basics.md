---
title: Concetti di base su WinInet
ms.date: 11/04/2016
helpviewer_keywords:
- OnStatusCallback method [MFC]
- WinInet classes [MFC], displaying progress
- WinInet classes [MFC], about WinInet classes
ms.assetid: 665de5ac-e80d-427d-8d91-2ae466885940
ms.openlocfilehash: b989e5c3df63ee7b5129d01468a0f869772ed286
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367328"
---
# <a name="wininet-basics"></a>Concetti di base su WinInet

È possibile utilizzare WinInet per aggiungere il supporto FTP per scaricare e caricare file dall'interno dell'applicazione. È possibile eseguire l'override di [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) e utilizzare il parametro *dwContext* per fornire informazioni sullo stato di avanzamento agli utenti durante la ricerca e il download dei file.

In questo articolo contiene i seguenti argomenti:

- [Creazione di un browser molto semplice](#_core_create_a_very_simple_browser)

- [Scaricare una pagina Web](#_core_download_a_web_page)

- [FTP di un file](#_core_ftp_a_file)

- [Recuperare una directory Gopher](#_core_retrieve_a_gopher_directory)

- [Visualizzare le informazioni sullo stato di avanzamento durante il trasferimento dei file](#_core_display_progress_information_while_transferring_files)

Gli estratti di codice riportati di seguito illustrano come creare un semplice browser, scaricare una pagina Web, FTP un file e cercare un file gopher. Non sono intesi come esempi completi e non tutti contengono la gestione delle eccezioni.

Per ulteriori informazioni su WinInet, vedere [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md).

## <a name="create-a-very-simple-browser"></a><a name="_core_create_a_very_simple_browser"></a>Creazione di un browser molto semplice

[!code-cpp[NVC_MFCWinInet#1](../mfc/codesnippet/cpp/wininet-basics_1.cpp)]

## <a name="download-a-web-page"></a><a name="_core_download_a_web_page"></a>Scaricare una pagina Web

[!code-cpp[NVC_MFCWinInet#2](../mfc/codesnippet/cpp/wininet-basics_2.cpp)]

## <a name="ftp-a-file"></a><a name="_core_ftp_a_file"></a>FTP di un file

[!code-cpp[NVC_MFCWinInet#3](../mfc/codesnippet/cpp/wininet-basics_3.cpp)]

## <a name="retrieve-a-gopher-directory"></a><a name="_core_retrieve_a_gopher_directory"></a>Recuperare una directory Gopher

[!code-cpp[NVC_MFCWinInet#4](../mfc/codesnippet/cpp/wininet-basics_4.cpp)]

## <a name="use-onstatuscallback"></a>Usare OnStatusCallbackUse OnStatusCallback

Quando si utilizzano le classi WinInet, è possibile utilizzare il membro [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) dell'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) dell'applicazione per recuperare le informazioni sullo stato. Se si deriva `CInternetSession` il `OnStatusCallback`proprio oggetto, eseguire l'override `OnStatusCallback` e abilitare i callback di stato, MFC chiamerà la funzione con informazioni sullo stato di avanzamento di tutte le attività in tale sessione Internet.

Poiché una singola sessione potrebbe supportare più connessioni (che, `OnStatusCallback` nel corso della loro durata, potrebbero eseguire molte operazioni distinte diverse), è necessario un meccanismo per identificare ogni modifica dello stato con una particolare connessione o transazione. Tale meccanismo viene fornito dal parametro ID di contesto fornito a molte delle funzioni membro nelle classi di supporto WinInet. Questo parametro è sempre di tipo **DWORD** ed è sempre denominato *dwContext*.

Il contesto assegnato a un particolare oggetto Internet viene utilizzato `OnStatusCallback` solo `CInternetSession` per identificare l'attività che l'oggetto provoca nel membro dell'oggetto. La chiamata `OnStatusCallback` a riceve diversi parametri; questi parametri lavorano insieme per indicare all'applicazione quali progressi sono stati fatti per quale transazione e connessione.

Quando si `CInternetSession` crea un oggetto, è possibile specificare un parametro *dwContext* per il costruttore. `CInternetSession`se stesso non utilizza l'ID di contesto; al contrario, passa l'ID di contesto a tutti gli oggetti derivati da **InternetConnection**che non ottengono in modo esplicito un proprio ID di contesto. A sua `CInternetConnection` volta, tali oggetti passeranno l'ID di contesto insieme agli `CInternetFile` oggetti che creano se non si specifica in modo esplicito un ID di contesto diverso. Se, d'altra parte, si specifica un ID di contesto specifico, l'oggetto e qualsiasi operazione che esegue verranno associati a tale ID di contesto. È possibile utilizzare gli ID di contesto per identificare le `OnStatusCallback` informazioni sullo stato fornite nella funzione.

## <a name="display-progress-information-while-transferring-files"></a><a name="_core_display_progress_information_while_transferring_files"></a>Visualizzare le informazioni sullo stato di avanzamento durante il trasferimento dei file

Ad esempio, se si scrive un'applicazione che crea una connessione con un server FTP per leggere un file `CInternetSession` e si `CInternetConnection` connette anche a `CFtpSession` un server HTTP `CHttpSession`per ottenere una pagina Web, si avrà un oggetto, due oggetti (uno sarebbe un e l'altro sarebbe un ) e due `CInternetFile` oggetti (uno per ogni connessione). Se sono stati utilizzati valori predefiniti per i parametri *dwContext,* non sarà possibile distinguere tra le `OnStatusCallback` chiamate che indicano lo stato di avanzamento della connessione FTP e le chiamate che indicano lo stato di avanzamento della connessione HTTP. Se si specifica un ID *dwContext,* che `OnStatusCallback`è possibile testare in un secondo momento in , saprai quale operazione ha generato il callback.

## <a name="see-also"></a>Vedere anche

[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)
