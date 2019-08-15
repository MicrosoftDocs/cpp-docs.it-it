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
ms.openlocfilehash: 04de8141469f82bdd1fbb6adc1bae94d6026324c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506438"
---
# <a name="cfontholder-class"></a>Classe CFontHolder

Implementa la proprietà predefinita e incapsula la funzionalità di un oggetto tipo di carattere di Windows e l'interfaccia `IFont` .

## <a name="syntax"></a>Sintassi

```
class CFontHolder
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontHolder:: CFontHolder](#cfontholder)|Costruisce un oggetto `CFontHolder`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CFontHolder::GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel Visualizzatore proprietà di un contenitore.|
|[CFontHolder::GetFontDispatch](#getfontdispatch)|Restituisce l'interfaccia del `IDispatch` tipo di carattere.|
|[CFontHolder:: GetFontHandle](#getfonthandle)|Restituisce un handle per un tipo di carattere di Windows.|
|[CFontHolder::InitializeFont](#initializefont)|Inizializza un `CFontHolder` oggetto.|
|[CFontHolder::QueryTextMetrics](#querytextmetrics)|Recupera le informazioni per il tipo di carattere correlato.|
|[CFontHolder:: ReleaseFont](#releasefont)|Disconnette l' `CFontHolder` oggetto `IFont` dalle interfacce e `IFontNotification` .|
|[CFontHolder:: Select](#select)|Seleziona una risorsa del tipo di carattere in un contesto di dispositivo.|
|[CFontHolder::SetFont](#setfont)|Connette l' `CFontHolder` oggetto a un' `IFont` interfaccia.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CFontHolder::m_pFont](#m_pfont)|Puntatore all' `IFont` interfaccia dell' `CFontHolder` oggetto.|

## <a name="remarks"></a>Note

`CFontHolder`non dispone di una classe base.

Usare questa classe per implementare proprietà dei tipi di carattere personalizzate per il controllo. Per informazioni sulla creazione di tali proprietà, vedere l' [articolo controlli ActiveX: Utilizzo di](../../mfc/mfc-activex-controls-using-fonts.md)tipi di carattere.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CFontHolder`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

##  <a name="cfontholder"></a>CFontHolder:: CFontHolder

Costruisce un oggetto `CFontHolder`.

```
explicit CFontHolder(LPPROPERTYNOTIFYSINK pNotify);
```

### <a name="parameters"></a>Parametri

*pNotify*<br/>
Puntatore all' `IPropertyNotifySink` interfaccia del tipo di carattere.

### <a name="remarks"></a>Note

Prima di usarla, è necessario chiamare `InitializeFont` per inizializzare l'oggetto risultante.

##  <a name="getdisplaystring"></a>  CFontHolder::GetDisplayString

Recupera una stringa che può essere visualizzata nel Visualizzatore proprietà di un contenitore.

```
BOOL GetDisplayString(CString& strValue);
```

### <a name="parameters"></a>Parametri

*strValue*<br/>
Riferimento all'oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che deve conservare la stringa di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa viene recuperata correttamente. in caso contrario, 0.

##  <a name="getfontdispatch"></a>CFontHolder:: GetFontDispatch

Chiamare questa funzione per recuperare un puntatore all'interfaccia dispatch del tipo di carattere.

```
LPFONTDISP GetFontDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `IFontDisp` interfaccia dell' `CFontHolder` oggetto. Si noti che la funzione che `GetFontDispatch` chiama deve `IUnknown::Release` chiamare su questo puntatore di interfaccia quando viene eseguita.

### <a name="remarks"></a>Note

Chiamare `InitializeFont` prima di `GetFontDispatch`chiamare.

##  <a name="getfonthandle"></a>CFontHolder:: GetFontHandle

Chiamare questa funzione per ottenere un handle per un tipo di carattere di Windows.

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
Altezza, in unità MM_HIMETRIC, del controllo.

### <a name="return-value"></a>Valore restituito

Handle per l'oggetto del tipo di carattere. in caso contrario, NULL.

### <a name="remarks"></a>Note

Il rapporto tra *cyLogical* e *cyHimetric* viene usato per calcolare le dimensioni di visualizzazione appropriate, in unità logiche, per le dimensioni dei punti del tipo di carattere espresse in unità MM_HIMETRIC:

Dimensioni visualizzazione = ( *cyLogical* / *cyHimetric*) X dimensioni carattere

La versione senza parametri restituisce un handle per una dimensione del tipo di carattere corretta per la schermata.

##  <a name="initializefont"></a>  CFontHolder::InitializeFont

Inizializza un `CFontHolder` oggetto.

```
void InitializeFont(
    const FONTDESC* pFontDesc = NULL,
    LPDISPATCH pFontDispAmbient = NULL);
```

### <a name="parameters"></a>Parametri

*pFontDesc*<br/>
Puntatore a una struttura di descrizione del tipo di carattere ( [FONTDESC](/windows/win32/api/olectl/ns-olectl-fontdesc)) che specifica le caratteristiche del tipo di carattere.

*pFontDispAmbient*<br/>
Puntatore alla proprietà del tipo di carattere di ambiente del contenitore.

### <a name="remarks"></a>Note

Se *pFontDispAmbient* non è null, l' `CFontHolder` oggetto è connesso a `IFont` un clone dell'interfaccia utilizzata dalla proprietà del tipo di carattere ambiente del contenitore.

Se *pFontDispAmbient* è null, viene creato un nuovo oggetto Font dalla descrizione del tipo di carattere a cui punta *pFontDesc* o, se *pFontDesc* è null, da una descrizione predefinita.

Chiamare questa funzione dopo la costruzione di `CFontHolder` un oggetto.

##  <a name="m_pfont"></a>  CFontHolder::m_pFont

Puntatore all' `IFont` interfaccia dell' `CFontHolder` oggetto.

```
LPFONT m_pFont;
```

##  <a name="querytextmetrics"></a>  CFontHolder::QueryTextMetrics

Recupera le informazioni sul tipo di carattere fisico rappresentato `CFontHolder` dall'oggetto.

```
void QueryTextMetrics(LPTEXTMETRIC lptm);
```

### <a name="parameters"></a>Parametri

*lptm*<br/>
Puntatore a una struttura [TEXTMETRIC](/windows/win32/api/wingdi/ns-wingdi-textmetricw) che riceverà le informazioni.

##  <a name="releasefont"></a>CFontHolder:: ReleaseFont

Questa funzione disconnette l' `CFontHolder` oggetto dalla relativa `IFont` interfaccia.

```
void ReleaseFont();
```

##  <a name="select"></a>CFontHolder:: Select

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

*cyLogical*<br/>
Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.

*cyHimetric*<br/>
Altezza, in unità MM_HIMETRIC, del controllo.

### <a name="return-value"></a>Valore restituito

Puntatore al tipo di carattere da sostituire.

### <a name="remarks"></a>Note

Vedere [GetFontHandle](#getfonthandle) per una descrizione dei parametri *cyLogical* e *cyHimetric* .

##  <a name="setfont"></a>CFontHolder:: sefont

Rilascia qualsiasi tipo di carattere esistente e `CFontHolder` connette l'oggetto `IFont` a un'interfaccia.

```
void SetFont(LPFONT pNewFont);
```

### <a name="parameters"></a>Parametri

*pNewFont*<br/>
Puntatore alla nuova `IFont` interfaccia.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CPropExchange](../../mfc/reference/cpropexchange-class.md)
