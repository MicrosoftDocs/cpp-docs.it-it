---
title: Dynaset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC recordsets, dynasets
- ODBC cursor library [ODBC], dynasets
- keyset-driven cursors in dynasets
- cursors [ODBC], keyset-driven cursors in dynasets
- cursor library [ODBC], dynaset availability
- recordsets [C++], dynasets
- dynasets
ms.assetid: 2867e6be-208e-4fe7-8bbe-b8697cb1045c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ec71b5b00b26564f9c8dc3c2d98f53f8182b0ca3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dynaset"></a>Dynaset
In questo argomento vengono descritti i dynaset e vengono illustrati i [disponibilità](#_core_availability_of_dynasets).  
  
> [!NOTE]
>  Questo argomento si applica alle classi ODBC MFC, tra cui [CRecordset](../../mfc/reference/crecordset-class.md). Per informazioni sui dynaset nelle classi DAO, vedere [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md). Con DAO, è possibile aprire recordset di tipo dynaset.  
  
 Un dynaset è un recordset con le proprietà dinamiche. Durante la sua durata, un oggetto recordset in modalità dynaset (denominato in genere un dynaset) rimane sincronizzato con l'origine dati nel modo seguente. In un ambiente multiutente, altri utenti potrebbero modificare o eliminare i record che sono in dynaset o aggiungere record alla tabella che dynaset rappresenta. Registra l'applicazione aggiunge o Elimina dal recordset viene riflesse nel dynaset. I record aggiunti da altri utenti alla tabella non si rifletteranno nel dynaset fino a quando non viene ricompilato chiamando il relativo **Requery** funzione membro. Quando altri utenti di eliminare i record, il codice MFC ignora le eliminazioni nel recordset. Le modifiche apportate dagli altri utenti per i record esistenti vengono riflesse nel dynaset non appena si scorre i record modificati.  
  
 Analogamente, le modifiche ai record vengono riflesse in dynaset in uso da altri utenti. I record che aggiunti non vengono riflesse in dynaset degli altri utenti fino a quando non sono requery i dynaset. I record eliminati sono contrassegnati come "eliminato" nel recordset di altri utenti. Se si dispone di più connessioni allo stesso database (più `CDatabase` oggetti), recordset associati a tali connessioni avranno lo stesso stato recordset di altri utenti.  
  
 I dynaset sono utili quando i dati devono essere dinamici, come, ad esempio, in un sistema di prenotazione airline.  
  
> [!NOTE]
>  Per utilizzare i dynaset, è necessario disporre dei driver ODBC per l'origine dati che supporta i dynaset e la libreria di cursori ODBC non deve essere caricata. Per ulteriori informazioni, vedere [disponibilità di dynaset](#_core_availability_of_dynasets).  
  
 Per specificare che un oggetto recordset dynaset, passare **CRecordset:: dynaset** come primo parametro per il **aprire** funzione membro dell'oggetto recordset.  
  
> [!NOTE]
>  Per dynaset aggiornabile, il driver ODBC deve supportare entrambe le istruzioni per gli aggiornamenti posizionati o **:: SQLSetPos** funzione API ODBC. Se entrambi sono supportati, MFC utilizza **:: SQLSetPos** per migliorare l'efficienza.  
  
##  <a name="_core_availability_of_dynasets"></a> Disponibilità di dynaset  
 Le classi di database MFC supportano i dynaset se vengono soddisfatti i requisiti seguenti:  
  
-   La libreria di cursori ODBC DLL non deve essere in uso per questa origine dati.  
  
     Se si utilizza la libreria di cursori, la maschera di alcune funzionalità del driver ODBC sottostante che è necessario per il supporto di dynaset. Se si desidera utilizzare i dynaset e il driver ODBC è la funzionalità necessaria per dynaset, come descritto nella parte restante di questa sezione, è possibile generare MFC non caricare la libreria di cursori quando si crea un `CDatabase` oggetto. Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e [OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [aprire](../../mfc/reference/cdatabase-class.md#open) funzione membro di classe `CDatabase`.  
  
     Nella terminologia ODBC, dynaset e gli snapshot sono definiti per i cursori. Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset.  
  
-   Il driver ODBC per l'origine dati deve supportare i cursori basati su keyset.  
  
     Cursori basati su keyset gestire i dati da una tabella da ottenere e archiviare un set di chiavi. Le chiavi vengono usate per ottenere dati aggiornati dalla tabella quando l'utente scorre su un record specifico. Per determinare se il driver fornisce il supporto, chiamare il **:: SQLGetInfo** funzione API ODBC con il **SQL_SCROLL_OPTIONS** parametro.  
  
     Se si tenta di aprire un dynaset senza il supporto di keyset, viene visualizzato un `CDBException` con il valore del codice restituito **AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED**.  
  
-   Il driver ODBC per l'origine dati deve supportare il recupero esteso.  
  
     Il recupero esteso è la possibilità di scorrimento all'indietro, nonché di inoltrare i record risultanti della query SQL. Per determinare se il driver supporta questa funzionalità, chiamare il **:: SQLGetFunctions** funzione API ODBC con il **SQL_API_SQLEXTENDEDFETCH** parametro.  
  
 Se si desidera utilizzare i dynaset aggiornabili (o snapshot, d'altra parte), il driver ODBC deve inoltre supportare il **:: SQLSetPos** funzione API ODBC o gli aggiornamenti posizionati. Il **:: SQLSetPos** funzione consente di MFC per aggiornare l'origine dati senza l'invio di istruzioni SQL. Se questo supporto è disponibile, MFC utilizza anziché eseguire gli aggiornamenti utilizzando SQL. Per determinare se il driver supporta **:: SQLSetPos**, chiamare **:: SQLGetInfo** con il **SQL_POS_OPERATIONS** parametro.  
  
 Gli aggiornamenti posizionati utilizzano la sintassi SQL (nel formato **WHERE CURRENT OF** \<nomecursore >) per identificare una determinata riga della tabella nell'origine dati. Per determinare se il driver supporta gli aggiornamenti posizionati, chiamare **:: SQLGetInfo** con il **SQL_POSITIONED_STATEMENTS** parametro.  
  
 I dynaset MFC (ma Recordset non forward-only) richiedono in genere, un driver ODBC con conformità API di livello 2. Se il driver per l'origine dati è conforme all'API di livello 1, è comunque possibile utilizzare gli snapshot aggiornabili e sola lettura e Recordset forward-only, ma non i dynaset. Tuttavia, un driver di livello 1 può supportare i dynaset se supporta il recupero esteso e basati su keyset. Per ulteriori informazioni sui livelli di conformità ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).  
  
> [!NOTE]
>  Se si desidera utilizzare sia snapshot che dynaset, devono essere basati su due diversi `CDatabase` oggetti, ovvero due diverse connessioni.  
  
 A differenza degli snapshot, che utilizzano l'archiviazione intermedia gestita dalla libreria di cursori ODBC, dynaset recuperano un record direttamente dall'origine dati non appena si scorre. In questo modo i record selezionati originariamente dal dynaset sincronizzato con l'origine dati.  
  
 Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e per informazioni su come ottenere i driver aggiuntivi, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)