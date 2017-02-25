---
title: "Riferimenti ai modelli consumer OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-attr.db_param"
  - "vc-attr.db_column"
  - "vc-attr.db_accessor"
  - "vc-attr.db_command"
  - "vc-attr.db_table"
  - "vc.templates.ole"
  - "vc-attr.db_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB (modelli consumer), classi"
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Riferimenti ai modelli consumer OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I modelli consumer OLE DB sono disponibili le seguenti classi.  Materiale di riferimento include anche gli argomenti su [macro per i modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
## Classi di sessione  
 [CDataConnection](../../data/oledb/cdataconnection-class.md)  
 Gestisce la connessione con l'origine dati.  Si tratta di una classe utile per creare i client che incapsula gli oggetti necessari \(origine dati e passare\) e parte del lavoro da eseguire durante la connessione a un'origine dati.  
  
 [CDataSource](../../data/oledb/cdatasource-class.md)  
 Corrisponde a un oggetto origine dati OLE DB, rappresentare una connessione tramite un provider a un'origine dati.  Una o più sessioni di database, ognuna rappresentata da un oggetto di `CSession`, possono essere eseguite su una sola connessione.  
  
 [CEnumerator](../../data/oledb/cenumerator-class.md)  
 Corrisponde a un oggetto enumerator OLE DB, che recupera le informazioni del rowset sulle origini dati disponibili.  
  
 [CEnumeratorAccessor](../../data/oledb/cenumeratoraccessor-class.md)  
 Utilizzato da `CEnumerator` per accedere ai dati del rowset enumeratori.  Questo rowset è costituito dalle origini dati e gli enumeratori visibili dall'enumeratore corrente.  
  
 [CSession](../../data/oledb/csession-class.md)  
 Rappresenta una singola sessione di accesso al database.  Una o più sessioni possono essere associate a ciascun oggetto di `CDataSource`.  
  
## Classi delle funzioni di accesso  
 [CAccessor](../../data/oledb/caccessor-class.md)  
 Utilizzato per record associati in modo statico a un'origine dati.  Utilizzare questa classe di funzione di accesso quando si conosce la struttura dell'origine dati.  
  
 [CAccessorBase](../../data/oledb/caccessorbase-class.md)  
 Classe base per tutte le classi delle funzioni di accesso.  
  
 [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)  
 Una funzione di accesso che può essere creata in fase di esecuzione, in base alle informazioni sulle colonne del rowset.  Utilizzare questa classe per recuperare i dati se non si conosce la struttura dell'origine dati.  
  
 [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)  
 Una funzione di accesso che può essere utilizzata quando i tipi di comandi sono sconosciuti.  Ottiene le informazioni di parametro chiamando l'interfaccia di `ICommandWithParameters`, se il provider supporta l'interfaccia.  
  
 [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)  
 Consente di accedere a un'origine dati quando non si conosce la struttura sottostante di database.  
  
 [CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)  
 Simile a `CDynamicStringAccessor` tranne per il fatto che questa classe richiede i dati utilizzati nell'archivio dati nella stringa ANSI.  
  
 [CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)  
 Simile a `CDynamicStringAccessor` tranne per il fatto che questa classe richiede i dati utilizzati nell'archivio dati nella stringa Unicode.  
  
 [CManualAccessor](../../data/oledb/cmanualaccessor-class.md)  
 Una funzione di accesso con metodi per gestire sia le colonne che i parametri di comando.  Con questa classe, è possibile utilizzare qualsiasi tipo di dati finché il provider può convertire il tipo.  
  
 [CNoAccessor](../../data/oledb/cnoaccessor-class.md)  
 Può essere utilizzato come argomento di modello quando non si desidera che la classe per supportare i parametri o colonne di output.  
  
 [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)  
 Simile a `CDynamicStringAccessor` tranne per il fatto che questa classe converte tutti i dati utilizzati nell'archivio dati in \(contrassegnati\) XML.  
  
## Classi dei rowset  
 [CAccessorRowset](../../data/oledb/caccessorrowset-class.md)  
 Incapsula un rowset e le relative funzioni di accesso collegate.  
  
 [CArrayRowset](../../data/oledb/carrayrowset-class.md)  
 Utilizzato per accedere agli elementi di un rowset tramite la sintassi delle matrici.  
  
 [CBulkRowset](../../data/oledb/cbulkrowset-class.md)  
 Utilizzato per recuperare e modificare le righe recupero di massa handle di riga con una singola chiamata.  
  
 [CNoRowset](../../data/oledb/cnorowset-class.md)  
 Può essere utilizzato come argomento di modello se il comando non restituisce un rowset.  
  
 [CRestrictions](../../data/oledb/crestrictions-class.md)  
 Utilizzata per specificare le restrizioni per i rowset dello schema.  
  
 [CRowset](../../data/oledb/crowset-class.md)  
 Utilizzato per la modifica, impostare e recuperare i dati del rowset.  
  
 [CStreamRowset](../../data/oledb/cstreamrowset-class.md)  
 Restituisce un oggetto di `ISequentialStream` anziché un set di righe; utilizzare quindi il metodo di **Leggere** per recuperare i dati in formato XML. \(SQL Server 2000 esegue la formattazione; si noti che il funzionamento di questa funzionalità con solo in SQL Server 2000\).  
  
 [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)  
 Fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per i metodi `OnFieldChange`, `OnRowChange` e `OnRowsetChange`di `IRowsetNotify`.  
  
 [Classi di rowset dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)  
  
 I modelli OLE DB offrono con un set di classi che corrispondono ai rowset dello schema OLE DB.  
  
## Classi dei comandi  
 [CCommand](../../data/oledb/ccommand-class.md)  
 Utilizzato per impostare ed eseguire un comando basato su parametro OLE DB.  Solo per aprire un rowset semplice, utilizzare invece `CTable`.  
  
 [CMultipleResults](../../data/oledb/cmultipleresults-class.md)  
 Utilizzato come argomento di template per il modello di `CCommand` quando si desidera che il comando gestione di più set di risultati.  
  
 [CNoAccessor](../../data/oledb/cnoaccessor-class.md)  
 Utilizzato come argomento di template per le classi modello, ad esempio `CCommand` e `CTable`, che accetta un argomento della classe di funzioni di accesso.  Utilizzare `CNoAccessor` se non si desidera che la classe per supportare i parametri o colonne di output.  
  
 [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md)  
 Utilizzato come argomento di template per il modello di `CCommand` quando si desidera che il comando gestire un singolo rowset.  `CNoMultipleResults` è il valore predefinito per un argomento di template.  
  
 [CNoRowset](../../data/oledb/cnorowset-class.md)  
 Utilizzato come argomento di template per `CCommand` o `CTable` se il comando oppure la tabella non restituisce un rowset.  
  
 [CTable](../../data/oledb/ctable-class.md)  
 Utilizzato per accedere a un rowset semplice senza parametri.  
  
## Classi delle proprietà  
 [CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)  
 Utilizzato per passare a una matrice degli ID di proprietà per il quale il consumer deve le informazioni della proprietà.  Le proprietà appartengono a un set di proprietà.  
  
 [CDBPropSet](../../data/oledb/cdbpropset-class.md)  
 Utilizzato per impostare proprietà in un provider.  
  
## Classe bookmark  
 [CBookmark](../../data/oledb/cbookmark-class.md)  
 Utilizzato come indice per accedere ai dati in un rowset.  
  
## Classe di errore  
 [CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)  
 Utilizzato per recuperare informazioni sugli errori di OLE DB.  
  
## Vedere anche  
 [Riferimenti ai modelli del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)   
 [modelli OLE DB](../../data/oledb/ole-db-templates.md)