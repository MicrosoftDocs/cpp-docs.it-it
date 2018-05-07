---
title: Aggiornamento dei rowset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- rowsets, updating data
- updating data, rowsets
- updating rowsets
- rowsets
ms.assetid: 39588758-5c72-4254-a10d-cc2b1f473357
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8ca0ef94ba6c60bd43e24672fe7db669a3930fd7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="updating-rowsets"></a>aggiornamento rowset
Un'operazione molto semplice del database consiste nell'aggiornamento o nella scrittura dei dati nell'archivio dati. In OLE DB il meccanismo di aggiornamento è semplice: l'applicazione consumer imposta i valori dei membri dati associati, scrive tali valori nel set di righe e, infine, richiede al provider di aggiornare l'archivio dati.  
  
 I consumer possono eseguire i tipi di aggiornamento seguenti sui dati del set di righe: impostazione dei valori della colonna all'interno di una riga, inserimento di una riga ed eliminazione di una riga. Per eseguire queste operazioni, la classe di modelli OLE DB [CRowset](../../data/oledb/crowset-class.md) implementa l'interfaccia [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) ed esegue l'override dei metodi di interfaccia seguenti:  
  
-   [SetData](../../data/oledb/crowset-setdata.md) modifica i valori della colonna in una riga di un set di righe. È equivalente al comando SQL UPDATE.  
  
-   [Insert](../../data/oledb/crowset-insert.md) inserisce una riga in un set di righe. È equivalente al comando SQL INSERT.  
  
-   [Delete](../../data/oledb/crowset-delete.md) elimina le righe da un set di righe. È equivalente al comando SQL DELETE.  
  
## <a name="supporting-update-operations"></a>Supporto delle operazioni di aggiornamento  
 Quando si crea un consumer con la Creazione guidata consumer OLE DB ATL, è possibile supportare le operazioni di aggiornamento selezionando una o più delle tre caselle di controllo **Modifica**, **Inserisci**ed **Elimina**. Se si selezionano queste opzioni, la procedura guidata modifica il codice in modo che supporti il tipo di modifiche prescelte. Tuttavia, se non si usa la procedura guidata, per supportare gli aggiornamenti è necessario impostare le proprietà del set di righe seguenti su `VARIANT_TRUE` :  
  
-   **DBPROPVAL_UP_CHANGE** consente di modificare i valori dei dati in una riga.  
  
-   **DBPROPVAL_UP_INSERT** consente di inserire una riga.  
  
-   **DBPROPVAL_UP_INSERT** consente di eliminare una riga.  
  
 Impostare le proprietà come segue:  
  
```  
CDBPropSet ps(DBPROPSET_ROWSET);  

ps.AddProperty(DBPROP_IRowsetChange, true)  
ps.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE)  
```  
  
 Le operazioni di modifica, inserimento o eliminazione potrebbero non riuscire se una o più colonne non sono scrivibili. Modificare la mappa del cursore per risolvere il problema.  
  
## <a name="setting-data-in-rows"></a>Impostazione dei dati nelle righe  
 [CRowset::SetData](../../data/oledb/crowset-setdata.md) imposta i valori dei dati in una o più colonne della riga corrente. Il codice seguente imposta i valori dei membri dati associati alle colonne "Name" e "Units in Stock" della tabella Products e quindi chiama `SetData` per scrivere tali valori nella centesima riga del set di righe:  
  
```  
// Instantiate a rowset based on the user record class  
CTable<CAccessor<CProductAccessor>> product;  
CSession session;  
  
// Open the rowset and move to the 100th row  
product.Open(session, "Product", &ps, 1);  // ps is the property set  
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row  
  
// Change the values of columns "Name" and "Units in Stock" in the current row of the Product table  
_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName,  
           _T( "Candle" ) );  

product.m_UnitsInStock = 10000;  
  
// Set the data  
HRESULT hr = product.SetData();  
```  
  
