---
title: Classi generate mediante la Creazione guidata consumer
ms.date: 05/09/2019
helpviewer_keywords:
- user record classes in OLE DB consumer
ms.assetid: dba0538f-2afe-4354-8cbb-f202ea8ade5a
ms.openlocfilehash: 0d3bd03fb352f2466f0ae48ec0ca99cf66fbb416
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079715"
---
# <a name="consumer-wizard-generated-classes"></a>Classi generate mediante la Creazione guidata consumer

::: moniker range="vs-2019"

La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente.

::: moniker-end

::: moniker range="<=vs-2017"

Quando si usa la **Creazione guidata consumer OLE DB ATL** per generare un consumer, è possibile scegliere di usare modelli OLE DB o attributi OLE DB. In entrambi i casi, verrà generata una classe di comando e una classe di record utente. La classe di comando contiene codice che consente di aprire l'origine dati e il set di dati specificati nella procedura guidata. La classe di record utente contiene una mappa delle colonne per la tabella di database selezionata. Tuttavia, il codice generato in ciascuno dei casi sarà differente:

- Se si seleziona un consumer basato su modelli, verrà generata una classe di comando e una classe di record utente. Il nome della classe di comando sarà quello immesso nella casella **Classe** nella procedura guidata, ad esempio `CProducts`, mentre il nome della classe di record utente avrà il formato "*NomeClasse*Accessor", ad esempio `CProductsAccessor`. Entrambe le classi verranno inserite nel file di intestazione del consumer.

- Se si seleziona un consumer basato su attributi, la classe di record utente assumerà un nome nel formato "_*ClassName*Accessor" e verrà inserita. Questo significa che nell'editor di testo sarà possibile visualizzare solo la classe di comando, mentre la classe di record utente può essere visualizzata solo come codice inserito. Per informazioni sulla visualizzazione di codice inserito, vedere [Debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).

Gli esempi seguenti usano una classe di comando creata nella tabella `Products` del database `Northwind` per mostrare il codice del consumer generato dalla procedura guidata per la classe di comando e la classe di record utente.

## <a name="templated-user-record-classes"></a>Classi di record utente basate su modelli

Se si crea un consumer OLE DB sulla base dei modelli OLE DB anziché degli attributi OLE DB, il codice verrà generato nel modo descritto in questa sezione.

### <a name="column-data-members"></a>Membri dati delle colonne

La prima parte della classe di record utente include le dichiarazioni dei membri dati e i membri dati di stato e di lunghezza per ciascuna colonna associata a dati. Per informazioni su questi membri dati, vedere [Membri dati di stato dei campi in funzioni di accesso generate dalla creazione guidata](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).

> [!NOTE]
> Se si modifica la classe di record utente o si crea un consumer personalizzato, le variabili dei dati devono essere specificate prima delle variabili di stato e di lunghezza.

> [!NOTE]
> La Creazione guidata consumer OLE DB ATL usa il tipo `DB_NUMERIC` per associare tipi di dati numerici. In precedenza veniva usato `DBTYPE_VARNUMERIC`, il cui formato viene descritto dal tipo `DB_VARNUMERIC`. Vedere Oledb.h. Se non si usa la procedura guidata per creare consumer, è consigliabile usare `DB_NUMERIC`.

```cpp
// Products.H : Declaration of the CProducts class

class CProductsAccessor
{
public:
   // Column data members:
   LONG m_ProductID;
   TCHAR m_ProductName[41];
   LONG m_SupplierID;
   LONG m_CategoryID;
   TCHAR m_QuantityPerUnit[21];
   CURRENCY m_UnitPrice;
   SHORT m_UnitsInStock;
   SHORT m_UnitsOnOrder;
   SHORT m_ReorderLevel;
   VARIANT_BOOL m_Discontinued;

   // Column status data members:
   DBSTATUS m_dwProductIDStatus;
   DBSTATUS m_dwProductNameStatus;
   DBSTATUS m_dwSupplierIDStatus;
   DBSTATUS m_dwCategoryIDStatus;
   DBSTATUS m_dwQuantityPerUnitStatus;
   DBSTATUS m_dwUnitPriceStatus;
   DBSTATUS m_dwUnitsInStockStatus;
   DBSTATUS m_dwUnitsOnOrderStatus;
   DBSTATUS m_dwReorderLevelStatus;
   DBSTATUS m_dwDiscontinuedStatus;

   // Column length data members:
   DBLENGTH m_dwProductIDLength;
   DBLENGTH m_dwProductNameLength;
   DBLENGTH m_dwSupplierIDLength;
   DBLENGTH m_dwCategoryIDLength;
   DBLENGTH m_dwQuantityPerUnitLength;
   DBLENGTH m_dwUnitPriceLength;
   DBLENGTH m_dwUnitsInStockLength;
   DBLENGTH m_dwUnitsOnOrderLength;
   DBLENGTH m_dwReorderLevelLength;
   DBLENGTH m_dwDiscontinuedLength;
```

### <a name="rowset-properties"></a>Proprietà del set di righe

