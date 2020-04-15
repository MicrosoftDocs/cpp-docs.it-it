---
title: Creazione guidata consumer OLE DB ATL
ms.date: 07/02/2019
helpviewer_keywords:
- ATL projects, adding ATL OLE DB consumers
ms.assetid: dcb68ed1-2224-422f-9f7b-108a74864204
ms.openlocfilehash: 16b2863bc3919edadeef29691c4588838010d9dc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319264"
---
# <a name="atl-ole-db-consumer-wizard"></a>Creazione guidata consumer OLE DB ATL

::: moniker range="vs-2019"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Questa procedura guidata configura una classe consumer OLE DB con le associazioni di dati necessarie per accedere all'origine dati specificata tramite il provider OLE DB indicato.

> [!NOTE]
> In questa procedura guidata è necessario fare clic sul pulsante **Origine dati** per selezionare un'origine dati prima di immettere i nomi nei campi `Class` e **File con estensione h**.

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Origine dati**

   Il pulsante **Origine dati** permette di configurare l'origine dati specificata usando il provider OLE DB indicato. Quando si fa clic su questo pulsante, viene visualizzata la finestra di dialogo **Proprietà di Data Link**. Per altre informazioni sulla creazione di stringhe di connessione e sulla finestra di dialogo **Proprietà di Data Link**, vedere [Panoramica dell'API Data Link](/previous-versions/windows/desktop/ms718102(v=vs.85)) nella documentazione di Windows SDK.

   Le informazioni aggiuntive seguenti descrivono le schede della finestra di dialogo **Proprietà di Data Link**.

  - Scheda **Provider**

      Selezionare un provider appropriato per gestire la connessione all'origine dati. Il tipo di provider in genere è determinato dal tipo di database cui ci si connette. Fare clic sul pulsante **Avanti** oppure sulla scheda **Connessione**.

  - **Scheda Connessione**

      Il contenuto di questa scheda dipende dal provider selezionato. Sebbene esistano molti tipi di provider, in questa sezione vengono illustrate le connessioni per i due più comuni: dati SQL e ODBC. Gli altri sono varianti simili dei campi descritti qui.

      Per dati SQL:

      1. **Selezionare o immettere il nome di un server:** Fare clic sul menu a discesa per visualizzare tutti i server dati registrati sulla rete e selezionarne uno.

      1. **Immettere le informazioni per accedere al server:** Immettere un nome utente e una password per accedere al server dati.

         > [!NOTE]
         > Esiste un problema di sicurezza relativo alla funzionalità "Consenti salvataggio password" della finestra di dialogo Proprietà di Data Link. In "Immettere le informazioni per l'accesso al server" sono disponibili due pulsanti di opzione:
         >
         > - **Utilizzare la protezione integrata di Windows NT**
         > - **Usa nome utente e password specifici**
         >
         > Se si seleziona **Utilizza nome utente e password specifici**, è possibile scegliere di salvare la password (usando la casella di controllo "Consenti salvataggio password"), ma questa opzione non è sicura. È consigliabile selezionare **Usa sicurezza integrata di Windows NT**: questa opzione è sicura perché crittografa la password.
         > In alcuni casi può essere necessario selezionare "Consenti salvataggio password". Ad esempio, se si sta rilasciando una libreria con una soluzione di database privata, è necessario non accedere al database direttamente, ma usare invece un'applicazione di livello intermedio per verificare l'utente (tramite qualsiasi schema di autenticazione scelto) e quindi limitare il tipo di dati disponibili per l'utente.

      1. **Selezionare il database sul server:** Fare clic sul menu a discesa per visualizzare tutti i database registrati nel server dati e selezionarne uno.

         \- - oppure -

         Collegare un file di **database come nome di database:** Specificare un file da utilizzare come database; immettere il nome di percorso esplicito.

      Per dati ODBC:

      1. **Specificare l'origine dei dati:** È possibile utilizzare un nome di origine dati o una stringa di connessione.

         **Usa nome origine dati:Use data source name:** Questo elenco a discesa visualizza le origini dati registrate nel computer. È possibile configurare le origini dati in anticipo tramite Amministrazione origine dati ODBC

         \- - oppure -

         **Usa stringa di connessione:Use connection string:** Immettere una stringa di connessione già ottenuta oppure fare clic sul pulsante **Compila;** viene visualizzata la finestra di dialogo **Seleziona origine dati.** Selezionare un'origine dati file o computer e fare clic su **OK**.

         > [!NOTE]
         > È possibile ottenere una stringa di connessione visualizzando le proprietà di una connessione esistente in **Esplora server** oppure è possibile creare una connessione facendo doppio clic su **Aggiungi connessione** in **Esplora server**.

      1. **Immettere le informazioni per accedere al server:** Immettere un nome utente e una password per accedere al server dati.

      1. Immettere il catalogo iniziale da usare.

      1. Fare clic su **Test connessione**. Se il test riesce, fare clic su **OK**. In caso contrario, controllare le informazioni di accesso, provare un altro database o provare un altro server dati.

  - **Scheda Avanzate**

      **Impostazioni di rete:** Specificare il **livello** di rappresentazione (il livello di rappresentazione che il server può utilizzare quando si rappresenta il client; corrisponde direttamente ai livelli di rappresentazione RPC) e il **livello** di protezione (il livello di protezione dei dati inviati tra client e server; corrisponde direttamente ai livelli di protezione RPC).

      **Altro:** In **Timeout connessione**specificare il numero di secondi di tempo di inattività consentiti prima che si verifichi un timeout. In **Autorizzazioni di accesso** specificare le autorizzazioni di accesso per la connessione dati.

      Per altre informazioni sulle proprietà di inizializzazione avanzate, vedere la documentazione fornita con ogni provider OLE DB specifico.

  - Scheda **Tutte**

      Questa scheda visualizza un riepilogo delle proprietà di inizializzazione per l'origine dati e la connessione specificate. È possibile modificare questi valori.

      Fare clic su **OK** per completare la procedura. Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**. Da questa finestra di dialogo selezionare la tabella, la visualizzazione o la stored procedure che verrà usata dal consumer.