## <a name="inserting-rows-into-rowsets"></a>Inserimento di righe nel set di righe  
 [CRowset::Insert](../../data/oledb/crowset-insert.md) crea e inizializza una nuova riga usando i dati dalla funzione di accesso. **Insert** crea una nuova riga dopo la riga corrente. È necessario specificare se si vuole spostare la riga corrente alla riga successiva o lasciarla invariata. A tale scopo, impostare il parametro *bGetRow* :  
  
```  
HRESULT Insert(int nAccessor = 0, bool bGetRow = false)  
```  
  
-   **false** (valore predefinito) specifica che la riga corrente viene spostata alla riga successiva (nel qual caso punta alla riga inserita).  
  
-   **true** specifica che la riga corrente rimane invariata.  
  
 Il codice seguente imposta i valori dei membri dati associati alle colonne della tabella Products e quindi chiama **Insert** per inserire una nuova riga con tali valori dopo la centesima riga del set di righe. Si consiglia di impostare tutti i valori della colonna per evitare che ci siano dati non definiti nella nuova riga:  
  
```  
// Instantiate a rowset based on the user record class  
CTable<CAccessor<CProductAccessor>> product;  
CSession session;  
  
// Open the rowset and move to the 100th row  
product.Open(session, "Product", &ps, 1);  // ps is the property set  
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row  
  
// Set the column values for a row of the Product table, then insert the row  
product.m_ProductID = 101;  
_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName,  
           _T( "Candle" ) );  

product.m_SupplierID = 27857;  
product.m_CategoryID = 372;  
_tcscpy_s(product.m_QuantityPerUnit, product.m_sizeOfQuantityPerUnit,  
           _T( "Pack of 10" ) );  

product.m_UnitPrice = 20;  
product.m_UnitsInStock = 10000;  
product.m_UnitsOnOrder = 5201;  
product.m_ReorderLevel = 5000;  
product.m_Discontinued = false;  
  
// You must also initialize the status and length fields before setting/inserting data  
// Set the column status values  
m_dwProductIDStatus = DBSTATUS_S_OK;  
m_dwProductNameStatus = DBSTATUS_S_OK;  
m_dwSupplierIDStatus = DBSTATUS_S_OK;  
m_dwCategoryIDStatus = DBSTATUS_S_OK;  
m_dwQuantityPerUnitStatus = DBSTATUS_S_OK;  
m_dwUnitPriceStatus = DBSTATUS_S_OK;  
m_dwUnitsInStockStatus = DBSTATUS_S_OK;  
m_dwUnitsOnOrderStatus = DBSTATUS_S_OK;  
m_dwReorderLevelStatus = DBSTATUS_S_OK;  
m_dwDiscontinuedStatus = DBSTATUS_S_OK;  
  
// Set the column length value for column data members that are not fixed-length types.  
// The value should be the length of the string that you are setting.  
m_dwProductNameLength = 6;             // "Candle" has 6 characters  
m_dwQuantityPerUnitLength = 10;        // "Pack of 10" has 10 characters  
  
// Insert the data  
HRESULT hr = product.Insert();  
```  
  
 Per un esempio più dettagliato, vedere [CRowset::Insert](../../data/oledb/crowset-insert.md).  
  
 Per altre informazioni sull'impostazione dei membri dati per stato e lunghezza, vedere [Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).  
  
## <a name="deleting-rows-from-rowsets"></a>Eliminazione delle righe dal set di righe  
 [CRowset::Delete](../../data/oledb/crowset-delete.md) elimina la riga corrente dal set di righe. Il codice seguente chiama **Delete** per rimuovere la centesima riga del set di righe:  
  
```  
// Instantiate a rowset based on the user record class  
CTable<CAccessor<CProductAccessor>> product;  
CSession session;  
  
// Open the rowset and move to the 100th row  
product.Open(session, "Product", &ps, 1);  // ps is the property set  
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row  
  
// Delete the row  
HRESULT hr = product.Delete();  
```  
  
## <a name="immediate-and-deferred-updates"></a>Aggiornamenti immediati e posticipati  
 Se non diversamente specificato, le chiamate ai metodi `SetData`, **Insert**e **Delete** aggiornano immediatamente l'archivio dati. Tuttavia, è possibile rinviare gli aggiornamenti in modo che il consumer archivi tutte le modifiche in una cache locale e le trasferisca all'archivio dati quando si chiama uno dei metodi di aggiornamento seguenti:  
  
