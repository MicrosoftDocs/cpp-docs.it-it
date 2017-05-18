---
title: Classe CFieldExchange | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFieldExchange
- AFXDB/CFieldExchange
- AFXDB/CFieldExchange::IsFieldType
- AFXDB/CFieldExchange::SetFieldType
dev_langs:
- C++
helpviewer_keywords:
- enum FieldType, CFieldExchange
- RFX (record field exchange) [C++]
- RFX (record field exchange) [C++], classes for
- CFieldExchange class
- FieldType enumeration
- data types [C++], custom
- enum FieldType
ms.assetid: 24c5c0b3-06a6-430e-9b6f-005a2c65e29f
caps.latest.revision: 24
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 948f13dc54fcd83941bab8e63b2ab2704d84cb87
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cfieldexchange-class"></a>Classe CFieldExchange
Supporta le routine RFX (record field exchange) e RFX di massa (bulk record field exchange) utilizzate dalle classi di database.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFieldExchange  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFieldExchange::IsFieldType](#isfieldtype)|Restituisce diverso da zero se l'operazione corrente è appropriato per il tipo di campo da aggiornare.|  
|[CFieldExchange::](#setfieldtype)|Specifica il tipo di membro dati del recordset, colonna o parametro, rappresentato da tutte le chiamate seguenti alle funzioni RFX fino alla chiamata successiva a `SetFieldType`.|  
  
## <a name="remarks"></a>Note  
 `CFieldExchange`non dispone di una classe di base.  
  
 Utilizzare questa classe se si siano scrivendo una routine di scambio dei dati per i tipi di dati personalizzato o quando si implementa il recupero di righe bulk; in caso contrario, non direttamente utilizzare questa classe. RFX e RFX di massa scambia dati tra i membri dati di campo dell'oggetto recordset e i campi del record corrente nell'origine dati.  
  
> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di Open Database Connectivity (ODBC), utilizzare una classe [CDaoFieldExchange](../../mfc/reference/cdaofieldexchange-class.md) invece. Per ulteriori informazioni, vedere l'articolo [Database: Cenni preliminari sulla programmazione](../../data/data-access-programming-mfc-atl.md).  
  
 Oggetto `CFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per campi di record o lo scambio di campi di record di massa abbiano inserire. `CFieldExchange`gli oggetti supportano un numero di operazioni, inclusi i parametri di associazione e i membri dati di campo e impostare diversi flag nei campi del record corrente. RFX e RFX di massa operazioni vengono eseguite nei membri dati della classe recordset di tipi definiti dal `enum` **FieldType** in `CFieldExchange`. Possibili **FieldType** i valori sono:  
  
- **CFieldExchange::outputColumn** per i membri dati di campo.  
  
- **CFieldExchange::inputParam** o **CFieldExchange::param** per i membri dati di parametro di input.  
  
- **CFieldExchange::outputParam** per i membri dati di parametro di output.  
  
- **CFieldExchange::inoutParam** per i membri dati di parametro di input/output.  
  
 La maggior parte dei membri di dati e funzioni membro della classe vengono fornita per la scrittura di routine RFX personalizzati. Si utilizzerà `SetFieldType` frequentemente. Per ulteriori informazioni, vedere gli articoli [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni dettagliate sulle funzioni globali di RFX e RFX di massa, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md) nella sezione delle macro MFC e funzioni globali della Guida di riferimento.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CFieldExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDB. h  
  
##  <a name="isfieldtype"></a>CFieldExchange::IsFieldType  
 Se si scrive una funzione RFX, chiamare `IsFieldType` all'inizio della funzione per determinare se l'operazione corrente può essere eseguito su un particolare campo o parametro membro tipo di dati (un **CFieldExchange::outputColumn**, **CFieldExchange::inputParam**, **CFieldExchange::param**, **CFieldExchange::outputParam**, o **CFieldExchange::inoutParam**).  
  
```  
BOOL IsFieldType(UINT* pnField);
```  
  
### <a name="parameters"></a>Parametri  
 *pnField*  
 In questo parametro viene restituito il numero sequenziale del membro dei dati di campo o parametro. Questo numero corrisponde all'ordine del membro dati di [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [CRecordset::DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) (funzione).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione corrente può essere eseguito nel tipo di parametro o del campo corrente.  
  
### <a name="remarks"></a>Note  
 Seguire il modello delle funzioni RFX esistente.  
  
##  <a name="setfieldtype"></a>CFieldExchange::  
 È necessario una chiamata a `SetFieldType` nella classe recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) eseguire l'override.  
  
```  
void SetFieldType(UINT nFieldType);
```  
  
### <a name="parameters"></a>Parametri  
 `nFieldType`  
 Il valore di **enum FieldType**, dichiarati nel `CFieldExchange`, che può essere uno dei seguenti:  
  
- **CFieldExchange::outputColumn**  
  
- **CFieldExchange::inputParam**  
  
- **CFieldExchange::param**  
  
- **CFieldExchange::outputParam**  
  
- **CFieldExchange::inoutParam**  
  
### <a name="remarks"></a>Note  
 I membri dati di campo, è necessario chiamare `SetFieldType` con un parametro di **CFieldExchange::outputColumn**, seguita dalle chiamate alle funzioni RFX o RFX di massa. Se non è stato implementato il recupero di massa di righe, quindi ClassWizard posiziona questo `SetFieldType` chiamata per la sezione di mapping dei campi di `DoFieldExchange`.  
  
 Se si imposta parametri per la classe del recordset, è necessario chiamare `SetFieldType` nuovamente all'esterno di qualsiasi sezione di mapping dei campi, seguita da chiamate a RFX per tutti i membri di dati di parametro. Ogni tipo di membro dati di parametro deve disporre del relativo `SetFieldType` chiamare. Nella tabella seguente consente di distinguere i diversi valori è possibile passare a `SetFieldType` per rappresentare i membri dati di parametro della classe:  
  
|Valore del parametro SetFieldType|Tipo di membro dati di parametro|  
|----------------------------------|-----------------------------------|  
|**CFieldExchange::inputParam**|Parametro di input. Un valore che viene passato il recordset query o stored procedure.|  
|**CFieldExchange::param**|Uguale a **CFieldExchange::inputParam**.|  
|**CFieldExchange::outputParam**|Parametro di output. Valore restituito della stored procedure del recordset.|  
|**CFieldExchange::inoutParam**|Parametro di input/output. Un valore che si è passato e restituito dalla stored procedure del recordset.|  
  
 In generale, ogni gruppo di funzioni RFX associata a membri dati di campi o membri dati di parametro deve essere preceduto da una chiamata a `SetFieldType`. Il `nFieldType` di ogni parametro `SetFieldType` chiamata identifica il tipo dei membri dati rappresentato da chiamate alle funzioni RFX che seguono il `SetFieldType` chiamare.  
  
 Per ulteriori informazioni sulla gestione di parametri di output e input/output, vedere il `CRecordset` funzione membro [FlushResultSet](../../mfc/reference/crecordset-class.md#flushresultset). Per ulteriori informazioni sulle funzioni RFX e RFX di massa, vedere l'argomento [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md). Per informazioni correlate sulle righe di massa, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
### <a name="example"></a>Esempio  
 Questo esempio illustra diverse chiamate alle funzioni RFX con le relative chiamate a `SetFieldType`. Si noti che `SetFieldType` viene chiamato tramite il `pFX` puntatore a un `CFieldExchange` oggetto.  
  
 [!code-cpp[NVC_MFCDatabase n.&33;](../../mfc/codesnippet/cpp/cfieldexchange-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)

