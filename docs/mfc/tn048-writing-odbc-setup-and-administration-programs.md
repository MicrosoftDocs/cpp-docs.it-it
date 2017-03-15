---
title: "TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.odbc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "installazione di ODBC"
  - "MFC, applicazioni database"
  - "ODBC, e MFC"
  - "ODBC, installazione"
  - "installazione, programmi di installazione ODBC"
  - "TN048"
ms.assetid: d456cdd4-0513-4a51-80c0-9132b66115ce
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN048: scrittura di programmi di amministrazione e installazione ODBC per applicazioni database MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Le applicazioni utilizzando le classi di database MFC è necessario un programma di installazione che consentirà di componenti ODBC.  Possono inoltre essere necessario un programma di amministrazione ODBC che recupererà le informazioni sui driver disponibili, per specificare i driver predefiniti e di configurare le origini dati.  Questa nota viene descritto l'utilizzo del programma di installazione API ODBC scrivere tali programmi.  
  
##  <a name="_mfcnotes_writing_an_odbc_setup_program"></a> Scrittura di un programma di installazione ODBC  
 Un'applicazione di database MFC richiede a gestione driver ODBC \(ODBC.DLL\) e ai driver ODBC per il recupero delle origini dati.  Molti driver ODBC richiedono anche DLL aggiuntivi di comunicazione e della rete.  La maggior parte di disponibili driver ODBC con un programma di installazione che installerà i componenti necessari di ODBC.  Gli sviluppatori di applicazioni che utilizzano le classi di database MFC possono:  
  
-   Nozioni fondamentali sui programmi di installazione driver\- specifici per installare componenti ODBC.  Ciò non necessita di ulteriore lavoro allo sviluppatore parziale è possibile ridistribuire solo il programma di installazione del driver.  
  
-   In alternativa, è possibile scrivere un programma di installazione che installerà, gestione driver e il driver.  
  
 Il programma di installazione API ODBC può essere utilizzato per creare programmi di installazione specifici.  Le funzioni del programma di installazione API vengono implementate dalla DLL del programma di installazione ODBC MFC ODBCINST.DLL in windows a 16 bit e ODBCCP32.DLL su Win32.  Un'applicazione può chiamare **SQLInstallODBC** nella DLL del programma di installazione che installerà, gestione driver ODBC, i driver ODBC e tutti i traduttori obbligatori.  Scegliere registra i driver e i traduttori installati nel file di ODBCINST.INI \(o nel Registro di sistema, su NT.  **SQLInstallODBC** richiede il percorso completo del file di ODBC.INF, che contiene l'elenco dei driver da installare e vengono descritti i file che includono ogni driver.  Contiene inoltre le informazioni analoghe su gestione e i traduttori driver.  I file di ODBC.INF in genere vengono forniti gli sviluppatori del driver.  
  
 Un programma può inoltre necessario installare i singoli componenti ODBC.  Per installare gestione driver, chiama innanzitutto **SQLInstallDriverManager** di un programma nella DLL del programma di installazione per ottenere la directory di destinazione di gestione driver.  Si tratta in genere della directory in cui le DLL di windows si trovano.  Il programma utilizza quindi le informazioni nella sezione \[gestione driver ODBC\] del file di ODBC.INF per copiare gestione driver e file correlati dal disco di installazione in questa directory.  Per installare un singolo driver, chiama innanzitutto **SQLInstallDriver** di un programma nella DLL del programma di installazione per aggiungere la specifica del driver al file di ODBCINST.INI \(o al Registro di sistema, su NT.  **SQLInstallDriver** restituisce la directory di destinazione del driver \- genere la directory in cui le DLL di windows si trovano.  Il programma utilizza quindi le informazioni nella sezione del driver del file di ODBC.INF per copiare la DLL del driver e file correlati dal disco di installazione in questa directory.  
  
 Per ulteriori informazioni su ODBC.INF, ODBCINST.INI e utilizzando il programma di installazione API, vedere ODBC SDK programmer's reference *,* capitolo 19, vedere installazione del software ODBC.  
  
##  <a name="_mfcnotes_writing_an_odbc_administrator"></a> Scrittura dell'amministratore ODBC  
 Un'applicazione di database MFC può installare e configurare le origini dati ODBC in due modi, come segue:  
  
-   Utilizzare l'amministratore ODBC disponibile come programma o come elemento Pannello di controllo.  
  
-   Creare un programma per configurare le origini dati.  
  
 Un programma che configura le origini dati effettua chiamate di funzione alla DLL del programma di installazione.  La DLL del programma di installazione chiama una DLL di impostazione per configurare un'origine dati.  È disponibile una DLL configurato per ogni driver; può essere la DLL stessa del driver, o una DLL separata.  La DLL di configurazione sono richiesti informazioni all'utente che il driver deve connettersi all'origine dati e del convertitore predefinito, se supportato.  Quindi chiama la DLL del programma di installazione e API Windows per registrare queste informazioni nel file di ODBC.INI \(o nel Registro di sistema\).  
  
 Per visualizzare una finestra di dialogo con cui è possibile aggiungere, modificare ed eliminare le origini dati, chiamare **SQLManageDataSources** di un programma nella DLL del programma di installazione.  Questa funzione viene chiamata quando la DLL del programma di installazione viene chiamato dal Pannello di controllo.  Add, modify, or delete un'origine dati, **SQLManageDataSources** chiama **ConfigDSN** nella DLL di configurazione per il driver associato all'origine dati.  Per aggiungere direttamente, modify, or delete le origini dati, un programma chiama **SQLConfigDataSource** nella DLL del programma di installazione.  Il programma passa il nome dell'origine dati e di un'opzione che specifica l'azione da eseguire.  **SQLConfigDataSource** chiama **ConfigDSN** nella DLL e sessioni di impostazione di argomenti da **SQLConfigDataSource**.  
  
 Per ulteriori informazioni, vedere l'sdk di ODBC programmer's reference *,* capitolo 23, il riferimento di funzione DLL di installazione e il capitolo 24, di funzione DLL del programma di installazione.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)