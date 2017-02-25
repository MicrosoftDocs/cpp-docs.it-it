---
title: "Creazione guidata consumer OLE DB ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.consumer.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata consumer OLE DB ATL"
  - "ATL (progetti), aggiunta di consumer OLE DB ATL"
  - "stringhe di connessione [C++], OLE DB (consumer)"
ms.assetid: dcb68ed1-2224-422f-9f7b-108a74864204
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Creazione guidata consumer OLE DB ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per impostare una classe consumer OLE DB con le associazioni dati necessarie ad accedere all'origine dati specificata tramite il provider OLE DB specificato.  
  
> [!NOTE]
>  Prima di immettere i nomi nelle caselle `Class` e **File .h** è necessario fare clic sul pulsante **Origine dati** per selezionare un'origine dati.  
  
## Elenco UIElement  
 **Origine dati**  
 È possibile utilizzare il pulsante **Origine dati** per impostare l'origine dati specificata mediante il provider OLE DB specificato.  Quando si fa clic su questo pulsante, viene visualizzata la finestre delle **proprietà Data Link**.  Per ulteriori informazioni sulla compilazione delle stringhe di connessione e sulla finestra di dialogo delle **Proprietà di collegamento dati**, vedere [Cenni preliminari sull'API di collegamento dati](https://msdn.microsoft.com/en-us/library/ms718102.aspx) nella documentazione relativa a [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
> [!NOTE]
>  Nelle versioni precedenti era possibile fare clic sul pulsante **Origine dati** tenendo premuto MAIUSC per visualizzare una finestra Apri file in cui selezionare un file di Data Link \(UDL\).  Questa funzionalità non è più supportata.  
  
 Nella finestra di dialogo sono disponibili quattro schede:  
  
-   Scheda **Provider**  
  
-   Scheda **Connessione**  
  
-   Scheda **Avanzate**  
  
-   Scheda **Tutte**  
  
     Le ulteriori informazioni riportate di seguito descrivono le schede nella finestra di dialogo **Proprietà Data Link**.  
  
     Scegliere **OK** per terminare.  Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**.  In questa finestra di dialogo selezionare la tabella, la visualizzazione o la stored procedure che verrà utilizzata dal consumer.  
  
     **Provider**  
     Selezionare un provider appropriato per la gestione della connessione all'origine dati.  Il tipo del provider viene in genere determinato dal tipo di database al quale si è connessi.  Fare clic sul pulsante `Next` oppure sulla scheda **Connessione**.  
  
     **Connessione**  
     Il contenuto di questa scheda varia in base al provider selezionato.  Sebbene siano presenti molti tipi di provider, in questa sezione sono riportate connessioni per i due più comuni: Dati ODBC e SQL.  Le altre sono variazioni simili sui campi descritti qui.  
  
     Per dati SQL:  
  
    1.  **Selezionare o immettere un nome di server:** scegliere il menu dell'elenco a discesa per visualizzare tutti i server di dati registrati in rete e selezionarne uno.  
  
    2.  **Immettere le informazioni per accedere al server:** immettere un nome utente e una password per accedere al server di dati.  
  
    3.  **Selezionare il database sul server:** scegliere il menu dell'elenco a discesa per visualizzare tutti i database registrati nel server di dati e selezionarne uno.  
  
         In alternativa  
  
         **Associa file di database con nome:** Specificare un file da utilizzare come il database; immettere il nome percorso esplicito.  
  
        > [!NOTE]
        >  Esiste un problema di sicurezza relativo alla funzionalità per il salvataggio della password nella finestra di dialogo Proprietà Data Link.  Nell'area delle informazioni di accesso per il server sono presenti due pulsanti di opzione:  
  
         **Usa sicurezza integrata di Windows NT**  
  
         **Utilizza password e nome utente specifici**  
  
         Se si seleziona **Usa un nome utente e una password specifici**, è possibile scegliere di salvare la password utilizzando la casella di controllo "Consenti salvataggio password". Tuttavia, questa opzione non è sicura.  Si consiglia di selezionare **Usa sicurezza integrata di Windows NT**, in quanto si tratta di un'opzione sicura che effettua la crittografia della password.  
  
         Possono verificarsi situazioni in cui si desidera selezionare "Consenti salvataggio password". Ad esempio, se si sta rilasciando una libreria con una soluzione del database privata, non è necessario accedere direttamente al database, ma anziché utilizzare un'applicazione di livello intermedio per la verifica dell'utente \(tramite qualsiasi schema di autenticazione si preferisca\) e quindi limitare l'ordinamento dei dati disponibili all'utente.  
  
         Per dati ODBC:  
  
         1.  **Specificare l'origine dei dati:** è possibile utilizzare un nome origine dati o una stringa di connessione.  
  
         **Utilizza nome origine dati** Questo elenco a discesa visualizza le origini dati registrate nel computer locale.  È possibile impostare le origini dati preventivamente utilizzando [ODBC Data Source Administrator](!Alink("dasdkODBCDataSourceAdmin")). oppure **Utilizza stringa di connessione:** Digitare la stringa di connessione già ottenuta o fare clic sul pulsante **Compila**; viene visualizzata la finestra di dialogo **Seleziona tabella origine dati**.  Selezionare un'origine dati file o computer e fare clic su **OK**.  
  
        > [!NOTE]
        >  È possibile ottenere una stringa di connessione visualizzando le proprietà di una connessione esistente in Esplora server, oppure è possibile creare una connessione facendo doppio clic su **Aggiungi connessione** in Esplora server.  
  
         2.  **Immettere le informazioni per accedere al server:** immettere un nome utente e una password per accedere al server di dati.  
  
         3.  Immettere il catalogo iniziale da utilizzare.  
  
         4.  Fare clic su **Test connessione**; se il risultato è positivo, fare clic su **OK**.  Se non è così, controllare le informazioni di accesso, provare un altro database o provare un altro server di dati.  
  
     **Avanzate**  
     **\*\*\* Network settings: \*\*\*** specifica [Impersonation level](!Alink("_com_Impersonation_Levels")) \(il livello di rappresentazione che il server può utilizzare quando rappresenta il client. corrisponde direttamente ai livelli di rappresentazione di RPC\) e **Protection level** \(il livello di protezione dei dati inviati tra il client e il server corrisponde direttamente ai livelli di sicurezza RPC\).  
  
     **Altro:** In **Connect timeout**, specificare il numero di secondi del tempo di inattività consentito prima che si verifichi un timeout.  In **Autorizzazioni di accesso**, specificare le autorizzazioni di accesso alla connessione dati.  
  
     Per ulteriori informazioni sulle proprietà di inizializzazione avanzate, fare riferimento alla documentazione fornita con ogni specifico provider OLE DB.  
  
     **Tutte**  
     In questa scheda viene visualizzato un riepilogo delle proprietà di inizializzazione dell'origine dati e la connessione specificata.  È possibile modificare questi valori.  
  
     Scegliere **OK** per terminare.  Verrà visualizzata la finestra di dialogo **Seleziona oggetto di database**.  In questa finestra di dialogo selezionare la tabella, la visualizzazione o la stored procedure che verrà utilizzata dal consumer.  
  
 `Class`  
 Dopo la selezione di un'origine dati, nella casella viene inserito un nome di classe predefinito basato sulla tabella o sulla stored procedure selezionata \(vedere la sezione relativa alla selezione di un'origine dati, più avanti\).  È possibile modificare il nome della classe.  
  
 **File H**  
 Dopo la selezione di un'origine dati, nella casella viene inserito un nome di classe di intestazione predefinito basato sulla tabella o sulla stored procedure selezionata \(vedere la sezione relativa alla selezione di un'origine dati, più avanti\).  È possibile modificare il nome del file di intestazione o selezionarne uno esistente.  
  
 **Con attributi**  
 Utilizzare questa opzione per specificare se la procedura guidata creerà classi consumer mediante gli attributi o le dichiarazioni di template.  Se si seleziona questa opzione, nella procedura guidata verranno utilizzati gli attributi invece delle dichiarazioni di template. Per impostazione predefinita, l'opzione è selezionata.  Se deselezionata, verranno usate dichiarazioni di template al posto di attributi.  
  
