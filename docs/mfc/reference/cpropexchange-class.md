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
ms.openlocfilehash: e9ad7c363f2580200af20baeb0acd7a93c1f603b
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420995"
---
# <a name="cpropexchange-class"></a>Classe CPropExchange

Supporta l'implementazione di persistenza per i controlli OLE.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CPropExchange
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropExchange:: ExchangeBlobProp](#exchangeblobprop)|Scambia una proprietà BLOB (Binary Large Object).|
|[CPropExchange:: ExchangeFontProp](#exchangefontprop)|Scambia una proprietà del tipo di carattere.|
|[CPropExchange:: ExchangePersistentProp](#exchangepersistentprop)|Scambia una proprietà tra un controllo e un file.|
|[CPropExchange:: ExchangeProp](#exchangeprop)|Scambia le proprietà di qualsiasi tipo incorporato.|
|[CPropExchange:: ExchangeVersion](#exchangeversion)|Scambia il numero di versione di un controllo OLE.|
|[CPropExchange:: GetVersion](#getversion)|Recupera il numero di versione di un controllo OLE.|
|[CPropExchange:: asincrono](#isasynchronous)|Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.|
|[CPropExchange:: Uploading](#isloading)|Indica se le proprietà vengono caricate nel controllo o salvate.|

## <a name="remarks"></a>Osservazioni

`CPropExchange` non dispone di una classe di base.

Stabilisce il contesto e la direzione di uno scambio di proprietà.

La persistenza è lo scambio delle informazioni sullo stato del controllo, generalmente rappresentate dalle relative proprietà, tra il controllo stesso e un supporto.

Il Framework costruisce un oggetto derivato da `CPropExchange` quando viene notificato che le proprietà di un controllo OLE devono essere caricate o archiviate in un archivio permanente.

Il Framework passa un puntatore a questo oggetto `CPropExchange` alla funzione di `DoPropExchange` del controllo. Se è stata usata una procedura guidata per creare i file di avvio per il controllo, le chiamate alla funzione del controllo `DoPropExchange` `COleControl::DoPropExchange`. La versione della classe base scambia le proprietà predefinite del controllo; modificare la versione della classe derivata in modo da scambiare le proprietà aggiunte al controllo.

`CPropExchange` può essere usato per serializzare le proprietà di un controllo o inizializzare le proprietà di un controllo durante il caricamento o la creazione di un controllo. Le funzioni membro `ExchangeProp` e `ExchangeFontProp` di `CPropExchange` sono in grado di archiviare le proprietà e di caricarle da supporti diversi.

Per ulteriori informazioni sull'utilizzo di `CPropExchange`, vedere l'articolo [controlli ActiveX MFC: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPropExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="exchangeblobprop"></a>CPropExchange:: ExchangeBlobProp

Serializza una proprietà che archivia dati BLOB (Binary Large Object).

```
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,
    HGLOBAL* phBlob,
    HGLOBAL hBlobDefault = NULL) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Nome della proprietà da scambiare.

*phBlob*<br/>
Puntatore a una variabile che punta alla posizione in cui è archiviata la proprietà (la variabile è in genere un membro della classe).

*hBlobDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Il valore della proprietà viene letto o scritto in base alle esigenze, la variabile a cui fa riferimento *phBlob*. Se *hBlobDefault* è specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, la serializzazione del controllo ha esito negativo.

Le funzioni `CArchivePropExchange::ExchangeBlobProp`, `CResetPropExchange::ExchangeBlobProp`e `CPropsetPropExchange::ExchangeBlobProp` eseguono l'override di questa funzione virtuale pura.

##  <a name="exchangefontprop"></a>CPropExchange:: ExchangeFontProp

Scambia una proprietà del tipo di carattere tra un supporto di archiviazione e il controllo.

```
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,
    CFontHolder& font,
    const FONTDESC* pFontDesc,
    LPFONTDISP pFontDispAmbient) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Nome della proprietà da scambiare.

*carattere*<br/>
Riferimento a un oggetto [CFontHolder](../../mfc/reference/cfontholder-class.md) che contiene la proprietà del tipo di carattere.

*pFontDesc*<br/>
Puntatore a una struttura [FONTDESC](/windows/win32/api/olectl/ns-olectl-fontdesc) contenente i valori per inizializzare lo stato predefinito della proprietà del tipo di carattere quando *pFontDispAmbient* è null.

*pFontDispAmbient*<br/>
Puntatore all'interfaccia `IFontDisp` di un tipo di carattere da utilizzare per inizializzare lo stato predefinito della proprietà del tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà del tipo di carattere viene caricata dal supporto al controllo, le caratteristiche del tipo di carattere vengono recuperate dal supporto e il `CFontHolder` oggetto a cui fa riferimento il *tipo di carattere* viene inizializzato con loro. Se è in corso l'archiviazione della proprietà font, le caratteristiche nell'oggetto Font vengono scritte sul supporto.

Le funzioni `CArchivePropExchange::ExchangeFontProp`, `CResetPropExchange::ExchangeFontProp`e `CPropsetPropExchange::ExchangeFontProp` eseguono l'override di questa funzione virtuale pura.

##  <a name="exchangepersistentprop"></a>CPropExchange:: ExchangePersistentProp

Scambia una proprietà tra il controllo e un file.

```
virtual BOOL ExchangePersistentProp(
    LPCTSTR pszPropName,
    LPUNKNOWN* ppUnk,
    REFIID iid,
    LPUNKNOWN pUnkDefault) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Nome della proprietà da scambiare.

*ppUnk*<br/>
Puntatore a una variabile che contiene un puntatore all'interfaccia `IUnknown` della proprietà (questa variabile è in genere un membro della classe).

*IID*<br/>
ID di interfaccia dell'interfaccia sulla proprietà che il controllo utilizzerà.

*pUnkDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà viene caricata dal file nel controllo, la proprietà viene creata e inizializzata dal file. Se la proprietà viene archiviata, il relativo valore viene scritto nel file.

Le funzioni `CArchivePropExchange::ExchangePersistentProp`, `CResetPropExchange::ExchangePersistentProp`e `CPropsetPropExchange::ExchangePersistentProp` eseguono l'override di questa funzione virtuale pura.

##  <a name="exchangeprop"></a>CPropExchange:: ExchangeProp

Scambia una proprietà tra un supporto di archiviazione e il controllo.

```
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,
    VARTYPE vtProp,
    void* pvProp,
    const void* pvDefault = NULL) = 0 ;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Nome della proprietà da scambiare.

*vtProp*<br/>
Simbolo che specifica il tipo della proprietà da scambiare. I valori possibili sono:

|Simbolo|Tipo di proprietà|
|------------|-------------------|
|VT_I2|**short**|
|VT_I4|**long**|
|VT_BOOL|**BOOL**|
|VT_BSTR|`CString`|
|VT_CY|**CY**|
|VT_R4|**float**|
|VT_R8|**double**|

*pvProp*<br/>
Puntatore al valore della proprietà.

*pvDefault*<br/>
Puntatore a un valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha avuto esito positivo; 0 in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà viene caricata dal supporto al controllo, il valore della proprietà viene recuperato dal supporto e archiviato nell'oggetto a cui punta *pvProp*. Se la proprietà viene archiviata nel supporto, il valore dell'oggetto a cui punta *pvProp* viene scritto sul supporto.

Le funzioni `CArchivePropExchange::ExchangeProp`, `CResetPropExchange::ExchangeProp`e `CPropsetPropExchange::ExchangeProp` eseguono l'override di questa funzione virtuale pura.

##  <a name="exchangeversion"></a>CPropExchange:: ExchangeVersion

Chiamata eseguita dal Framework per gestire la persistenza di un numero di versione.

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

*bConvert*<br/>
Indica se convertire i dati persistenti nella versione corrente o mantenerli nella stessa versione caricata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; 0 in caso contrario.

##  <a name="getversion"></a>CPropExchange:: GetVersion

Chiamare questa funzione per recuperare il numero di versione del controllo.

```
DWORD GetVersion();
```

### <a name="return-value"></a>Valore restituito

Numero di versione del controllo.

##  <a name="isasynchronous"></a>CPropExchange:: asincrono

Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.

```
BOOL IsAsynchronous();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se le proprietà vengono scambiate in modo asincrono; in caso contrario, FALSE.

##  <a name="isloading"></a>CPropExchange:: Uploading

Chiamare questa funzione per determinare se le proprietà vengono caricate nel controllo o salvate.

```
BOOL IsLoading();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le proprietà vengono caricate; in caso contrario, 0.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[COleControl::D oPropExchange](../../mfc/reference/colecontrol-class.md#dopropexchange)