A questo punto, la procedura guidata imposta le proprietà del set di righe. Se si seleziona **Cambia**, **Inserisci**o **Elimina** nella Creazione guidata consumer OLE DB ATL, vengono impostate le proprietà adatte: DBPROP_IRowsetChange in tutti e tre i casi, e almeno una, rispettivamente, tra le proprietà DBPROPVAL_UP_CHANGE, DBPROPVAL_UP_INSERT e/o DBPROPVAL_UP_DELETE.

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet)
{
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
}
```

### <a name="command-or-table-class"></a>Classe di comando o di tabella

Se si specifica una classe di comando, questa viene dichiarata dalla procedura guidata. Per il codice basato su modelli, il comando è analogo a quanto segue:

```cpp
DEFINE_COMMAND_EX(CProductsAccessor, L" \
SELECT \
   ProductID, \
   ProductName, \
   SupplierID, \
   CategoryID, \
   QuantityPerUnit, \
   UnitPrice, \
   UnitsInStock, \
   UnitsOnOrder, \
   ReorderLevel, \
   Discontinued \
   FROM dbo.Products")
```

### <a name="column-map"></a>Mappa delle colonne

A questo punto la procedura guidata genera le associazioni delle colonne o la mappa della colonne. Per risolvere vari problemi relativi ad alcuni provider, con il codice seguente è possibile associare le colonne in modo diverso rispetto a quello indicato dal provider.

```cpp
   BEGIN_COLUMN_MAP(CProductsAccessor)
      COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)
      COLUMN_ENTRY_LENGTH_STATUS(3, m_SupplierID, m_dwSupplierIDLength, m_dwSupplierIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(4, m_CategoryID, m_dwCategoryIDLength, m_dwCategoryIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(5, m_QuantityPerUnit, m_dwQuantityPerUnitLength, m_dwQuantityPerUnitStatus)
      _COLUMN_ENTRY_CODE(6, DBTYPE_CY, _SIZE_TYPE(m_UnitPrice), 0, 0, offsetbuf(m_UnitPrice), offsetbuf(m_dwUnitPriceLength), offsetbuf(m_dwUnitPriceStatus))
      COLUMN_ENTRY_LENGTH_STATUS(7, m_UnitsInStock, m_dwUnitsInStockLength, m_dwUnitsInStockStatus)
      COLUMN_ENTRY_LENGTH_STATUS(8, m_UnitsOnOrder, m_dwUnitsOnOrderLength, m_dwUnitsOnOrderStatus)
      COLUMN_ENTRY_LENGTH_STATUS(9, m_ReorderLevel, m_dwReorderLevelLength, m_dwReorderLevelStatus)
      _COLUMN_ENTRY_CODE(10, DBTYPE_BOOL, _SIZE_TYPE(m_Discontinued), 0, 0, offsetbuf(m_Discontinued), offsetbuf(m_dwDiscontinuedLength), offsetbuf(m_dwDiscontinuedStatus))
   END_COLUMN_MAP()
};
```

### <a name="class-declaration"></a>Dichiarazione di classe

Infine, la procedura guidata genera una dichiarazione di classe di comando come la seguente:

```cpp
class CProducts : public CCommand<CAccessor<CProductsAccessor>>
```

## <a name="attribute-injected-user-record-classes"></a>Classi di record utente inserite dagli attributi

Se si crea un consumer OLE DB usando gli attributi di database ([db_command](../../windows/db-command.md) o [db_table](../../windows/db-table.md)), gli attributi inseriscono una classe di record utente con un nome nel formato "_*ClassName*Accessor". Se ad esempio la classe di comando è stata denominata `COrders`, la classe di record utente sarà `_COrdersAccessor`. Benché la classe di record utente venga visualizzata in **Visualizzazione classi**, facendo doppio clic su di essa è possibile passare alla classe di comando o di tabella nel file di intestazione. In questi casi, la visualizzazione del codice inserito dagli attributi consente solo di visualizzare la dichiarazione effettiva della classe di record utente.

È possibile che si verifichino problemi se si aggiungono metodi o si esegue l'override di metodi in consumer con attributi. Ad esempio, aggiungendo un costruttore di `_COrdersAccessor` alla dichiarazione `COrders` , in realtà viene aggiunto un costruttore alla classe `COrdersAccessor` inserita. Un costruttore di questo tipo può inizializzare le colonne o i parametri, ma non è possibile creare un costruttore di copia in questo modo, perché questo non può creare direttamente istanze dell'oggetto `COrdersAccessor`. Se è necessario un costruttore (o un altro metodo) direttamente nella classe `COrders`, è consigliabile definire una nuova classe derivante da `COrders` e aggiungere i metodi necessari qui.

Nell'esempio seguente la procedura guidata genera una dichiarazione per la classe `COrders`, ma la classe di record utente `COrdersAccessor` non viene visualizzata, perché viene inserita dagli attributi.

```cpp
#define _ATL_ATTRIBUTES
#include <atlbase.h>
#include <atldbcli.h>
[
   db_source(L"your connection string"),
   db_command(L"Select ShipName from Orders;")
]
class COrders
{
public:

   // COrders()            // incorrect constructor name
   _COrdersAccessor()      // correct constructor name
   {
   }
      [db_column(1) ] TCHAR m_ShipName[41];
   };
```

La dichiarazione della classe di comando inserita è analoga alla seguente:

```cpp
class CProducts : public CCommand<CAccessor<_CProductsAccessor>>
```

La maggior parte del codice inserito è identica o simile alla versione basata su modelli. Le principali differenze riguardano i metodi inseriti, che sono descritti in [Metodi generati mediante la Creazione guidata consumer](../../data/oledb/consumer-wizard-generated-methods.md).

Per informazioni sulla visualizzazione di codice inserito, vedere [Debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)