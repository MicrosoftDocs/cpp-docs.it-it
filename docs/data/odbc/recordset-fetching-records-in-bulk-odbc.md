---
title: "Recordset: recupero di massa di record (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "trasferimento di massa di campi di record"
  - "funzioni RFX di massa"
  - "recupero di massa di righe"
  - "recupero di massa di righe, implementazione"
  - "DoBulkFieldExchange (metodo)"
  - "recupero collettivo di record ODBC"
  - "recordset ODBC, recupero di massa di righe"
  - "recordset, recupero di massa di righe"
  - "RFX (ODBC), di massa"
  - "RFX (ODBC), recupero di massa di righe"
  - "rowset, recupero di massa di righe"
ms.assetid: 20d10fe9-c58a-414a-b675-cdf9aa283e4f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: recupero di massa di record (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 La classe `CRecordset` fornisce il supporto per il recupero di massa di righe, in base al quale è possibile ottenere contemporaneamente più record durante un'unica operazione di recupero, anziché recuperare un record alla volta dall'origine dati.  È possibile implementare il recupero di massa di righe solo in una classe `CRecordset` derivata.  Il processo di trasferimento di dati dall'origine dati all'oggetto recordset è definito RFX di massa \(Bulk Record Field Exchange, trasferimento di massa di campi di record\).  Se non si utilizza il recupero di massa di righe in una classe derivata da `CRecordset`, i dati verranno trasferiti mediante il trasferimento di campi di record \(RFX\).  Per ulteriori informazioni, vedere [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md).  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Supporto del recupero di massa di righe in CRecordset](#_core_how_crecordset_supports_bulk_row_fetching).  
  
-   [Considerazioni particolari](#_core_special_considerations).  
  
-   [Implementazione del trasferimento di massa di campi di record](#_core_how_to_implement_bulk_record_field_exchange).  
  
##  <a name="_core_how_crecordset_supports_bulk_row_fetching"></a> Supporto del recupero di massa di righe in CRecordset  
 Prima di aprire l'oggetto recordset, è possibile definire la dimensione di un rowset con la funzione membro `SetRowsetSize`.  La dimensione del rowset specifica il numero di record restituiti durante ogni operazione di recupero.  Quando viene implementato il recupero di massa di righe, la dimensione predefinita del rowset è 25.  Se il recupero di massa di righe non viene implementato, la dimensione del rowset rimane fissa su 1.  
  
 Una volta inizializzata la dimensione del rowset, chiamare la funzione membro [Open](../Topic/CRecordset::Open.md).  Per implementare il recupero di massa di righe, è necessario specificare l'opzione `CRecordset::useMultiRowFetch` del parametro **dwOptions**.  È inoltre possibile impostare l'opzione **CRecordset::userAllocMultiRowBuffers**.  Il meccanismo di trasferimento di massa di campi di record utilizza le matrici per memorizzare le righe di dati ottenute durante un'operazione di recupero.  I buffer di archiviazione possono essere allocati automaticamente dal framework o manualmente dal programmatore.  Se si specifica l'opzione **CRecordset::userAllocMultiRowBuffers**, sarà necessario effettuare l'allocazione manualmente.  
  
 Nella tabella riportata di seguito vengono elencate le funzioni membro fornite da `CRecordset` per il supporto del recupero di massa di righe.  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[CheckRowsetError](../Topic/CRecordset::CheckRowsetError.md)|Funzione virtual che gestisce gli errori che si verificano durante il recupero.|  
|[DoBulkFieldExchange](../Topic/CRecordset::DoBulkFieldExchange.md)|Implementa il trasferimento di massa di campi di record.  Viene chiamata automaticamente per trasferire più righe di dati dall'origine dati all'oggetto recordset.|  
|[GetRowsetSize](../Topic/CRecordset::GetRowsetSize.md)|Recupera l'impostazione corrente per la dimensione del rowset.|  
|[GetRowsFetched](../Topic/CRecordset::GetRowsFetched.md)|Indica il numero di righe effettivamente recuperate dopo una specifica operazione di recupero.  Nella maggior parte dei casi, tale numero corrisponde alla dimensione del rowset, a meno che non sia stato recuperato un rowset incompleto.|  
|[GetRowStatus](../Topic/CRecordset::GetRowStatus.md)|Restituisce lo stato di recupero per una determinata riga all'interno di un rowset.|  
|[RefreshRowset](../Topic/CRecordset::RefreshRowset.md)|Aggiorna i dati e lo stato di una determinata riga all'interno di un rowset.|  
|[SetRowsetCursorPosition](../Topic/CRecordset::SetRowsetCursorPosition.md)|Sposta il cursore su una determinata riga all'interno di un rowset.|  
|[SetRowsetSize](../Topic/CRecordset::SetRowsetSize.md)|Funzione virtual che modifica l'impostazione della dimensione del rowset inserendo il valore specificato.|  
  
##  <a name="_core_special_considerations"></a> Considerazioni particolari  
 Anche se tramite il recupero di massa di righe è possibile migliorare le prestazioni, il funzionamento di alcune caratteristiche del programma risulta differente.  Prima di avviare l'implementazione del recupero di massa di righe, considerare i fattori riportati di seguito.  
  
-   Per trasferire i dati dall'origine dati all'oggetto recordset, il framework chiama automaticamente la funzione membro `DoBulkFieldExchange`.  I dati non vengono tuttavia trasferiti dall'oggetto recordset all'origine dati.  Se si chiama la funzione membro `AddNew`, **Edit**, **Delete** o **Update**, ne risulterà un'asserzione non riuscita.  Sebbene `CRecordset` non fornisca attualmente un meccanismo per l'aggiornamento di massa di righe di dati, è possibile scrivere funzioni personalizzate utilizzando la funzione **SQLSetPos** dell'API ODBC.  Per ulteriori informazioni su **SQLSetPos**, vedere *ODBC SDK Programmer's Reference* nella documentazione di MSDN.  
  
-   Non è possibile utilizzare le funzioni membro `IsDeleted`, `IsFieldDirty`, `IsFieldNull`, `IsFieldNullable`, `SetFieldDirty` e `SetFieldNull` nei recordset che implementano il recupero di massa di righe.  È tuttavia possibile chiamare `GetRowStatus` anziché `IsDeleted` e `GetODBCFieldInfo` anziché `IsFieldNullable`.  
  
-   Mediante le operazioni **Move**, il recordset verrà riposizionato in base ai rowset.  Ad esempio, si supponga di aprire un recordset, la cui dimensione iniziale è 10, contenente 100 record.  Mediante **Apri** vengono recuperate le righe comprese tra 1 e 10, con il record corrente posizionato sulla riga 1.  Tramite una chiamata a `MoveNext` viene recuperato il rowset successivo, non la riga successiva.  Questo rowset è costituito dalle righe comprese tra 11 e 20, con il record corrente posizionato sulla riga 11.  Si noti che `MoveNext` e **Move\( 1 \)** non sono equivalenti quando viene implementato il recupero di massa di righe.  **Move\( 1 \)** recupera il rowset che inizia una riga dopo il record corrente.  In questo esempio, chiamando **Move\( 1 \)** dopo **Open** viene recuperato il rowset costituito dalle righe comprese tra 2 e 11, con il record corrente posizionato sulla riga 2.  Per ulteriori informazioni, vedere la funzione membro [Move](../Topic/CRecordset::Move.md).  
  
-   A differenza di quanto accade con il trasferimento di campi di record, le procedure guidate non supportano il trasferimento di massa di campi di record,  pertanto è necessario dichiarare manualmente i membri dati di campo ed eseguire manualmente l'override di `DoBulkFieldExchange`, scrivendo chiamate alle funzioni RFX di massa.  Per ulteriori informazioni, vedere [Funzioni RFX](../../mfc/reference/record-field-exchange-functions.md) in *Riferimenti alla libreria di classi*.  
  
##  <a name="_core_how_to_implement_bulk_record_field_exchange"></a> Implementazione del trasferimento di massa di campi di record  
 Tramite il meccanismo di trasferimento di massa di campi di record, un rowset di dati viene trasferito dall'origine dati all'oggetto recordset.  Le funzioni RFX di massa utilizzano matrici per l'archiviazione di questi dati e matrici per l'archiviazione della lunghezza di ciascun dato nel rowset.  Per accedere alle matrici di dati, è necessario definire i membri dati di campo come puntatori nella definizione della classe.  Per accedere alle matrici di lunghezze, è inoltre necessario definire un insieme di puntatori.  Non è necessario dichiarare tutti i membri dati di parametro come puntatori. La dichiarazione dei membri dati di parametro durante l'utilizzo del trasferimento di massa di campi di record è identica alla dichiarazione di tali membri durante l'utilizzo del trasferimento di campi di record.  Nel codice che segue ne viene fornito un semplice esempio.  
  
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
  
 I buffer di archiviazione possono essere allocati manualmente o automaticamente tramite il framework.  Per allocare i buffer manualmente, è necessario specificare l'opzione **CRecordset::userAllocMultiRowBuffers** del parametro **dwOptions** nella funzione membro **Open**.  Assicurarsi di impostare le dimensioni delle matrici almeno sullo stesso valore della dimensione del rowset.  Se si desidera che l'allocazione venga effettuata automaticamente dal framework, è necessario inizializzare i puntatori a **NULL**, un'operazione in genere effettuata nel costruttore dell'oggetto recordset:  
  
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
  
 Infine, è necessario eseguire l'override della funzione membro `DoBulkFieldExchange`.  Per i membri dati di campo, chiamare le funzioni RFX di massa, mentre, per i membri dati di parametro, chiamare le funzioni RFX.  Se il recordset è stato aperto passando un'istruzione SQL o una stored procedure a **Open**, l'ordine di esecuzione delle chiamate a RFX di massa dovrà corrispondere all'ordine delle colonne all'interno del recordset. In modo analogo, l'ordine delle chiamate a RFX per i parametri dovrà corrispondere all'ordine dei parametri nell'istruzione SQL o nella stored procedure.  
  
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
>  È necessario chiamare la funzione membro **Close** prima che la classe `CRecordset` derivata esca dall'area di validità.  In tal modo, la quantità di memoria allocata dal framework verrà liberata.  Durante la programmazione è consigliabile chiamare **Close** sempre in modo esplicito, indipendentemente dall'eventuale implementazione del recupero di massa di righe.  
  
 Per ulteriori informazioni sul trasferimento di campi di record \(RFX\), vedere [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md).  Per ulteriori informazioni sull'utilizzo dei parametri, vedere [CFieldExchange::SetFieldType](../Topic/CFieldExchange::SetFieldType.md) e [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)   
 [CRecordset::m\_nFields](../Topic/CRecordset::m_nFields.md)   
 [CRecordset::m\_nParams](../Topic/CRecordset::m_nParams.md)