---
description: 'Altre informazioni su: Nozioni di base su WinInet'
title: Concetti di base su WinInet
ms.date: 11/04/2016
helpviewer_keywords:
- OnStatusCallback method [MFC]
- WinInet classes [MFC], displaying progress
- WinInet classes [MFC], about WinInet classes
ms.assetid: 665de5ac-e80d-427d-8d91-2ae466885940
ms.openlocfilehash: 1ba8f9b898476849ca9bbb39b7850bbce3605154
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172778"
---
# <a name="wininet-basics"></a>Concetti di base su WinInet

È possibile utilizzare WinInet per aggiungere il supporto FTP per scaricare e caricare i file dall'interno dell'applicazione. È possibile eseguire l'override di [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) e usare il parametro *dwContext* per fornire agli utenti informazioni sullo stato di avanzamento durante la ricerca e il download dei file.

Questo articolo contiene gli argomenti seguenti:

- [Creazione di un browser molto semplice](#_core_create_a_very_simple_browser)

- [Scarica una pagina Web](#_core_download_a_web_page)

- [FTP un file](#_core_ftp_a_file)

- [Recuperare una directory Gopher](#_core_retrieve_a_gopher_directory)

- [Visualizza informazioni sullo stato di avanzamento durante il trasferimento dei file](#_core_display_progress_information_while_transferring_files)

Gli estratti di codice seguenti illustrano come creare un semplice browser, scaricare una pagina Web, FTP un file e cercare un file gopher. Non sono intesi come esempi completi e non contengono tutti la gestione delle eccezioni.

Per ulteriori informazioni su WinInet, vedere la pagina relativa alle [estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md).

## <a name="create-a-very-simple-browser"></a><a name="_core_create_a_very_simple_browser"></a> Creazione di un browser molto semplice

[!code-cpp[NVC_MFCWinInet#1](../mfc/codesnippet/cpp/wininet-basics_1.cpp)]

## <a name="download-a-web-page"></a><a name="_core_download_a_web_page"></a> Scarica una pagina Web

[!code-cpp[NVC_MFCWinInet#2](../mfc/codesnippet/cpp/wininet-basics_2.cpp)]

## <a name="ftp-a-file"></a><a name="_core_ftp_a_file"></a> FTP un file

[!code-cpp[NVC_MFCWinInet#3](../mfc/codesnippet/cpp/wininet-basics_3.cpp)]

## <a name="retrieve-a-gopher-directory"></a><a name="_core_retrieve_a_gopher_directory"></a> Recuperare una directory Gopher

[!code-cpp[NVC_MFCWinInet#4](../mfc/codesnippet/cpp/wininet-basics_4.cpp)]

## <a name="use-onstatuscallback"></a>Usare OnStatusCallback

Quando si usano le classi WinInet, è possibile usare il membro [OnStatusCallback](../mfc/reference/cinternetsession-class.md#onstatuscallback) dell'oggetto [CInternetSession](../mfc/reference/cinternetsession-class.md) dell'applicazione per recuperare le informazioni sullo stato. Se si deriva un oggetto personalizzato `CInternetSession` , si esegue l'override `OnStatusCallback` e si abilitano i callback di stato, MFC chiamerà la `OnStatusCallback` funzione con informazioni sullo stato di avanzamento di tutte le attività della sessione Internet.

Poiché una singola sessione può supportare diverse connessioni (che, per la loro durata, potrebbero eseguire molte operazioni distinte diverse), `OnStatusCallback` necessita di un meccanismo per identificare ogni modifica dello stato con una connessione o una transazione specifica. Questo meccanismo viene fornito dal parametro ID del contesto assegnato a molte delle funzioni membro nelle classi di supporto di WinInet. Questo parametro è sempre di tipo **DWORD** ed è sempre denominato *dwContext*.

Il contesto assegnato a un particolare oggetto Internet viene usato solo per identificare l'attività che l'oggetto causa nel `OnStatusCallback` membro dell' `CInternetSession` oggetto. La chiamata a `OnStatusCallback` riceve diversi parametri. questi parametri interagiscono per indicare all'applicazione lo stato di avanzamento della transazione e della connessione.

Quando si crea un `CInternetSession` oggetto, è possibile specificare un parametro *dwContext* per il costruttore. `CInternetSession` non usa l'ID del contesto; passa invece l'ID del contesto a tutti gli oggetti derivati da **per** che non ottengono in modo esplicito un ID del contesto. A loro volta, tali `CInternetConnection` oggetti passeranno l'ID del contesto insieme agli `CInternetFile` oggetti creati se non si specifica in modo esplicito un ID contesto diverso. Se, d'altra parte, si specifica un ID di contesto specifico, l'oggetto e qualsiasi lavoro che esegue sarà associato a tale ID di contesto. È possibile usare gli ID del contesto per identificare le informazioni sullo stato che vengono fornite all'utente nella `OnStatusCallback` funzione.

## <a name="display-progress-information-while-transferring-files"></a><a name="_core_display_progress_information_while_transferring_files"></a> Visualizza informazioni sullo stato di avanzamento durante il trasferimento dei file

Se, ad esempio, si scrive un'applicazione che crea una connessione con un server FTP per leggere un file e si connette a un server HTTP per ottenere una pagina Web, sarà presente un `CInternetSession` oggetto, due `CInternetConnection` oggetti (uno sarebbe un `CFtpSession` e l'altro sarebbe un `CHttpSession` ) e due `CInternetFile` oggetti (uno per ogni connessione). Se sono stati utilizzati i valori predefiniti per i parametri *dwContext* , non sarà possibile distinguere tra le `OnStatusCallback` chiamate che indicano lo stato di avanzamento della connessione FTP e le chiamate che indicano lo stato di avanzamento della connessione HTTP. Se si specifica un ID *dwContext* , che è possibile testare in un secondo momento `OnStatusCallback` , si saprà quale operazione ha generato il callback.

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)<br/>
[Estensioni Internet Win32 (WinInet)](../mfc/win32-internet-extensions-wininet.md)
