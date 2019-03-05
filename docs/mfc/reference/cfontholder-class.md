---
title: Classe CFontHolder
ms.date: 11/04/2016
f1_keywords:
- CFontHolder
- AFXCTL/CFontHolder
- AFXCTL/CFontHolder::CFontHolder
- AFXCTL/CFontHolder::GetDisplayString
- AFXCTL/CFontHolder::GetFontDispatch
- AFXCTL/CFontHolder::GetFontHandle
- AFXCTL/CFontHolder::InitializeFont
- AFXCTL/CFontHolder::QueryTextMetrics
- AFXCTL/CFontHolder::ReleaseFont
- AFXCTL/CFontHolder::Select
- AFXCTL/CFontHolder::SetFont
- AFXCTL/CFontHolder::m_pFont
helpviewer_keywords:
- CFontHolder [MFC], CFontHolder
- CFontHolder [MFC], GetDisplayString
- CFontHolder [MFC], GetFontDispatch
- CFontHolder [MFC], GetFontHandle
- CFontHolder [MFC], InitializeFont
- CFontHolder [MFC], QueryTextMetrics
- CFontHolder [MFC], ReleaseFont
- CFontHolder [MFC], Select
- CFontHolder [MFC], SetFont
- CFontHolder [MFC], m_pFont
ms.assetid: 728ab472-0c97-440d-889f-1324c6e1b6b8
ms.openlocfilehash: 623ce5da46716e3f9a562862fc0375fb8704bb21
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297879"
---
# <a name="cfontholder-class"></a>Classe CFontHolder

Implementa la proprietà predefinita e incapsula la funzionalità di un oggetto tipo di carattere di Windows e l'interfaccia `IFont` .

## <a name="syntax"></a>Sintassi

```
class CFontHolder
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontHolder::CFontHolder](#cfontholder)|Costruisce un oggetto `CFontHolder`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontHolder::GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel Visualizzatore di proprietà del contenitore.|
|[CFontHolder::GetFontDispatch](#getfontdispatch)|Restituisce il tipo di carattere `IDispatch` interfaccia.|
|[CFontHolder::GetFontHandle](#getfonthandle)|Restituisce un handle per un tipo di carattere di Windows.|
|[CFontHolder::InitializeFont](#initializefont)|Inizializza un `CFontHolder` oggetto.|
|[CFontHolder::QueryTextMetrics](#querytextmetrics)|Recupera le informazioni per il tipo di carattere correlato.|
|[CFontHolder::ReleaseFont](#releasefont)|Disconnette il `CFontHolder` dall'oggetto di `IFont` e `IFontNotification` interfacce.|
|[CFontHolder::Select](#select)|Seleziona una risorsa del tipo di carattere in un contesto di dispositivo.|
|[CFontHolder::SetFont](#setfont)|Si connette il `CFontHolder` dell'oggetto a un `IFont` interfaccia.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontHolder::m_pFont](#m_pfont)|Un puntatore per il `CFontHolder` dell'oggetto `IFont` interfaccia.|

## <a name="remarks"></a>Note

`CFontHolder` non è una classe di base.

Utilizzare questa classe per implementare le proprietà di tipo di carattere personalizzato per il controllo. Per informazioni sulla creazione di tali proprietà, vedere l'articolo [controlli ActiveX: Usando i tipi di carattere](../../mfc/mfc-activex-controls-using-fonts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CFontHolder`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="cfontholder"></a>  CFontHolder::CFontHolder

Costruisce un oggetto `CFontHolder`.

```
explicit CFontHolder(LPPROPERTYNOTIFYSINK pNotify);
```

### <a name="parameters"></a>Parametri

*pNotify*<br/>
Puntatore a un tipo di carattere `IPropertyNotifySink` interfaccia.

### <a name="remarks"></a>Note

È necessario chiamare `InitializeFont` per inizializzare l'oggetto risultante prima di poterla usare.

##  <a name="getdisplaystring"></a>  CFontHolder::GetDisplayString

Recupera una stringa che può essere visualizzata nel Visualizzatore di proprietà del contenitore.

```
BOOL GetDisplayString(CString& strValue);
```

### <a name="parameters"></a>Parametri

*strValue*<br/>
Riferimento per la [CString](../../atl-mfc-shared/reference/cstringt-class.md) che deve contenere la stringa da visualizzare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa viene recuperata correttamente. in caso contrario 0.

##  <a name="getfontdispatch"></a>  CFontHolder::GetFontDispatch

Chiamare questa funzione per recuperare un puntatore a interfaccia dispatch del tipo di carattere.

