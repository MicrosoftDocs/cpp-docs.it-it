---
description: 'Altre informazioni su: origine dati: gestione delle connessioni (ODBC)'
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
ms.openlocfilehash: 748e81dd82190e8269ef30983a66dc3bb5f75731
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253884"
---
# <a name="data-source-managing-connections-odbc"></a>Origine dati: gestione delle connessioni (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

In questo argomento:

- [Come configurare un'origine dati](#_core_configuring_a_data_source).

- [Come un ambiente multiutente influisca su un'origine dati e sui relativi recordset](#_core_working_in_a_multiuser_environment).

- [Perché generalizzare una stringa di connessione a un'origine dati](#_core_generalizing_the_connection_string).

- [Come connettersi a un'origine dati](#_core_connecting_to_a_specific_data_source).

- [Modalità di disconnessione da un'origine dati](#_core_disconnecting_from_a_data_source).

- [Riutilizzo di un oggetto CDatabase](#_core_reusing_a_cdatabase_object).

La connessione a un'origine dati significa stabilire le comunicazioni con un DBMS per accedere ai dati. Quando ci si connette a un'origine dati da un'applicazione tramite un driver ODBC, il driver esegue la connessione in locale o in rete.

È possibile connettersi a qualsiasi origine dati per la quale si dispone di un driver ODBC. Gli utenti dell'applicazione devono avere anche lo stesso driver ODBC per l'origine dati. Per ulteriori informazioni sulla ridistribuzione dei driver ODBC, vedere [ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md).

## <a name="configuring-a-data-source"></a><a name="_core_configuring_a_data_source"></a> Configurazione di un'origine dati

Per configurare le origini dati, viene utilizzato l'amministratore ODBC. È inoltre possibile utilizzare ODBC Administrator dopo l'installazione per aggiungere o rimuovere origini dati. Quando si creano applicazioni, è possibile indirizzare gli utenti all'amministratore ODBC per consentire l'aggiunta di origini dati oppure è possibile compilare questa funzionalità nell'applicazione effettuando chiamate dirette all'installazione ODBC. Per ulteriori informazioni, vedere [ODBC Administrator](../../data/odbc/odbc-administrator.md).

È possibile utilizzare un file di Excel come origine dati ed è necessario configurare il file in modo che sia registrato e visualizzato nella finestra di dialogo **Seleziona origine dati** .

#### <a name="to-use-an-excel-file-as-a-data-source"></a>Per usare un file di Excel come origine dati

1. Configurare il file con l'amministratore dell'origine dati ODBC.

1. Nella scheda **DSN file** fare clic su **Aggiungi**.

1. Nella finestra di dialogo **Crea nuova origine dati** selezionare un driver per Excel, quindi fare clic su **Avanti**.

1. Fare clic su **Sfoglia** e selezionare il nome del file da utilizzare come origine data.

> [!NOTE]
> Potrebbe essere necessario selezionare **tutti i file** nel menu a discesa per visualizzare i file con estensione xls.

1. Fare clic su **Avanti** e quindi su **Fine**.

1. Nella finestra di dialogo **Configurazione ODBC Microsoft Excel** selezionare la versione del database e la cartella di lavoro.

## <a name="working-in-a-multiuser-environment"></a><a name="_core_working_in_a_multiuser_environment"></a> Uso di un ambiente multiutente

Se più utenti sono connessi a un'origine dati, possono modificare i dati durante la manipolazione nei recordset. Analogamente, le modifiche potrebbero influire sui recordset di altri utenti. Per ulteriori informazioni, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [Transaction (ODBC)](../../data/odbc/transaction-odbc.md).

## <a name="generalizing-the-connection-string"></a><a name="_core_generalizing_the_connection_string"></a> Generalizzazione della stringa di connessione

Nelle procedure guidate viene utilizzata una stringa di connessione predefinita per stabilire una connessione a un'origine dati. Questa connessione viene utilizzata per visualizzare tabelle e colonne durante lo sviluppo dell'applicazione. Tuttavia, questa stringa di connessione predefinita potrebbe non essere appropriata per le connessioni degli utenti all'origine dati tramite l'applicazione. Ad esempio, l'origine dati e il percorso alla relativa posizione potrebbero essere diversi da quelli usati per lo sviluppo dell'applicazione. In tal caso, è necessario implementare nuovamente la funzione membro [CRecordset:: GetDefaultConnect](../../mfc/reference/crecordset-class.md#getdefaultconnect) in modo più generico ed eliminare l'implementazione della procedura guidata. Ad esempio, usare uno degli approcci seguenti:

- Registrare e gestire le stringhe di connessione tramite l'amministratore ODBC.

- Modificare la stringa di connessione e rimuovere il nome dell'origine dati. Il Framework fornisce ODBC come origine dati. in fase di esecuzione, ODBC Visualizza una finestra di dialogo in cui viene richiesto il nome dell'origine dati e le altre informazioni di connessione necessarie.

- Specificare solo il nome dell'origine dati. ODBC richiede l'ID utente e la password, se necessario. Prima di generalizzare, ad esempio, la stringa di connessione ha un aspetto simile al seguente:

    ```cpp
    CString CApp1Set::GetDefaultConnect()
    {
       return "ODBC;DSN=afx;Trusted_Connection=Yes;";
    }
    ```

   Questa stringa di connessione specifica una connessione trusted, che utilizza la sicurezza integrata di Windows NT. È consigliabile evitare di impostare come hardcoded una password o specificare una password vuota, perché in questo modo si crea un punto di debolezza principale per la sicurezza. È invece possibile assegnare `GetDefaultConnect` una nuova stringa di connessione in modo che venga eseguita una query per un ID utente e una password.

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

## <a name="connecting-to-a-specific-data-source"></a><a name="_core_connecting_to_a_specific_data_source"></a> Connessione a un'origine dati specifica

Per connettersi a un'origine dati specifica, è necessario che l'origine dati sia già stata configurata con l' [amministratore ODBC](../../data/odbc/odbc-administrator.md).

#### <a name="to-connect-to-a-specific-data-source"></a>Per connettersi a un'origine dati specifica

1. Costruisce un `CDatabase` oggetto.

1. Chiamare la `OpenEx` relativa `Open` funzione membro o.

Per ulteriori informazioni su come specificare l'origine dati se è diversa da quella specificata con una procedura guidata, vedere [CDatabase:: OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) in *riferimenti a MFC*.

## <a name="disconnecting-from-a-data-source"></a><a name="_core_disconnecting_from_a_data_source"></a> Disconnessione da un'origine dati

È necessario chiudere tutti i recordset aperti prima di chiamare la `Close` funzione membro di `CDatabase` . Nei recordset associati all' `CDatabase` oggetto che si desidera chiudere, eventuali istruzioni o in sospeso `AddNew` `Edit` vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso.

#### <a name="to-disconnect-from-a-data-source"></a>Per disconnettersi da un'origine dati

1. Chiamare la `CDatabase` funzione membro [Close](../../mfc/reference/cdatabase-class.md#close) dell'oggetto.

1. Eliminare definitivamente l'oggetto, a meno che non si desideri riutilizzarlo.

## <a name="reusing-a-cdatabase-object"></a><a name="_core_reusing_a_cdatabase_object"></a> Riutilizzo di un oggetto CDatabase

È possibile riutilizzare un `CDatabase` oggetto dopo la disconnessione, indipendentemente dal fatto che venga utilizzato per riconnettersi alla stessa origine dati o per connettersi a un'origine dati diversa.

#### <a name="to-reuse-a-cdatabase-object"></a>Per riutilizzare un oggetto CDatabase

1. Chiudere la connessione originale dell'oggetto.

1. Anziché eliminare definitivamente l'oggetto, chiamare di nuovo la relativa `OpenEx` `Open` funzione membro o.

## <a name="see-also"></a>Vedi anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: determinazione dello schema dell'origine dati (ODBC)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
