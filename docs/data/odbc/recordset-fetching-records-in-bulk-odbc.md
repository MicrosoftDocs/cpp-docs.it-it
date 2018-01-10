---
title: 'Recordset: Recupero di massa (ODBC) di record | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8d9738af557cb8d4dd26b792851f8be276e91380
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recordset-fetching-records-in-bulk-odbc"></a>Recordset: recupero di massa di record (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Classe `CRecordset` fornisce il supporto per righe di massa, il che significa che più record possono essere recuperati in una sola volta durante un'operazione di recupero singolo, anziché recuperare un record alla volta dall'origine dati. È possibile implementare il recupero di massa di righe solo in un oggetto derivato `CRecordset` classe. Il processo di trasferimento dei dati dall'origine dati per l'oggetto recordset è denominato exchange di massa di campi di record (RFX di massa). Si noti che se non si utilizza il recupero di massa di righe in un `CRecordset`-classe derivata, dati verrà trasferiti mediante il trasferimento di campi di record (RFX). Per ulteriori informazioni, vedere [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
 Questo argomento viene illustrato:  
  
-   [Supporto CRecordset righe di massa](#_core_how_crecordset_supports_bulk_row_fetching).  
  
-   [Alcune considerazioni speciali quando si utilizza recupero di massa di righe](#_core_special_considerations).  
  
-   [Modalità di implementazione di massa di campi di record exchange](#_core_how_to_implement_bulk_record_field_exchange).  
  
##  <a name="_core_how_crecordset_supports_bulk_row_fetching"></a>Supporto CRecordset il recupero di massa di righe  
 Prima di aprire l'oggetto recordset, è possibile definire una dimensione di un set di righe con la `SetRowsetSize` funzione membro. Le dimensioni del set di righe specifica il numero di record deve essere recuperato durante un'operazione di recupero singolo. Quando viene implementato il recupero di massa di righe, le dimensioni predefinite del set di righe sono 25. Se non è implementato il recupero di massa di righe, le dimensioni del set di righe resta 1.  
  
 Dopo aver inizializzato la dimensione del set di righe, chiamare il [aprire](../../mfc/reference/crecordset-class.md#open) funzione membro. È necessario specificare il `CRecordset::useMultiRowFetch` opzione del **dwOptions** parametro per implementare il recupero di massa di righe. È inoltre possibile impostare il **userAllocMultiRowBuffers** opzione. Il meccanismo di scambio di campi di record di massa Usa matrici per archiviare le righe di dati recuperati durante un'operazione di recupero. I buffer di archiviazione possono essere allocati automaticamente dal framework o allocarli manualmente. Specifica il **userAllocMultiRowBuffers** opzione indica che è necessario effettuare l'allocazione.  
  
 La tabella seguente elenca le funzioni membro fornite da `CRecordset` per supportare il recupero di massa di righe.  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[CheckRowsetError](../../mfc/reference/crecordset-class.md#checkrowseterror)|Funzione virtuale che gestisce gli errori che si verificano durante il recupero.|  
|[DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange)|Implementa i campi di record di massa. Chiamato automaticamente per i trasferimenti di più righe di dati dall'origine dati per l'oggetto recordset.|  
|[GetRowsetSize](../../mfc/reference/crecordset-class.md#getrowsetsize)|Recupera l'impostazione corrente per le dimensioni del set di righe.|  
|[GetRowsFetched](../../mfc/reference/crecordset-class.md#getrowsfetched)|Indica il numero di righe effettivamente recuperato dopo un'operazione di recupero specificato. Nella maggior parte dei casi, questa è la dimensione del set di righe, a meno che non è stato recuperato un rowset incompleto.|  
|[GetRowStatus](../../mfc/reference/crecordset-class.md#getrowstatus)|Restituisce lo stato di recupero per una determinata riga all'interno di un set di righe.|  
|[RefreshRowset](../../mfc/reference/crecordset-class.md#refreshrowset)|Aggiorna i dati e lo stato di una determinata riga all'interno di un set di righe.|  
|[SetRowsetCursorPosition](../../mfc/reference/crecordset-class.md#setrowsetcursorposition)|Sposta il cursore a una determinata riga all'interno di un set di righe.|  
|[SetRowsetSize](../../mfc/reference/crecordset-class.md#setrowsetsize)|Funzione virtuale che modifica l'impostazione per le dimensioni del set di righe al valore specificato.|  
  
##  <a name="_core_special_considerations"></a>Considerazioni speciali  
 Anche se il recupero di massa di righe è un miglioramento delle prestazioni, alcune funzionalità operano in modo diverso. Prima di decidere di implementare il recupero di massa di righe, considerare quanto segue:  
  
-   Il framework chiama automaticamente il `DoBulkFieldExchange` funzione membro per trasferire i dati dall'origine dati per l'oggetto recordset. Tuttavia, dati non vengono trasferiti dal recordset all'origine dati. La chiamata di `AddNew`, **modifica**, **eliminare**, o **aggiornamento** risultati delle funzioni membro in un'asserzione non riuscita. Sebbene `CRecordset` attualmente non fornisce un meccanismo per l'aggiornamento di massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione API ODBC **SQLSetPos**. Per ulteriori informazioni su **SQLSetPos**, vedere il *riferimento per programmatori ODBC SDK* nella documentazione di MSDN.  
  
-   Le funzioni membro `IsDeleted`, `IsFieldDirty`, `IsFieldNull`, `IsFieldNullable`, `SetFieldDirty`, e `SetFieldNull` non può essere utilizzato per i recordset che implementano il recupero di massa di righe. Tuttavia, è possibile chiamare `GetRowStatus` al posto di `IsDeleted`, e `GetODBCFieldInfo` al posto di `IsFieldNullable`.  
  
-   Il **spostare** operazioni Riposiziona il recordset dal set di righe. Ad esempio, si supponga di che apre un recordset che dispone di 100 record con dimensione iniziale di 10. **Aprire** recupera righe 1 e 10, con il record corrente posizionato sulla riga 1. Una chiamata a `MoveNext` recupera il successivo set di righe, non la riga successiva. Questo set di righe è costituito da righe 11 a 20, con il record corrente posizionato sulla riga 11. Si noti che `MoveNext` e **Move (1)** non sono equivalenti quando viene implementato il recupero di massa di righe. **Move (1)** recupera il set di righe che inizia la 1 riga dal record corrente. In questo esempio, la chiamata **Move (1)** dopo la chiamata **aprire** recupera il set di righe costituito da righe 2 e 11, con il record corrente posizionato sulla riga 2. Per ulteriori informazioni, vedere il [spostare](../../mfc/reference/crecordset-class.md#move) funzione membro.  
  
-   A differenza di exchange di campi di record, le procedure guidate non supportano exchange di massa di campi di record. Ciò significa che è necessario dichiarare manualmente i membri di dati di campo e di eseguire manualmente l'override `DoBulkFieldExchange` scrivendo chiamate alle funzioni RFX di massa. Per ulteriori informazioni, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md) nel *riferimenti alla libreria di classe*.  
  
##  <a name="_core_how_to_implement_bulk_record_field_exchange"></a>Come implementare Bulk Record Field Exchange  
 Scambio di campi di record di massa trasferisce un set di righe di dati dall'origine dati per l'oggetto recordset. Le funzioni RFX di massa utilizzano matrici per archiviare questi dati, nonché le matrici per archiviare la lunghezza di ogni elemento di dati nel set di righe. Nella definizione della classe, è necessario definire i membri di dati del campo come puntatori a matrici di dati di accesso. Inoltre, è necessario definire un set di indicatori di misura per accedere alle matrici di lunghezza. Membri dati di parametro non devono essere dichiarati come puntatori. dichiarare i membri di dati di parametro quando si usa exchange di massa di campi di record è lo stesso come dichiararli quando si usano i campi di record. Il codice seguente illustra un semplice esempio:  
  
```  
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
  
 È possibile allocare i buffer di archiviazione manualmente o che il framework di allocazione. Per allocare il buffer, è necessario specificare il **userAllocMultiRowBuffers** opzione del **dwOptions** parametro il **aprire** funzione membro. Assicurarsi di impostare le dimensioni delle matrici almeno pari alla dimensione del set di righe. Se si desidera che il framework di allocazione, è necessario inizializzare i puntatori a **NULL.** Questa operazione viene eseguita in genere nel costruttore dell'oggetto recordset:  
  
```  
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
  
 Infine, è necessario eseguire l'override di `DoBulkFieldExchange` funzione membro. Per i membri di dati di campo, chiamare le funzioni RFX di massa; per i membri di dati del parametro, chiamare le funzioni RFX. Se il recordset aperto passando un'istruzione SQL o stored procedure **aprire**, l'ordine in cui vengono eseguite le chiamate RFX di massa deve corrispondere all'ordine delle colonne nel recordset; Analogamente, l'ordine di RFX chiama per i parametri devono corrispondere all'ordine dei parametri nell'istruzione SQL o stored procedure.  
  
```  
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
>  È necessario chiamare il **Chiudi** funzione membro prima della classe derivata `CRecordset` classe esce dall'ambito. In questo modo si garantisce che vengano liberate quantità di memoria allocata dal framework. È buona norma chiamare sempre in modo esplicito programmazione **Chiudi**, indipendentemente dal fatto è stato implementato il recupero di massa di righe.  
  
 Per ulteriori informazioni sul record (RFX), vedere [campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md). Per ulteriori informazioni sull'utilizzo di parametri, vedere [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype) e [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [CRecordset::m_nFields](../../mfc/reference/crecordset-class.md#m_nfields)   
 [CRecordset::m_nParams](../../mfc/reference/crecordset-class.md#m_nparams)