```
LPFONTDISP GetFontDispatch();
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il `CFontHolder` dell'oggetto `IFontDisp` interfaccia. Si noti che la funzione che chiama `GetFontDispatch` chiamino `IUnknown::Release` su questo puntatore a interfaccia quando è stata eseguita.

### <a name="remarks"></a>Note

Chiamare `InitializeFont` prima di chiamare `GetFontDispatch`.

##  <a name="getfonthandle"></a>  CFontHolder::GetFontHandle

Chiamare questa funzione per ottenere un handle a un tipo di carattere di Windows.

```
HFONT GetFontHandle();

HFONT GetFontHandle(
    long cyLogical,
    long cyHimetric);
```

### <a name="parameters"></a>Parametri

*cyLogical*<br/>
Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.

*cyHimetric*<br/>
Altezza, in unità di misura come MM_HIMETRIC, del controllo.

### <a name="return-value"></a>Valore restituito

Un handle all'oggetto del tipo di carattere. in caso contrario NULL.

### <a name="remarks"></a>Note

Il rapporto tra *cyLogical* e *cyHimetric* viene usato per calcolare le dimensioni di visualizzazione corretta, in unità logiche, per le dimensioni del carattere punto espressa in unità come MM_HIMETRIC:

Dimensioni visualizzazione = ( *cyLogical* / *cyHimetric*) X dimensioni del carattere

La versione senza parametri restituisce un handle per un tipo di carattere dimensione corrette per la schermata.

##  <a name="initializefont"></a>  CFontHolder::InitializeFont

Inizializza un `CFontHolder` oggetto.

```
void InitializeFont(
    const FONTDESC* pFontDesc = NULL,
    LPDISPATCH pFontDispAmbient = NULL);
```

### <a name="parameters"></a>Parametri

*pFontDesc*<br/>
Puntatore a una struttura di descrizione del tipo di carattere ( [FONTDESC](/windows/desktop/api/olectl/ns-olectl-tagfontdesc)) che specifica le caratteristiche del tipo di carattere.

*pFontDispAmbient*<br/>
Puntatore alla proprietà del tipo di carattere ambiente del contenitore.

### <a name="remarks"></a>Note

Se *pFontDispAmbient* non è NULL, il `CFontHolder` oggetto è connesso a un clone del `IFont` interfaccia utilizzata dalle proprietà del tipo di carattere ambiente del contenitore.

Se *pFontDispAmbient* è NULL, un nuovo tipo di carattere dell'oggetto viene creato uno dalla descrizione del tipo di carattere a cui punta *pFontDesc* oppure, se *pFontDesc* è NULL, da un valore predefinito Descrizione.

Chiamare questa funzione dopo la costruzione di un `CFontHolder` oggetto.

##  <a name="m_pfont"></a>  CFontHolder::m_pFont

Un puntatore per il `CFontHolder` dell'oggetto `IFont` interfaccia.

```
LPFONT m_pFont;
```

##  <a name="querytextmetrics"></a>  CFontHolder::QueryTextMetrics

Recupera le informazioni sul tipo di carattere fisico rappresentato dal `CFontHolder` oggetto.

```
void QueryTextMetrics(LPTEXTMETRIC lptm);
```

### <a name="parameters"></a>Parametri

*lptm*<br/>
Un puntatore a un [TEXTMETRIC](/windows/desktop/api/wingdi/ns-wingdi-tagtextmetrica) struttura che riceverà le informazioni.

##  <a name="releasefont"></a>  CFontHolder::ReleaseFont

Questa funzione consente di disconnettere il `CFontHolder` dall'oggetto relativo `IFont` interfaccia.

```
void ReleaseFont();
```

##  <a name="select"></a>  CFontHolder::Select

Chiamare questa funzione per selezionare tipo di carattere del controllo nel contesto di dispositivo specificato.

```
CFont* Select(
    CDC* pDC,
    long cyLogical,
    long cyHimetric);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Contesto di dispositivo in cui è stato selezionato il tipo di carattere.

*cyLogical*<br/>
Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.

*cyHimetric*<br/>
Altezza, in unità di misura come MM_HIMETRIC, del controllo.

### <a name="return-value"></a>Valore restituito

Puntatore al tipo di carattere che viene sostituito.

### <a name="remarks"></a>Note

Visualizzare [GetFontHandle](#getfonthandle) per una discussione sulle *cyLogical* e *cyHimetric* parametri.

##  <a name="setfont"></a>  CFontHolder::SetFont

Rilascia qualsiasi tipo di carattere esistente e si connette il `CFontHolder` dell'oggetto a un `IFont` interfaccia.

```
void SetFont(LPFONT pNewFont);
```

### <a name="parameters"></a>Parametri

*pNewFont*<br/>
Puntatore al nuovo `IFont` interfaccia.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CPropExchange](../../mfc/reference/cpropexchange-class.md)
