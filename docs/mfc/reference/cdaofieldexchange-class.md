---
title: Classe CDaoFieldExchange
ms.date: 09/17/2019
f1_keywords:
- CDaoFieldExchange
- AFXDAO/CDaoFieldExchange
- AFXDAO/CDaoFieldExchange::IsValidOperation
- AFXDAO/CDaoFieldExchange::SetFieldType
- AFXDAO/CDaoFieldExchange::m_nOperation
- AFXDAO/CDaoFieldExchange::m_prs
helpviewer_keywords:
- CDaoFieldExchange [MFC], IsValidOperation
- CDaoFieldExchange [MFC], SetFieldType
- CDaoFieldExchange [MFC], m_nOperation
- CDaoFieldExchange [MFC], m_prs
ms.assetid: 350a663e-92ff-44ab-ad53-d94efa2e5823
ms.openlocfilehash: 62e9d1917e2d1eea19b9e8db4b6c56b6ad25d9e9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231832"
---
# <a name="cdaofieldexchange-class"></a>Classe CDaoFieldExchange

Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO.

DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoFieldExchange
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDaoFieldExchange:: IsValidOperation](#isvalidoperation)|Restituisce un valore diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.|
|[CDaoFieldExchange:: SetFieldType](#setfieldtype)|Specifica il tipo di membro dati del recordset, ovvero la colonna o il parametro, rappresentato da tutte le chiamate successive alle funzioni di DFX fino alla chiamata successiva a `SetFieldType` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDaoFieldExchange:: m_nOperation](#m_noperation)|Operazione DFX eseguita dalla chiamata corrente alla `DoFieldExchange` funzione membro del recordset.|
|[CDaoFieldExchange:: m_prs](#m_prs)|Puntatore al recordset in cui vengono eseguite le operazioni di DFX.|

## <a name="remarks"></a>Osservazioni

`CDaoFieldExchange`non dispone di una classe base.

Utilizzare questa classe se si scrivono routine di scambio di dati per tipi di dati personalizzati. in caso contrario, non verrà utilizzata direttamente questa classe. DFX scambia i dati tra i membri dati del campo dell'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e i campi corrispondenti del record corrente nell'origine dati. DFX gestisce lo scambio in entrambe le direzioni, dall'origine dati e all'origine dati. Vedere la [Nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) per informazioni sulla scrittura di routine DFX personalizzate.

> [!NOTE]
> Le classi di database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più idonee delle classi MFC basate su ODBC. Le classi basate su DAO possono accedere ai dati, inclusi i driver ODBC, tramite il proprio motore di database. Supportano anche operazioni DDL (Data Definition Language), ad esempio l'aggiunta di tabelle tramite le classi anziché la necessità di chiamare DAO.

> [!NOTE]
> Lo scambio di campi di record DAO (DFX) è molto simile a RFX (record Field Exchange) nelle classi di database MFC basate su ODBC ( `CDatabase` , `CRecordset` ). Se si conosce RFX, sarà più facile utilizzare DFX.

Un `CDaoFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per eseguire lo scambio di campi di record DAO. `CDaoFieldExchange`gli oggetti supportano una serie di operazioni, inclusi i parametri di associazione e i membri dati di campo e l'impostazione di diversi flag sui campi del record corrente. Le operazioni di DFX vengono eseguite sui membri dati della classe recordset di tipi definiti da **`enum`** **FieldType** in `CDaoFieldExchange` . I possibili valori di **FieldType** sono:

- `CDaoFieldExchange::outputColumn`per i membri dati del campo.

- `CDaoFieldExchange::param`per i membri dati del parametro.

La funzione membro [IsValidOperation](#isvalidoperation) viene fornita per la scrittura di routine DFX personalizzate. Si userà spesso [SetFieldType](#setfieldtype) nelle funzioni [CDaoRecordset::D ofieldexchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) . Per informazioni dettagliate sulle funzioni globali di DFX, vedere [funzioni di scambio di campi di record](../../mfc/reference/record-field-exchange-functions.md). Per informazioni sulla scrittura di routine DFX personalizzate per i propri tipi di dati, vedere la [Nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDaoFieldExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="cdaofieldexchangeisvalidoperation"></a><a name="isvalidoperation"></a>CDaoFieldExchange:: IsValidOperation

Se si scrive una funzione DFX personalizzata, chiamare `IsValidOperation` all'inizio della funzione per determinare se l'operazione corrente può essere eseguita su un tipo di membro dati di campo specifico (a `CDaoFieldExchange::outputColumn` o `CDaoFieldExchange::param` ).

```
BOOL IsValidOperation();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.

### <a name="remarks"></a>Osservazioni

Alcune delle operazioni eseguite dal meccanismo DFX si applicano solo a uno dei tipi di campo possibili. Seguire il modello delle funzioni DFX esistenti.

Per ulteriori informazioni sulla scrittura di routine DFX personalizzate, vedere la [Nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## <a name="cdaofieldexchangem_noperation"></a><a name="m_noperation"></a>CDaoFieldExchange:: m_nOperation

Identifica l'operazione da eseguire sull'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) associato all'oggetto di scambio del campo.

### <a name="remarks"></a>Osservazioni

L' `CDaoFieldExchange` oggetto fornisce il contesto per una serie di operazioni DFX diverse sul recordset.

> [!NOTE]
> Il valore PSEUDONULL descritto sotto le operazioni MarkForAddNew e SetFieldNull riportata di seguito è un valore utilizzato per contrassegnare i campi come null. Il meccanismo di scambio dei campi di record DAO (DFX) utilizza questo valore per determinare i campi contrassegnati in modo esplicito come null. PSEUDONULL non è necessario per i campi [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md) .

I valori possibili di `m_nOperation` sono:

|Operazione|Descrizione|
|---------------|-----------------|
|`AddToParameterList`|Compila la clausola **Parameters** dell'istruzione SQL.|
|`AddToSelectList`|Compila la clausola **Select** dell'istruzione SQL.|
|`BindField`|Associa un campo del database a una posizione di memoria nell'applicazione.|
|`BindParam`|Imposta i valori dei parametri per la query del recordset.|
|`Fixup`|Imposta lo stato null per un campo.|
|`AllocCache`|Alloca la cache utilizzata per verificare la presenza di campi "Dirty" nel recordset.|
|`StoreField`|Salva il record corrente nella cache.|
|`LoadField`|Ripristina le variabili membro dati memorizzate nella cache nel recordset.|
|`FreeCache`|Libera la cache utilizzata per verificare la presenza di campi "Dirty" nel recordset.|
|`SetFieldNull`|Imposta lo stato di un campo su null e il valore su PSEUDONULL.|
|`MarkForAddNew`|Contrassegna i campi "Dirty" se non PSEUDONULL.|
|`MarkForEdit`|Contrassegna i campi "Dirty" se non corrispondono alla cache.|
|`SetDirtyField`|Imposta i valori di campo contrassegnati come "Dirty".|
|`DumpField`|Esegue il dump del contenuto di un campo (solo debug).|
|`MaxDFXOperation`|Usato per il controllo dell'input.|

## <a name="cdaofieldexchangem_prs"></a><a name="m_prs"></a>CDaoFieldExchange:: m_prs

Contiene un puntatore all'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) associato all' `CDaoFieldExchange` oggetto.

### <a name="remarks"></a>Osservazioni

## <a name="cdaofieldexchangesetfieldtype"></a><a name="setfieldtype"></a>CDaoFieldExchange:: SetFieldType

Chiamare `SetFieldType` nell' `CDaoRecordset` override della classe `DoFieldExchange` .

```cpp
void SetFieldType(UINT nFieldType);
```

### <a name="parameters"></a>Parametri

*nFieldType*<br/>
Valore dell' **Enumerazione FieldType**, dichiarata in `CDaoFieldExchange` , che può essere una delle seguenti:

- `CDaoFieldExchange::outputColumn`

- `CDaoFieldExchange::param`

### <a name="remarks"></a>Osservazioni

In genere, ClassWizard scrive questa chiamata. Se si scrive una funzione personalizzata e si usa la procedura guidata per scrivere la `DoFieldExchange` funzione, aggiungere chiamate alla propria funzione al di fuori della mappa dei campi. Se non si utilizza la procedura guidata, non sarà presente una mappa dei campi. La chiamata precede le chiamate alle funzioni DFX, una per ogni membro dati di campo della classe e identifica il tipo di campo come `CDaoFieldExchange::outputColumn` .

Se si parametrizza la classe recordset, è necessario aggiungere le chiamate a DFX per tutti i membri dati del parametro (all'esterno della mappa dei campi) e precedere queste chiamate con una chiamata a `SetFieldType` . Passare il valore `CDaoFieldExchange::param` . È invece possibile usare un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e impostare i valori dei parametri.

In generale, ogni gruppo di chiamate di funzione DFX associate a membri dati di campo o a membri dati di parametri deve essere preceduto da una chiamata a `SetFieldType` . Il parametro *nFieldType* di ogni `SetFieldType` chiamata identifica il tipo dei membri dati rappresentati dalle chiamate di funzione DFX che seguono la `SetFieldType` chiamata.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)
