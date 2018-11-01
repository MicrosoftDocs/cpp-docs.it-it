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
ms.openlocfilehash: 772388d069bdec274bd396b776d404711b694771
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50560372"
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
|[CPropExchange::ExchangeBlobProp](#exchangeblobprop)|Scambia una proprietà oggetto binario di grandi dimensioni (BLOB).|
|[CPropExchange::ExchangeFontProp](#exchangefontprop)|Scambia una proprietà del tipo di carattere.|
|[CPropExchange::ExchangePersistentProp](#exchangepersistentprop)|Scambia una proprietà tra un controllo e un file.|
|[CPropExchange::ExchangeProp](#exchangeprop)|Scambia le proprietà di qualsiasi tipo predefinito.|
|[CPropExchange::ExchangeVersion](#exchangeversion)|Scambia il numero di versione di un controllo OLE.|
|[CPropExchange:: GetVersion](#getversion)|Recupera il numero di versione di un controllo OLE.|
|[CPropExchange::IsAsynchronous](#isasynchronous)|Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.|
|[CPropExchange::IsLoading](#isloading)|Indica se le proprietà vengono caricati nel controllo o salvato da quest'ultimo.|

## <a name="remarks"></a>Note

`CPropExchange` non è una classe di base.

Stabilisce il contesto e la direzione di un cambio di proprietà.

La persistenza è lo scambio di informazioni sullo stato del controllo, in genere rappresentate dalle relative proprietà, tra il controllo stesso e un supporto.

Il framework crea un oggetto derivato da `CPropExchange` archiviazione archiviato in persistente o quando si riceve una notifica che devono essere caricati dalla proprietà di un controllo OLE.

Il framework passa un puntatore a questa `CPropExchange` oggetto per il controllo `DoPropExchange` (funzione). Se si usa una procedura guidata per creare i file di avvio per il controllo, il controllo `DoPropExchange` chiamate di funzione `COleControl::DoPropExchange`. La versione della classe base Scambia proprietà predefinite del controllo; si modifica versione della classe derivata alle proprietà di exchange che sono aggiunti al controllo.

`CPropExchange` può essere utilizzato per serializzare le proprietà di un controllo o inizializzare le proprietà di un controllo durante il caricamento o la creazione di un controllo. Il `ExchangeProp` e `ExchangeFontProp` dalle funzioni membro di `CPropExchange` sono in grado di archiviare proprietà a e caricarli dai supporti diversi.

Per altre informazioni sull'uso `CPropExchange`, vedere l'articolo [controlli ActiveX MFC: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPropExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="exchangeblobprop"></a>  CPropExchange::ExchangeBlobProp

Serializza una proprietà che archivia dati binary large object (BLOB).

```
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,
    HGLOBAL* phBlob,
    HGLOBAL hBlobDefault = NULL) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Il nome della proprietà scambiati.

*phBlob*<br/>
Puntatore a una variabile che punta all'archiviazione della proprietà (la variabile è in genere un membro della classe).

*hBlobDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Il valore della proprietà è di lettura o scritto a seconda dei casi, la variabile fa riferimento *phBlob*. Se *hBlobDefault* viene specificato, verrà usato come valore predefinito della proprietà. Questo valore viene usato se, per qualsiasi motivo, la serializzazione del controllo ha esito negativo.

Le funzioni `CArchivePropExchange::ExchangeBlobProp`, `CResetPropExchange::ExchangeBlobProp`, e `CPropsetPropExchange::ExchangeBlobProp` eseguire l'override di questa funzione virtuale pura.

##  <a name="exchangefontprop"></a>  CPropExchange::ExchangeFontProp

Una proprietà del tipo di carattere tra un supporto di archiviazione e il controllo consente lo scambio.

```
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,
    CFontHolder& font,
    const FONTDESC* pFontDesc,
    LPFONTDISP pFontDispAmbient) = 0;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Il nome della proprietà scambiati.

*tipo di carattere*<br/>
Un riferimento a un [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto che contiene la proprietà del tipo di carattere.

*pFontDesc*<br/>
Un puntatore a un [FONTDESC](/windows/desktop/api/olectl/ns-olectl-tagfontdesc) struttura che contiene i valori per inizializzare lo stato predefinito della proprietà del tipo di carattere quando *pFontDispAmbient* è NULL.

*pFontDispAmbient*<br/>
Un puntatore al `IFontDisp` interfaccia di un tipo di carattere da utilizzare per inizializzare lo stato predefinito della proprietà del tipo di carattere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Se la proprietà del tipo di carattere viene caricata dal supporto per il controllo, le caratteristiche del tipo di carattere vengono recuperate dal supporto e il `CFontHolder` oggetto cui fa riferimento *font* viene inizializzato con essi. Se la proprietà del carattere è stata archiviata, le caratteristiche dell'oggetto del tipo di carattere vengono scritti nel supporto di.

Le funzioni `CArchivePropExchange::ExchangeFontProp`, `CResetPropExchange::ExchangeFontProp`, e `CPropsetPropExchange::ExchangeFontProp` eseguire l'override di questa funzione virtuale pura.

##  <a name="exchangepersistentprop"></a>  CPropExchange::ExchangePersistentProp

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
Il nome della proprietà scambiati.

*ppUnk*<br/>
Un puntatore a una variabile che contiene un puntatore alla proprietà `IUnknown` interfaccia (questa variabile è in genere un membro della classe).

*IID*<br/>
ID di interfaccia dell'interfaccia sulla proprietà che verrà utilizzato il controllo.

*pUnkDefault*<br/>
Valore predefinito per la proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Se la proprietà viene caricata dal file al controllo, la proprietà viene creata e inizializzata dal file. Se la proprietà è stata archiviata, il relativo valore viene scritto nel file.

Le funzioni `CArchivePropExchange::ExchangePersistentProp`, `CResetPropExchange::ExchangePersistentProp`, e `CPropsetPropExchange::ExchangePersistentProp` eseguire l'override di questa funzione virtuale pura.

##  <a name="exchangeprop"></a>  CPropExchange::ExchangeProp

Una proprietà tra un supporto di archiviazione e il controllo consente lo scambio.

```
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,
    VARTYPE vtProp,
    void* pvProp,
    const void* pvDefault = NULL) = 0 ;
```

### <a name="parameters"></a>Parametri

*pszPropName*<br/>
Il nome della proprietà scambiati.

*vtProp*<br/>
Un simbolo che specifica il tipo della proprietà scambiati. I possibili valori sono:

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

Diverso da zero se lo scambio ha esito positivo. 0 se ha esito negativo.

### <a name="remarks"></a>Note

Se la proprietà viene caricata dal supporto per il controllo, il valore della proprietà viene recuperato dal supporto e archiviato nell'oggetto a cui punta *pvProp*. Se la proprietà è stata archiviata nel supporto di, il valore dell'oggetto a cui punta *pvProp* vengono scritte sul supporto.

Le funzioni `CArchivePropExchange::ExchangeProp`, `CResetPropExchange::ExchangeProp`, e `CPropsetPropExchange::ExchangeProp` eseguire l'override di questa funzione virtuale pura.

##  <a name="exchangeversion"></a>  CPropExchange::ExchangeVersion

Chiamato dal framework per gestire la persistenza di un numero di versione.

```
virtual BOOL ExchangeVersion(
    DWORD& dwVersionLoaded,
    DWORD dwVersionDefault,
    BOOL bConvert);
```

### <a name="parameters"></a>Parametri

*dwVersionLoaded*<br/>
Riferimento a una variabile in cui verrà archiviato il numero di versione dei dati persistenti in fase di caricamento.

*dwVersionDefault*<br/>
Il numero di versione corrente del controllo.

*bConvert*<br/>
Indica se convertire i dati persistenti alla versione corrente o lasciare la stessa versione che è stata caricata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario 0.

##  <a name="getversion"></a>  CPropExchange:: GetVersion

Chiamare questa funzione per recuperare il numero di versione del controllo.

```
DWORD GetVersion();
```

### <a name="return-value"></a>Valore restituito

Il numero di versione del controllo.

##  <a name="isasynchronous"></a>  CPropExchange::IsAsynchronous

Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.

```
BOOL IsAsynchronous();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se le proprietà vengono scambiati in modo asincrono, in caso contrario FALSE.

##  <a name="isloading"></a>  CPropExchange::IsLoading

Chiamare questa funzione per determinare se le proprietà vengono caricati al controllo o salvati da quest'ultimo.

```
BOOL IsLoading();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il caricamento delle proprietà; in caso contrario 0.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[COleControl::DoPropExchange](../../mfc/reference/colecontrol-class.md#dopropexchange)

