---
title: 'Origine dati: Gestione delle connessioni (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC data sources [C++], multiuser environments
- generalizing connection strings
- ODBC [C++], disconnecting from data sources
- connection strings [C++], generalizing
- database connections [C++], creating
- GetDefaultConnect method
- connections [C++], data source
- ODBC connections [C++], configuring
- disconnecting from data sources
- databases [C++], connecting to
- ODBC connections [C++], disconnecting
- data sources [C++], connecting to
- ODBC connections [C++], connecting to data source
- ODBC data sources [C++], connections
- database connections [C++], MFC ODBC classes
ms.assetid: c0adbcdd-c000-40c6-b199-09ffdc7b6ef2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 100c06773a8f0ffa79631339384bd4ec42fa4b52
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="data-source-managing-connections-odbc"></a>Origine dati: gestione delle connessioni (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Questo argomento viene illustrato:  
  
-   [Come configurare un'origine dati](#_core_configuring_a_data_source).  
  
-   [Impatto di un ambiente multiutente un'origine dati e il relativo recordset](#_core_working_in_a_multiuser_environment).  
  
-   [Motivo per cui si generalizza una stringa di connessione a un'origine dati](#_core_generalizing_the_connection_string).  
  
-   [Come connettersi a un'origine dati](#_core_connecting_to_a_specific_data_source).  
  
-   [Disconnessione da un'origine dati](#_core_disconnecting_from_a_data_source).  
  
-   [Riutilizzo di un oggetto CDatabase](#_core_reusing_a_cdatabase_object).  
  
 Connessione a un'origine dati significa stabilire la comunicazione con un sistema DBMS per accedere ai dati. Quando ci si connette a un'origine dati da un'applicazione tramite un driver ODBC, il driver esegue la connessione, localmente o in una rete.  
  
 È possibile connettersi a qualsiasi origine dati per cui si dispone di un driver ODBC. Gli utenti dell'applicazione devono avere anche lo stesso driver ODBC per l'origine dati. Per ulteriori informazioni sulla ridistribuzione dei driver ODBC, vedere [ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md).  
  
##  <a name="_core_configuring_a_data_source"></a> Configurazione di un'origine dati  
 Amministratore ODBC viene utilizzato per configurare le origini dati. È inoltre possibile utilizzare Amministratore ODBC dopo l'installazione per aggiungere o rimuovere le origini dati. Quando si creano applicazioni, è possibile impostarla in modo gli utenti, l'amministratore ODBC per consentire di aggiungere le origini dati o è possibile compilare questa funzionalità nell'applicazione eseguendo chiamate dirette di installazione ODBC. Per ulteriori informazioni, vedere [Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
 È possibile utilizzare un file di Excel come origine dati, e si desidera configurare il file in modo che venga registrato e visualizzato nella **Seleziona origine dati** la finestra di dialogo.  
  
#### <a name="to-use-an-excel-file-as-a-data-source"></a>Per utilizzare un file di Excel come origine dati  
  
1.  Configurare il file con Amministrazione origine dati ODBC.  
  
2.  Nel **DSN su File** scheda, fare clic su **Aggiungi**.  
  
3.  Nel **Crea nuova origine dati** la finestra di dialogo, selezionare un driver per Excel e quindi fare clic su **Avanti**.  
  
4.  Fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine dati.  
  
> [!NOTE]
>  È possibile selezionare **tutti i file** nel menu a discesa per visualizzare i file con estensione xls.  
  
1.  Scegliere **Avanti**e quindi fare clic su **Fine**.  
  
2.  Nel **Configurazione ODBC per Microsoft Excel** finestra di dialogo, selezionare la versione di database e una cartella di lavoro.  
  
##  <a name="_core_working_in_a_multiuser_environment"></a> In un ambiente multiutente  
 Se più utenti sono connessi a un'origine dati, è possibile modificare i dati durante la manipolazione nei recordset. Analogamente, le modifiche potrebbero influire sul recordset di altri utenti. Per ulteriori informazioni, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="_core_generalizing_the_connection_string"></a> La stringa di connessione la generalizzazione  
 Le procedure guidate di utilizzano una stringa di connessione predefinita per stabilire una connessione a un'origine dati. Utilizzare questa connessione per visualizzare tabelle e colonne durante lo sviluppo dell'applicazione. Tuttavia, questa stringa di connessione potrebbe non essere appropriata per le connessioni degli utenti per l'origine dati tramite l'applicazione. Le origini dati e il relativo percorso, ad esempio, potrebbe essere diversi da quelli utilizzati durante lo sviluppo dell'applicazione. In tal caso, reimplementare la [CRecordset:: GetDefaultConnect](../../mfc/reference/crecordset-class.md#getdefaultconnect) membro funzionare in modo più generico e annullare l'implementazione della procedura guidata. Ad esempio, utilizzare uno degli approcci seguenti:  
  
-   Registrare e gestire le stringhe di connessione tramite Amministratore ODBC.  
  
-   Modificare la stringa di connessione e rimuovere il nome dell'origine dati. Il framework fornisce ODBC come origine dati. in fase di esecuzione ODBC consente di visualizzare una finestra di dialogo che richiede le informazioni di connessione a richiesta di nome e qualsiasi altra origine dati.  
  
-   Fornire solo il nome dell'origine dati. VERRANNO richiesti per l'ID utente e password, se necessario. Ad esempio, prima di generalizzazione, la stringa di connessione simile alla seguente:  
  
    ```  
    CString CApp1Set::GetDefaultConnect()  
    {  
       return "ODBC;DSN=afx;Trusted_Connection=Yes;";  
    }  
    ```  
  
     La stringa di connessione specifica una connessione trusted, che utilizza la sicurezza integrata di Windows NT. È consigliabile evitare di impostare una password come hardcoded o specificare una password vuota, perché questa operazione crea una vulnerabilità di sicurezza principali. È invece possibile assegnare `GetDefaultConnect` una nuova stringa di connessione in modo che viene eseguita una query per un ID utente e una password.  
  
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
  
##  <a name="_core_connecting_to_a_specific_data_source"></a> La connessione a un'origine dati specifica  
 Per connettersi a un'origine dati specifica, l'origine dati deve che già stata configurata tramite [Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
#### <a name="to-connect-to-a-specific-data-source"></a>Per connettersi a un'origine dati specifica  
  
1.  Costruire un `CDatabase` oggetto.  
  
2.  Chiamare il relativo `OpenEx` o **aprire** funzione membro.  
  
 Per ulteriori informazioni su come specificare l'origine dati in caso di un valore diverso da quello specificato con una procedura guidata, vedere [:: OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) nel *MFC Riferimento*.  
  
##  <a name="_core_disconnecting_from_a_data_source"></a> Disconnessione da un'origine dati  
 È necessario chiudere tutti i recordset aperti prima di chiamare il **chiudere** funzione membro di `CDatabase`. In recordset associato il `CDatabase` dell'oggetto che si desidera chiudere qualsiasi in sospeso `AddNew` o **modifica** istruzioni vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso.  
  
#### <a name="to-disconnect-from-a-data-source"></a>Per disconnettersi da un'origine dati  
  
1.  Chiamare il `CDatabase` dell'oggetto [Chiudi](../../mfc/reference/cdatabase-class.md#close) funzione membro.  
  
2.  Eliminare l'oggetto a meno che non si desidera riutilizzare.  
  
##  <a name="_core_reusing_a_cdatabase_object"></a> Riutilizzo di un oggetto CDatabase  
 È possibile riutilizzare un `CDatabase` oggetto dopo la disconnessione, se si utilizza per riconnettersi alla stessa origine dati o per connettersi a un'origine dati diversa.  
  
#### <a name="to-reuse-a-cdatabase-object"></a>Riutilizzo di un oggetto CDatabase  
  
1.  Chiudere la connessione originale dell'oggetto.  
  
2.  Anziché l'eliminazione dell'oggetto, chiamare il relativo `OpenEx` o **aprire** nuovamente la funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)   
 [Origine dati: Determinazione dello Schema dell'origine dati (ODBC)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)