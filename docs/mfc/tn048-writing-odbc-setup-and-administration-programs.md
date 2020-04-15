---
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
ms.openlocfilehash: d25520c4ffc805701dfe6b51192f8078e2fa300f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365477"
---
# <a name="tn048-writing-odbc-setup-and-administration-programs-for-mfc-database-applications"></a>TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Le applicazioni che utilizzano le classi di database MFC avranno bisogno di un programma di installazione che installa i componenti ODBC. Potrebbe anche essere necessario un programma di amministrazione ODBC che recupererà informazioni sui driver disponibili, per specificare i driver predefiniti e per configurare le origini dati. In questa nota viene descritto l'utilizzo dell'API del programma di installazione ODBC per scrivere questi programmi.

## <a name="writing-an-odbc-setup-program"></a><a name="_mfcnotes_writing_an_odbc_setup_program"></a>Scrittura di un programma di installazione ODBC

Un'applicazione di database MFC richiede Gestione Driver ODBC (ODBC. DLL) e i driver ODBC per poter accedere alle origini dati. Molti driver ODBC richiedono inoltre DLL di rete e di comunicazione aggiuntive. La maggior parte dei driver ODBC viene viene eseguito con un programma di installazione che installerà i componenti ODBC necessari. Gli sviluppatori di applicazioni che utilizzano le classi di database MFC possono:

- Fare affidamento ai programmi di installazione specifici del driver per l'installazione dei componenti ODBC. Questo richiederà nessun ulteriore lavoro da parte dello sviluppatore - si può semplicemente ridistribuire il programma di installazione del driver.

- In alternativa, è possibile scrivere il proprio programma di installazione, che installerà il gestore di driver e il driver.

L'API del programma di installazione ODBC può essere utilizzata per scrivere programmi di installazione specifici dell'applicazione. Le funzioni nell'API del programma di installazione vengono implementate dalla DLL del programma di installazione ODBC, ovvero ODBCINST. DLL su Windows a 16 bit e ODBCCP32. DLL su Win32. Un'applicazione `SQLInstallODBC` può chiamare nella DLL del programma di installazione, che installerà Gestione driver ODBC, driver ODBC ed eventuali convertitori necessari. Registra quindi i driver e i traduttori installati in ODBCINST. INI (o il Registro di sistema, su NT). `SQLInstallODBC`richiede il percorso completo di ODBC. INF, che contiene l'elenco dei driver da installare e descrive i file che costituiscono ogni driver. Contiene anche informazioni simili sul gestore del driver e traduttori. Odbc. I file INF vengono in genere forniti dagli sviluppatori di driver.

Un programma può anche installare singoli componenti ODBC. Per installare Gestione Driver, un `SQLInstallDriverManager` programma chiama innanzitutto nella DLL del programma di installazione per ottenere la directory di destinazione per Gestione Driver. Si tratta in genere della directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione [ODBC Driver Manager] di ODBC. INF per copiare Gestione Driver e i file correlati dal disco di installazione in questa directory. Per installare un singolo driver, `SQLInstallDriver` un programma chiama innanzitutto nella DLL del programma di installazione per aggiungere la specifica del driver a ODBCINST. INI (o il Registro di sistema, su NT). `SQLInstallDriver`restituisce la directory di destinazione del driver, in genere la directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione del driver di ODBC. INF per copiare la DLL del driver e i file correlati dal disco di installazione in questa directory.

Per ulteriori informazioni su ODBC. INF, ODBCINST. INI e utilizzando l'API del programma di installazione, vedere ODBC SDK *Programmer's Reference,* Capitolo 19, Installazione del software ODBC.

## <a name="writing-an-odbc-administrator"></a><a name="_mfcnotes_writing_an_odbc_administrator"></a>Scrittura di un Amministratore ODBC

Un'applicazione di database MFC può impostare e configurare le origini dati ODBC in uno dei due modi seguenti:

- Utilizzare l'Amministratore ODBC (disponibile come programma o come elemento del Pannello di controllo).

- Creare un programma personalizzato per configurare le origini dati.

Un programma che configura le origini dati effettua chiamate di funzione alla DLL del programma di installazione. La DLL del programma di installazione chiama una DLL di installazione per configurare un'origine dati. Esiste una DLL di installazione per ogni driver; può essere la DLL del driver stesso o una DLL separata. La DLL di installazione richiede all'utente le informazioni necessarie al driver per connettersi all'origine dati e al convertitore predefinito, se supportato. Chiama quindi la DLL del programma di installazione e le API di Windows per registrare queste informazioni in ODBC. FILE INI (o Registro di sistema).

Per visualizzare una finestra di dialogo con cui un utente può `SQLManageDataSources` aggiungere, modificare ed eliminare origini dati, un programma chiama nella DLL del programma di installazione. Questa funzione viene richiamata quando la DLL del programma di installazione viene chiamata dal Pannello di controllo. Per aggiungere, modificare o eliminare `SQLManageDataSources` un'origine dati, le chiamate `ConfigDSN` nella DLL di installazione per il driver associato a tale origine dati. Per aggiungere, modificare o eliminare direttamente origini `SQLConfigDataSource` dati, un programma chiama nella DLL del programma di installazione. Il programma passa il nome dell'origine dati e un'opzione che specifica l'azione da eseguire. `SQLConfigDataSource`chiama `ConfigDSN` nella DLL di installazione e `SQLConfigDataSource`le passa gli argomenti da .

Per ulteriori informazioni, vedere ODBC SDK *Programmer's Reference,* Chapter 23, Setup DLL Function Reference e Chapter 24, Installer DLL Function Reference.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
