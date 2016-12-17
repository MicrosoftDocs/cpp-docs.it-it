---
title: "Origine dati: gestione delle connessioni (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stringhe di connessione [C++], generalizzazione"
  - "connessioni [C++], origine dati"
  - "origini dati [C++], connessione"
  - "connessioni di database [C++], creazione"
  - "connessioni di database [C++], classi ODBC MFC"
  - "database [C++], connessione"
  - "disconnessione da origini dati"
  - "generalizzazione di stringhe di connessione"
  - "GetDefaultConnect (metodo)"
  - "ODBC [C++], disconnessione da origini dati"
  - "connessioni ODBC [C++], configurazione"
  - "connessioni ODBC [C++], connessione a origine dati"
  - "connessioni ODBC [C++], disconnessione"
  - "origini dati ODBC [C++], connessioni"
  - "origini dati ODBC [C++], ambienti multiutente"
ms.assetid: c0adbcdd-c000-40c6-b199-09ffdc7b6ef2
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Origine dati: gestione delle connessioni (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Configurazione di un'origine dati](#_core_configuring_a_data_source).  
  
-   [Operazioni in un ambiente multiutente](#_core_working_in_a_multiuser_environment).  
  
-   [Generalizzazione della stringa di connessione](#_core_generalizing_the_connection_string).  
  
-   [Connessione a un'origine dati specifica](#_core_connecting_to_a_specific_data_source).  
  
-   [Disconnessione da un'origine dati](#_core_disconnecting_from_a_data_source).  
  
-   [Riutilizzo di un oggetto CDatabase](#_core_reusing_a_cdatabase_object).  
  
 Connettersi a un'origine dati significa stabilire la comunicazione con un DBMS per accedere ai dati.  Quando ci si connette a un'origine dati da un'applicazione tramite un driver ODBC, il driver stabilisce automaticamente la connessione a livello locale o in rete.  
  
 È possibile connettersi a qualsiasi origine dati per la quale si disponga di un driver ODBC.  È necessario inoltre che gli utenti finali dispongano dello stesso driver ODBC per l'origine dati utilizzata.  Per ulteriori informazioni sulla ridistribuzione dei driver ODBC, vedere [Ridistribuzione di componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md).  
  
##  <a name="_core_configuring_a_data_source"></a> Configurazione di un'origine dati  
 L'Amministratore ODBC viene utilizzato per la configurazione delle origini dati.  È inoltre possibile utilizzare l'Amministratore ODBC in seguito all'installazione per aggiungere o rimuovere origini dati.  Quando si crea un'applicazione, è possibile impostarla in modo che gli utenti finali utilizzino l'Amministratore ODBC per aggiungere origini dati oppure compilare questa funzionalità nell'applicazione eseguendo chiamate dirette per l'installazione di ODBC.  Per ulteriori informazioni, vedere [Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
 Per utilizzare un file di Microsoft Excel come origine dati, è necessario configurare il file in modo che venga registrato e visualizzato nella finestra di dialogo **Seleziona origine dati**.  
  
#### Per utilizzare un file di Microsoft Excel come origine dati  
  
1.  Configurare il file con l'Amministratore dell'origine dati ODBC.  
  
2.  Nella scheda **DSN su file** scegliere **Aggiungi**.  
  
3.  Nella finestra di dialogo **Crea origine dati** selezionare un driver di Excel, quindi scegliere **Avanti**.  
  
4.  Scegliere **Sfoglia** e selezionare il nome del file da utilizzare come origine dati.  
  
> [!NOTE]
>  Per visualizzare i file con estensione xls, potrebbe essere necessario selezionare **Tutti i file** dal menu a discesa.  
  
1.  Fare clic su **Avanti**, quindi su **Fine**.  
  
2.  Nella finestra di dialogo **Configurazione ODBC per Microsoft Excel** selezionare la versione e la cartella di lavoro del database.  
  
##  <a name="_core_working_in_a_multiuser_environment"></a> Operazioni in un ambiente multiutente  
 Se più utenti sono connessi a un'origine dati, è possibile che un utente modifichi i dati mentre questi vengono gestiti da un altro utente nei recordset.  In modo analogo, le modifiche del secondo utente potranno influenzare i recordset di altri utenti.  Per ulteriori informazioni, vedere [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="_core_generalizing_the_connection_string"></a> Generalizzazione della stringa di connessione  
 Nelle procedure guidate viene utilizzata una stringa di connessione predefinita per stabilire una connessione a un'origine dati.  È possibile utilizzare tale connessione per visualizzare le tabelle e le colonne durante lo sviluppo dell'applicazione.  Questa stringa di connessione può tuttavia non risultare appropriata per le connessioni degli utenti finali all'origine dati mediante l'applicazione creata.  Le origini dati utilizzate e il relativo percorso potrebbero, ad esempio, essere differenti da quelli utilizzati durante lo sviluppo dell'applicazione.  In tal caso, reimplementare la funzione membro [CRecordset::GetDefaultConnect](../Topic/CRecordset::GetDefaultConnect.md) in modo più generico e annullare l'implementazione della procedura guidata.  Utilizzare ad esempio una della soluzioni descritte di seguito.  
  
-   Registrare e gestire le stringhe di connessione mediante l'Amministratore ODBC.  
  
-   Modificare la stringa di connessione e rimuovere il nome dell'origine dati.  Il framework fornirà ODBC come origine dati e, in fase di esecuzione, in ODBC verrà visualizzata una finestra di dialogo che richiederà di specificare il nome dell'origine dati e altre informazioni di connessione.  
  
-   Fornire solo il nome dell'origine dati.  Verranno richiesti l'ID utente e la password, se necessari.  Di seguito è riportato un esempio di stringa di connessione prima della generalizzazione.  
  
    ```  
    CString CApp1Set::GetDefaultConnect()  
    {  
       return "ODBC;DSN=afx;Trusted_Connection=Yes;";  
    }  
    ```  
  
     La stringa di connessione specifica una connessione attendibile che utilizza la sicurezza integrata di Windows NT.  Per una maggiore sicurezza, è opportuno evitare di creare una password a livello di codice o di specificare una password vuota.  È invece possibile assegnare a `GetDefaultConnect` una nuova stringa di connessione in modo che richieda una password e un'ID utente.  
  
    ```  
    // User must select data source and supply user ID and password:  
        return "ODBC;";  
    // User ID and password required:  
        return "ODBC;DSN=mydb;";  
    // Password required (myuserid must be replaced with a valid user ID):  
        return "ODBC;DSN=mydb;UID=myuserid;";  
    // Hard-coded user ID and password (SECURITY WEAKNESS--AVOID):  
        return "ODBC;DSN=mydb;UID=sa;PWD=777;";  
    ```  
  
##  <a name="_core_connecting_to_a_specific_data_source"></a> Connessione a un'origine dati specifica  
 Per connettersi a un'origine dati specifica, è necessario che l'origine dati utilizzata sia già stata configurata tramite l'[Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
#### Per connettersi a un'origine dati specifica  
  
1.  Costruire un oggetto `CDatabase`.  
  
2.  Chiamare la funzione membro `OpenEx` o **Open** dell'oggetto.  
  
 Per ulteriori informazioni su come specificare un'origine dati diversa da quella impostata tramite la procedura guidata, vedere [CDatabase::OpenEx](../Topic/CDatabase::OpenEx.md) o [CDatabase::Open](../Topic/CDatabase::Open.md) in *Riferimenti alla libreria MFC*.  
  
##  <a name="_core_disconnecting_from_a_data_source"></a> Disconnessione da un'origine dati  
 È necessario chiudere tutti i recordset aperti prima di chiamare la funzione membro **Close** di `CDatabase`.  Nei recordset associati all'oggetto `CDatabase` che si desidera chiudere viene annullata qualsiasi istruzione `AddNew` o **Edit** in sospeso e viene eseguito il rollback di tutte le transazioni in sospeso.  
  
#### Per disconnettersi da un'origine dati  
  
1.  Chiamare la funzione membro [Close](../Topic/CDatabase::Close.md) dell'oggetto `CDatabase`.  
  
2.  Eliminare l'oggetto, a meno che non si desideri riutilizzarlo.  
  
##  <a name="_core_reusing_a_cdatabase_object"></a> Riutilizzo di un oggetto CDatabase  
 Dopo la disconnessione è possibile riutilizzare un oggetto `CDatabase` per riconnettersi alla stessa origine dati o a un'origine dati diversa.  
  
#### Per riutilizzare un oggetto CDatabase  
  
1.  Chiudere la connessione originale dell'oggetto.  
  
2.  Anziché eliminarlo, chiamare nuovamente la funzione membro `OpenEx` o **Open** dell'oggetto.  
  
## Vedere anche  
 [Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md)   
 [Origine dati: determinazione dello schema dell'origine dati \(ODBC\)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)