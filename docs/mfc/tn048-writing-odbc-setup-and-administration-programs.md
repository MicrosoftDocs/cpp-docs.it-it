---
title: 'TN048: Scrittura di programmi di amministrazione e installazione ODBC per applicazioni Database MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.odbc
dev_langs:
- C++
helpviewer_keywords:
- installing ODBC
- ODBC, installing
- setup, ODBC setup programs
- TN048
- ODBC, and MFC
- MFC, database applications
ms.assetid: d456cdd4-0513-4a51-80c0-9132b66115ce
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a7d89b6c6e05a5baf973abace2c64de3b52754f5
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954556"
---
# <a name="tn048-writing-odbc-setup-and-administration-programs-for-mfc-database-applications"></a>TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Le applicazioni utilizzando le classi di database MFC saranno necessario un programma di installazione che consente di installare componenti ODBC. È necessario anche un programma di amministrazione di ODBC che permette di recuperare informazioni sui driver disponibili, per specificare driver predefiniti e per configurare le origini dati. In questa nota viene descritto l'utilizzo dell'API di programma di installazione ODBC per scrivere tali programmi.  
  
##  <a name="_mfcnotes_writing_an_odbc_setup_program"></a> Scrittura di un programma di installazione ODBC  
 Un'applicazione database MFC richiede gestione Driver ODBC (ODBC. DLL) e i driver ODBC possono essere in grado di accedere alle origini dati. Molti driver ODBC richiedono anche altre DLL di rete e di comunicazione. La maggior parte dei driver ODBC fornito con un programma di installazione che installerà i componenti necessari di ODBC. Gli sviluppatori di applicazioni utilizzando le classi di database MFC è possibile:  
  
-   Si basano sui programmi di installazione specifiche del driver per l'installazione dei componenti ODBC. Questo richiederà senza ulteriore lavoro parte dello sviluppatore, è possibile ridistribuire solo il programma di installazione del driver.  
  
-   In alternativa, è possibile scrivere il proprio programma di installazione, che consente di installare Gestione driver e il driver.  
  
 L'API di programma di installazione ODBC è utilizzabile per scrivere programmi di installazione specifiche dell'applicazione. Le funzioni nel programma di installazione API vengono implementate dal programma di installazione ODBC DLL, ovvero ODBCINST. DLL in Windows a 16 bit e ODBCCP32. DLL in Win32. Un'applicazione può chiamare `SQLInstallODBC` nel programma di installazione DLL, che consente di installare Gestione driver ODBC e driver ODBC qualsiasi richiesta traduttori. Quindi registra il driver installati e funzioni di conversione nel ODBCINST. Il file INI (o il Registro di sistema NT). `SQLInstallODBC` richiede il percorso completo di ODBC. File INF, che contiene l'elenco di installazione di driver e vengono descritti i file che costituiscono tutti i driver. Contiene inoltre informazioni analoghe su Gestione driver e funzioni di conversione. ODBC. File INF vengono generalmente forniti dagli sviluppatori di driver.  
  
 Un programma può installare anche i singoli componenti ODBC. Per installare Gestione Driver, un programma chiama innanzitutto `SQLInstallDriverManager` nel programma di installazione DLL per ottenere la directory di destinazione per la gestione Driver. Si tratta in genere della directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione [gestione Driver ODBC] di ODBC. File INF per copiare i file correlati e gestione Driver dal disco di installazione in questa directory. Per installare un driver singolo, un programma chiama innanzitutto `SQLInstallDriver` nel programma di installazione DLL per aggiungere la specifica di driver per il ODBCINST. Il file INI (o il Registro di sistema NT). `SQLInstallDriver` Restituisce la directory di destinazione del driver, in genere la directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione del driver ODBC. File INF per copiare la DLL del driver e i file correlati dal disco di installazione in questa directory.  
  
 Per ulteriori informazioni su ODBC. INF, ODBCINST. INI e utilizzando il programma di installazione API, vedere il SDK di ODBC *di riferimento per programmatori,* capitolo 19, installazione Software di ODBC.  
  
##  <a name="_mfcnotes_writing_an_odbc_administrator"></a> Scrittura di un amministratore ODBC  
 Un'applicazione database MFC è possibile impostare e configurare le origini dati ODBC in uno dei due modi, come indicato di seguito:  
  
-   Utilizzare Amministratore ODBC (disponibile come un programma o un elemento del Pannello di controllo).  
  
-   Creare un programma personalizzato per configurare le origini dati.  
  
 Un programma che consente di configurare origini dei dati effettua le chiamate di funzione al programma di installazione DLL. Il programma di installazione DLL chiama una DLL per configurare un'origine dati di installazione. Viene configurato una DLL per ogni driver; potrebbe essere il driver DLL stessa, o una DLL separata. La DLL viene richiesto all'utente le informazioni necessarie per il driver per la connessione all'origine dati e il convertitore predefinito, se supportata. Chiama quindi il programma di installazione DLL e le API di Windows per registrare queste informazioni in ODBC. Il file INI (o un registro di sistema).  
  
 Per visualizzare una finestra di dialogo con cui un utente può aggiungere, modificare ed eliminare origini dati, un programma chiama `SQLManageDataSources` nel programma di installazione DLL. Questa funzione viene richiamata quando il programma di installazione DLL viene chiamato dal Pannello di controllo. Per aggiungere, modificare o eliminare un'origine dati, `SQLManageDataSources` chiamate `ConfigDSN` nel programma di installazione DLL per il driver associato a tale origine dati. Per aggiungere, modificare o eliminare i dati direttamente le origini, le chiamate di un programma `SQLConfigDataSource` nel programma di installazione DLL. Il programma passa il nome dell'origine dati e un'opzione che specifica l'azione da intraprendere. `SQLConfigDataSource` le chiamate `ConfigDSN` nel programma di installazione DLL e lo passa gli argomenti da `SQLConfigDataSource`.  
  
 Per altre informazioni, vedere il SDK di ODBC *di riferimento per programmatori,* 23 capitolo, il programma di installazione di riferimento alle funzioni DLL e capitolo i 24 anni, riferimenti alle funzioni di DLL di programma di installazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

