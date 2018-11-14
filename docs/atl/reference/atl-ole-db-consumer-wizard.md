---
title: Creazione guidata consumer OLE DB ATL
ms.date: 08/31/2018
f1_keywords:
- vc.codewiz.class.atl.consumer.overview
helpviewer_keywords:
- ATL projects, adding ATL OLE DB consumers
- connection strings [C++], OLE DB consumers
- ATL OLE DB Consumer Wizard
ms.assetid: dcb68ed1-2224-422f-9f7b-108a74864204
ms.openlocfilehash: 59ad635f62ab7a20a31de7255ec4522136e102ec
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51524131"
---
# <a name="atl-ole-db-consumer-wizard"></a>Creazione guidata consumer OLE DB ATL

Questa procedura guidata imposta una classe di consumer OLE DB con le associazioni dati necessaria per accedere all'origine dati specificata tramite il provider OLE DB specificato.

> [!NOTE]
> Questa procedura guidata è necessario fare clic il **Zdroj dat** per selezionare un'origine dati prima di immettere i nomi nel `Class` e **file con estensione h** campi.

## <a name="uielement-list"></a>Elenco UIElement

- **Origine dati**

   Il **Zdroj dat** pulsante configurare l'origine dati specificata utilizzando il provider OLE DB specificato. Quando si fa clic sul pulsante, il **proprietà di Data Link** verrà visualizzata la finestra di dialogo. Per altre informazioni sulla creazione di stringhe di connessione e il **proprietà di Data Link** finestra di dialogo, vedere [Cenni preliminari sull'API di collegamento dati](/previous-versions/windows/desktop/ms718102) nella documentazione di Windows SDK.

   Le informazioni aggiuntive seguenti vengono descritte le schede di **proprietà di Data Link** nella finestra di dialogo.

   - **Provider** scheda

      Selezionare un provider appropriato per gestire la connessione all'origine dati. Il tipo di provider in genere è determinato dal tipo di database a cui ci si connette. Fare clic sui **successivo** pulsante oppure fare clic sui **connessione** scheda.

   - **Connessione** scheda

      Il contenuto di questa scheda dipende dal provider selezionato. Anche se esistono molti tipi di provider, in questa sezione vengono illustrate le connessioni per i due più comuni: i dati SQL e ODBC. Gli altri sono simili a quelli nei campi descritti di seguito.

      Per i dati SQL:

      1. **Selezionare o immettere un nome server:** fare clic sul menu a discesa elenco per visualizzare tutti i server di dati registrati nella rete e selezionarne uno.

      1. **Immettere le informazioni per l'accesso al server:** immettere un nome utente e una password per accedere al server di dati.

         > [!NOTE]
         > Si verifica un problema di sicurezza con la funzionalità "Per il salvataggio della password" della finestra di dialogo proprietà di Data Link. In "Immettere le informazioni per l'accesso al server", sono disponibili due pulsanti di opzione:
         >
         > - **Usare la sicurezza integrata di Windows NT**
         > - **Usare un nome utente specifico e una password**
         >
         > Se si seleziona **usare un nome utente specifico e una password**, è possibile scegliere di salvare la password (usando la casella di controllo per "Consenti salvataggio password"); tuttavia, questa opzione non è sicura. Si consiglia di selezionare **utilizza Windows protezione integrata NT**; questa opzione è sicura perché permette di crittografare la password.
         > Potrebbero esserci situazioni in cui si desidera selezionare "Consenti salvataggio password". Ad esempio, se si sta rilasciando una libreria con una soluzione di database privato, è necessario non accedono direttamente al database ma usare invece un'applicazione di livello intermedio per verificare che l'utente (tramite qualsiasi schema di autenticazione scelto) e quindi limitarne l'ordinamento dei dati disponibile per l'utente.

      1. **Selezionare il database nel server:** fare clic sul menu di riepilogo per visualizzare tutti i database registrati nel server di dati e selezionarne uno.

         \- oppure -

         **Collegare un file di database come un nome di database:** specificare un file da utilizzare come database, immettere il nome del percorso esplicito.

      Per i dati ODBC:

      1. **Specificare l'origine dei dati:** è possibile usare un nome dell'origine dati o una stringa di connessione.

         **Usa nome origine dati:** questo elenco a discesa vengono visualizzate origini dati registrate nel computer. È possibile configurare le origini dati anticipo tramite Amministrazione origine dati ODBC

         \- oppure -

         **Usa stringa di connessione:** immettere una stringa di connessione possiede già, oppure fare clic sui **compilare** pulsante; il **Seleziona origine dati** verrà visualizzata la finestra di dialogo. Selezionare un'origine dati di produzione o di file e fare clic su **OK**.

         > [!NOTE]
         > È possibile ottenere una stringa di connessione visualizzando le proprietà di una connessione esistente nel **Esplora Server**, oppure è possibile creare una connessione facendo doppio clic su **Aggiungi connessione** in **Server Esplora**.

      1. **Immettere le informazioni per l'accesso al server:** immettere un nome utente e una password per accedere al server di dati.

      1. Immettere il catalogo iniziale da usare.

      1. Fare clic su **Test connessione**; se il test ha esito positivo, fare clic su **OK**. In caso contrario, controllare le informazioni di accesso, provare un altro database o provare un altro server di dati.

   - **Advanced** scheda

      **Impostazioni di rete:** specificare il **livello di rappresentazione** (il livello di rappresentazione che il server è possibile utilizzare per rappresentare il client; corrisponde direttamente a livelli di rappresentazione RPC) e  **Livello di protezione** (il livello di protezione dei dati inviati tra client e server; corrisponde direttamente a livelli di protezione RPC).

      **Altro:** nelle **timeout della connessione**, specificare il numero di secondi di tempo di inattività consentiti prima che si verifica un timeout. Nelle **le autorizzazioni di accesso**, specificare le autorizzazioni di accesso per la connessione dati.

      Per altre informazioni sulle proprietà di inizializzazione avanzata, vedere la documentazione fornita con ogni provider OLE DB specifico.

   - **Tutti i** scheda

      Questa scheda Visualizza un riepilogo delle proprietà di inizializzazione per l'origine dati e la connessione specificata. È possibile modificare questi valori.

      Fare clic su **OK** alla fine. Il **Seleziona oggetto di Database** verrà visualizzata la finestra di dialogo. Da questa finestra di dialogo, selezionare la tabella, vista o stored procedure che verranno utilizzate dal consumer.

