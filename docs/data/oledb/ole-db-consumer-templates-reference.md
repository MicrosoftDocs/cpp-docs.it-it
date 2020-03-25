---
title: Riferimenti ai modelli consumer OLE DB
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB consumer templates, classes
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
ms.openlocfilehash: 13805ab1dc2c2b4792fd05c9140006c610b42f75
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210106"
---
# <a name="ole-db-consumer-templates-reference"></a>Riferimenti ai modelli consumer OLE DB

I modelli consumer OLE DB contengono le classi seguenti. Il materiale di riferimento include anche argomenti sulle [macro per i modelli di consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

## <a name="session-classes"></a>Classi di sessione

[CDataConnection](../../data/oledb/cdataconnection-class.md)<br/>
Gestisce la connessione con l'origine dati. Si tratta di una classe utile per la creazione di client perché incapsula gli oggetti necessari (origine dati e sessione) e alcune delle operazioni che è necessario eseguire quando ci si connette a un'origine dati.

[CDataSource](../../data/oledb/cdatasource-class.md)<br/>
Corrisponde a un oggetto origine dati OLE DB, che rappresenta una connessione tramite un provider a un'origine dati. Una o più sessioni di database, ognuna rappresentata da un oggetto `CSession`, possono essere applicate a una singola connessione.

[CEnumerator](../../data/oledb/cenumerator-class.md)<br/>
Corrisponde a un oggetto OLE DB enumeratore, che recupera le informazioni sui set di righe sulle origini dati disponibili.

[CEnumeratorAccessor](../../data/oledb/cenumeratoraccessor-class.md)<br/>
Utilizzato da `CEnumerator` per accedere ai dati dal set di righe dell'enumeratore. Questo set di righe è costituito dalle origini dati e dagli enumeratori visibili dall'enumeratore corrente.

[CSession](../../data/oledb/csession-class.md)<br/>
Rappresenta una singola sessione di accesso al database. Una o più sessioni possono essere associate a ogni oggetto `CDataSource`.

## <a name="accessor-classes"></a>Classi della funzione di accesso

[CAccessor](../../data/oledb/caccessor-class.md)<br/>
Utilizzato per i record associati in modo statico a un'origine dati. Usare questa classe della funzione di accesso quando si conosce la struttura dell'origine dati.

[CAccessorBase](../../data/oledb/caccessorbase-class.md)<br/>
Classe di base per tutte le classi della funzione di accesso.

[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
Funzione di accesso che può essere creata in fase di esecuzione, in base alle informazioni sulla colonna del set di righe. Utilizzare questa classe per recuperare i dati se non si conosce la struttura dell'origine dati.

[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
Funzione di accesso che può essere utilizzata quando i tipi di comando sono sconosciuti. Ottiene le informazioni sul parametro chiamando l'interfaccia `ICommandWithParameters`, se il provider supporta l'interfaccia.

[CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
Consente di accedere a un'origine dati quando non si conosce la struttura sottostante del database.

[CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe richiede l'accesso ai dati dall'archivio dati come dati stringa ANSI.

[CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe richiede l'accesso ai dati dall'archivio dati come dati stringa UNICODE.

[CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
Una funzione di accesso con metodi per gestire sia le colonne che i parametri di comando. Con questa classe è possibile usare qualsiasi tipo di dati purché il provider possa convertire il tipo.

[CNoAccessor](../../data/oledb/cnoaccessor-class.md)<br/>
Può essere usato come argomento di modello quando non si vuole che la classe supporti parametri o colonne di output.

[CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)<br/>
Simile a `CDynamicStringAccessor` ad eccezione del fatto che questa classe converte tutti i dati a cui si accede dall'archivio dati come dati in formato XML (con tag).

## <a name="rowset-classes"></a>Classi rowset

[CAccessorRowset](../../data/oledb/caccessorrowset-class.md)<br/>
Incapsula un set di righe e le funzioni di accesso associate.

[CArrayRowset](../../data/oledb/carrayrowset-class.md)<br/>
Utilizzato per accedere agli elementi di un set di righe utilizzando la sintassi di matrice.

[CBulkRowset](../../data/oledb/cbulkrowset-class.md)<br/>
Utilizzato per recuperare e modificare le righe in blocco recuperando più handle di riga con una singola chiamata.

[CNoRowset](../../data/oledb/cnorowset-class.md)<br/>
Può essere usato come argomento di modello se il comando non restituisce un set di righe.

[CRestrictions](../../data/oledb/crestrictions-class.md)<br/>
Utilizzato per specificare le restrizioni per i set di righe dello schema.

[CRowset](../../data/oledb/crowset-class.md)<br/>
Utilizzato per modificare, impostare e recuperare i dati dei set di righe.

[CStreamRowset](../../data/oledb/cstreamrowset-class.md)<br/>
Restituisce un oggetto `ISequentialStream` anziché un set di righe; si usa quindi il metodo `Read` per recuperare i dati in formato XML. (SQL Server 2000 esegue la formattazione. si noti che questa funzionalità funziona solo con SQL Server 2000.)

[IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)<br/>
Fornisce un'implementazione fittizia per `IRowsetNotify`, con funzioni vuote per i metodi di `IRowsetNotify` `OnFieldChange`, `OnRowChange`e `OnRowsetChange`.

[Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)

I modelli di OLE DB forniscono un set di classi che corrispondono ai set di righe dello schema di OLE DB.

## <a name="command-classes"></a>Classi di comando

[CCommand](../../data/oledb/ccommand-class.md)<br/>
Utilizzato per impostare ed eseguire un comando di OLE DB basato su parametri. Per aprire semplicemente un set di righe semplice, usare invece `CTable`.

[CMultipleResults](../../data/oledb/cmultipleresults-class.md)<br/>
Usato come argomento di modello per il modello di `CCommand` quando si vuole che il comando gestisca più set di risultati.

[CNoAccessor](../../data/oledb/cnoaccessor-class.md)<br/>
Usato come argomento di modello per le classi modello, ad esempio `CCommand` e `CTable`, che accettano un argomento della classe della funzione di accesso. Utilizzare `CNoAccessor` se non si desidera che la classe supporti parametri o colonne di output.

[CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md)<br/>
Usato come argomento di modello per il modello di `CCommand` quando si vuole che il comando gestisca un singolo set di righe. `CNoMultipleResults` è il valore predefinito per l'argomento di modello.

[CNoRowset](../../data/oledb/cnorowset-class.md)<br/>
Usato come argomento di modello per `CCommand` o `CTable` se il comando o la tabella non restituisce un set di righe.

[CTable](../../data/oledb/ctable-class.md)<br/>
Utilizzato per accedere a un semplice set di righe senza parametri.

## <a name="property-classes"></a>Classi di proprietà

[CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)<br/>
Utilizzato per passare una matrice di ID di proprietà per cui il consumer desidera ottenere informazioni sulle proprietà. Le proprietà appartengono a un set di proprietà.

[CDBPropSet](../../data/oledb/cdbpropset-class.md)<br/>
Utilizzato per impostare le proprietà di un provider.

## <a name="bookmark-class"></a>Classe Bookmark

[CBookmark](../../data/oledb/cbookmark-class.md)<br/>
Utilizzato come indice per l'accesso ai dati in un set di righe.

## <a name="error-class"></a>Classe Error

[CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)<br/>
Utilizzato per recuperare OLE DB informazioni sull'errore.

## <a name="see-also"></a>Vedere anche

[Riferimenti ai modelli del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)<br/>
[Modelli OLE DB](../../data/oledb/ole-db-templates.md)
