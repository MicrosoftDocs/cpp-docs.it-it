---
title: 'Origine dati: gestione delle connessioni (ODBC)'
ms.date: 11/04/2016
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
ms.openlocfilehash: 107a5e20b70f67be74b6e6f861bd539446e9d4ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374523"
---
# <a name="data-source-managing-connections-odbc"></a>Origine dati: gestione delle connessioni (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Come configurare un'origine dati](#_core_configuring_a_data_source).

- [Influenza di un ambiente multiutente su un'origine dati e sui relativi recordset.](#_core_working_in_a_multiuser_environment)

- Motivi per cui generalizzare una stringa di [connessione a un'origine dati.](#_core_generalizing_the_connection_string)

- [Come connettersi a un'origine dati](#_core_connecting_to_a_specific_data_source).

- [Come disconnettersi da un'origine dati](#_core_disconnecting_from_a_data_source).

- [Come riutilizzare un oggetto CDatabase](#_core_reusing_a_cdatabase_object).

La connessione a un'origine dati significa stabilire comunicazioni con un DBMS per accedere ai dati. Quando ci si connette a un'origine dati da un'applicazione tramite un driver ODBC, il driver effettua la connessione per l'utente, localmente o attraverso una rete.

È possibile connettersi a qualsiasi origine dati per cui si dispone di un driver ODBC. Gli utenti dell'applicazione devono inoltre disporre dello stesso driver ODBC per l'origine dati. Per ulteriori informazioni sulla ridistribuzione dei driver ODBC, vedere [Ridistribuzione di componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md).

## <a name="configuring-a-data-source"></a><a name="_core_configuring_a_data_source"></a>Configurazione di un'origine datiConfiguring a Data Source

L'Amministratore ODBC viene utilizzato per configurare le origini dati. È inoltre possibile utilizzare l'Amministratore ODBC dopo l'installazione per aggiungere o rimuovere origini dati. Quando si creano applicazioni, è possibile indirizzare gli utenti all'Amministratore ODBC per consentire loro di aggiungere origini dati oppure è possibile compilare questa funzionalità nell'applicazione effettuando chiamate di installazione ODBC dirette. Per ulteriori informazioni, vedere [Amministratore ODBC](../../data/odbc/odbc-administrator.md).

È possibile utilizzare un file di Excel come origine dati ed è necessario configurare il file in modo che venga registrato e visualizzato nella finestra di dialogo **Seleziona origine dati.**

#### <a name="to-use-an-excel-file-as-a-data-source"></a>Per utilizzare un file di Excel come origine datiTo use an Excel file as a data source

1. Configurare il file con l'Amministratore origine dati ODBC.

1. Nella scheda **DSN su file** fare clic su **Aggiungi**.

1. Nella finestra di dialogo **Crea nuova origine dati** selezionare un driver di Excel e quindi fare clic su **Avanti**.

1. Fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine data.

> [!NOTE]
> Potrebbe essere necessario selezionare **Tutti i file** nel menu a discesa per visualizzare i file con estensione xls.

1. Fare clic su **Avanti** e quindi su **Fine**.

1. Nella finestra di dialogo Installazione ODBC di **Microsoft Excel** selezionare la versione e la cartella di lavoro del database.

## <a name="working-in-a-multiuser-environment"></a><a name="_core_working_in_a_multiuser_environment"></a>Utilizzo di un ambiente multiutente

Se più utenti sono connessi a un'origine dati, possono modificare i dati durante la modifica nei recordset. Analogamente, le modifiche potrebbero influire sui recordset di altri utenti. Per ulteriori informazioni, vedere [Recordset: modalità](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) di aggiornamento dei record di aggiornamento (ODBC) e [Transazione (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="generalizing-the-connection-string"></a><a name="_core_generalizing_the_connection_string"></a>Generalizzazione della stringa di connessioneGeneralizing the Connection String

Le procedure guidate utilizzano una stringa di connessione predefinita per stabilire una connessione a un'origine dati. Utilizzare questa connessione per visualizzare tabelle e colonne durante lo sviluppo dell'applicazione. Tuttavia, questa stringa di connessione predefinita potrebbe non essere appropriata per le connessioni degli utenti all'origine dati tramite l'applicazione. Ad esempio, l'origine dati e il percorso della relativa posizione potrebbero essere diversi da quello utilizzato nello sviluppo dell'applicazione. In tal caso, è necessario reimplementare la funzione membro [CRecordset::GetDefaultConnect](../../mfc/reference/crecordset-class.md#getdefaultconnect) in modo più generico ed eliminare l'implementazione della procedura guidata. Ad esempio, utilizzare uno dei seguenti approcci:

- Registrare e gestire le stringhe di connessione utilizzando l'Amministratore ODBC.

- Modificare la stringa di connessione e rimuovere il nome dell'origine dati. Il framework fornisce ODBC come origine dati; in fase di esecuzione, ODBC visualizza una finestra di dialogo in cui viene richiesto il nome dell'origine dati e tutte le altre informazioni di connessione necessarie.

- Specificare solo il nome dell'origine dati. ODBC richiede l'ID utente e la password, se necessario. Ad esempio, prima di generalizzare, la stringa di connessione è simile alla seguente:For example, before generalizing, the connection string looks like this:

    ```cpp
    CString CApp1Set::GetDefaultConnect()
    {
       return "ODBC;DSN=afx;Trusted_Connection=Yes;";
    }
    ```

   Questa stringa di connessione specifica una connessione trusted, che utilizza la protezione integrata di Windows NT. È consigliabile evitare di codificare una password o specificare una password vuota, perché in questo modo si crea un grave punto debole per la sicurezza. È invece `GetDefaultConnect` possibile assegnare una nuova stringa di connessione in modo che esedii per un ID utente e una password.

    ```cpp
    // User must select data source and supply user ID and password:
        return "ODBC;";
    // User ID and password required:
        return "ODBC;DSN=mydb;";
    // Password required (myuserid must be replaced with a valid user ID):
        return "ODBC;DSN=mydb;UID=myuserid;";
    // Hard-coded user ID and password (SECURITY WEAKNESS--AVOID):
        return "ODBC;DSN=mydb;UID=sa;PWD=777;";
    ```

## <a name="connecting-to-a-specific-data-source"></a><a name="_core_connecting_to_a_specific_data_source"></a>Connessione a un'origine dati specificaConnecting to a Specific Data Source

Per connettersi a un'origine dati specifica, è necessario che l'origine dati sia già stata configurata con [l'Amministratore ODBC.](../../data/odbc/odbc-administrator.md)

#### <a name="to-connect-to-a-specific-data-source"></a>Per connettersi a un'origine dati specificaTo connect to a specific data source

1. Costruire `CDatabase` un oggetto.

1. Chiamare `OpenEx` la `Open` funzione o membro.

Per ulteriori informazioni su come specificare l'origine dati se è diversa da quella specificata con una procedura guidata, vedere [CDatabase::OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) in *Reference su MFC*.

## <a name="disconnecting-from-a-data-source"></a><a name="_core_disconnecting_from_a_data_source"></a>Disconnessione da un'origine datiDisconnecting from a Data Source

È necessario chiudere tutti i `Close` recordset aperti `CDatabase`prima di chiamare la funzione membro di . Nei recordset associati `CDatabase` all'oggetto che si `AddNew` desidera `Edit` chiudere, tutte le istruzioni o in sospeso vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso.

#### <a name="to-disconnect-from-a-data-source"></a>Per disconnettersi da un'origine datiTo disconnect from a data source

1. Chiamare `CDatabase` la funzione membro [Close](../../mfc/reference/cdatabase-class.md#close) dell'oggetto.

1. Eliminare l'oggetto a meno che non si desideri riutilizzarlo.

## <a name="reusing-a-cdatabase-object"></a><a name="_core_reusing_a_cdatabase_object"></a>Riutilizzo di un oggetto CDatabaseReusing a CDatabase Object

È possibile riutilizzare un `CDatabase` oggetto dopo la disconnessione da esso, se utilizzarlo per riconnettersi alla stessa origine dati o per connettersi a un'origine dati diversa.

#### <a name="to-reuse-a-cdatabase-object"></a>Per riutilizzare un oggetto CDatabaseTo reuse a CDatabase object

1. Chiudere la connessione originale dell'oggetto.

1. Invece di distruggere l'oggetto, chiamare di nuovo la funzione `OpenEx` o `Open` membro.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: determinazione dello schema dell'origine dati (ODBC)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)
