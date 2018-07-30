---
title: Dynaset | Microsoft Docs
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
ms.openlocfilehash: 5bd6abb1985ca50e7f63e600452b826972d403f1
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39340430"
---
# <a name="dynaset"></a>Dynaset
Questo argomento vengono descritti i dynaset e illustra i [disponibilità](#_core_availability_of_dynasets).  
  
> [!NOTE]
>  Questo argomento si applica alle classi ODBC MFC, incluso [CRecordset](../../mfc/reference/crecordset-class.md). Per informazioni su dynaset nelle classi DAO, vedere [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md). DAO, è possibile aprire recordset dynaset-type.  
  
 Tipo snapshot è un set di record con proprietà dinamiche. Durante la sua durata, un oggetto recordset in modalità di dynaset (in genere denominato dynaset) rimane sincronizzato con l'origine dati nel modo seguente. In un ambiente multiutente, altri utenti potrebbero modificare o eliminare i record che sono in dynaset o aggiungere i record alla tabella che dynaset rappresenta. Registra l'applicazione aggiunge o Elimina dal set di record viene riflesse in dynaset. I record aggiunti da altri utenti nella tabella non si rifletteranno nel dynaset fino a quando non viene ricompilato tramite una chiamata relativo `Requery` funzione membro. Quando altri utenti eliminano record, codice MFC ignora le eliminazioni nel set di record. Le modifiche apportate dagli altri utenti ai record esistenti vengono riflesse in dynaset, non appena si scorre verso il record interessato.  
  
 Analogamente, le modifiche ai record in dynaset vengono riflesse in dynaset in uso da altri utenti. I record che aggiunti non vengono riflesse in dynaset degli altri utenti fino a quando non sono requery i dynaset. I record eliminati vengono contrassegnati come "eliminato" nei recordset di altri utenti. Se si dispone di più connessioni allo stesso database (più `CDatabase` oggetti), recordset associati a tali connessioni con lo stesso stato come recordset di altri utenti.  
  
 I dynaset risultano particolarmente utili quando i dati devono essere dinamici, come, ad esempio, in un sistema di prenotazione delle compagnie aeree.  
  
> [!NOTE]
>  Per usare dynaset, sono necessari un driver ODBC per l'origine dati che supporta dynaset e la libreria di cursori ODBC non deve essere caricata. Per altre informazioni, vedere [disponibilità di dynaset](#_core_availability_of_dynasets).  
  
 Per specificare che un set di record è di tipo snapshot, passare `CRecordset::dynaset` come primo parametro per il `Open` funzione membro dell'oggetto recordset.  
  
> [!NOTE]
>  Per dynaset aggiornabile, il driver ODBC deve supportare entrambe le istruzioni per gli aggiornamenti posizionati o `::SQLSetPos` funzione API ODBC. Se entrambi sono supportati, MFC utilizza `::SQLSetPos` per migliorare l'efficienza.  
  
##  <a name="_core_availability_of_dynasets"></a> Disponibilità di dynaset  
 Le classi di database MFC supportano dynaset se vengono soddisfatti i requisiti seguenti:  
  
-   La libreria di cursori ODBC DLL non deve essere in uso per questa origine dati.  
  
     Se viene usata la libreria di cursori, la maschera di alcune funzionalità del driver ODBC sottostante che è necessario per il supporto di dynaset. Se si desidera utilizzare dynaset (e il driver ODBC ha le funzionalità necessarie per dynaset, come descritto nella parte restante di questa sezione), è possibile generare MFC non caricare la libreria di cursori quando si crea un `CDatabase` oggetto. Per altre informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e il [OpenEx](../../mfc/reference/cdatabase-class.md#openex) oppure [Open](../../mfc/reference/cdatabase-class.md#open) funzione membro di classe `CDatabase`.  
  
     Nella terminologia di ODBC, dynaset e gli snapshot vengono definiti come cursori. Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset.  
  
-   Il driver ODBC per l'origine dati deve supportare gestito da keyset dei cursori.  
  
     Gestito da keyset dei cursori gestire i dati da una tabella, ottenendo e archiviare un set di chiavi. Le chiavi vengono usate per ottenere dati aggiornati dalla tabella quando l'utente scorre in un record specifico. Per determinare se il driver fornisce questo supporto, chiamare il `::SQLGetInfo` funzione API ODBC con il *SQL_SCROLL_OPTIONS* parametro.  
  
     Se si tenta di aprire un dynaset senza il supporto di keyset, viene visualizzato un `CDBException` valore AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED con il codice restituito.  
  
-   Il driver ODBC per l'origine dati deve supportare il recupero estesi.  
  
     Il recupero esteso è la possibilità di scorrimento all'indietro, oltre a inoltrare sui record risultante della query SQL. Per determinare se il driver supporta questa funzionalità, chiamare il `::SQLGetFunctions` funzione API ODBC con il *SQL_API_SQLEXTENDEDFETCH* parametro.  
  
 Se si desidera aggiornabili dynaset (o gli snapshot, d'altra parte), il driver ODBC deve anche supportare il `::SQLSetPos` funzione API ODBC o gli aggiornamenti posizionati. Il `::SQLSetPos` funzione permette di MFC aggiornare l'origine dati senza l'invio di istruzioni SQL. Se questo supporto è disponibile, MFC utilizza anziché eseguire gli aggiornamenti tramite SQL. Per determinare se il driver supporta `::SQLSetPos`, chiamare `::SQLGetInfo` con il *SQL_POS_OPERATIONS* parametro.  
  
 Gli aggiornamenti posizionati utilizzano la sintassi SQL (nel formato **WHERE CURRENT OF** \<nomecursore >) per identificare una determinata riga nella tabella dell'origine dati. Per determinare se il driver supporta gli aggiornamenti posizionati, chiamare `::SQLGetInfo` con il *SQL_POSITIONED_STATEMENTS* parametro.  
  
 MFC dynaset (ma Recordset non forward-only) richiede in genere, un driver ODBC con conformità API di livello 2. Se il driver per l'origine dati è conforme all'API di livello 1, è comunque possibile usare snapshot sia aggiornabile e read-only e Recordset forward-only, ma non i dynaset. Tuttavia, un driver di livello 1 può supportare dynaset se supporta il recupero esteso e gestito da keyset dei cursori. Per altre informazioni sui livelli di conformità di ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).  
  
> [!NOTE]
>  Se si desidera utilizzare snapshot sia dynaset, è necessario basare tali criteri su due diversi `CDatabase` oggetti, ovvero due diverse connessioni.  
  
 A differenza di snapshot, che utilizza l'archiviazione intermedia gestito dalla libreria di cursori ODBC, dynaset recuperare un record direttamente dall'origine dati, non appena si scorre a esso. In questo modo il record selezionato originariamente per dynaset sincronizzato con l'origine dati.  
  
 Per un elenco dei driver ODBC inclusa in questa versione di Visual C++ e per informazioni su come ottenere driver aggiuntivi, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)