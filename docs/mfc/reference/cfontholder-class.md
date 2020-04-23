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
ms.openlocfilehash: 36fbebc39101c5534bd52d4f79fee5286487a6e0
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754990"
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
|[CFontHolder::GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel visualizzatore proprietà di un contenitore.|
|[CFontHolder::GetFontDispatch](#getfontdispatch)|Restituisce l'interfaccia del `IDispatch` tipo di carattere.|
|[CFontHolder::GetFontHandle](#getfonthandle)|Restituisce un handle a un tipo di carattere Windows.|
|[CFontHolder::InitializeFont](#initializefont)|Inizializza un oggetto `CFontHolder`.|
|[CFontHolder::QueryTextMetrics](#querytextmetrics)|Recupera informazioni per il tipo di carattere correlato.|
|[CFontHolder::ReleaseFont](#releasefont)|Disconnette `CFontHolder` l'oggetto dalle interfacce `IFont` e `IFontNotification` .|
|[CFontHolder::Select](#select)|Seleziona una risorsa tipo di carattere in un contesto di dispositivo.|
|[CFontHolder::SetFont](#setfont)|Connette l'oggetto `CFontHolder` `IFont` a un'interfaccia.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontHolder::m_pFont](#m_pfont)|Puntatore all'interfaccia `CFontHolder` `IFont` dell'oggetto.|

## <a name="remarks"></a>Osservazioni

`CFontHolder`non dispone di una classe base.

Utilizzare questa classe per implementare proprietà del tipo di carattere personalizzate per il controllo. Per informazioni sulla creazione di tali proprietà, vedere l'articolo [Controlli ActiveX: utilizzo dei tipi di carattere](../../mfc/mfc-activex-controls-using-fonts.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CFontHolder`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="cfontholdercfontholder"></a><a name="cfontholder"></a>CFontHolder::CFontHolder

Costruisce un oggetto `CFontHolder`.

```
explicit CFontHolder(LPPROPERTYNOTIFYSINK pNotify);
```

### <a name="parameters"></a>Parametri

*pNotifica*<br/>
Puntatore all'interfaccia `IPropertyNotifySink` del tipo di carattere.

### <a name="remarks"></a>Osservazioni

È necessario `InitializeFont` chiamare per inizializzare l'oggetto risultante prima di utilizzarlo.

## <a name="cfontholdergetdisplaystring"></a><a name="getdisplaystring"></a>CFontHolder::GetDisplayString

Recupera una stringa che può essere visualizzata nel visualizzatore proprietà di un contenitore.

```
BOOL GetDisplayString(CString& strValue);
```

### <a name="parameters"></a>Parametri

*strValue (informazioni in due)*<br/>
Riferimento al [CString](../../atl-mfc-shared/reference/cstringt-class.md) che deve contenere la stringa di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa viene recuperata correttamente; in caso contrario 0.

## <a name="cfontholdergetfontdispatch"></a><a name="getfontdispatch"></a>CFontHolder::GetFontDispatch

Chiamare questa funzione per recuperare un puntatore all'interfaccia dispatch del tipo di carattere.

```
LPFONTDISP GetFontDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia `CFontHolder` `IFontDisp` dell'oggetto. Si noti che `GetFontDispatch` la `IUnknown::Release` funzione che chiama deve chiamare su questo puntatore a interfaccia al termine dell'operazione.

### <a name="remarks"></a>Osservazioni

Chiamare `InitializeFont` prima `GetFontDispatch`di chiamare .

## <a name="cfontholdergetfonthandle"></a><a name="getfonthandle"></a>CFontHolder::GetFontHandle

Chiamare questa funzione per ottenere un handle a un tipo di carattere di Windows.Call this function to get a handle to a Windows font.

```
HFONT GetFontHandle();

HFONT GetFontHandle(
    long cyLogical,
    long cyHimetric);
```

### <a name="parameters"></a>Parametri

*cyLogico*<br/>
Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.

*cyHimetrico*<br/>
Altezza, in MM_HIMETRIC unità, del controllo.

### <a name="return-value"></a>Valore restituito

Un handle per il Font oggetto; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Il rapporto di *cyLogical* e *cyHimetric* viene utilizzato per calcolare la dimensione di visualizzazione corretta, in unità logiche, per la dimensione in punti del carattere espressa in unità MM_HIMETRIC:

Dimensione del display ( *cilogical* / *cyHimetric*) X dimensione del carattere

La versione senza parametri restituisce un handle a un tipo di carattere dimensionato correttamente per lo schermo.

## <a name="cfontholderinitializefont"></a><a name="initializefont"></a>CFontHolder::InitializeFont

Inizializza un oggetto `CFontHolder`.

```cpp
void InitializeFont(
    const FONTDESC* pFontDesc = NULL,
    LPDISPATCH pFontDispAmbient = NULL);
```

### <a name="parameters"></a>Parametri

*pFontDesc (informazioni in stato incui)*<br/>
Puntatore a una struttura di descrizione del tipo di carattere ( [FONTDESC](/windows/win32/api/olectl/ns-olectl-fontdesc)) che specifica le caratteristiche del tipo di carattere.

*pFontDispAmbient*<br/>
Puntatore alla proprietà Font di ambiente del contenitore.

### <a name="remarks"></a>Osservazioni

Se *pFontDispAmbient* non è `CFontHolder` NULL, l'oggetto `IFont` è connesso a un clone dell'interfaccia utilizzata dalla proprietà Font di ambiente del contenitore.

Se *pFontDispAmbient* è NULL, viene creato un nuovo oggetto Font dalla descrizione del tipo di carattere a cui punta *pFontDesc* o, se *pFontDesc* è NULL, da una descrizione predefinita.

Chiamare questa funzione dopo `CFontHolder` aver creato un oggetto.

## <a name="cfontholderm_pfont"></a><a name="m_pfont"></a>CFontHolder::m_pFont

Puntatore all'interfaccia `CFontHolder` `IFont` dell'oggetto.

```
LPFONT m_pFont;
```

## <a name="cfontholderquerytextmetrics"></a><a name="querytextmetrics"></a>CFontHolder::QueryTextMetrics

Recupera informazioni sul tipo di `CFontHolder` carattere fisico rappresentato dall'oggetto.

```cpp
void QueryTextMetrics(LPTEXTMETRIC lptm);
```

### <a name="parameters"></a>Parametri

*lptm*<br/>
Puntatore a una struttura [TEXTMETRIC](/windows/win32/api/wingdi/ns-wingdi-textmetricw) che riceverà le informazioni.

## <a name="cfontholderreleasefont"></a><a name="releasefont"></a>CFontHolder::ReleaseFont

Questa funzione disconnette `CFontHolder` `IFont` l'oggetto dalla relativa interfaccia.

```cpp
void ReleaseFont();
```

## <a name="cfontholderselect"></a><a name="select"></a>CFontHolder::Select

Chiamare questa funzione per selezionare il tipo di carattere del controllo nel contesto di dispositivo specificato.

```
CFont* Select(
    CDC* pDC,
    long cyLogical,
    long cyHimetric);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Contesto di dispositivo in cui è selezionato il tipo di carattere.

*cyLogico*<br/>
Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.

*cyHimetrico*<br/>
Altezza, in MM_HIMETRIC unità, del controllo.

### <a name="return-value"></a>Valore restituito

Puntatore al tipo di carattere che viene sostituito.

### <a name="remarks"></a>Osservazioni

Vedere [GetFontHandle](#getfonthandle) per una descrizione dei parametri *cyLogical* e *cyHimetric.*

## <a name="cfontholdersetfont"></a><a name="setfont"></a>CFontHolder::SetFont

Rilascia qualsiasi tipo di `CFontHolder` carattere `IFont` esistente e connette l'oggetto a un'interfaccia.

```cpp
void SetFont(LPFONT pNewFont);
```

### <a name="parameters"></a>Parametri

*pNewFont (informazioni in base al tipo*<br/>
Puntatore alla `IFont` nuova interfaccia.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CPropExchange](../../mfc/reference/cpropexchange-class.md)
