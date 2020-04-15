---
title: Classe CPropExchange
ms.date: 11/04/2016
f1_keywords:
- CPropExchange
- AFXCTL/CPropExchange
- AFXCTL/CPropExchange::ExchangeBlobProp
- AFXCTL/CPropExchange::ExchangeFontProp
- AFXCTL/CPropExchange::ExchangePersistentProp
- AFXCTL/CPropExchange::ExchangeProp
- AFXCTL/CPropExchange::ExchangeVersion
- AFXCTL/CPropExchange::GetVersion
- AFXCTL/CPropExchange::IsAsynchronous
- AFXCTL/CPropExchange::IsLoading
helpviewer_keywords:
- CPropExchange [MFC], ExchangeBlobProp
- CPropExchange [MFC], ExchangeFontProp
- CPropExchange [MFC], ExchangePersistentProp
- CPropExchange [MFC], ExchangeProp
- CPropExchange [MFC], ExchangeVersion
- CPropExchange [MFC], GetVersion
- CPropExchange [MFC], IsAsynchronous
- CPropExchange [MFC], IsLoading
ms.assetid: ed872180-e770-4942-892a-92139d501fab
ms.openlocfilehash: 7818b15e502bb32640d6b9dbfe1a6e4927c70650
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363981"
---
# <a name="cpropexchange-class"></a>Classe CPropExchange

