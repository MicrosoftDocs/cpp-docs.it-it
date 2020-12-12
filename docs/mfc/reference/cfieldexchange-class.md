---
description: 'Altre informazioni su: classe CFieldExchange'
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
ms.openlocfilehash: 128b2a7baf6fff923393f3105e27f1e85657bdde
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184556"
---
# <a name="cfieldexchange-class"></a>Classe CFieldExchange

Supporta le routine RFX (record field exchange) e RFX di massa (bulk record field exchange) utilizzate dalle classi di database.

## <a name="syntax"></a>Sintassi

```
class CFieldExchange
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CFieldExchange:: IsFieldType](#isfieldtype)|Restituisce un valore diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.|
|[CFieldExchange:: SetFieldType](#setfieldtype)|Specifica il tipo di membro dati del recordset, ovvero la colonna o il parametro, rappresentato da tutte le chiamate successive alle funzioni RFX fino alla chiamata successiva a `SetFieldType` .|

## <a name="remarks"></a>Commenti

`CFieldExchange` non dispone di una classe base.

Usare questa classe se si scrivono routine di scambio di dati per tipi di dati personalizzati o quando si implementa il recupero di righe BULK. in caso contrario, non verrà utilizzata direttamente questa classe. RFX e RFX di massa scambiano i dati tra i membri dati del campo dell'oggetto recordset e i campi corrispondenti del record corrente nell'origine dati.

> [!NOTE]
> Se si utilizzano le classi DAO (Data Access Objects) anziché le classi Open Database Connectivity (ODBC), utilizzare invece la classe [CDaoFieldExchange](../../mfc/reference/cdaofieldexchange-class.md) . Per ulteriori informazioni, vedere l'articolo [Cenni preliminari sulla programmazione di database](../../data/data-access-programming-mfc-atl.md).

Un `CFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per l'esecuzione dello scambio di campi di record o di un campo di record bulk. `CFieldExchange` gli oggetti supportano una serie di operazioni, inclusi i parametri di associazione e i membri dati di campo e l'impostazione di diversi flag sui campi del record corrente. Le operazioni RFX e RFX di massa vengono eseguite sui membri dati della classe recordset di tipi definiti da **`enum`** **FieldType** in `CFieldExchange` . I possibili valori di **FieldType** sono:

- `CFieldExchange::outputColumn` per i membri dati del campo.

- `CFieldExchange::inputParam` o `CFieldExchange::param` per i membri dati del parametro di input.

- `CFieldExchange::outputParam` per i membri dati del parametro di output.

- `CFieldExchange::inoutParam` per i membri dati del parametro di input/output.

La maggior parte delle funzioni membro e dei membri dati della classe viene fornita per la scrittura di routine RFX personalizzate. Si userà di `SetFieldType` frequente. Per ulteriori informazioni, vedere gli articoli relativa a [RFX (record Field Exchange](../../data/odbc/record-field-exchange-rfx.md) ) e [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). Per informazioni sul recupero di righe bulk, vedere l'articolo [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). Per informazioni dettagliate sulle funzioni globali RFX e RFX di massa, vedere [funzioni di scambio di campi di record](../../mfc/reference/record-field-exchange-functions.md) nella sezione macro e globali MFC di questo riferimento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CFieldExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDB. h

## <a name="cfieldexchangeisfieldtype"></a><a name="isfieldtype"></a> CFieldExchange:: IsFieldType

Se si scrive una funzione RFX personalizzata, chiamare `IsFieldType` all'inizio della funzione per determinare se l'operazione corrente può essere eseguita su un determinato tipo di membro dati di campo o parametro (a `CFieldExchange::outputColumn` ,,, `CFieldExchange::inputParam` `CFieldExchange::param` `CFieldExchange::outputParam` o `CFieldExchange::inoutParam` ).

```
BOOL IsFieldType(UINT* pnField);
```

### <a name="parameters"></a>Parametri

*pnField*<br/>
Il numero sequenziale del membro dati del campo o del parametro viene restituito in questo parametro. Questo numero corrisponde all'ordine del membro dati nella funzione [CRecordset::D ofieldexchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [CRecordset::D obulkfieldexchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione corrente può essere eseguita sul tipo di parametro o del campo corrente.

### <a name="remarks"></a>Commenti

Seguire il modello delle funzioni RFX esistenti.

## <a name="cfieldexchangesetfieldtype"></a><a name="setfieldtype"></a> CFieldExchange:: SetFieldType

È necessaria una chiamata a `SetFieldType` nell'override [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) o [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) della classe recordset.

```cpp
void SetFieldType(UINT nFieldType);
```

### <a name="parameters"></a>Parametri

*nFieldType*<br/>
Valore dell'oggetto `enum FieldType` , dichiarato in `CFieldExchange` , che può essere uno dei seguenti:

- `CFieldExchange::outputColumn`

- `CFieldExchange::inputParam`

- `CFieldExchange::param`

- `CFieldExchange::outputParam`

- `CFieldExchange::inoutParam`

### <a name="remarks"></a>Commenti

Per i membri dati di campo, è necessario chiamare `SetFieldType` con un parametro di `CFieldExchange::outputColumn` , seguito da chiamate alle funzioni RFX o RFX di massa. Se non è stato implementato il recupero di righe bulk, ClassWizard inserisce questa `SetFieldType` chiamata nella sezione mappa dei campi di `DoFieldExchange` .

Se si parametrizza la classe recordset, è necessario chiamare `SetFieldType` nuovamente, al di fuori di qualsiasi sezione della mappa dei campi, seguito da chiamate RFX per tutti i membri dati del parametro. Ogni tipo di membro dati del parametro deve avere una propria `SetFieldType` chiamata. La tabella seguente consente di distinguere i diversi valori che è possibile passare a `SetFieldType` per rappresentare i membri dati del parametro della classe:

|Valore del parametro SetFieldType|Tipo di membro dati parametro|
|----------------------------------|-----------------------------------|
|`CFieldExchange::inputParam`|parametro di input. Valore passato nella query o nel stored procedure del recordset.|
|`CFieldExchange::param` | uguale a `CFieldExchange::inputParam` .|
|`CFieldExchange::outputParam`|parametro di output. Valore restituito dell'stored procedure del recordset.|
|`CFieldExchange::inoutParam`|Parametro di input/output. Valore passato e restituito dall'stored procedure del recordset.|

In generale, ogni gruppo di chiamate di funzione RFX associate a membri dati di campo o a membri dati di parametri deve essere preceduto da una chiamata a `SetFieldType` . Il parametro *nFieldType* di ogni `SetFieldType` chiamata identifica il tipo dei membri dati rappresentati dalle chiamate di funzione RFX che seguono la `SetFieldType` chiamata.

Per ulteriori informazioni sulla gestione di output e parametri di input/output, vedere la `CRecordset` funzione membro [FlushResultSet](../../mfc/reference/crecordset-class.md#flushresultset). Per ulteriori informazioni sulle funzioni RFX e RFX di massa, vedere l'argomento [funzioni di trasferimento di campi di record](../../mfc/reference/record-field-exchange-functions.md). Per informazioni correlate sul recupero di righe in blocco, vedere l'articolo [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### <a name="example"></a>Esempio

In questo esempio vengono illustrate diverse chiamate alle funzioni RFX con chiamate associate a `SetFieldType` . Si noti che `SetFieldType` viene chiamato tramite il `pFX` puntatore a un `CFieldExchange` oggetto.

[!code-cpp[NVC_MFCDatabase#33](../../mfc/codesnippet/cpp/cfieldexchange-class_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)
