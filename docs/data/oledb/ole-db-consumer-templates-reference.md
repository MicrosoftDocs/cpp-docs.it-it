---
title: Riferimenti ai modelli Consumer OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- vc-attr.db_param
- vc-attr.db_column
- vc-attr.db_accessor
- vc-attr.db_command
- vc-attr.db_table
- vc.templates.ole
- vc-attr.db_source
dev_langs:
- C++
helpviewer_keywords:
- OLE DB consumer templates, classes
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a1aed8d2e00631ccd02a7ef3a966b8fd8a279938
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50068112"
---
# <a name="ole-db-consumer-templates-reference"></a>Riferimenti ai modelli consumer OLE DB

I modelli Consumer OLE DB contiene le classi seguenti. Il materiale di riferimento sono inoltre inclusi argomenti in di [macro per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

## <a name="session-classes"></a>Classi di sessione

[CDataConnection](../../data/oledb/cdataconnection-class.md)<br/>
Gestisce la connessione con l'origine dati. Si tratta di una classe utile per la creazione di client perché incapsula gli oggetti necessari (origine dati e sessione) e alcune operazioni da eseguire quando ci si connette a un'origine dati.

[CDataSource](../../data/oledb/cdatasource-class.md)<br/>
Corrisponde a un oggetto di origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati. Uno o più sessioni di database, ciascuno dei quali rappresentato da un `CSession` oggetto, possono essere eseguite in un'unica connessione.

[CEnumerator](../../data/oledb/cenumerator-class.md)<br/>
Corrisponde a un oggetto enumeratore OLE DB, che recupera set di righe informazioni sulle origini dati disponibili.

[CEnumeratorAccessor](../../data/oledb/cenumeratoraccessor-class.md)<br/>
Usato da `CEnumerator` per accedere ai dati dal set di righe di enumeratore. Questo set di righe è costituito da origini dati e gli enumeratori visibili dell'enumeratore corrente.

[CSession](../../data/oledb/csession-class.md)<br/>
Rappresenta una sessione di accesso singolo database. Una o più sessioni possono essere associati a ogni `CDataSource` oggetto.

## <a name="accessor-classes"></a>Classi di funzione di accesso

[CAccessor](../../data/oledb/caccessor-class.md)<br/>
Utilizzato per i record che sono associati in modo statico a un'origine dati. Utilizzare questa classe di funzione di accesso quando si conosce la struttura dell'origine dati.

[CAccessorBase](../../data/oledb/caccessorbase-class.md)<br/>
Classe di base per tutte le classi di funzione di accesso.

[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
Una funzione di accesso che possono essere create in fase di esecuzione, in base alle informazioni di colonna del set di righe. Utilizzare questa classe per recuperare i dati se non si conosce la struttura dell'origine dati.

[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
Una funzione di accesso che può essere usato quando i tipi di comandi sono sconosciuti. Ottiene le informazioni sui parametri, chiamando il `ICommandWithParameters` interfaccia, se il provider supporta l'interfaccia.

[CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
Consente di accedere a un'origine dati quando non si dispone di alcuna conoscenza della struttura sottostante del database.

[CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe richiede i dati dall'archivio dati come dati stringa ANSI.

[CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe richiede i dati dall'archivio dati come dati stringa UNICODE.

[CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
Una funzione di accesso con i metodi per gestire le colonne e parametri del comando. Questa classe, è possibile utilizzare qualsiasi tipo di dati, purché il provider può convertire il tipo.

[CNoAccessor](../../data/oledb/cnoaccessor-class.md)<br/>
Può essere utilizzato come argomento di modello quando non si desidera la classe per supportare i parametri o colonne di output.

[CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)<br/>
Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe converte tutti i dati dall'archivio dati come dati in formato XML (tag).

## <a name="rowset-classes"></a>Classi rowset

[CAccessorRowset](../../data/oledb/caccessorrowset-class.md)<br/>
Incapsula un set di righe e delle relative funzioni di accesso associati.

[CArrayRowset](../../data/oledb/carrayrowset-class.md)<br/>
Utilizzato per accedere agli elementi di un set di righe utilizzando la sintassi della matrice.

[CBulkRowset](../../data/oledb/cbulkrowset-class.md)<br/>
Utilizzato per recuperare e modificare le righe in blocco tramite il recupero più handle di riga con una singola chiamata.

[CNoRowset](../../data/oledb/cnorowset-class.md)<br/>
Può essere utilizzato come argomento di modello se il comando non restituisce un set di righe.

[cRestrictions](../../data/oledb/crestrictions-class.md)<br/>
Utilizzato per specificare le restrizioni per i set di righe dello schema.

[CRowset](../../data/oledb/crowset-class.md)<br/>
Consente di modificare, impostare e recuperare i dati di set di righe.

[CStreamRowset](../../data/oledb/cstreamrowset-class.md)<br/>
Restituisce un `ISequentialStream` invece di un set di righe dell'oggetto; è quindi possibile usare il `Read` metodo per recuperare i dati in formato XML. (SQL Server 2000 è la formattazione; si noti che questa funzionalità funziona solo con SQL Server 2000).

[IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)<br/>
Fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per il `IRowsetNotify` metodi `OnFieldChange`, `OnRowChange`, e `OnRowsetChange`.

[Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)

I modelli OLE DB forniscono un set di classi che corrispondono ai set di righe dello schema OLE DB.

## <a name="command-classes"></a>Classi di comandi

[CCommand](../../data/oledb/ccommand-class.md)<br/>
Utilizzato per impostare ed eseguire un comando OLE DB in base al parametro. Per aprire semplicemente un rowset semplice, usare `CTable` invece.

[CMultipleResults](../../data/oledb/cmultipleresults-class.md)<br/>
Utilizzato come argomento di modello per il `CCommand` modello quando si desidera che il comando gestisca più set di risultati.

[CNoAccessor](../../data/oledb/cnoaccessor-class.md)<br/>
Utilizzato come argomento di modello per le classi modello, ad esempio `CCommand` e `CTable`, che accettano un argomento di classe della funzione di accesso. Usare `CNoAccessor` se non si desidera la classe per supportare i parametri o colonne di output.

[CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md)<br/>
Utilizzato come argomento di modello per il `CCommand` modello quando si desidera che il comando per gestire un singolo set di righe. `CNoMultipleResults` è il valore predefinito per l'argomento di modello.

[CNoRowset](../../data/oledb/cnorowset-class.md)<br/>
Utilizzato come argomento di modello per `CCommand` o `CTable` se il comando o la tabella non restituisce un set di righe.

[CTable](../../data/oledb/ctable-class.md)<br/>
Utilizzato per accedere a un rowset semplice senza parametri.

## <a name="property-classes"></a>Classi delle proprietà

[CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)<br/>
Utilizzato per passare una matrice di ID proprietà di cui il consumer richiede informazioni sulla proprietà. La proprietà appartiene al set di una proprietà.

[CDBPropSet](../../data/oledb/cdbpropset-class.md)<br/>
Utilizzato per impostare le proprietà in un provider.

## <a name="bookmark-class"></a>Classe di segnalibro

[CBookmark](../../data/oledb/cbookmark-class.md)<br/>
Utilizzato come un indice per l'accesso ai dati in un set di righe.

## <a name="error-class"></a>Error-classe

[CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)<br/>
Utilizzato per recuperare le informazioni sugli errori OLE DB.

## <a name="see-also"></a>Vedere anche

[Riferimenti ai modelli del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)<br/>
[Modelli OLE DB](../../data/oledb/ole-db-templates.md)