Supporta l'implementazione di persistenza per i controlli OLE.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CPropExchange
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropExchange::ExchangeBlobProp](#exchangeblobprop)|Scambia una proprietà BLOB (Binary Large Object).|
|[CPropExchange::ExchangeFontProp](#exchangefontprop)|Scambia una proprietà del tipo di carattere.|
|[CPropExchange::ExchangePersistentProp](#exchangepersistentprop)|Scambia una proprietà tra un controllo e un file.|
|[CPropExchange::ExchangeProp](#exchangeprop)|Scambia le proprietà di qualsiasi tipo incorporato.|
|[CPropExchange::ExchangeVersion](#exchangeversion)|Scambia il numero di versione di un controllo OLE.|
|[CPropExchange::GetVersion](#getversion)|Recupera il numero di versione di un controllo OLE.|
|[CPropExchange::IsAsynchronous](#isasynchronous)|Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.|
|[CPropExchange::IsLoading](#isloading)|Indica se le proprietà vengono caricate nel controllo o salvate da esso.|

## <a name="remarks"></a>Osservazioni

`CPropExchange`non dispone di una classe base.

Stabilisce il contesto e la direzione di uno scambio di proprietà.

La persistenza è lo scambio delle informazioni sullo stato del controllo, in genere rappresentato dalle relative proprietà, tra il controllo stesso e un supporto.

Il framework costruisce un `CPropExchange` oggetto derivato da quando viene notificato che le proprietà di un controllo OLE devono essere caricate o archiviate in un archivio permanente.

Il framework passa un `CPropExchange` puntatore a `DoPropExchange` questo oggetto alla funzione del controllo. Se è stata utilizzata una procedura guidata per creare `DoPropExchange` i `COleControl::DoPropExchange`file iniziali per il controllo, la funzione del controllo chiama . La versione della classe base scambia le proprietà predefinite del controllo; modificare la versione della classe derivata per scambiare le proprietà aggiunte al controllo.

`CPropExchange`può essere utilizzato per serializzare le proprietà di un controllo o inizializzare le proprietà di un controllo al momento del caricamento o della creazione di un controllo. Le `ExchangeProp` `ExchangeFontProp` funzioni membro `CPropExchange` e di sono in grado di archiviare le proprietà e caricarle da supporti diversi.

Per ulteriori informazioni `CPropExchange`sull'utilizzo di , vedere l'articolo [Controlli ActiveX MFC: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPropExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="cpropexchangeexchangeblobprop"></a><a name="exchangeblobprop"></a>CPropExchange::ExchangeBlobProp

Serializza una proprietà che archivia dati BLOB (Binary Large Object).

```
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,
    HGLOBAL* phBlob,
    HGLOBAL hBlobDefault = NULL) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName (nome spannima)*<br/>
Nome della proprietà da scambiare.

*PhBlob*<br/>
Puntatore a una variabile che punta alla posizione in cui è archiviata la proprietà (variabile è in genere un membro della classe).

*hBlobDefault (informazioni in lingua lingua predefinita)*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto, a seconda dei casi, dalla variabile a cui fa riferimento *phBlob*. Se viene specificato *hBlobDefault,* verrà utilizzato come valore predefinito della proprietà. Questo valore viene utilizzato se, per qualsiasi motivo, la serializzazione del controllo ha esito negativo.

Le `CArchivePropExchange::ExchangeBlobProp`funzioni `CResetPropExchange::ExchangeBlobProp`, `CPropsetPropExchange::ExchangeBlobProp` , ed eseguono l'override di questa funzione virtuale pura.

## <a name="cpropexchangeexchangefontprop"></a><a name="exchangefontprop"></a>CPropExchange::ExchangeFontProp

Scambia una proprietà del tipo di carattere tra un supporto di archiviazione e il controllo.

```
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,
    CFontHolder& font,
    const FONTDESC* pFontDesc,
    LPFONTDISP pFontDispAmbient) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName (nome spannima)*<br/>
Nome della proprietà da scambiare.

*Carattere*<br/>
Un riferimento a un [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto che contiene la proprietà del tipo di carattere.

*pFontDesc (informazioni in stato incui)*<br/>
Puntatore a una struttura [FONTDESC](/windows/win32/api/olectl/ns-olectl-fontdesc) contenente i valori per l'inizializzazione dello stato predefinito della proprietà font quando *pFontDispAmbient* è NULL.

*pFontDispAmbient*<br/>
Puntatore all'interfaccia `IFontDisp` di un tipo di carattere da utilizzare per l'inizializzazione dello stato predefinito della proprietà font.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà font viene caricata dal supporto al controllo, le caratteristiche `CFontHolder` del tipo di carattere vengono recuperate dal supporto e l'oggetto a cui fa riferimento *font* viene inizializzato con essi. Se la proprietà font viene memorizzata, le caratteristiche nell'oggetto font vengono scritte sul supporto.

Le `CArchivePropExchange::ExchangeFontProp`funzioni `CResetPropExchange::ExchangeFontProp`, `CPropsetPropExchange::ExchangeFontProp` , ed eseguono l'override di questa funzione virtuale pura.

## <a name="cpropexchangeexchangepersistentprop"></a><a name="exchangepersistentprop"></a>CPropExchange::ExchangePersistentProp

Scambia una proprietà tra il controllo e un file.

```
virtual BOOL ExchangePersistentProp(
    LPCTSTR pszPropName,
    LPUNKNOWN* ppUnk,
    REFIID iid,
    LPUNKNOWN pUnkDefault) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName (nome spannima)*<br/>
Nome della proprietà da scambiare.

*ppUnk*<br/>
Puntatore a una variabile contenente un `IUnknown` puntatore all'interfaccia della proprietà (questa variabile è in genere un membro della classe).

*Iid*<br/>
ID di interfaccia dell'interfaccia nella proprietà che verrà utilizzata dal controllo.

*pUnkDefault (in modo incieto)*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà viene caricata dal file al controllo, la proprietà viene creata e inizializzata dal file. Se la proprietà viene archiviata, il relativo valore viene scritto nel file.

Le `CArchivePropExchange::ExchangePersistentProp`funzioni `CResetPropExchange::ExchangePersistentProp`, `CPropsetPropExchange::ExchangePersistentProp` , ed eseguono l'override di questa funzione virtuale pura.

## <a name="cpropexchangeexchangeprop"></a><a name="exchangeprop"></a>CPropExchange::ExchangeProp

Scambia una proprietà tra un supporto di archiviazione e il controllo.

```
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,
    VARTYPE vtProp,
    void* pvProp,
    const void* pvDefault = NULL) = 0 ;
```

### <a name="parameters"></a>Parametri

*pszPropName (nome spannima)*<br/>
Nome della proprietà da scambiare.

*vtProp (informazioni in base al tasi*<br/>
Simbolo che specifica il tipo di proprietà da scambiare. I valori possibili sono:

|Simbolo|Tipo di proprietà|
|------------|-------------------|
|VT_I2|**short**|
|VT_I4|**Lungo**|
|VT_BOOL|**Bool**|
|VT_BSTR|`CString`|
|VT_CY|**CY**|
|VT_R4|**Galleggiante**|
|VT_R8|**double**|

*pvProp*<br/>
Puntatore al valore della proprietà.

*pvPredefinito*<br/>
Puntatore a un valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà viene caricata dal supporto al controllo, il valore della proprietà viene recuperato dal supporto e archiviato nell'oggetto a cui punta *pvProp*. Se la proprietà viene archiviata nel supporto, il valore dell'oggetto a cui punta *pvProp* viene scritto nel supporto.

Le `CArchivePropExchange::ExchangeProp`funzioni `CResetPropExchange::ExchangeProp`, `CPropsetPropExchange::ExchangeProp` , ed eseguono l'override di questa funzione virtuale pura.

## <a name="cpropexchangeexchangeversion"></a><a name="exchangeversion"></a>CPropExchange::ExchangeVersion

Chiamato dal framework per gestire la persistenza di un numero di versione.

```
virtual BOOL ExchangeVersion(
    DWORD& dwVersionLoaded,
    DWORD dwVersionDefault,
    BOOL bConvert);
```

### <a name="parameters"></a>Parametri

*dwVersionLoaded*<br/>
Riferimento a una variabile in cui verrà archiviato il numero di versione dei dati persistenti caricati.

*dwVersionDefault*<br/>
Numero di versione corrente del controllo.

*bConvertire*<br/>
Indica se convertire dati persistenti nella versione corrente o mantenerli alla stessa versione caricata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; 0 in caso contrario.

## <a name="cpropexchangegetversion"></a><a name="getversion"></a>CPropExchange::GetVersion

Chiamare questa funzione per recuperare il numero di versione del controllo.

```
DWORD GetVersion();
```

### <a name="return-value"></a>Valore restituito

Numero di versione del controllo.

## <a name="cpropexchangeisasynchronous"></a><a name="isasynchronous"></a>CPropExchange::IsAsynchronous

Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.

```
BOOL IsAsynchronous();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se le proprietà vengono scambiate in modo asincrono, in caso contrario FALSE.

## <a name="cpropexchangeisloading"></a><a name="isloading"></a>CPropExchange::IsLoading

Chiamare questa funzione per determinare se le proprietà vengono caricate nel controllo o salvate da esso.

```
BOOL IsLoading();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le proprietà vengono caricate; in caso contrario 0.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[COleControl::DoPropExchange](../../mfc/reference/colecontrol-class.md#dopropexchange)
