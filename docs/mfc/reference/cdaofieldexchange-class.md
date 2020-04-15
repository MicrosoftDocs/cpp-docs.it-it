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
ms.openlocfilehash: e1ce6e13b9c6045881cc0bb4114a6e11d58365c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368988"
---
# <a name="cdaofieldexchange-class"></a>Classe CDaoFieldExchange

Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO.

DAO è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
class CDaoFieldExchange
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoFieldExchange::IsValidOperation (informazioni in base alla formazione dei caratteri](#isvalidoperation)|Restituisce diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.|
|[CDaoFieldExchange::SetFieldType](#setfieldtype)|Specifica il tipo di membro dati del recordset, ovvero colonna o parametro, `SetFieldType`rappresentato da tutte le chiamate successive alle funzioni DFX fino alla chiamata successiva a .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDaoFieldExchange::m_nOperation](#m_noperation)|Operazione DFX eseguita dalla chiamata corrente alla `DoFieldExchange` funzione membro del recordset.|
|[CDaoFieldExchange::m_prs](#m_prs)|Puntatore al recordset su cui vengono eseguite le operazioni DFX.|

## <a name="remarks"></a>Osservazioni

`CDaoFieldExchange`non dispone di una classe base.

Utilizzare questa classe se si scrivono routine di scambio dati per tipi di dati personalizzati; in caso contrario, non verrà utilizzata direttamente questa classe. DFX scambia i dati tra i membri dati di campo dell'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e i campi corrispondenti del record corrente nell'origine dati. DFX gestisce lo scambio in entrambe le direzioni, dall'origine dati e all'origine dati. Vedere [la nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) per informazioni sulla scrittura di routine DFX personalizzate.

> [!NOTE]
> Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC (Open Database Connectivity). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado rispetto alle classi MFC basate su ODBC. Le classi basate su DAO possono accedere ai dati, anche tramite driver ODBC, tramite il proprio motore di database. Supportano anche le operazioni DDL (Data Definition Language), ad esempio l'aggiunta di tabelle tramite le classi anziché dover chiamare DAO manualmente.

> [!NOTE]
> DAO record field exchange (DFX) è molto simile a RFX (Record Field `CDatabase` `CRecordset`Exchange) nelle classi di database MFC basate su ODBC ( , ). Se si comprende RFX, sarà facile usare DFX.

Un `CDaoFieldExchange` oggetto fornisce le informazioni di contesto necessarie per lo scambio di campo del record DAO. `CDaoFieldExchange`Gli oggetti supportano una serie di operazioni, inclusi i parametri di associazione e i membri dati di campo e l'impostazione di vari flag nei campi del record corrente. Le operazioni DFX vengono eseguite sui membri dati della classe `CDaoFieldExchange`recordset dei tipi definiti dall'enumerazione **enum** **FieldType** in . I valori **FieldType** possibili sono:

- `CDaoFieldExchange::outputColumn`per i membri dati di campo.

- `CDaoFieldExchange::param`per i membri dati di parametro.

Il [IsValidOperation](#isvalidoperation) funzione membro viene fornito per la scrittura di routine DFX personalizzate. Si utilizzerà [frequentemente SetFieldType](#setfieldtype) nelle funzioni [CDaoRecordset::DoFieldExchange.](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) Per informazioni dettagliate sulle funzioni globali DFX, vedere Funzioni di [scambio campi record](../../mfc/reference/record-field-exchange-functions.md). Per informazioni sulla scrittura di routine DFX personalizzate per i propri tipi di dati, vedere la [Nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDaoFieldExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="cdaofieldexchangeisvalidoperation"></a><a name="isvalidoperation"></a>CDaoFieldExchange::IsValidOperation (informazioni in base alla formazione dei caratteri

Se si scrive una funzione `IsValidOperation` DFX personalizzata, chiamare all'inizio della funzione per determinare se l'operazione corrente può essere eseguita su un particolare tipo di membro dati di campo (a `CDaoFieldExchange::outputColumn` o a `CDaoFieldExchange::param`).

```
BOOL IsValidOperation();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'operazione corrente è appropriata per il tipo di campo da aggiornare.

### <a name="remarks"></a>Osservazioni

Alcune delle operazioni eseguite dal meccanismo DFX si applicano solo a uno dei tipi di campo possibili. Seguire il modello delle funzioni DFX esistenti.

Per ulteriori informazioni sulla scrittura di routine DFX personalizzate, vedere la [Nota tecnica 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## <a name="cdaofieldexchangem_noperation"></a><a name="m_noperation"></a>CDaoFieldExchange::m_nOperation

Identifica l'operazione da eseguire sull'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) associato all'oggetto di scambio di campi.

### <a name="remarks"></a>Osservazioni

L'oggetto `CDaoFieldExchange` fornisce il contesto per diverse operazioni DFX nel recordset.

> [!NOTE]
> Il valore PSEUDONULL descritto nelle operazioni MarkForAddNew e SetFieldNull riportate di seguito è un valore utilizzato per contrassegnare i campi Null. Il meccanismo di scambio di campi di record DAO (DFX) utilizza questo valore per determinare quali campi sono stati contrassegnati in modo esplicito come Null. PSEUDONULL non è necessario per i campi [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency.](../../mfc/reference/colecurrency-class.md)

I valori `m_nOperation` possibili di sono:

|Operazione|Descrizione|
|---------------|-----------------|
|`AddToParameterList`|Compila la clausola **PARAMETERS** dell'istruzione SQL.|
|`AddToSelectList`|Compila la clausola **SELECT** dell'istruzione SQL.|
|`BindField`|Associa un campo del database a una posizione di memoria nell'applicazione.|
|`BindParam`|Imposta i valori dei parametri per la query del recordset.|
|`Fixup`|Imposta lo stato Null per un campo.|
|`AllocCache`|Alloca la cache utilizzata per verificare la presenza di campi "dirty" nel recordset.|
|`StoreField`|Salva il record corrente nella cache.|
|`LoadField`|Ripristina le variabili dei membri dati memorizzati nella cache nel recordset.|
|`FreeCache`|Libera la cache utilizzata per verificare la presenza di campi "dirty" nel recordset.|
|`SetFieldNull`|Imposta lo stato di un campo su Null e il valore su PSEUDONULL.|
|`MarkForAddNew`|Contrassegna i campi "sporchi" se non PSEUDONULL.|
|`MarkForEdit`|Contrassegna i campi "sporchi" se non corrispondono alla cache.|
|`SetDirtyField`|Imposta i valori dei campi contrassegnati come "dirty".|
|`DumpField`|Esegue il dump del contenuto di un campo (solo debug).|
|`MaxDFXOperation`|Utilizzato per il controllo dell'input.|

## <a name="cdaofieldexchangem_prs"></a><a name="m_prs"></a>CDaoFieldExchange::m_prs

Contiene un puntatore all'oggetto [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) associato all'oggetto. `CDaoFieldExchange`

### <a name="remarks"></a>Osservazioni

## <a name="cdaofieldexchangesetfieldtype"></a><a name="setfieldtype"></a>CDaoFieldExchange::SetFieldType

Chiama `SetFieldType` l'override `CDaoRecordset` `DoFieldExchange` della tua classe.

```
void SetFieldType(UINT nFieldType);
```

### <a name="parameters"></a>Parametri

*nTipodi oggetto*<br/>
Valore di **enum FieldType**, `CDaoFieldExchange`dichiarato in , che può essere uno dei seguenti:

- `CDaoFieldExchange::outputColumn`

- `CDaoFieldExchange::param`

### <a name="remarks"></a>Osservazioni

In genere, ClassWizard scrive questa chiamata per l'utente. Se si scrive una funzione personalizzata e `DoFieldExchange` si utilizza la procedura guidata per scrivere la funzione, aggiungere chiamate alla propria funzione all'esterno della mappa dei campi. Se non si utilizza la procedura guidata, non sarà disponibile una mappa dei campi. La chiamata precede le chiamate alle funzioni DFX, una per ogni membro `CDaoFieldExchange::outputColumn`dati di campo della classe, e identifica il tipo di campo come .

Se si parametrizza la classe recordset, è necessario aggiungere chiamate DFX per tutti i membri dati `SetFieldType`di parametro (all'esterno della mappa dei campi) e anteporre queste chiamate a . Passare il `CDaoFieldExchange::param`valore . È invece possibile utilizzare un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e impostarne i valori di parametro.

In generale, ogni gruppo di chiamate di funzione DFX associate a membri dati `SetFieldType`di campo o membri dati di parametro deve essere preceduto da una chiamata a . Il *nFieldType* parametro di ogni `SetFieldType` chiamata identifica il tipo dei membri `SetFieldType` dati rappresentati dalle chiamate di funzione DFX che seguono la chiamata.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)
