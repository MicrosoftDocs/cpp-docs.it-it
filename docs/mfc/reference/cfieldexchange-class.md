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
ms.openlocfilehash: de9db2713a25b232bbd7f936958d1c10e96c511a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753176"
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
|[CFieldExchange::IsFieldType](#isfieldtype)|Restituisce diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.|
|[CFieldExchange::SetFieldType](#setfieldtype)|Specifica il tipo di membro dati del recordset, ovvero colonna o parametro, `SetFieldType`rappresentato da tutte le chiamate seguenti alle funzioni RFX fino alla successiva chiamata a .|

## <a name="remarks"></a>Osservazioni

`CFieldExchange`non dispone di una classe base.

Utilizzare questa classe se si scrivono routine di scambio dati per tipi di dati personalizzati o quando si implementa il recupero di massa di righe; in caso contrario, non verrà utilizzata direttamente questa classe. RFX e RFX bulk scambiano i dati tra i membri dati di campo dell'oggetto recordset e i campi corrispondenti del record corrente nell'origine dati.

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi ODBC (Open Database Connectivity), utilizzare invece la classe [CDaoFieldExchange.](../../mfc/reference/cdaofieldexchange-class.md) Per ulteriori informazioni, vedere l'articolo [Panoramica:Programmazione di database](../../data/data-access-programming-mfc-atl.md).

Un `CFieldExchange` oggetto fornisce le informazioni di contesto necessarie per lo scambio di campi di record o lo scambio di campi di record in blocco. `CFieldExchange`Gli oggetti supportano una serie di operazioni, inclusi i parametri di associazione e i membri dati di campo e l'impostazione di vari flag nei campi del record corrente. Le operazioni di RFX e RFX bulk vengono eseguite sui membri dati `CFieldExchange`della classe recordset dei tipi definiti dall'enumerazione **enum** **FieldType** in . I valori **FieldType** possibili sono:

- `CFieldExchange::outputColumn`per i membri dati di campo.

- `CFieldExchange::inputParam`o `CFieldExchange::param` per i membri dati dei parametri di input.

- `CFieldExchange::outputParam`per i membri dati dei parametri di output.

- `CFieldExchange::inoutParam`per i membri dati dei parametri di input/output.

La maggior parte delle funzioni membro e dei membri dati della classe vengono forniti per scrivere routine RFX personalizzate. Userai `SetFieldType` spesso. Per ulteriori informazioni, vedere gli articoli [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni sul recupero di massa di righe, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni dettagliate sulle funzioni globali RFX e RFX in blocco, vedere Funzioni di [scambio campi](../../mfc/reference/record-field-exchange-functions.md) di record nella sezione Macro e globali MFC di questo riferimento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CFieldExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdb.h

## <a name="cfieldexchangeisfieldtype"></a><a name="isfieldtype"></a>CFieldExchange::IsFieldType

Se si scrive una funzione `IsFieldType` RFX personalizzata, chiamare all'inizio della funzione per determinare se l'operazione `CFieldExchange::outputColumn` `CFieldExchange::inputParam`corrente `CFieldExchange::param` `CFieldExchange::outputParam`può `CFieldExchange::inoutParam`essere eseguita su un particolare campo o tipo di membro dati di parametro (un tipo di membro dati di parametro , , , o ).

```
BOOL IsFieldType(UINT* pnField);
```

### <a name="parameters"></a>Parametri

*pnField (campo di lavoro)*<br/>
In questo parametro viene restituito il numero sequenziale del campo o del membro dati di parametro. Questo numero corrisponde all'ordine del membro dati nella funzione [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [CRecordset::DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione corrente può essere eseguita sul campo o sul tipo di parametro corrente.

### <a name="remarks"></a>Osservazioni

Seguire il modello delle funzioni RFX esistenti.

## <a name="cfieldexchangesetfieldtype"></a><a name="setfieldtype"></a>CFieldExchange::SetFieldType

È necessaria una `SetFieldType` chiamata a nell'override [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) della classe recordset.

```cpp
void SetFieldType(UINT nFieldType);
```

### <a name="parameters"></a>Parametri

*nTipodi oggetto*<br/>
Valore di `enum FieldType`, dichiarato `CFieldExchange`in , che può essere uno dei seguenti:

- `CFieldExchange::outputColumn`

- `CFieldExchange::inputParam`

- `CFieldExchange::param`

- `CFieldExchange::outputParam`

- `CFieldExchange::inoutParam`

### <a name="remarks"></a>Osservazioni

Per i membri dati `SetFieldType` di campo, `CFieldExchange::outputColumn`è necessario chiamare con un parametro di , seguito da chiamate alle funzioni RFX o RFX in blocco. Se non è stato implementato il recupero di `SetFieldType` massa di righe, ClassWizard inserisce automaticamente la chiamata nella sezione della mappa dei campi di `DoFieldExchange`.

Se si parametrizza la classe `SetFieldType` recordset, è necessario chiamare nuovamente, all'esterno di qualsiasi sezione della mappa dei campi, seguita da chiamate RFX per tutti i membri dati di parametro. Ogni tipo di membro dati `SetFieldType` di parametro deve avere la propria chiamata. La tabella seguente distingue i diversi valori `SetFieldType` che è possibile passare per rappresentare i membri dati di parametro della classe:

|Valore del parametro SetFieldType|Tipo di membro dati di parametroType of parameter data member|
|----------------------------------|-----------------------------------|
|`CFieldExchange::inputParam`|parametro di input. Valore passato nella query o nella stored procedure del recordset.|
|`CFieldExchange::param` | come `CFieldExchange::inputParam`.|
|`CFieldExchange::outputParam`|parametro di output. Valore restituito della stored procedure del recordset.|
|`CFieldExchange::inoutParam`|Parametro di input/output. Valore passato e restituito dalla stored procedure del recordset.|

In generale, ogni gruppo di chiamate di funzione RFX associate a membri dati `SetFieldType`di campo o membri dati di parametro deve essere preceduto da una chiamata a . Il *nFieldType* parametro di ogni `SetFieldType` chiamata identifica il tipo dei membri `SetFieldType` dati rappresentati dalle chiamate di funzione RFX che seguono la chiamata.

Per ulteriori informazioni sulla gestione dei parametri `CRecordset` di output e input/output, vedere la funzione membro [FlushResultSet](../../mfc/reference/crecordset-class.md#flushresultset). Per ulteriori informazioni sulle funzioni RFX e RFX di massa, vedere l'argomento Funzioni di [scambio campi record](../../mfc/reference/record-field-exchange-functions.md). Per informazioni correlate sul recupero di massa di righe, vedere l'articolo [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

In questo esempio vengono illustrate diverse chiamate `SetFieldType`alle funzioni RFX con le relative chiamate a . Si `SetFieldType` noti che `pFX` viene `CFieldExchange` chiamato tramite il puntatore a un oggetto.

[!code-cpp[NVC_MFCDatabase#33](../../mfc/codesnippet/cpp/cfieldexchange-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)
