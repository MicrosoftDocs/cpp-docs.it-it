---
title: 'Recordset: recupero di massa di record (ODBC)'
ms.date: 11/04/2016
helpviewer_keywords:
- bulk row fetching, implementing
- ODBC recordsets, bulk row fetching
- bulk record field exchange
- bulk row fetching
- bulk RFX functions
- recordsets, bulk row fetching
- DoBulkFieldExchange method
- fetching ODBC records in bulk
- RFX (ODBC), bulk
- rowsets, bulk row fetching
- RFX (ODBC), bulk row fetching
ms.assetid: 20d10fe9-c58a-414a-b675-cdf9aa283e4f
ms.openlocfilehash: ccdc4668f0c19f63ec86ee9a6d788532eb4d9d38
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86403712"
---
# <a name="recordset-fetching-records-in-bulk-odbc"></a>Recordset: recupero di massa di record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

La classe `CRecordset` fornisce supporto per il recupero di righe bulk, il che significa che è possibile recuperare più record contemporaneamente durante una singola operazione di recupero, anziché recuperare un record alla volta dall'origine dati. È possibile implementare il recupero di righe BULK solo in una `CRecordset` classe derivata. Il processo di trasferimento dei dati dall'origine dati all'oggetto recordset è denominato Bulk Record Field Exchange (RFX bulk). Si noti che se non si utilizza il recupero di righe bulk in una `CRecordset` classe derivata da, i dati vengono trasferiti tramite RFX (record Field Exchange). Per altre informazioni, vedere [trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md).

In questo argomento:

