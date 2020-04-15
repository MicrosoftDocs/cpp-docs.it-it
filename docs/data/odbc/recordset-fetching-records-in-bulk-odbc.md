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
ms.openlocfilehash: ec4d83481f6335d4c40ffb8f004b617f2ee09c62
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367024"
---
# <a name="recordset-fetching-records-in-bulk-odbc"></a>Recordset: recupero di massa di record (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Classe `CRecordset` fornisce il supporto per il recupero di massa di righe, il che significa che più record possono essere recuperati contemporaneamente durante un singolo recupero, anziché recuperare un record alla volta dall'origine dati. È possibile implementare il recupero `CRecordset` di massa di righe solo in una classe derivata. Il processo di trasferimento dei dati dall'origine dati all'oggetto recordset è denominato scambio di massa di campi di record (RFX di massa). Si noti che se non si `CRecordset`utilizza il recupero di massa di righe in una classe derivata, i dati vengono trasferiti tramite RFX (Record Field Exchange). Per ulteriori informazioni, vedere [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

In questo argomento:

- [Modalità di funzionamento di CRecordset](#_core_how_crecordset_supports_bulk_row_fetching)per il recupero di massa di righe .

- [Alcune considerazioni speciali quando](#_core_special_considerations)si utilizza il recupero di massa di righe .

- [Come implementare lo scambio](#_core_how_to_implement_bulk_record_field_exchange)di campi di record in blocco .

## <a name="how-crecordset-supports-bulk-row-fetching"></a><a name="_core_how_crecordset_supports_bulk_row_fetching"></a>Come CRecordset supporta il recupero di massa di righeHow CRecordset Supports Bulk Row Fetching

Prima di aprire l'oggetto recordset, è `SetRowsetSize` possibile definire la dimensione di un set di righe con la funzione membro. La dimensione del set di righe specifica il numero di record da recuperare durante un singolo recupero. Quando viene implementato il recupero di massa di righe, la dimensione predefinita del set di righe è 25.When bulk row fetching is implemented, the default rowset size is 25. Se il recupero di massa di righe non è implementato, la dimensione del set di righe rimane fissa a 1.If bulk row fetching is not implemented, the rowset size remains fixed at 1.

Dopo aver inizializzato la dimensione del set di righe, chiamare il [aprire](../../mfc/reference/crecordset-class.md#open) funzione membro. Qui è necessario `CRecordset::useMultiRowFetch` specificare l'opzione del parametro *dwOptions* per implementare il recupero di massa di righe. È inoltre possibile `CRecordset::userAllocMultiRowBuffers` impostare l'opzione. Il meccanismo di scambio di campi di record bulk utilizza matrici per archiviare più righe di dati recuperati durante un'operazione di recupero. Questi buffer di archiviazione possono essere allocati automaticamente dal framework oppure è possibile allocarli manualmente. Specificare `CRecordset::userAllocMultiRowBuffers` l'opzione significa che si eseguirà l'allocazione.

Nella tabella seguente sono elencate `CRecordset` le funzioni membro fornite da per supportare il recupero di massa di righe.

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[CheckRowsetErrorCheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)|Funzione virtuale che gestisce eventuali errori che si verificano durante il recupero.|
|[DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange)|Implementa lo scambio di campi di massa di record. Chiamato automaticamente per trasferimenti di più righe di dati dall'origine dati all'oggetto recordset.|
|[Informazioni su GetRowsetSize](../../mfc/reference/crecordset-class.md#getrowsetsize)|Recupera l'impostazione corrente per la dimensione del set di righe.|
|[GetRowsFetched](../../mfc/reference/crecordset-class.md#getrowsfetched)|Indica quante righe sono state effettivamente recuperate dopo un determinato recupero. Nella maggior parte dei casi, si tratta della dimensione del set di righe, a meno che non sia stato recuperato un set di righe incompleto.|
|[Proprietà GetRowStatus](../../mfc/reference/crecordset-class.md#getrowstatus)|Restituisce uno stato di recupero per una determinata riga all'interno di un set di righe.|
|[RefreshRowset](../../mfc/reference/crecordset-class.md#refreshrowset)|Aggiorna i dati e lo stato di una determinata riga all'interno di un set di righe.|
|[SetRowsetCursorPositionSetRowsetCursorPosition](../../mfc/reference/crecordset-class.md#setrowsetcursorposition)|Sposta il cursore in una determinata riga all'interno di un set di righe.|
|[SetRowsetSize (DimensioniSetdi)](../../mfc/reference/crecordset-class.md#setrowsetsize)|Funzione virtuale che modifica l'impostazione per la dimensione del set di righe sul valore specificato.|

## <a name="special-considerations"></a><a name="_core_special_considerations"></a>Considerazioni speciali

Anche se il recupero di massa di righe è un miglioramento delle prestazioni, alcune funzionalità funzionano in modo diverso. Prima di decidere di implementare il recupero di massa di righe, considerare quanto segue:

- Il framework chiama `DoBulkFieldExchange` automaticamente la funzione membro per trasferire i dati dall'origine dati all'oggetto recordset. Tuttavia, i dati non vengono trasferiti dal recordset all'origine dati. La `AddNew`chiamata `Edit` `Delete`alle `Update` funzioni membro , , o comporta un'asserzione non riuscita. Sebbene attualmente non fornisca `CRecordset` un meccanismo per l'aggiornamento di massa `SQLSetPos`di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC . Per ulteriori `SQLSetPos`informazioni su , vedere *ODBC SDK Programmer's Reference* nella documentazione MSDN.

- Le funzioni `IsDeleted` `IsFieldDirty`membro `IsFieldNull` `IsFieldNullable`, `SetFieldDirty`, `SetFieldNull` , , e non possono essere utilizzate nei recordset che implementano il recupero di massa di righe. Tuttavia, è `GetRowStatus` possibile `IsDeleted`chiamare `GetODBCFieldInfo` al posto `IsFieldNullable`di , e al posto di .

- Le `Move` operazioni riposizionano il recordset in base al set di righe. Si supponga, ad esempio, di aprire un recordset con 100 record con una dimensione iniziale del set di righe pari a 10. `Open`recupera le righe da 1 a 10, con il record corrente posizionato sulla riga 1. Una chiamata `MoveNext` a recupera il set di righe successivo, non la riga successiva. Questo set di righe è costituito da righe da 11 a 20, con il record corrente posizionato sulla riga 11.This rowset consists of rows 11 through 20, with the current record positioned on row 11. Si `MoveNext` noti che e `Move( 1 )` non sono equivalenti quando viene implementato il recupero di massa di righe. `Move( 1 )`recupera il set di righe che inizia 1 riga dal record corrente. In questo esempio, la chiamata `Move( 1 )` dopo la chiamata recupera il set di righe costituito dalle righe da 2 a 11, con il record corrente posizionato sulla riga 2.In this example, calling after calling `Open` fetches the rowset consisting of rows 2 through 11, with the current record positioned on row 2. Per altre informazioni, vedere la funzione membro [Move.For](../../mfc/reference/crecordset-class.md#move) more information, see the Move member function.

- A differenza dello scambio di campi di record, le procedure guidate non supportano lo scambio di campi di record in blocco. Ciò significa che è necessario dichiarare manualmente `DoBulkFieldExchange` i membri dati di campo e eseguire manualmente l'override scrivendo chiamate alle funzioni RFX di massa. Per ulteriori informazioni, vedere Funzioni di [scambio di campi di record](../../mfc/reference/record-field-exchange-functions.md) in Riferimenti alla libreria *di*classi .

## <a name="how-to-implement-bulk-record-field-exchange"></a><a name="_core_how_to_implement_bulk_record_field_exchange"></a>Come implementare lo scambio di campi di record in blocco

Lo scambio di campi di record bulk trasferisce un set di righe di dati dall'origine dati all'oggetto recordset. Le funzioni RFX bulk utilizzano matrici per archiviare questi dati, nonché matrici per archiviare la lunghezza di ogni elemento di dati nel set di righe. Nella definizione della classe, è necessario definire i membri dati di campo come puntatori per accedere alle matrici di dati. Inoltre, è necessario definire un set di puntatori per accedere alle matrici di lunghezze. I membri dati di parametro non devono essere dichiarati come puntatori. dichiarare i membri dati di parametro quando si utilizza lo scambio di campi di record in blocco equivale a dichiararli quando si utilizza lo scambio di campi di record. Il codice seguente mostra un semplice esempio:The following code shows a simple example:

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

È possibile allocare questi buffer di archiviazione manualmente o fare in modo che il framework eseri l'allocazione. Per allocare i buffer manualmente, `CRecordset::userAllocMultiRowBuffers` è necessario specificare l'opzione del parametro *dwOptions* nella funzione `Open` membro. Assicurarsi di impostare le dimensioni delle matrici almeno uguale alla dimensione del set di righe. Se si desidera che il framework eseguire l'allocazione, è necessario inizializzare i puntatori a NULL. Questa operazione viene in genere eseguita nel costruttore dell'oggetto recordset:

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

Infine, è necessario `DoBulkFieldExchange` eseguire l'override della funzione membro. Per i membri dati di campo, chiamare le funzioni RFX di massa; per tutti i membri dati di parametro, chiamare le funzioni RFX. Se il recordset è stato aperto passando `Open`un'istruzione SQL o una stored procedure a , l'ordine in cui si effettuano le chiamate RFX di massa deve corrispondere all'ordine delle colonne nel recordset; Analogamente, l'ordine delle chiamate RFX per i parametri deve corrispondere all'ordine dei parametri nell'istruzione SQL o nella stored procedure.

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
> È necessario `Close` chiamare la funzione `CRecordset` membro prima che la classe derivata esca dall'ambito. In questo modo si garantisce che qualsiasi memoria allocata dal framework venga liberata. È buona norma di programmazione chiamare `Close`sempre in modo esplicito , indipendentemente dal fatto che sia stato implementato il recupero di massa di righe.

Per ulteriori informazioni sullo scambio di campi di record (RFX), vedere [Scambio di campi di record: funzionamento](../../data/odbc/record-field-exchange-how-rfx-works.md)di RFX . Per ulteriori informazioni sull'utilizzo dei parametri, vedere [CFieldExchange::SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) e [Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[CRecordset::m_nFields](../../mfc/reference/crecordset-class.md#m_nfields)<br/>
[CRecordset::m_nParams](../../mfc/reference/crecordset-class.md#m_nparams)
