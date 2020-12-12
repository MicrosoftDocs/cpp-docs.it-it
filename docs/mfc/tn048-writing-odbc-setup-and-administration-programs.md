---
description: 'Ulteriori informazioni su: TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni di database MFC'
title: 'TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC'
ms.date: 11/04/2016
helpviewer_keywords:
- installing ODBC
- ODBC, installing
- setup, ODBC setup programs
- TN048
- ODBC, and MFC
- MFC, database applications
ms.assetid: d456cdd4-0513-4a51-80c0-9132b66115ce
ms.openlocfilehash: bca8616bae8f7243b9e66b2eccc980afa3865842
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215105"
---
# <a name="tn048-writing-odbc-setup-and-administration-programs-for-mfc-database-applications"></a>TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Per le applicazioni che utilizzano classi di database MFC è necessario un programma di installazione che consente di installare i componenti ODBC. Potrebbe inoltre essere necessario un programma di amministrazione ODBC che recupererà le informazioni sui driver disponibili, per specificare i driver predefiniti e per configurare le origini dati. Questa nota descrive l'uso dell'API del programma di installazione ODBC per scrivere questi programmi.

## <a name="writing-an-odbc-setup-program"></a><a name="_mfcnotes_writing_an_odbc_setup_program"></a> Scrittura di un programma di installazione ODBC

Per un'applicazione di database MFC è necessario che i driver ODBC driver Manager (ODBC.DLL) e ODBC siano in grado di ottenere le origini dati. Molti driver ODBC richiedono anche dll di rete e di comunicazione aggiuntive. La maggior parte dei driver ODBC è disponibile con un programma di installazione che installerà i componenti ODBC necessari. Gli sviluppatori di applicazioni che utilizzano le classi di database MFC possono:

- Utilizzare i programmi di installazione specifici del driver per l'installazione dei componenti ODBC. Questa operazione non richiede ulteriori operazioni da parte dello sviluppatore, ma è possibile ridistribuire il programma di installazione del driver.

- In alternativa, è possibile scrivere un programma di installazione personalizzato che installerà gestione driver e il driver.

L'API ODBC Installer può essere usata per scrivere programmi di installazione specifici dell'applicazione. Le funzioni nell'API del programma di installazione sono implementate dalla DLL del programma di installazione ODBC, ODBCINST.DLL in Windows a 16 bit e ODBCCP32.DLL su Win32. Un'applicazione può chiamare `SQLInstallODBC` nella dll del programma di installazione, in cui vengono installati Gestione driver ODBC, driver ODBC e tutti i traduttori necessari. Registra quindi i driver e i traduttori installati nel file di ODBCINST.INI (o nel registro di sistema, in NT). `SQLInstallODBC` richiede il percorso completo di ODBC. File INF, che contiene l'elenco dei driver da installare e descrive i file che includono ogni driver. Contiene anche informazioni simili su Gestione driver e sui traduttori. ODBC. I file INF vengono in genere forniti dagli sviluppatori di driver.

Un programma può inoltre installare singoli componenti ODBC. Per installare Gestione driver, un programma chiama prima `SQLInstallDriverManager` nella dll del programma di installazione per ottenere la directory di destinazione per Gestione driver. Si tratta in genere della directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione [Gestione driver ODBC] di ODBC. File INF per copiare la gestione driver e i file correlati dal disco di installazione in questa directory. Per installare un singolo driver, un programma chiama prima `SQLInstallDriver` nella dll del programma di installazione per aggiungere la specifica del driver al file di ODBCINST.INI (o al registro di sistema, in NT). `SQLInstallDriver` Restituisce la directory di destinazione del driver, in genere la directory in cui si trovano le DLL di Windows. Il programma usa quindi le informazioni contenute nella sezione del driver di ODBC. File INF per copiare la DLL del driver e i file correlati dal disco di installazione in questa directory.

Per ulteriori informazioni su ODBC. INF, ODBCINST.INI e utilizzo dell'API del programma di installazione di, vedere ODBC SDK *Programmer ' s Reference,* capitolo 19, installazione di software ODBC.

## <a name="writing-an-odbc-administrator"></a><a name="_mfcnotes_writing_an_odbc_administrator"></a> Scrittura di un amministratore ODBC

Un'applicazione di database MFC può impostare e configurare le origini dati ODBC in uno dei due modi seguenti:

- Utilizzare ODBC Administrator (disponibile come programma o elemento del pannello di controllo).

- Creare un programma personalizzato per configurare le origini dati.

Un programma che configura le origini dati effettua chiamate di funzione alla DLL del programma di installazione. La DLL del programma di installazione chiama una DLL di installazione per configurare un'origine dati. È presente una DLL di installazione per ogni driver; potrebbe trattarsi della DLL del driver o di una DLL separata. La DLL di installazione richiede all'utente le informazioni necessarie al driver per connettersi all'origine dati e al convertitore predefinito, se supportato. Chiama quindi la DLL del programma di installazione e le API Windows per registrare queste informazioni nel file di ODBC.INI (o nel registro di sistema).

Per visualizzare una finestra di dialogo con cui un utente può aggiungere, modificare ed eliminare origini dati, un programma chiama `SQLManageDataSources` nella dll del programma di installazione. Questa funzione viene richiamata quando la DLL del programma di installazione viene chiamata dal pannello di controllo. Per aggiungere, modificare o eliminare un'origine dati, `SQLManageDataSources` chiama `ConfigDSN` nella DLL di installazione del driver associato a tale origine dati. Per aggiungere, modificare o eliminare direttamente origini dati, un programma chiama `SQLConfigDataSource` nella dll del programma di installazione. Il programma passa il nome dell'origine dati e un'opzione che specifica l'azione da intraprendere. `SQLConfigDataSource` chiama `ConfigDSN` nella DLL di installazione e passa gli argomenti da `SQLConfigDataSource` .

Per ulteriori informazioni, vedere Guida di riferimento per *programmatori* ODBC SDK, capitolo 23, Guida di riferimento alla funzione di installazione dll e capitolo 24, Guida di riferimento alle funzioni DLL del programma di installazione.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