-   [CRowset::Update](../../data/oledb/crowset-update.md) trasferisce le modifiche in sospeso apportate alla riga corrente dall'ultimo recupero o dall'ultima chiamata a **Update** .  
  
-   [CRowset::UpdateAll](../../data/oledb/crowset-updateall.md) trasferisce le modifiche in sospeso apportate a tutte le righe dall'ultimo recupero o dall'ultima chiamata a **Update** .  
  
 Tenere presente che l'aggiornamento tramite i metodi Update indica specificamente di apportare modifiche al comando e non deve essere confuso con il comando SQL UPDATE (`SetData` equivale al comando SQL UPDATE).  
  
 Gli aggiornamenti posticipati sono utili in situazioni come ad esempio una serie di transazioni bancarie. Se una transazione viene annullata, è possibile annullare la modifica, poiché la serie di modifiche finché non viene inviata finché non viene eseguito il commit dell'ultima modifica. Inoltre, il provider può raggruppare le modifiche in una sola chiamata di rete, che risulta più efficace.  
  
 Per supportare gli aggiornamenti posticipati, è necessario impostare la proprietà **DBPROP_IRowsetChange** oltre alle proprietà descritte in "Supporto delle operazioni di aggiornamento":  
  
```  
pPropSet->AddProperty(DBPROP_IRowsetUpdate, true);  
```  
  
 Quando si chiama **Update** o `UpdateAll`, i metodi trasferiscono le modifiche dalla cache locale all'archivio dati, quindi cancellano la cache locale. Poiché Update trasferisce le modifiche solo per la riga corrente, è importante che l'applicazione tenga traccia della riga da aggiornare e del momento in cui eseguire l'aggiornamento. L'esempio seguente illustra come aggiornare due righe consecutive:  
  
```  
// Instantiate a rowset based on the user record class  
CTable<CAccessor<CProductAccessor>> product;  
CSession session;  
  
// Open the rowset and move to the 100th row  
product.Open(session, "Product", &ps, 1);  // ps is the property set  
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row  
  
// Change the values of columns "Name" and "Units in Stock" in the 100th row of the Product table  
_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName,  
           _T( "Wick" ) );  

product.m_UnitsInStock = 10000;  

HRESULT hr = product.SetData();  // No changes made to row 100 yet  
product.Update();                 // Update row 100 now  
  
// Change the values of columns "Name" and "Units in Stock" in the 101st row of the Product table  
product.MoveNext();  

_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName  
           _T( "Wax" ) );  

product.m_UnitsInStock = 500;  

HRESULT hr = product.SetData();  // No changes made to row 101 yet  
product.Update();                 // Update row 101 now  
```  
  
 Per verificare il trasferimento delle modifiche in sospeso, chiamare **Update** prima di passare a un'altra riga. Tuttavia, quando questa operazione risulta noiosa o non efficace, ad esempio quando l'applicazione deve aggiornare centinaia di righe, è possibile usare `UpdateAll` per aggiornare tutte le righe in una sola volta.  
  
 Ad esempio, se la prima chiamata a **Update** non è stata inclusa nel codice precedente, la riga 100 resta invariata, mentre viene modificata la riga 101. Per continuare e aggiornare questa riga, l'applicazione deve chiamare `UpdateAll` oppure tornare alla riga 100 e chiamare **Update** .  
  
 Infine, uno dei motivi principali per il rinvio delle modifiche consiste nella possibilità di annullarle. La chiamata a [CRowset::Undo](../../data/oledb/crowset-undo.md) ripristina lo stato della cache delle modifiche locale allo stato dell'archivio dati prima che venissero apportate le modifiche in sospeso. È importante notare che **Undo** non esegue il rollback dello stato della cache locale al passaggio precedente (lo stato prima dell'ultima modifica), bensì cancella la cache locale per la riga. Inoltre, **Undo** ha effetto solo sulla riga corrente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei modelli Consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)   
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx)