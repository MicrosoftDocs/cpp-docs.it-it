---
title: 'Origine dati: Gestione delle connessioni (ODBC) | Microsoft Docs'
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
ms.openlocfilehash: a8f5a57b1ef97b38b6756931038ec18045aea746
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053726"
---
# <a name="data-source-managing-connections-odbc"></a>Origine dati: gestione delle connessioni (ODBC)

Questo argomento si applica alle classi ODBC MFC.  
  
Questo argomento viene illustrato:  
  
- [Come configurare un'origine dati](#_core_configuring_a_data_source).  
  
- [Impatto di un ambiente multiutente un'origine dati e il recordset](#_core_working_in_a_multiuser_environment).  
  
- [Generalizzazione della stringa di connessione a un'origine dati](#_core_generalizing_the_connection_string).  
  
- [Come connettersi a un'origine dati](#_core_connecting_to_a_specific_data_source).  
  
- [Disconnessione da un'origine dati](#_core_disconnecting_from_a_data_source).  
  
- [Riutilizzo di un oggetto CDatabase](#_core_reusing_a_cdatabase_object).  
  
La connessione a un'origine dati significa stabilire la comunicazione con un DBMS per accedere ai dati. Quando ci si connette a un'origine dati da un'applicazione tramite un driver ODBC, il driver esegue la connessione, localmente o in una rete.  
  
È possibile connettersi a qualsiasi origine dati per cui si ha un driver ODBC. Gli utenti dell'applicazione devono avere anche lo stesso driver ODBC per l'origine dati utilizzata. Per altre informazioni sulla ridistribuzione dei driver ODBC, vedere [ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md).  
  
##  <a name="_core_configuring_a_data_source"></a> Configurare un'origine dati  

Amministratore ODBC viene utilizzato per configurare le origini dati. È inoltre possibile utilizzare Amministratore ODBC dopo l'installazione per aggiungere o rimuovere le origini dati. Quando si creano applicazioni, è possibile impostarla in modo che gli utenti, l'amministratore ODBC per permettere di aggiungere origini dati oppure è possibile compilare questa funzionalità nell'applicazione eseguendo chiamate dirette di installazione ODBC. Per altre informazioni, vedere [Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
È possibile usare un file di Excel come origine dati, e si desidera configurare il file in modo che venga registrato e visualizzato nella **selezionare un'origine dati** nella finestra di dialogo.  
  
#### <a name="to-use-an-excel-file-as-a-data-source"></a>Usare un file di Excel come origine dati  
  
1. Configurare il file con Amministrazione origine dati ODBC.  
  
1. Nel **DSN su File** scheda, fare clic su **Add**.  
  
1. Nel **Crea nuova origine dati** finestra di dialogo, selezionare un driver per Excel e quindi fare clic su **successivo**.  
  
1. Fare clic su **Sfoglia**e selezionare il nome del file da utilizzare come origine dati.  
  
> [!NOTE]
>  Potrebbe essere necessario selezionare **tutti i file** nel menu di riepilogo a discesa per visualizzare i file con estensione xls.  
  
1. Scegliere **Avanti**e quindi fare clic su **Fine**.  
  
1. Nel **il programma di installazione di ODBC Microsoft Excel** finestra di dialogo, selezionare il database versione e una cartella di lavoro.  
  
##  <a name="_core_working_in_a_multiuser_environment"></a> In un ambiente multiutente  

Se più utenti sono connessi a un'origine dati, è possibile modificare i dati durante la manipolazione nei recordset. Allo stesso modo, le modifiche potrebbero influenzare i recordset di altri utenti. Per altre informazioni, vedere [Recordset: aggiornamento dei record (ODBC)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md) e [transazione (ODBC)](../../data/odbc/transaction-odbc.md).  
  
##  <a name="_core_generalizing_the_connection_string"></a> Generalizzazione della stringa di connessione  

Le procedure guidate di usano una stringa di connessione predefinito per stabilire una connessione a un'origine dati. Per visualizzare le tabelle e colonne, mentre si sviluppa l'applicazione è usare la connessione. Tuttavia, questa stringa di connessione predefinita potrebbe non essere appropriata per le connessioni degli utenti per l'origine dati tramite l'applicazione. Ad esempio, le origini dati e il percorso potrebbe essere diversi da quelli utilizzati durante lo sviluppo dell'applicazione. In tal caso, reimplementare la [CRecordset:: GetDefaultConnect](../../mfc/reference/crecordset-class.md#getdefaultconnect) membro funzionare in modo più generico e annullare l'implementazione della procedura guidata. Ad esempio, usare uno degli approcci seguenti:  
  
- Registrare e gestire le stringhe di connessione tramite Amministratore ODBC.  
  
- Modificare la stringa di connessione e rimuovere il nome dell'origine dati. Il framework fornirà ODBC come origine dati. in fase di esecuzione, in ODBC verrà visualizzata una finestra di dialogo che richiede le informazioni di connessione necessarie nome e qualsiasi altra origine dati.  
  
- Specificare solo il nome dell'origine dati. ODBC richiede l'ID utente e password, se necessario. Ad esempio, prima della generalizzazione della stringa di connessione simile alla seguente:  
  
    ```cpp  
    CString CApp1Set::GetDefaultConnect()  
    {  
       return "ODBC;DSN=afx;Trusted_Connection=Yes;";  
    }  
    ```  
  
     Questa stringa di connessione specifica una connessione trusted che usa la sicurezza integrata di Windows NT. È consigliabile evitare di impostare una password come hardcoded o specificando una password vuota, poiché in questo modo vengono creati punti deboli nella sicurezza principali. In alternativa, è possibile assegnare `GetDefaultConnect` una nuova stringa di connessione in modo che viene eseguita una query per un ID utente e password.  
  
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
  
##  <a name="_core_connecting_to_a_specific_data_source"></a> La connessione a un'origine dati specifica  

Per connettersi a un'origine dati specifica, l'origine dati deve già configurata con [Amministratore ODBC](../../data/odbc/odbc-administrator.md).  
  
#### <a name="to-connect-to-a-specific-data-source"></a>Per connettersi a un'origine dati specifica  
  
1. Costruire un `CDatabase` oggetto.  
  
1. Chiamare relativi `OpenEx` o `Open` funzione membro.  
  
Per altre informazioni su come specificare l'origine dati se è un valore diverso da quello specificato con una procedura guidata, vedere [CDatabase](../../mfc/reference/cdatabase-class.md#openex) oppure [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) nel *MFC Riferimento*.  
  
##  <a name="_core_disconnecting_from_a_data_source"></a> Disconnessione da un'origine dati  

È necessario chiudere tutti i recordset aperti prima di chiamare il `Close` funzione membro di `CDatabase`. Nei recordset associati i `CDatabase` dell'oggetto che si desidera chiudere, qualsiasi in sospeso `AddNew` o `Edit` istruzioni vengono annullate e viene eseguito il rollback di tutte le transazioni in sospeso.  
  
#### <a name="to-disconnect-from-a-data-source"></a>Disconnessione da un'origine dati  
  
1. Chiamare il `CDatabase` dell'oggetto [Chiudi](../../mfc/reference/cdatabase-class.md#close) funzione membro.  
  
1. Eliminare definitivamente l'oggetto a meno che non si desidera usarlo di nuovo.  
  
##  <a name="_core_reusing_a_cdatabase_object"></a> Riutilizzo di un oggetto CDatabase  

È possibile riutilizzare un `CDatabase` oggetto dopo la disconnessione, se si usano per riconnettersi alla stessa origine dati o per connettersi a un'origine dati diversa.  
  
#### <a name="to-reuse-a-cdatabase-object"></a>Per riutilizzare un oggetto CDatabase  
  
1. Chiusura connessione originale dell'oggetto.  
  
1. L'eliminazione dell'oggetto, invece di chiamare relativi `OpenEx` o `Open` nuovamente la funzione membro.  
  
## <a name="see-also"></a>Vedere anche  

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)<br/>
[Origine dati: determinazione dello schema dell'origine dati (ODBC)](../../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)