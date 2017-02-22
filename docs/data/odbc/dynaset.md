---
title: "Dynaset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "libreria di cursori [ODBC], disponibilità di dynaset"
  - "cursori [ODBC], cursori basati su keyset in dynaset"
  - "dynaset"
  - "cursori basati su keyset in dynaset"
  - "ODBC (libreria di cursori) [ODBC], dynaset"
  - "recordset ODBC, dynaset"
  - "recordset [C++], dynaset"
ms.assetid: 2867e6be-208e-4fe7-8bbe-b8697cb1045c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Dynaset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritti i dynaset e ne viene illustrata la [disponibilità](#_core_availability_of_dynasets).  
  
> [!NOTE]
>  L'argomento è relativo alle classi ODBC MFC, inclusa [CRecordset](../../mfc/reference/crecordset-class.md).  Per informazioni sui dynaset nelle classi DAO, vedere [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  Con DAO è possibile aprire recordset di tipo dynaset.  
  
 Un dynaset è un recordset con proprietà dinamiche.  Un oggetto recordset in modalità dynaset, definito in genere semplicemente dynaset, resta sincronizzato per tutta la sua durata con l'origine dati come descritto di seguito.  In un ambiente multiutente, altri utenti possono modificare o eliminare i record presenti in un determinato dynaset o aggiungere record alla tabella rappresentata dal dynaset.  I record eliminati o aggiunti al recordset dall'applicazione vengono riflessi nel dynaset.  I record aggiunti da altri utenti alla tabella non vengono riflessi nel dynaset fino a quando questo non viene ricompilato tramite chiamata alla relativa funzione membro **Requery**.  Quando altri utenti eliminano i record, il codice MFC ignora le eliminazioni nel recordset.  Le modifiche apportate da altri utenti ai record esistenti vengono riflesse nel dynaset non appena si passa al record modificato.  
  
 Le modifiche apportate dall'utente ai record vengono riflesse in modo analogo nei dynaset utilizzati da altri utenti.  I record aggiunti non vengono riflessi nei dynaset degli altri utenti fino a quando non ne viene ripetuta la query.  I record eliminati vengono contrassegnati come eliminati nei recordset degli altri utenti.  Se si stabiliscono più connessioni allo stesso database, tramite più oggetti `CDatabase`, i recordset associati a tali connessioni avranno lo stesso stato dei recordset degli altri utenti.  
  
 I dynaset risultano molto utili quando è necessario utilizzare dati dinamici, ad esempio in un sistema di prenotazione di una compagnia aerea.  
  
> [!NOTE]
>  Per utilizzare i dynaset, è necessario disporre di un driver ODBC per l'origine dati in grado di supportare i dynaset e la libreria di cursori ODBC non deve essere caricata.  Per ulteriori informazioni, vedere [Disponibilità dei dynaset](#_core_availability_of_dynasets).  
  
 Per specificare un recordset come dynaset, passare **CRecordset::dynaset** come primo parametro alla funzione membro **Open** dell'oggetto recordset.  
  
> [!NOTE]
>  Per i dynaset aggiornabili è necessario che il driver ODBC supporti le istruzioni per gli aggiornamenti posizionati o la funzione API ODBC **::SQLSetPos**.  Nel caso in cui siano supportati entrambi, MFC utilizza **::SQLSetPos** per ottenere prestazioni migliori.  
  
##  <a name="_core_availability_of_dynasets"></a> Disponibilità dei dynaset  
 Le classi di database MFC supportano i dynaset quando vengono soddisfatti i requisiti descritti di seguito.  
  
-   È necessario che la DLL della libreria di cursori ODBC non sia utilizzata per l'origine dati.  
  
     Se utilizzata, la libreria di cursori nasconde alcune funzionalità del driver ODBC sottostante necessarie per il supporto dei dynaset.  Se si desidera utilizzare i dynaset e il driver ODBC è dotato delle funzionalità richieste per i dynaset, come descritto nella presente sezione, è possibile impostare MFC in modo che non venga caricata la libreria di cursori durante la creazione di un oggetto `CDatabase`.  Per ulteriori informazioni, vedere [ODBC](../../data/odbc/odbc-basics.md) e la funzione membro [OpenEx](../Topic/CDatabase::OpenEx.md) o [Open](../Topic/CDatabase::Open.md) della classe `CDatabase`.  
  
     Nella terminologia relativa a ODBC, i dynaset e gli snapshot sono definiti cursori.  Un cursore è un meccanismo utilizzato per tenere traccia della posizione in un recordset.  
  
-   È necessario che il driver ODBC per l'origine dati in uso supporti i cursori basati su keyset.  
  
     I cursori basati su keyset gestiscono i dati di una tabella recuperando e memorizzando un insieme di chiavi.  Le chiavi vengono utilizzate per recuperare i dati correnti dalla tabella quando l'utente si sposta su un record specifico.  Per determinare se il driver fornisce questo supporto, chiamare la funzione API ODBC **::SQLGetInfo** con il parametro **SQL\_SCROLL\_OPTIONS**.  
  
     Se si tenta di aprire un dynaset senza il supporto di keyset, viene generata un'eccezione `CDBException` con il valore del codice restituito **AFX\_SQL\_ERROR\_DYNASET\_NOT\_SUPPORTED**.  
  
-   È necessario che il driver ODBC per l'origine dati in uso supporti il recupero esteso.  
  
     Per recupero esteso si intende la capacità di scorrere indietro e in avanti i record risultanti della query SQL.  Per determinare se il driver supporta questa funzionalità, chiamare la funzione API ODBC **::SQLGetFunctions** con il parametro **SQL\_API\_SQLEXTENDEDFETCH**.  
  
 Se si desidera utilizzare i dynaset aggiornabili o gli snapshot, il driver ODBC dovrà inoltre supportare la funzione API ODBC **::SQLSetPos** o gli aggiornamenti posizionati.  La funzione **::SQLSetPos** consente a MFC di aggiornare l'origine dati senza inviare istruzioni SQL.  Se disponibile, MFC utilizzerà questo supporto anziché eseguire gli aggiornamenti mediante l'istruzione SQL.  Per determinare se il driver supporta **::SQLSetPos**, chiamare **::SQLGetInfo** con il parametro **SQL\_POS\_OPERATIONS**.  
  
 Gli aggiornamenti posizionati utilizzano la sintassi SQL \(nel formato **WHERE CURRENT OF** \<nomecursore\>\) per identificare una riga specifica della tabella nell'origine dati.  Per determinare se il driver supporta gli aggiornamenti posizionati, chiamare **::SQLGetInfo** con il parametro **SQL\_POSITIONED\_STATEMENTS**.  
  
 I dynaset MFC, ma non i recordset forward\-only, richiedono in genere un driver ODBC conforme all'API di livello 2.  Se il driver per l'origine dati è conforme all'API di livello 1, è comunque possibile utilizzare gli snapshot aggiornabili e in sola lettura e i recordset forward\-only, ma non i dynaset.  È tuttavia possibile che un driver di livello 1 supporti i dynaset nel caso in cui supporti il recupero esteso e i cursori basati su keyset.  Per ulteriori informazioni sui livelli di conformità ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).  
  
> [!NOTE]
>  Se si desidera utilizzare sia snapshot che dynaset, è necessario basarli su due oggetti `CDatabase` differenti, ovvero due connessioni differenti.  
  
 A differenza degli snapshot, che utilizzano l'archiviazione intermedia gestita dalla libreria di cursori ODBC, i dynaset recuperano un record direttamente dall'origine dati durante lo scorrimento.  In tal modo, i record selezionati originariamente dal dynaset restano sincronizzati con l'origine dati.  
  
 Per un elenco dei driver ODBC inclusi in questa versione di Visual C\+\+ e per informazioni sulla possibilità di ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)