---
title: Riferimenti per i modelli Consumer OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc-attr.db_param
- vc-attr.db_column
- vc-attr.db_accessor
- vc-attr.db_command
- vc-attr.db_table
- vc.templates.ole
- vc-attr.db_source
dev_langs: C++
helpviewer_keywords: OLE DB consumer templates, classes
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4c401cebf9fd09686a532031322793fd9bedac50
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ole-db-consumer-templates-reference"></a>Riferimenti ai modelli consumer OLE DB
Modelli Consumer OLE DB contiene le classi seguenti. Il materiale di riferimento sono inoltre inclusi argomenti in di [macro per i modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
## <a name="session-classes"></a>Classi di sessione  
 [CDataConnection](../../data/oledb/cdataconnection-class.md)  
 Gestisce la connessione con l'origine dati. Questa è una classe utile per la creazione di client in quanto incapsula gli oggetti necessari (origine dati e sessione) e parte del lavoro, che è necessario eseguire quando ci si connette a un'origine dati.  
  
 [CDataSource](../../data/oledb/cdatasource-class.md)  
 Corrisponde a un oggetto di origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati. Uno o più sessioni di database, ognuno rappresentato da un `CSession` di oggetto, è possibile eseguire in un'unica connessione.  
  
 [CEnumerator](../../data/oledb/cenumerator-class.md)  
 Corrisponde a un oggetto enumeratore OLE DB, che recupera set di righe informazioni sulle origini dati disponibili.  
  
 [CEnumeratorAccessor](../../data/oledb/cenumeratoraccessor-class.md)  
 Utilizzato da `CEnumerator` per accedere ai dati dal set di righe di enumeratore. Questo set di righe è costituito da origini dati e gli enumeratori visibili dall'enumeratore corrente.  
  
 [CSession](../../data/oledb/csession-class.md)  
 Rappresenta una sessione di accesso singolo database. Una o più sessioni possono essere associato a ogni `CDataSource` oggetto.  
  
## <a name="accessor-classes"></a>Classi di funzione di accesso  
 [CAccessor](../../data/oledb/caccessor-class.md)  
 Utilizzato per i record che sono associati in modo statico a un'origine dati. Utilizzare questa classe di funzione di accesso quando si conosce la struttura dell'origine dati.  
  
 [CAccessorBase](../../data/oledb/caccessorbase-class.md)  
 Classe di base per tutte le classi delle funzioni di accesso.  
  
 [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)  
 Una funzione di accesso che possono essere creati in fase di esecuzione, in base alle informazioni di colonna del set di righe. Utilizzare questa classe per recuperare i dati se non si conosce la struttura dell'origine dati.  
  
 [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)  
 Una funzione di accesso che può essere utilizzato quando i tipi di comando sono sconosciuti. Ottiene le informazioni sui parametri, chiamando la `ICommandWithParameters` interfaccia, se il provider supporta l'interfaccia.  
  
 [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)  
 Consente di accedere a un'origine dati quando si ha alcuna conoscenza della struttura sottostante del database.  
  
 [CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)  
 Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe richiede i dati dall'archivio dati come dati di stringa ANSI.  
  
 [CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)  
 Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe richiede i dati dall'archivio dati come dati stringa UNICODE.  
  
 [CManualAccessor](../../data/oledb/cmanualaccessor-class.md)  
 Una funzione di accesso con i metodi per gestire le colonne e parametri del comando. Con questa classe, è possibile utilizzare i tipi di dati, purché il provider può convertire il tipo.  
  
 [CNoAccessor](../../data/oledb/cnoaccessor-class.md)  
 Può essere utilizzato come argomento di modello quando non si desidera che la classe per supportare i parametri o colonne di output.  
  
 [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)  
 Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe converte tutti i dati dall'archivio dati in formato XML (tag).  
  
## <a name="rowset-classes"></a>Classi rowset  
 [CAccessorRowset](../../data/oledb/caccessorrowset-class.md)  
 Incapsula un set di righe e le funzioni di accesso associati.  
  
 [CArrayRowset](../../data/oledb/carrayrowset-class.md)  
 Utilizzato per accedere agli elementi di un set di righe utilizzando la sintassi della matrice.  
  
 [CBulkRowset](../../data/oledb/cbulkrowset-class.md)  
 Utilizzato per recuperare e modificare le righe in blocco tramite il recupero di più handle di riga con una singola chiamata.  
  
 [CNoRowset](../../data/oledb/cnorowset-class.md)  
 Può essere utilizzato come argomento di modello se il comando non restituisce un set di righe.  
  
 [CRestrictions](../../data/oledb/crestrictions-class.md)  
 Consente di specificare le restrizioni per i set di righe dello schema.  
  
 [CRowset](../../data/oledb/crowset-class.md)  
 Utilizzato per modificare, impostare e recuperare i dati di set di righe.  
  
 [CStreamRowset](../../data/oledb/cstreamrowset-class.md)  
 Restituisce un `ISequentialStream` oggetto anziché un set di righe; è quindi possibile utilizzare il **lettura** metodo per recuperare i dati in formato XML. (SQL Server 2000 non la formattazione, si noti che questa funzionalità funziona solo con SQL Server 2000).  
  
 [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)  
 Fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per il `IRowsetNotify` metodi `OnFieldChange`, `OnRowChange`, e `OnRowsetChange`.  
  
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)  
  
 I modelli OLE DB offrono un set di classi che corrispondono alle righe dello schema OLE DB.  
  
## <a name="command-classes"></a>Classi di comandi  
 [CCommand](../../data/oledb/ccommand-class.md)  
 Utilizzato per impostare ed eseguire un comando OLE DB basate su parametri. Per aprire semplicemente un rowset semplice, utilizzare `CTable` invece.  
  
 [CMultipleResults](../../data/oledb/cmultipleresults-class.md)  
 Utilizzato come argomento di modello per il `CCommand` modello quando si desidera che il comando per gestire più set di risultati.  
  
 [CNoAccessor](../../data/oledb/cnoaccessor-class.md)  
 Utilizzato come argomento di modello per le classi di modello, ad esempio `CCommand` e `CTable`, che accettano un argomento di classe della funzione di accesso. Utilizzare `CNoAccessor` se non si desidera la classe per supportare i parametri o colonne di output.  
  
 [CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md)  
 Utilizzato come argomento di modello per il `CCommand` modello quando si desidera che il comando per gestire un singolo set di righe. `CNoMultipleResults`è il valore predefinito per l'argomento del modello.  
  
 [CNoRowset](../../data/oledb/cnorowset-class.md)  
 Utilizzato come argomento di modello per `CCommand` o `CTable` se il comando o la tabella non restituisce un set di righe.  
  
 [CTable](../../data/oledb/ctable-class.md)  
 Utilizzato per accedere a un rowset semplice senza parametri.  
  
## <a name="property-classes"></a>Classi di proprietà  
 [CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)  
 Utilizzato per passare una matrice di ID di proprietà per i quali il consumer richiede informazioni sulle proprietà. La proprietà appartiene al set di una proprietà.  
  
 [CDBPropSet](../../data/oledb/cdbpropset-class.md)  
 Utilizzato per impostare le proprietà per un provider.  
  
## <a name="bookmark-class"></a>Classe segnalibro  
 [CBookmark](../../data/oledb/cbookmark-class.md)  
 Utilizzato come indice per l'accesso ai dati in un set di righe.  
  
## <a name="error-class"></a>Classe di errori  
 [CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)  
 Consente di recuperare informazioni sull'errore OLE DB.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti ai modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)   
 [Modelli OLE DB](../../data/oledb/ole-db-templates.md)