---
title: Classe CDaoFieldExchange | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoFieldExchange
- AFXDAO/CDaoFieldExchange
- AFXDAO/CDaoFieldExchange::IsValidOperation
- AFXDAO/CDaoFieldExchange::SetFieldType
- AFXDAO/CDaoFieldExchange::m_nOperation
- AFXDAO/CDaoFieldExchange::m_prs
dev_langs:
- C++
helpviewer_keywords:
- CDaoFieldExchange [MFC], IsValidOperation
- CDaoFieldExchange [MFC], SetFieldType
- CDaoFieldExchange [MFC], m_nOperation
- CDaoFieldExchange [MFC], m_prs
ms.assetid: 350a663e-92ff-44ab-ad53-d94efa2e5823
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3ed7f8eabc8df2d4aefb6b1350404b03d90736a2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46432405"
---
# <a name="cdaofieldexchange-class"></a>Classe CDaoFieldExchange

Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO.

## <a name="syntax"></a>Sintassi

```
class CDaoFieldExchange
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoFieldExchange::IsValidOperation](#isvalidoperation)|Restituisce diversi da zero se l'operazione corrente è appropriato per il tipo di campo da aggiornare.|
|[CDaoFieldExchange:: SetFieldType](#setfieldtype)|Specifica il tipo di membro dati del recordset, ovvero una colonna o parametro, rappresentato da tutte le chiamate successive alle funzioni DFX fino alla successiva chiamata a `SetFieldType`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoFieldExchange:: M_noperation](#m_noperation)|DFX operazione in corso dalla chiamata corrente al recordset `DoFieldExchange` funzione membro.|
|[CDaoFieldExchange::m_prs](#m_prs)|Puntatore al set di record in cui DFX vengono eseguite le operazioni.|

## <a name="remarks"></a>Note

`CDaoFieldExchange` non è una classe di base.

Utilizzare questa classe se si scrivono routine di scambio dei dati per tipi di dati personalizzati. in caso contrario, non direttamente userai questa classe. DFX consente di scambiare dati tra i membri di dati di campo delle [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto e i campi del record corrente nell'origine dati corrispondenti. DFX gestisce lo scambio in entrambe le direzioni, dall'origine dati e all'origine dati. Visualizzare [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) per informazioni su come scrivere routine DFX personalizzate.

> [!NOTE]
>  Le classi database DAO sono diverse dalle classi di database MFC basate su Open Database Connectivity (ODBC). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di supportare rispetto alle classi MFC basate su ODBC. Le classi basate su DAO possono accedere ai dati, incluso il servizio tramite i driver ODBC, tramite i propri motore di database. Supportano inoltre le operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi invece di dover chiamare manualmente DAO.

> [!NOTE]
>  Campi di record DAO (DFX) sono molto simili al trasferimento di campi di record (RFX) nelle classi di database MFC basate su ODBC ( `CDatabase`, `CRecordset`). Se si comprende RFX, si troverà DFX facile da usare.

Oggetto `CDaoFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per DAO campi di record da eseguire. `CDaoFieldExchange` gli oggetti supportano un numero di operazioni, tra cui i parametri di associazione e i membri dati di campo e l'impostazione vari flag nei campi del record corrente. DFX operazioni vengono eseguite su membri dati classe recordset di tipi definiti dal **enum** **FieldType** in `CDaoFieldExchange`. Possibili **FieldType** i valori sono:

- `CDaoFieldExchange::outputColumn` per i membri dati di campo.

- `CDaoFieldExchange::param` per i membri dati di parametro.