-   Se viene selezionato un **Tipo** di tabella per il consumer, la procedura guidata utilizza gli attributi `db_source` e **db\_table** per creare la tabella e le dichiarazioni di classe della funzione di accesso della tabella e utilizza **db\_column** per creare la mappa delle colonne, ad esempio:  
  
    ```  
    // Inject table class and table accessor class declarations  
    [  
        db_source("<initialization_string>"),  
        db_table("dbo.Orders")  
    ]  
    ...  
    // Column map  
        [ db_column(1, status=m_dwOrderIDStatus,         length=m_dwOrderIDLength) ] LONG m_OrderID;  
        [ db_column(2, status=m_dwCustomerIDStatus,         length=m_dwCustomerIDLength) ] TCHAR m_CustomerID[6];  
        ...  
    ```  
  
     anziché utilizzare la classe di modello `CTable` per dichiarare la tabella e la classe della funzione di accesso della tabella e le macro BEGIN\_COLUMN\_MAP e END\_COLUMN\_MAP per creare la mappa di colonne, ad esempio:  
  
    ```  
    // Table accessor class  
    class COrdersAccessor;  
    // Table class  
    class COrders : public CTable<CAccessor<COrdersAccessor> >;  
    ...  
    // Column map  
    BEGIN_COLUMN_MAP(COrderDetailsAccessor)  
        COLUMN_ENTRY_LENGTH_STATUS(1, m_OrderID,         m_dwOrderIDLength, m_dwOrderIDStatus)  
        COLUMN_ENTRY_LENGTH_STATUS(2, m_CustomerID,         m_dwCustomerIDLength, m_dwCustomerIDStatus)  
        ...  
    END_COLUMN_MAP()  
    ```  
  
