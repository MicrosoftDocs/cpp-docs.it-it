---
title: 'TN048: Scrittura di programmi di amministrazione e installazione ODBC per applicazioni Database MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ec19e3c03d88fa088622c7ed8a5b4efeed0014b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn048-writing-odbc-setup-and-administration-programs-for-mfc-database-applications"></a>TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Le applicazioni utilizzando le classi di database MFC saranno necessario un programma di installazione installa i componenti ODBC. È necessario anche un programma di amministrazione di ODBC che consente di recuperare informazioni sui driver disponibili, per specificare driver predefiniti e per configurare le origini dati. Questa nota viene descritto l'utilizzo dell'API di programma di installazione ODBC per scrivere tali programmi.  
  
##  <a name="_mfcnotes_writing_an_odbc_setup_program"></a>Scrittura di un programma di installazione ODBC  
 Un'applicazione database MFC richiede gestione Driver ODBC (ODBC. DLL) e i driver ODBC possono essere in grado di accedere a origini dati. Molti driver ODBC richiedono anche altre DLL di rete e di comunicazione. La maggior parte dei driver ODBC fornito con un programma di installazione installerà i componenti necessari di ODBC. Gli sviluppatori di applicazioni utilizzando le classi di database MFC è possibile:  
  
-   Si affidano i programmi di installazione specifici del driver per l'installazione dei componenti ODBC. Questo richiederà senza ulteriore lavoro parte dello sviluppatore, è possibile ridistribuire solo il programma di installazione del driver.  
  
-   In alternativa, è possibile scrivere il proprio programma di installazione, che consente di installare Gestione driver e il driver.  
  
 L'API del programma di installazione ODBC consente di scrivere programmi di installazione specifiche dell'applicazione. Le funzioni API del programma di installazione vengono implementate dal programma di installazione ODBC DLL: ODBCINST. DLL Windows a 16 bit e ODBCCP32. DLL in Win32. Un'applicazione può chiamare **la funzione SQLInstallODBC** nel programma di installazione DLL, che consente di installare Gestione driver ODBC, il driver ODBC e qualsiasi richiesta traduttori. Quindi registra il driver installati e traduttori nel ODBCINST. Il file INI (o il Registro di sistema NT). **La funzione SQLInstallODBC** richiede il percorso completo di ODBC. File INF che contiene l'elenco di installazione di driver e vengono descritti i file che costituiscono tutti i driver. Contiene inoltre informazioni analoghe su Gestione driver e funzioni di conversione. ODBC. File INF vengono generalmente forniti dagli sviluppatori di driver.  
  
 Un programma è inoltre possibile installare singoli componenti ODBC. Per installare Gestione Driver, un programma chiama innanzitutto **SQLInstallDriverManager** nel programma di installazione DLL di ottenere la directory di destinazione per la gestione del Driver. Questo è in genere la directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione [gestione Driver ODBC] di ODBC. File INF per copiare i Driver Manager e i file correlati dal disco di installazione in questa directory. Per installare un driver singolo, un programma chiama innanzitutto **la funzione SQLInstallDriver** nel programma di installazione DLL per aggiungere la specifica di driver per il ODBCINST. Il file INI (o il Registro di sistema NT). **La funzione SQLInstallDriver** restituisce la directory di destinazione del driver, in genere la directory in cui risiedono le DLL di Windows. Il programma utilizza quindi le informazioni nella sezione del driver ODBC. File INF per copiare la DLL del driver e i file correlati dal disco di installazione in questa directory.  
  
 Per ulteriori informazioni su ODBC. INF, ODBCINST. INI e utilizzando il programma di installazione dell'API, vedere il SDK di ODBC *di riferimento per programmatori,* capitolo 19, l'installazione del Software di ODBC.  
  
##  <a name="_mfcnotes_writing_an_odbc_administrator"></a>Scrittura di un amministratore ODBC  
 Un'applicazione database MFC è possibile impostare e configurare le origini dati ODBC in uno dei due modi, come segue:  
  
-   Utilizzare Amministratore ODBC (disponibile come un programma o un elemento del Pannello di controllo).  
  
-   Creare un programma personalizzato per configurare le origini dati.  
  
 Un programma che consente di configurare origini dei dati effettua le chiamate di funzione al programma di installazione DLL. Il programma di installazione DLL chiama una DLL per configurare un'origine dati di installazione. È una DLL di installazione per ogni driver; potrebbe essere il driver DLL stessa, o una DLL separata. DLL di installazione richiede all'utente informazioni che il driver deve connettersi all'origine dati e il convertitore predefinito, se supportata. Chiama quindi il programma di installazione DLL e le API di Windows per registrare le informazioni in ODBC. Il file INI (o un registro di sistema).  
  
 Per visualizzare una finestra di dialogo con cui un utente può aggiungere, modificare ed eliminare origini dati, un programma chiama **SQLManageDataSources** nel programma di installazione DLL. Questa funzione viene richiamata quando il programma di installazione DLL viene chiamata dal Pannello di controllo. Per aggiungere, modificare o eliminare un'origine dati, **SQLManageDataSources** chiamate **ConfigDSN** nelle impostazioni di DLL del driver associato a tale origine dati. Per aggiungere, modificare o eliminare i dati direttamente le origini, le chiamate di un programma **SQLConfigDataSource** nel programma di installazione DLL. Il programma passa il nome dell'origine dati e un'opzione che specifica l'azione da intraprendere. **SQLConfigDataSource** chiamate **ConfigDSN** nel programma di installazione DLL e lo passa gli argomenti da **SQLConfigDataSource**.  
  
 Per ulteriori informazioni, vedere il SDK di ODBC *di riferimento per programmatori,* 23 capitolo, il programma di installazione di riferimento alle funzioni DLL e capitolo 24, riferimento alle funzioni di DLL di programma di installazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