Il [IsValidOperation](#isvalidoperation) funzione membro viene fornita per la scrittura di routine DFX personalizzate. Si userà [SetFieldType](#setfieldtype) frequentemente nel [CDaoRecordset::DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) funzioni. Per informazioni dettagliate sulle funzioni DFX globale, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md). Per informazioni sulla scrittura di routine DFX personalizzate per i tipi di dati, vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDaoFieldExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

##  <a name="isvalidoperation"></a>  CDaoFieldExchange::IsValidOperation

Se si scrittura DFX una funzione personalizzata, chiamare `IsValidOperation` all'inizio della funzione per determinare se l'operazione corrente può essere eseguito su un tipo di membro dati di campo specifico (una `CDaoFieldExchange::outputColumn` o un `CDaoFieldExchange::param`).

```
BOOL IsValidOperation();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.

### <a name="remarks"></a>Note

Alcune delle operazioni eseguite dal meccanismo di DFX si applicano solo a uno dei tipi di campo possibili. Seguire il modello delle funzioni DFX esistente.

Per altre informazioni su come scrivere routine DFX personalizzate, vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

##  <a name="m_noperation"></a>  CDaoFieldExchange:: M_noperation

Identifica l'operazione da eseguire sul [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto associato all'oggetto campo exchange.

### <a name="remarks"></a>Note

Il `CDaoFieldExchange` oggetto fornisce il contesto per una serie di diverse operazioni DFX nel recordset.

> [!NOTE]
>  Il valore PSEUDONULL descritto sotto le operazioni MarkForAddNew e SetFieldNull riportato di seguito è un valore utilizzato per contrassegnare i campi Null. Il meccanismo di scambio DAO campi di record (DFX) Usa questo valore per determinare quali campi sono stati esplicitamente contrassegnati Null. Non è necessaria per PSEUDONULL [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md) campi.

I valori possibili di `m_nOperation` sono:

|Operazione|Descrizione|
|---------------|-----------------|
|`AddToParameterList`|Compila il **parametri** clausola dell'istruzione SQL.|
|`AddToSelectList`|Compila il **seleziona** clausola dell'istruzione SQL.|
|`BindField`|Associa un campo nel database in una posizione di memoria nell'applicazione.|
|`BindParam`|Imposta i valori dei parametri per la query del recordset.|
|`Fixup`|Imposta lo stato Null per un campo.|
|`AllocCache`|Alloca la cache utilizzata per cercare i campi "dirty" nel set di record.|
|`StoreField`|Salva il record corrente nella cache.|
|`LoadField`|Ripristina le variabili di membro dati memorizzati nella cache del recordset.|
|`FreeCache`|Consente di liberare la cache utilizzata per cercare i campi "dirty" nel set di record.|
|`SetFieldNull`|Imposta lo stato del campo su Null e il valore da PSEUDONULL.|
|`MarkForAddNew`|I campi di contrassegni "dirty" Se non PSEUDONULL.|
|`MarkForEdit`|Contrassegna i campi "dirty" se la cache non corrispondono.|
|`SetDirtyField`|Imposta campo valori contrassegnati come "dirty".|
|`DumpField`|Scarica il contenuto del campo (solo debug).|
|`MaxDFXOperation`|Utilizzato per la verifica dell'input.|

##  <a name="m_prs"></a>  CDaoFieldExchange::m_prs

Contiene un puntatore per il [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto associato il `CDaoFieldExchange` oggetto.

### <a name="remarks"></a>Note

##  <a name="setfieldtype"></a>  CDaoFieldExchange:: SetFieldType

Chiamare `SetFieldType` nella `CDaoRecordset` della classe `DoFieldExchange` eseguire l'override.

```
void SetFieldType(UINT nFieldType);
```

### <a name="parameters"></a>Parametri

*nFieldType*<br/>
Valore di **enum FieldType**, dichiarato in `CDaoFieldExchange`, che può essere uno dei modi seguenti:

- `CDaoFieldExchange::outputColumn`

- `CDaoFieldExchange::param`

### <a name="remarks"></a>Note

In genere, ClassWizard scrive questa chiamata per l'utente. Se si scrivere una funzione e Usa la procedura guidata per scrivere il `DoFieldExchange` di funzione, aggiungere chiamate a una funzione personalizzata all'esterno della mappa di campo. Se non si utilizza la procedura guidata, non esisterà una mappa dei campi. La chiamata precede le chiamate a funzioni DFX, uno per ogni membro del campo dati della classe e identifica il tipo di campo come `CDaoFieldExchange::outputColumn`.

Se si imposta parametri per la classe del recordset, è possibile aggiungere chiamate DFX per tutti i membri dati di parametro (all'esterno della mappa di campo) e far precedere queste chiamate con una chiamata a `SetFieldType`. Passare il valore `CDaoFieldExchange::param`. (Al contrario, è possibile utilizzare un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e impostare i valori del parametro.)

In generale, ogni gruppo di chiamate di funzioni DFX associati membri dati di campi o membri dati di parametro deve essere preceduto da una chiamata a `SetFieldType`. Il *nFieldType* parametro della ognuno `SetFieldType` chiamata identifica il tipo dei membri dati rappresentata da chiamate alle funzioni DFX che seguono il `SetFieldType` chiamare.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)