-   Se viene selezionato un **Tipo** di comando per il consumer, la procedura guidata utilizza gli attributi `db_source` e **db\_command** e utilizza **db\_column** per creare la mappa delle colonne, ad esempio:  
  
    ```  
    [  
        db_source("<initialization_string>"),  
        db_command("SQL_command")  
    ]  
    ...  
    // Column map using db_column is the same as for consumer type of 'table'  
    ```  
  
     anziché utilizzare il comando e le dichiarazioni di classe della funzione di accesso nel file .h della classe di comando, ad esempio:  
  
    ```  
    Command accessor class:  
    class CListOrdersAccessor;  
    Command class:  
    class CListOrders : public CCommand<CAccessor<CListOrdersAccessor> >;  
    ...  
    // Column map using BEGIN_COLUMN_MAP ... END_COLUMN_MAP is the same as  
    // for consumer type of 'table'  
    ```  
  
 Per ulteriori informazioni, vedere [Basic Mechanics of Attributes](../../windows/basic-mechanics-of-attributes.md).  
  
 **Type**  
 Scegliere uno di questi pulsanti di opzione per specificare se la classe consumer verrà derivata da `CTable` o `CCommand` \(valore predefinito\).  
  
 **Tabella**  
 Selezionare questa opzione se si desidera utilizzare `CTable` o **db\_table** per creare le dichiarazioni delle classi table e table accessor.  
  
 **Command**  
 Selezionare questa opzione se si desidera utilizzare `CCommand` o **db\_command** per creare le dichiarazioni delle classi command e command accessor.  È l'opzione predefinita.  
  
 **Supporto**  
 Selezionare le caselle di controllo appropriate per specificare i tipi di aggiornamento supportati nel consumer. Per impostazione predefinita, non è selezionato alcun tipo di aggiornamento.  Ciascuna delle opzioni seguenti imposterà [DBPROP\_IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715892.aspx) e le voci appropriate per [DBPROP\_UPDATABILITY](https://msdn.microsoft.com/en-us/library/ms722676.aspx) nella mappa dell'insieme di proprietà.  
  
 **Modifica**  
 Utilizzare questa opzione per specificare che il consumer supporta gli aggiornamenti dei dati di riga nel rowset.  
  
 **Insert**  
 Utilizzare questa opzione per specificare che il consumer supporta l'inserimento di righe nel rowset.  
  
 **Delete**  
 Utilizzare questa opzione per specificare che il consumer supporta l'eliminazione di righe dal rowset.  
  
## Vedere anche  
 [ATL OLE DB Consumer](../../atl/reference/adding-an-atl-ole-db-consumer.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Stringhe di connessione e collegamenti dati \(OLE DB\)](https://msdn.microsoft.com/en-us/library/ms718376.aspx)