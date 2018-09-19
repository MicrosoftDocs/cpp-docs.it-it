---
title: 'Recordset: Recupero di record nel blocco (ODBC) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0dce69b180a00ca44fdb2916136ac8107a4d94dd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103927"
---
# <a name="recordset-fetching-records-in-bulk-odbc"></a>Recordset: recupero di massa di record (ODBC)

Questo argomento si applica alle classi ODBC MFC.  
  
Classe `CRecordset` fornisce il supporto per il recupero di righe bulk, il che significa che più record possono essere recuperati in una sola volta durante un'operazione di recupero singolo, anziché recuperare un record alla volta dall'origine dati. È possibile implementare il recupero di righe bulk solo in un oggetto derivato `CRecordset` classe. Il processo di trasferimento dei dati dall'origine dati per l'oggetto recordset è denominato exchange di massa di campi di record (RFX di massa). Si noti che se non si usa il recupero di righe bulk in una `CRecordset`-classe derivata, i dati verrà trasferiti mediante il trasferimento di campi di record (RFX). Per altre informazioni, vedere [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
Questo argomento viene illustrato:  
  
- [Come CRecordset supporta il recupero di righe bulk](#_core_how_crecordset_supports_bulk_row_fetching).  
  
- [Alcune considerazioni speciali quando si usa bulk di recupero di righe](#_core_special_considerations).  
  
- [Come implementare il trasferimento di campi di record di operazioni bulk](#_core_how_to_implement_bulk_record_field_exchange).  
  
##  <a name="_core_how_crecordset_supports_bulk_row_fetching"></a> Come CRecordset supporta il recupero di righe Bulk  

Prima di aprire l'oggetto recordset, è possibile definire una dimensione del set di righe con la `SetRowsetSize` funzione membro. Le dimensioni del set di righe specifica il numero di record deve essere recuperato durante un'operazione di recupero singolo. Quando viene implementato il recupero di righe bulk, le dimensioni predefinite del set di righe sono 25. Se non è implementato il recupero di righe bulk, le dimensioni del set di righe rimangono fissa a 1.  
  
Dopo aver inizializzato la dimensione del set di righe, chiamare il [aperto](../../mfc/reference/crecordset-class.md#open) funzione membro. In questo caso è necessario specificare il `CRecordset::useMultiRowFetch` opzione del *dwOptions* parametro per implementare il recupero di righe bulk. È inoltre possibile impostare il `CRecordset::userAllocMultiRowBuffers` opzione. Il meccanismo di scambio di campi di record di massa Usa matrici per archiviare più righe di dati recuperati durante un'operazione di recupero. I buffer di archiviazione possono essere allocati automaticamente dal framework oppure è possibile allocarli manualmente. Specifica il `CRecordset::userAllocMultiRowBuffers` opzione significa che è necessario effettuare l'allocazione.  
  
La tabella seguente elenca le funzioni membro `CRecordset` per supportare il recupero di righe bulk.  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)|Funzione virtuale che gestisce gli errori che si verificano durante il recupero.|  
|[DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange)|Implementa i campi di record di massa. Chiamato automaticamente per i trasferimenti di più righe di dati dall'origine dati per l'oggetto recordset.|  
|[GetRowsetSize](../../mfc/reference/crecordset-class.md#getrowsetsize)|Recupera l'impostazione corrente per le dimensioni del set di righe.|  
|[GetRowsFetched](../../mfc/reference/crecordset-class.md#getrowsfetched)|Indica il numero di righe effettivamente recuperato dopo un'operazione di recupero specificato. Nella maggior parte dei casi, questa è la dimensione del set di righe, a meno che non è stato recuperato un rowset incompleto.|  
|[GetRowStatus](../../mfc/reference/crecordset-class.md#getrowstatus)|Restituisce lo stato di recupero per una determinata riga all'interno di un set di righe.|  
|[RefreshRowset](../../mfc/reference/crecordset-class.md#refreshrowset)|Aggiorna i dati e lo stato di una riga specifica all'interno di un set di righe.|  
|[SetRowsetCursorPosition](../../mfc/reference/crecordset-class.md#setrowsetcursorposition)|Sposta il cursore a una riga specifica all'interno di un set di righe.|  
|[SetRowsetSize](../../mfc/reference/crecordset-class.md#setrowsetsize)|Funzione virtuale che modifica l'impostazione per le dimensioni del set di righe per il valore specificato.|  
  
##  <a name="_core_special_considerations"></a> Considerazioni speciali  

Anche se il recupero di righe bulk è un miglioramento delle prestazioni, alcune funzionalità di operare in modo diverso. Prima di decidere di implementare il recupero di righe bulk, considerare quanto segue:  
  
- Il framework chiama automaticamente il `DoBulkFieldExchange` funzione membro per trasferire i dati dall'origine dati per l'oggetto recordset. Tuttavia, dati non vengono trasferiti dal recordset all'origine dati. Chiama il `AddNew`, `Edit`, `Delete`, o `Update` risultati delle funzioni membro in un'asserzione non riuscita. Sebbene `CRecordset` attualmente non fornisce un meccanismo per l'aggiornamento di righe bulk di dati, è possibile scrivere funzioni personalizzate usando la funzione API ODBC `SQLSetPos`. Per altre informazioni sulle `SQLSetPos`, vedere la *riferimento per programmatori ODBC SDK* nella documentazione MSDN.  
  
- Le funzioni membro `IsDeleted`, `IsFieldDirty`, `IsFieldNull`, `IsFieldNullable`, `SetFieldDirty`, e `SetFieldNull` non possono essere utilizzati nei recordset che implementano il recupero di righe bulk. Tuttavia, è possibile chiamare `GetRowStatus` al posto di `IsDeleted`, e `GetODBCFieldInfo` invece di `IsFieldNullable`.  
  
- Il `Move` operazioni Riposiziona il recordset dal set di righe. Si supponga, ad esempio, che si apre un oggetto recordset che include 100 record con una dimensione iniziale del set di righe pari a 10. `Open` Recupera righe da 1 a 10, con il record corrente posizionate sulla riga 1. Una chiamata a `MoveNext` recupera il successivo set di righe, non la riga successiva. Questo set di righe composto da righe 11 e 20, con il record corrente posizionate sulla riga 11. Si noti che `MoveNext` e `Move( 1 )` non sono equivalenti quando viene implementato il recupero di righe bulk. `Move( 1 )` Recupera il set di righe che inizia 1 riga del record corrente. In questo esempio, la chiamata `Move( 1 )` dopo la chiamata `Open` recupera il set di righe costituiti da righe 2 e 11, con il record corrente posizionato nella riga 2. Per altre informazioni, vedere la [spostare](../../mfc/reference/crecordset-class.md#move) funzione membro.  
  
- A differenza di exchange di campi di record, le procedure guidate non supportano il trasferimento di campi di record di operazioni bulk. Ciò significa che è necessario dichiarare manualmente i membri di dati di campo ed eseguire l'override manuale `DoBulkFieldExchange` scrivendo le chiamate alle funzioni RFX di massa. Per altre informazioni, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md) nel *Class Library Reference*.  
  
##  <a name="_core_how_to_implement_bulk_record_field_exchange"></a> Come implementare Bulk Record Field Exchange  

Trasferimento di campi di record di operazioni bulk trasferisce un set di righe di dati dall'origine dati per l'oggetto recordset. Le funzioni RFX di massa utilizzano matrici per archiviare i dati, nonché le matrici per archiviare la lunghezza di ogni elemento di dati nel set di righe. Nella definizione della classe, è necessario definire i membri dati del campo come puntatori a matrici di dati di accesso. Inoltre, è necessario definire un set di puntatori a matrici di lunghezze di accesso. Qualsiasi membro dati di parametro non deve essere dichiarato come puntatori. dichiara i membri dati di parametro quando si usa exchange di massa di campi di record è quello utilizzato per definirle quando si usa campi di record. Il codice seguente illustra un semplice esempio:  
  
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
  
È possibile allocare i buffer di archiviazione manualmente o automaticamente tramite il framework dell'allocazione. Per allocare i buffer, è necessario specificare il `CRecordset::userAllocMultiRowBuffers` opzione del *dwOptions* parametri nel `Open` funzione membro. Assicurarsi di impostare le dimensioni delle matrici almeno pari alla dimensione del set di righe. Se si desidera che il framework di allocazione, è necessario inizializzare i puntatori a NULL. Questa operazione viene in genere eseguita nel costruttore dell'oggetto recordset:  
  
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
  
Infine, è necessario eseguire l'override di `DoBulkFieldExchange` funzione membro. Per i membri di dati di campo, chiamare le funzioni RFX di massa; per tutti i membri dati di parametro, chiamare le funzioni RFX. Se il recordset aperto passando un'istruzione SQL o stored procedure da `Open`, l'ordine in cui vengono eseguite le chiamate di RFX di massa deve corrispondere all'ordine delle colonne nel set di record; Analogamente, l'ordine di RFX chiamate per i parametri devono corrispondere all'ordine dei parametri nell'istruzione SQL o stored procedure.  
  
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
>  È necessario chiamare il `Close` funzione di membro prima derivata `CRecordset` classe esce dall'ambito. Ciò garantisce che qualsiasi memoria allocata dal framework vengono liberate. È buona norma chiamare sempre in modo esplicito `Close`, indipendentemente dal fatto che è stato implementato il recupero di righe bulk.  
  
Per altre informazioni sui campi di record (RFX), vedere [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md). Per altre informazioni sull'utilizzo di parametri, vedere [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype) e [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[CRecordset::m_nFields](../../mfc/reference/crecordset-class.md#m_nfields)<br/>
[CRecordset::m_nParams](../../mfc/reference/crecordset-class.md#m_nparams)