- **Class**

   Dopo aver selezionato un'origine dati, in questa casella viene immesso un nome di classe predefinito in base alla tabella o alla stored procedure selezionata (vedere **Selezionare un'origine dati** di seguito). È possibile modificare il nome della classe.

- **File con estensione h**

   Dopo aver selezionato un'origine dati, in questa casella viene immesso un nome di classe intestazione predefinito in base alla tabella o alla stored procedure selezionata (vedere **Selezionare un'origine dati** di seguito). È possibile modificare il nome del file di intestazione o selezionare un file di intestazione esistente.

- **Con attributi**

   Questa opzione specifica se la procedura guidata creerà classi consumer tramite attributi o dichiarazioni di modello. Quando si seleziona questa opzione, la procedura guidata usa attributi invece di dichiarazioni di modello (impostazione predefinita). Quando si deseleziona questa opzione, la procedura guidata usa dichiarazioni di modello anziché attributi.

  - Se si seleziona un tipo di consumer **Type****Table**, la procedura guidata usa gli attributi `db_source` e `db_table` per creare le dichiarazioni di classe della tabella e delle funzioni di accesso alla tabella e usa `db_column` per creare la mappa delle colonne. Ad esempio, crea questa mappa:

    ```cpp
    // Inject table class and table accessor class declarations
    [db_source("<initialization_string>"), db_table("dbo.Orders")]
    ...
    // Column map
    [ db_column(1, status=m_dwOrderIDStatus, length=m_dwOrderIDLength) ] LONG m_OrderID;
    [ db_column(2, status=m_dwCustomerIDStatus, length=m_dwCustomerIDLength) ] TCHAR m_CustomerID[6];
    ...
    ```

     invece di usare la classe modello `CTable` per dichiarare la classe della tabella e delle funzioni di accesso alla tabella e le macro BEGIN_COLUMN_MAP ed END_COLUMN_MAP per creare la mappa delle colonne, come in questo esempio:

    ```cpp
    // Table accessor class
        class COrdersAccessor; // Table class
        class COrders : public CTable<CAccessor<COrdersAccessor>>;
    // ...
    // Column map
        BEGIN_COLUMN_MAP(COrderDetailsAccessor)
            COLUMN_ENTRY_LENGTH_STATUS(1, m_OrderID, m_dwOrderIDLength, m_dwOrderIDStatus)
            COLUMN_ENTRY_LENGTH_STATUS(2, m_CustomerID, m_dwCustomerIDLength, m_dwCustomerIDStatus)
            // ...
        END_COLUMN_MAP()
    ```

  - Se si seleziona un tipo di consumer **Type****Command**, la procedura guidata usa gli attributi `db_source` e `db_command` e usa `db_column` per creare la mappa delle colonne. Ad esempio, crea questa mappa:

    ```cpp
    [db_source("<initialization_string>"), db_command("SQL_command")]
    ...
    // Column map using db_column is the same as for consumer type of 'table'
    ```

     invece di usare le dichiarazioni di classe del comando e delle funzioni di accesso al comando nel file con estensione h della classe del comando, ad esempio:

    ```cpp
    // Command accessor class:
        class CListOrdersAccessor;
    // Command class:
        class CListOrders : public CCommand<CAccessor<CListOrdersAccessor>>;
    // ...
    // Column map using BEGIN_COLUMN_MAP ... END_COLUMN_MAP is the same as
    // for consumer type of 'table'
    ```

     Per altre informazioni, vedere [Meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md).

- **Tipo**

   Selezionare uno di questi pulsanti di opzione per specificare se la classe consumer verrà derivata da `CTable` o `CCommand` (impostazione predefinita).

  - **tavolo**

      Selezionare questa opzione se si vuole usare `CTable` o `db_table` per creare le dichiarazioni di classe della tabella e delle funzioni di accesso alla tabella.

  - **Comando**

      Selezionare questa opzione se si vuole usare `CCommand` o `db_command` per creare le dichiarazioni di classe del comando e delle funzioni di accesso al comando. Si tratta della selezione predefinita.

- **Supporto**

   Selezionare le caselle di controllo per specificare i tipi di aggiornamenti che devono essere supportati nel consumer (l'impostazione predefinita è nessuno). Ognuna delle opzioni seguenti imposterà [DBPROP_IRowsetChange](/previous-versions/windows/desktop/ms715892(v=vs.85)) e le voci appropriate per [DBPROP_UPDATABILITY](/previous-versions/windows/desktop/ms722676(v=vs.85)) nella mappa del set di proprietà.

  - **Cambiare**

      Specifica che il consumer supporta gli aggiornamenti dei dati di riga nel set di righe.

  - **Insert**

      Specifica che il consumer supporta l'inserimento di righe nel set di righe.

  - **Elimina**

      Specifica che il consumer supporta l'eliminazione di righe nel set di righe.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Consumer OLE DB ATL](../../atl/reference/adding-an-atl-ole-db-consumer.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Stringhe di connessione e collegamenti dati (OLE DB)](/previous-versions/windows/desktop/ms718376(v=vs.85))
