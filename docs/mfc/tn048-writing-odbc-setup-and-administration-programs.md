---
title: 'TN048: Scrittura di programmi di amministrazione e installazione ODBC per applicazioni Database MFC'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.odbc
helpviewer_keywords:
- installing ODBC
- ODBC, installing
- setup, ODBC setup programs
- TN048
- ODBC, and MFC
- MFC, database applications
ms.assetid: d456cdd4-0513-4a51-80c0-9132b66115ce
ms.openlocfilehash: 2904ceb626fd1bfad0b24026deb08f2c5dcbcd4a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57283891"
---
# <a name="tn048-writing-odbc-setup-and-administration-programs-for-mfc-database-applications"></a>TN048: Scrittura di programmi di amministrazione e installazione ODBC per applicazioni Database MFC

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Applicazioni che utilizzano classi di database MFC saranno necessario un programma di installazione per l'installazione dei componenti ODBC. È necessario anche un programma di amministrazione di ODBC che recupererà le informazioni sui driver disponibili, per specificare driver predefiniti e per configurare le origini dati. In questa nota viene descritto l'utilizzo dell'API di programma di installazione ODBC per scrivere questi programmi.

##  <a name="_mfcnotes_writing_an_odbc_setup_program"></a> Scrittura di un programma di installazione ODBC

Un'applicazione database MFC richiede gestione Driver ODBC (ODBC. DLL) e i driver ODBC possono essere in grado di accedere a origini dati. Molti driver ODBC richiedono anche le DLL di rete e di comunicazione aggiuntive. La maggior parte dei driver ODBC fornito con un programma di installazione installerà i componenti necessari di ODBC. Gli sviluppatori di applicazioni utilizzando le classi di database MFC è possibile:

- Affidati i programmi di installazione specifici del driver per l'installazione dei componenti ODBC. Questo richiederà alcuna ulteriore intervento da parte dello sviluppatore, è possibile ridistribuire semplicemente il programma di installazione del driver.

- In alternativa, è possibile scrivere il proprio programma di installazione, che consente di installare Gestione driver e il driver.

L'API di programma di installazione ODBC è utilizzabile per scrivere programmi di installazione specifiche dell'applicazione. Le funzioni nel programma di installazione API vengono implementate dal programma di installazione ODBC DLL, ODBCINST. DLL in Windows a 16 bit e ODBCCP32. DLL Win32. Un'applicazione può chiamare `SQLInstallODBC` nel programma di installazione DLL, che consente di installare Gestione driver ODBC, driver ODBC e qualsiasi richiesta traduttori. Registra quindi il driver installati con le funzioni di conversione nel ODBCINST. File INI (o il Registro di sistema NT). `SQLInstallODBC` richiede il percorso completo di ODBC. File INF, che contiene l'elenco di installazione di driver e descrive i file che costituiscono ogni driver. Contiene anche informazioni analoghe sui traduttori e di Gestione driver. ODBC. File INF sono in genere usati dagli sviluppatori di driver.

Un programma può installare anche i singoli componenti ODBC. Per installare Gestione Driver, un programma chiama innanzitutto `SQLInstallDriverManager` nel programma di installazione DLL per ottenere la directory di destinazione per la gestione di Driver. Si tratta in genere della directory in cui si trovano le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione [ODBC Driver Manager] del file ODBC. File INF per copiare i Driver Manager e i file correlati dal disco di installazione per questa directory. Per installare un singolo driver, un programma chiama innanzitutto `SQLInstallDriver` nel programma di installazione DLL per aggiungere la specifica di driver per il ODBCINST. File INI (o il Registro di sistema NT). `SQLInstallDriver` Restituisce la directory di destinazione del driver, in genere la directory in cui si trovano le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione del driver di ODBC. File INF per copiare la DLL del driver e i file correlati dal disco di installazione in questa directory.

Per altre informazioni su ODBC. INF, ODBCINST. INI e usando il programma di installazione API, vedere il SDK di ODBC *di riferimento per programmatori,* capitolo 19, l'installazione del Software ODBC.

##  <a name="_mfcnotes_writing_an_odbc_administrator"></a> La scrittura di un amministratore ODBC

Un'applicazione database MFC possa installare e configurare le origini dati ODBC in uno dei due modi, come indicato di seguito:

- Usare l'amministratore ODBC (disponibile come un programma o un elemento del Pannello di controllo).

- Creare un programma personalizzato per configurare le origini dati.

Un programma che consente di configurare origini dei dati effettua le chiamate di funzione al programma di installazione DLL. Il programma di installazione DLL chiama una DLL per configurare un'origine dati di installazione. È una DLL di installazione per ogni driver; potrebbe essere il driver della DLL stessa o una DLL separata. La DLL di installazione richiede all'utente le informazioni che il driver deve connettersi all'origine dati e la funzione di conversione predefinita, se supportata. Chiama quindi il programma di installazione DLL e le API di Windows per registrare queste informazioni nel file ODBC. File INI (o Registro di sistema).

Per visualizzare una finestra di dialogo con cui un utente può aggiungere, modificare ed eliminare origini dati, un programma chiama `SQLManageDataSources` nel programma di installazione DLL. Questa funzione viene richiamata quando il programma di installazione DLL viene chiamata dal Pannello di controllo. Per aggiungere, modificare o eliminare un'origine dati, `SQLManageDataSources` chiamate `ConfigDSN` nel programma di installazione DLL per il driver associato a tale origine dati. Per aggiungere, modificare o eliminare i dati direttamente le origini, le chiamate di un programma `SQLConfigDataSource` nel programma di installazione DLL. Il programma passa il nome dell'origine dati e un'opzione che specifica l'azione da intraprendere. `SQLConfigDataSource` le chiamate `ConfigDSN` nel programma di installazione DLL e lo passa gli argomenti da `SQLConfigDataSource`.

Per altre informazioni, vedere il SDK di ODBC *di riferimento per programmatori,* capitolo 23, di riferimento alle funzioni DLL programma di installazione e il capitolo 24 di riferimento alle funzioni DLL programma di installazione.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
