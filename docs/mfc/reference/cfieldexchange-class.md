---
title: Classe CFieldExchange
ms.date: 11/04/2016
f1_keywords:
- CFieldExchange
- AFXDB/CFieldExchange
- AFXDB/CFieldExchange::IsFieldType
- AFXDB/CFieldExchange::SetFieldType
helpviewer_keywords:
- CFieldExchange [MFC], IsFieldType
- CFieldExchange [MFC], SetFieldType
ms.assetid: 24c5c0b3-06a6-430e-9b6f-005a2c65e29f
ms.openlocfilehash: e039a2deaf3372af5daac8fddd8f3a0672719f88
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588227"
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
|[CFieldExchange::IsFieldType](#isfieldtype)|Restituisce diversi da zero se l'operazione corrente è appropriato per il tipo di campo da aggiornare.|
|[CFieldExchange::](#setfieldtype)|Specifica il tipo di membro dati del recordset, ovvero una colonna o parametro, rappresentato da tutte le chiamate seguenti per le funzioni RFX fino alla successiva chiamata a `SetFieldType`.|

## <a name="remarks"></a>Note

`CFieldExchange` non è una classe di base.

Utilizzare questa classe se si scrivono routine di scambio dei dati per i tipi di dati personalizzati o quando si implementa il recupero di righe bulk; in caso contrario, non direttamente userai questa classe. RFX e RFX di massa consente di scambiare dati tra i membri di dati del campo dell'oggetto recordset e i campi corrispondenti del record corrente nell'origine dati.

> [!NOTE]
>  Se si lavora con le classi di oggetti DAO (Data Access) anziché le classi di Open Database Connectivity (ODBC), usare una classe [CDaoFieldExchange](../../mfc/reference/cdaofieldexchange-class.md) invece. Per altre informazioni, vedere l'articolo [Overview: Database programmazione](../../data/data-access-programming-mfc-atl.md).

Oggetto `CFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per campi di record o lo scambio di campi di record in blocco da eseguire inserire. `CFieldExchange` gli oggetti supportano un numero di operazioni, tra cui i parametri di associazione e i membri dati di campo e l'impostazione vari flag nei campi del record corrente. RFX e RFX di massa operazioni vengono eseguite su membri dati classe recordset di tipi definiti dal **enum** **FieldType** in `CFieldExchange`. Possibili **FieldType** i valori sono:

- `CFieldExchange::outputColumn` per i membri dati di campo.

- `CFieldExchange::inputParam` o `CFieldExchange::param` per i membri dati di parametro di input.

- `CFieldExchange::outputParam` i membri dati di parametro di output.

- `CFieldExchange::inoutParam` per i membri dati di parametro di input/output.

La maggior parte dei membri di dati e funzioni membro della classe sono disponibili per la scrittura di routine RFX personalizzate. Si userà `SetFieldType` frequentemente. Per altre informazioni, vedere gli articoli [campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni dettagliate sulle funzioni RFX e RFX di massa globale, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md) nella sezione delle macro MFC e variabili globali della Guida di riferimento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CFieldExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

##  <a name="isfieldtype"></a>  CFieldExchange::IsFieldType

Se si scrive una funzione RFX, chiamare `IsFieldType` all'inizio della funzione per determinare se l'operazione corrente può essere eseguito su un particolare campo o un parametro dati membro tipo (una `CFieldExchange::outputColumn`, `CFieldExchange::inputParam`, `CFieldExchange::param`, `CFieldExchange::outputParam`, o `CFieldExchange::inoutParam`).

```
BOOL IsFieldType(UINT* pnField);
```

### <a name="parameters"></a>Parametri

*pnField*<br/>
In questo parametro viene restituito il numero sequenziale del membro dati del parametro o del campo. Questo numero corrisponde all'ordine del membro dati nel [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) oppure [CRecordset::DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) (funzione).

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione corrente può essere eseguito nel tipo di parametro o del campo corrente.

### <a name="remarks"></a>Note

Seguire il modello delle funzioni RFX esistente.

##  <a name="setfieldtype"></a>  CFieldExchange::

Necessaria una chiamata a `SetFieldType` della classe del recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) oppure [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) eseguire l'override.

```
void SetFieldType(UINT nFieldType);
```

### <a name="parameters"></a>Parametri

*nFieldType*<br/>
Valore di `enum FieldType`, dichiarati in `CFieldExchange`, che può essere uno dei seguenti:

- `CFieldExchange::outputColumn`

- `CFieldExchange::inputParam`

- `CFieldExchange::param`

- `CFieldExchange::outputParam`

- `CFieldExchange::inoutParam`

### <a name="remarks"></a>Note

Per i membri dati di campo, è necessario chiamare `SetFieldType` con il parametro `CFieldExchange::outputColumn`, seguito dalle chiamate alle funzioni RFX e RFX di massa. Se non è stato implementato il recupero di righe bulk, ClassWizard passa poi ciò `SetFieldType` chiamare automaticamente nella sezione di mapping dei campi di `DoFieldExchange`.

Se si imposta parametri per la classe del recordset, è necessario chiamare `SetFieldType` anche in questo caso, all'esterno di qualsiasi sezione di mapping di campo, seguito da RFX chiamate per tutti i membri di dati di parametro. Ogni tipo di membro dati di parametro deve avere un proprio `SetFieldType` chiamare. Nella tabella seguente consente di distinguere i diversi valori è possibile passare a `SetFieldType` per rappresentare i membri di dati del parametro della classe:

|Valore del parametro SetFieldType|Tipo di membro dati di parametro|
|----------------------------------|-----------------------------------|
|`CFieldExchange::inputParam`|Parametro di input. Un valore che viene passato nella query o stored procedure del recordset.|
|`CFieldExchange::param` | Uguale allo `CFieldExchange::inputParam`.|
|`CFieldExchange::outputParam`|Parametro di output. Valore restituito della stored procedure del recordset.|
|`CFieldExchange::inoutParam`|Parametro di input/output. Un valore che viene passato e restituito dalla stored procedure del recordset.|

In generale, ogni gruppo di funzioni RFX associati membri dati di campi o membri dati di parametro deve essere preceduto da una chiamata a `SetFieldType`. Il *nFieldType* parametro della ognuno `SetFieldType` chiamata identifica il tipo dei membri dati rappresentata da chiamate alle funzioni RFX che seguono il `SetFieldType` chiamare.

Per altre informazioni sulla gestione di output e parametri di input/output, vedere la `CRecordset` funzione membro [FlushResultSet](../../mfc/reference/crecordset-class.md#flushresultset). Per altre informazioni sulle funzioni RFX e RFX di massa, vedere l'argomento [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md). Per informazioni correlate sul recupero di righe bulk, vedere l'articolo [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

Questo esempio illustra diverse chiamate a funzioni RFX con le relative chiamate a `SetFieldType`. Si noti che `SetFieldType` viene chiamato tramite il `pFX` puntatore a un `CFieldExchange` oggetto.

[!code-cpp[NVC_MFCDatabase#33](../../mfc/codesnippet/cpp/cfieldexchange-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