- **Classe**

   Dopo aver selezionato un'origine dati, questa casella viene popolata con un nome predefinito della classe basato la tabella o una stored procedure che è stato selezionato (vedere **Vybrat zdroj** sotto). È possibile modificare il nome della classe.

- **File con estensione h**

   Dopo aver selezionato un'origine dati, questa casella viene popolata con un nome di classe intestazione predefinito basato sulla tabella o sulla stored procedure che è stato selezionato (vedere **Vybrat zdroj** sotto). È possibile modificare il nome del file di intestazione o selezionare un file di intestazione esistente.

- **Con attributi**

   Questa opzione specifica se la procedura guidata creerà le classi di consumer usando gli attributi o le dichiarazioni di template. Quando si seleziona questa opzione, verranno utilizzati attributi invece delle dichiarazioni di modello (questo è l'opzione predefinita). Quando si deseleziona questa opzione, la procedura guidata utilizza le dichiarazioni di template anziché agli attributi.

   - Se si seleziona un consumer **tipo** dei **tabella**, la procedura guidata Usa la `db_source` e `db_table` attributi per creare la tabella e la funzione di accesso nella tabella delle dichiarazioni di classe e Usa `db_column` a creare la mappa delle colonne. Ad esempio, crea questa mappa:

        ```cpp
        // Inject table class and table accessor class declarations
        [db_source("<initialization_string>"), db_table("dbo.Orders")]
        ...
        // Column map
        [ db_column(1, status=m_dwOrderIDStatus, length=m_dwOrderIDLength) ] LONG m_OrderID;
        [ db_column(2, status=m_dwCustomerIDStatus, length=m_dwCustomerIDLength) ] TCHAR m_CustomerID[6];
        ...
        ```

      invece di usare il `CTable` classe di modello per dichiarare la tabella e classe table della funzione di accesso e le macro BEGIN_COLUMN_MAP ed END_COLUMN_MAP per creare la mappa delle colonne, come in questo esempio:

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

   - Se si seleziona un consumer **tipo** dei **comando**, la procedura guidata Usa i `db_source` e `db_command` gli attributi e Usa `db_column` per creare la mappa delle colonne. Ad esempio, crea questa mappa:

        ```cpp
        [db_source("<initialization_string>"), db_command("SQL_command")]
        ...
        // Column map using db_column is the same as for consumer type of 'table'
        ```

      invece di usare il comando e le dichiarazioni di classe di comando della funzione di accesso nel file con estensione h della classe di comando, ad esempio:

        ```cpp
        // Command accessor class:
            class CListOrdersAccessor;
        // Command class:
            class CListOrders : public CCommand<CAccessor<CListOrdersAccessor>>;
        // ...
        // Column map using BEGIN_COLUMN_MAP ... END_COLUMN_MAP is the same as
        // for consumer type of 'table'
        ```

      Visualizzare [meccanismi di base degli attributi](../../windows/basic-mechanics-of-attributes.md) per altre informazioni.

- **Type**

   Selezionare uno di questi pulsanti di opzione per specificare se la classe consumer verrà derivata `CTable` o `CCommand` (impostazione predefinita).

   - **Tabella**

      Selezionare questa opzione se si desidera utilizzare `CTable` o `db_table` per creare la tabella e la funzione di accesso nella tabella delle dichiarazioni di classe.

   - **Comando**

      Selezionare questa opzione se si desidera utilizzare `CCommand` o `db_command` per creare il comando e una funzione di accesso di comando delle dichiarazioni di classe. Questa è la selezione predefinita.

- **Supporto**

   Selezionare le caselle di controllo per specificare i tipi di aggiornamento devono essere supportati nel consumer (il valore predefinito è none). Gli aspetti seguenti imposterà [DBPROP_IRowsetChange](/previous-versions/windows/desktop/ms715892) e le voci appropriate per [DBPROP_UPDATABILITY](/previous-versions/windows/desktop/ms722676) nel set di proprietà della mappa.

   - **Modifica**

      Specifica che il consumer supportano gli aggiornamenti dei dati di riga nel set di righe.

   - **Inserisci**

      Specifica che il consumer supporta l'inserimento di righe nel set di righe.

   - **Eliminazione**

      Specifica che il consumer supporta l'eliminazione di righe dal set di righe.

## <a name="see-also"></a>Vedere anche

[Consumer OLE DB ATL](../../atl/reference/adding-an-atl-ole-db-consumer.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Stringhe di connessione e i collegamenti dati (OLE DB)](/previous-versions/windows/desktop/ms718376)