- In [che modo CRecordset supporta il recupero di righe BULK](#_core_how_crecordset_supports_bulk_row_fetching).

- [Alcune considerazioni speciali relative all'utilizzo del recupero di righe BULK](#_core_special_considerations).

- [Come implementare lo scambio di campi di record in blocco](#_core_how_to_implement_bulk_record_field_exchange).

## <a name="how-crecordset-supports-bulk-row-fetching"></a><a name="_core_how_crecordset_supports_bulk_row_fetching"></a>Come CRecordset supporta il recupero di righe BULK

Prima di aprire l'oggetto recordset, è possibile definire le dimensioni di un set di righe con la `SetRowsetSize` funzione membro. Con le dimensioni del set di righe viene specificato il numero di record da recuperare durante una singola operazione di recupero. Quando si implementa il recupero di righe in blocco, la dimensione predefinita del set di righe è 25. Se il recupero di righe in blocco non è implementato, le dimensioni del set di righe restano fisse su 1.

Dopo aver inizializzato le dimensioni del set di righe, chiamare la funzione membro [Open](../../mfc/reference/crecordset-class.md#open) . Qui è necessario specificare l' `CRecordset::useMultiRowFetch` opzione del parametro *dwOptions* per implementare il recupero di righe BULK. È inoltre possibile impostare l' `CRecordset::userAllocMultiRowBuffers` opzione. Il meccanismo di scambio dei campi di record bulk utilizza matrici per archiviare più righe di dati recuperate durante un'operazione di recupero. Questi buffer di archiviazione possono essere allocati automaticamente dal Framework oppure è possibile allocarli manualmente. `CRecordset::userAllocMultiRowBuffers`Se si specifica l'opzione, l'allocazione sarà eseguita.

Nella tabella seguente sono elencate le funzioni membro fornite da `CRecordset` per supportare il recupero di righe BULK.

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)|Funzione virtuale che gestisce gli errori che si verificano durante il recupero.|
|[DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange)|Implementa lo scambio di campi di record in blocco. Chiamato automaticamente per trasferire più righe di dati dall'origine dati all'oggetto recordset.|
|[GetRowsetSize](../../mfc/reference/crecordset-class.md#getrowsetsize)|Recupera l'impostazione corrente per le dimensioni del set di righe.|
|[GetRowsFetched](../../mfc/reference/crecordset-class.md#getrowsfetched)|Indica il numero di righe effettivamente recuperate dopo una determinata operazione di recupero. Nella maggior parte dei casi si tratta della dimensione del set di righe, a meno che non sia stato recuperato un set di righe incompleto.|
|[GetRowStatus](../../mfc/reference/crecordset-class.md#getrowstatus)|Restituisce uno stato di recupero per una determinata riga all'interno di un set di righe.|
|[RefreshRowset](../../mfc/reference/crecordset-class.md#refreshrowset)|Aggiorna i dati e lo stato di una determinata riga all'interno di un set di righe.|
|[SetRowsetCursorPosition](../../mfc/reference/crecordset-class.md#setrowsetcursorposition)|Sposta il cursore in una determinata riga all'interno di un set di righe.|
|[SetRowsetSize](../../mfc/reference/crecordset-class.md#setrowsetsize)|Funzione virtuale che modifica l'impostazione per la dimensione del set di righe sul valore specificato.|

## <a name="special-considerations"></a><a name="_core_special_considerations"></a>Considerazioni speciali

Sebbene il recupero di righe in blocco sia un miglioramento delle prestazioni, alcune funzionalità funzionano in modo diverso. Prima di decidere di implementare il recupero di righe bulk, tenere presente quanto segue:

- Il Framework chiama automaticamente la `DoBulkFieldExchange` funzione membro per trasferire i dati dall'origine dati all'oggetto recordset. Tuttavia, i dati non vengono trasferiti nuovamente dal recordset all'origine dati. La chiamata `AddNew` alle `Edit` `Delete` funzioni membro,, o `Update` genera un'asserzione non riuscita. Sebbene `CRecordset` attualmente non fornisca un meccanismo per l'aggiornamento di righe di dati bulk, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC `SQLSetPos` . Per ulteriori informazioni su `SQLSetPos` , vedere [ODBC Programmer ' s Reference](/sql/odbc/reference/odbc-programmer-s-reference).

- Le funzioni membro `IsDeleted` ,,, `IsFieldDirty` `IsFieldNull` `IsFieldNullable` , `SetFieldDirty` e `SetFieldNull` non possono essere utilizzate nei recordset che implementano il recupero di righe BULK. Tuttavia, è possibile chiamare `GetRowStatus` al posto di `IsDeleted` e `GetODBCFieldInfo` al posto di `IsFieldNullable` .

- Le `Move` operazioni riposizionano il recordset in base al set di righe. Si supponga, ad esempio, di aprire un recordset con 100 record con una dimensione iniziale del set di righe pari a 10. `Open`Recupera le righe da 1 a 10, con il record corrente posizionato nella riga 1. Una chiamata al `MoveNext` recupero del set di righe successivo, non alla riga successiva. Questo set di righe è costituito da righe da 11 a 20, con il record corrente posizionato sulla riga 11. Si noti che `MoveNext` e `Move( 1 )` non sono equivalenti quando si implementa il recupero di righe BULK. `Move( 1 )`Recupera il set di righe che inizia una riga dal record corrente. In questo esempio, chiamando `Move( 1 )` dopo aver chiamato `Open` il recupero del set di righe costituito da righe da 2 a 11, con il record corrente posizionato sulla riga 2. Per ulteriori informazioni, vedere la funzione membro [Move](../../mfc/reference/crecordset-class.md#move) .

- A differenza dello scambio di campi di record, le procedure guidate non supportano lo scambio di campi di record in blocco. Ciò significa che è necessario dichiarare manualmente i membri dati del campo ed eseguire manualmente l'override `DoBulkFieldExchange` scrivendo chiamate alle funzioni RFX di massa. Per altre informazioni, vedere [funzioni di scambio di campi di record](../../mfc/reference/record-field-exchange-functions.md) nei *riferimenti alla libreria di classi*.

## <a name="how-to-implement-bulk-record-field-exchange"></a><a name="_core_how_to_implement_bulk_record_field_exchange"></a>Come implementare lo scambio di campi di record bulk

Lo scambio di campi di record bulk trasferisce un set di righe di dati dall'origine dati all'oggetto recordset. Le funzioni RFX bulk utilizzano matrici per archiviare questi dati, nonché matrici per archiviare la lunghezza di ogni elemento di dati nel set di righe. Nella definizione della classe è necessario definire i membri dati del campo come puntatori per accedere alle matrici di dati. Inoltre, è necessario definire un set di puntatori per accedere alle matrici di lunghezze. I membri dati dei parametri non devono essere dichiarati come puntatori; dichiarare i membri dei dati dei parametri quando si usa lo scambio di campi di record in blocco equivale a dichiararli quando si usa lo scambio di campi di record. Il codice seguente illustra un semplice esempio:

```cpp
class MultiRowSet : public CRecordset
{
public:
   // Field/Param Data
      // field data members
      long* m_rgID;
      LPSTR m_rgName;

      // pointers for the lengths
      // of the field data
      long* m_rgIDLengths;
      long* m_rgNameLengths;

      // input parameter data member
      CString m_strNameParam;

   .
   .
   .
}
```

È possibile allocare questi buffer di archiviazione manualmente o fare in modo che il Framework esegua l'allocazione. Per allocare i buffer manualmente, è necessario specificare l' `CRecordset::userAllocMultiRowBuffers` opzione del parametro *dwOptions* nella `Open` funzione membro. Assicurarsi di impostare le dimensioni delle matrici almeno uguale alla dimensione del set di righe. Se si desidera che il Framework esegua l'allocazione, è necessario inizializzare i puntatori su NULL. Questa operazione viene in genere eseguita nel costruttore dell'oggetto Recordset:

```cpp
MultiRowSet::MultiRowSet( CDatabase* pDB )
   : CRecordset( pDB )
{
   m_rgID = NULL;
   m_rgName = NULL;
   m_rgIDLengths = NULL;
   m_rgNameLengths = NULL;
   m_strNameParam = "";

   m_nFields = 2;
   m_nParams = 1;

   .
   .
   .
}
```

Infine, è necessario eseguire l'override della `DoBulkFieldExchange` funzione membro. Per i membri dati del campo, chiamare le funzioni RFX di massa; per i membri dati dei parametri, chiamare le funzioni RFX. Se il recordset è stato aperto passando un'istruzione SQL o stored procedure a `Open` , l'ordine in cui si effettuano le chiamate RFX di massa deve corrispondere all'ordine delle colonne nel recordset; Analogamente, l'ordine delle chiamate RFX per i parametri deve corrispondere all'ordine dei parametri nell'istruzione SQL o stored procedure.

```cpp
void MultiRowSet::DoBulkFieldExchange( CFieldExchange* pFX )
{
   // call the Bulk RFX functions
   // for field data members
   pFX->SetFieldType( CFieldExchange::outputColumn );
   RFX_Long_Bulk( pFX, _T( "[colRecID]" ),
                  &m_rgID, &m_rgIDLengths );
   RFX_Text_Bulk( pFX, _T( "[colName]" ),
                  &m_rgName, &m_rgNameLengths, 30 );

   // call the RFX functions for
   // for parameter data members
   pFX->SetFieldType( CFieldExchange::inputParam );
   RFX_Text( pFX, "NameParam", m_strNameParam );
}
```

> [!NOTE]
> È necessario chiamare la `Close` funzione membro prima che la classe derivata esca dall' `CRecordset` ambito. In questo modo si garantisce che la memoria allocata dal Framework venga liberata. È consigliabile chiamare sempre in modo esplicito `Close` , indipendentemente dal fatto che sia stato implementato il recupero di righe BULK.

Per altre informazioni sullo scambio di campi di record (RFX), vedere [trasferimento di campi di record:](../../data/odbc/record-field-exchange-how-rfx-works.md)funzionamento di RFX. Per ulteriori informazioni sull'utilizzo dei parametri, vedere [CFieldExchange:: SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) e [Recordset: parametrizzazione un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[CRecordset:: m_nFields](../../mfc/reference/crecordset-class.md#m_nfields)<br/>
[CRecordset:: m_nParams](../../mfc/reference/crecordset-class.md#m_nparams)
