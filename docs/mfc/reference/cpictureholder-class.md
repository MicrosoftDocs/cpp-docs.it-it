---
title: Classe CPictureHolder
ms.date: 11/04/2016
f1_keywords:
- CPictureHolder
- AFXCTL/CPictureHolder
- AFXCTL/CPictureHolder::CPictureHolder
- AFXCTL/CPictureHolder::CreateEmpty
- AFXCTL/CPictureHolder::CreateFromBitmap
- AFXCTL/CPictureHolder::CreateFromIcon
- AFXCTL/CPictureHolder::CreateFromMetafile
- AFXCTL/CPictureHolder::GetDisplayString
- AFXCTL/CPictureHolder::GetPictureDispatch
- AFXCTL/CPictureHolder::GetType
- AFXCTL/CPictureHolder::Render
- AFXCTL/CPictureHolder::SetPictureDispatch
- AFXCTL/CPictureHolder::m_pPict
helpviewer_keywords:
- CPictureHolder [MFC], CPictureHolder
- CPictureHolder [MFC], CreateEmpty
- CPictureHolder [MFC], CreateFromBitmap
- CPictureHolder [MFC], CreateFromIcon
- CPictureHolder [MFC], CreateFromMetafile
- CPictureHolder [MFC], GetDisplayString
- CPictureHolder [MFC], GetPictureDispatch
- CPictureHolder [MFC], GetType
- CPictureHolder [MFC], Render
- CPictureHolder [MFC], SetPictureDispatch
- CPictureHolder [MFC], m_pPict
ms.assetid: a4f59775-704a-41dd-b5bd-2e531c95127a
ms.openlocfilehash: edb93b05c1187d2c78f4c1120ee76282167c9b49
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753602"
---
# <a name="cpictureholder-class"></a>Classe CPictureHolder

Implementa un Picture proprietà, che consente all'utente di visualizzare un'immagine nel controllo.

## <a name="syntax"></a>Sintassi

```
class CPictureHolder
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPictureHolder::CPictureHolder](#cpictureholder)|Costruisce un oggetto `CPictureHolder`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPictureHolder::CreateEmpty](#createempty)|Crea un oggetto `CPictureHolder` vuoto.|
|[CPictureHolder::CreateFromBitmap](#createfrombitmap)|Crea `CPictureHolder` un oggetto da una bitmap.|
|[CPictureHolder::CreateFromIcon](#createfromicon)|Crea `CPictureHolder` un oggetto da un'icona.|
|[CPictureHolder::CreateFromMetafile](#createfrommetafile)|Crea `CPictureHolder` un oggetto da un metafile.|
|[CPictureHolder::GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel visualizzatore proprietà di un contenitore di controlli.|
|[CPictureHolder::GetPictureDispatch](#getpicturedispatch)|Restituisce `CPictureHolder` l'interfaccia dell'oggetto. `IDispatch`|
|[CPictureHolder::GetType](#gettype)|Indica se `CPictureHolder` l'oggetto è una bitmap, un metafile o un'icona.|
|[CPictureHolder::Rendering](#render)|Esegue il rendering dell'immagine.|
|[CPictureHolder::SetPictureDispatch](#setpicturedispatch)|Imposta `CPictureHolder` l'interfaccia `IDispatch` dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPictureHolder::m_pPict](#m_ppict)|Puntatore a un oggetto immagine.|

## <a name="remarks"></a>Osservazioni

`CPictureHolder`non dispone di una classe base.

Con la proprietà Picture predefinita, lo sviluppatore può specificare una bitmap, un'icona o un metafile per la visualizzazione.

Per informazioni sulla creazione di proprietà personalizzate dell'immagine, vedere l'articolo [Controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX](../../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPictureHolder`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl.h

## <a name="cpictureholdercpictureholder"></a><a name="cpictureholder"></a>CPictureHolder::CPictureHolder

Costruisce un oggetto `CPictureHolder`.

```
CPictureHolder();
```

## <a name="cpictureholdercreateempty"></a><a name="createempty"></a>CPictureHolder::CreateEmpty

Crea un `CPictureHolder` oggetto vuoto e `IPicture` lo connette a un'interfaccia.

```
BOOL CreateEmpty();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario 0.

## <a name="cpictureholdercreatefrombitmap"></a><a name="createfrombitmap"></a>CPictureHolder::CreateFromBitmap

Utilizza una bitmap per inizializzare `CPictureHolder`l'oggetto immagine in un oggetto .

```
BOOL CreateFromBitmap(
    UINT idResource);

BOOL CreateFromBitmap(
    CBitmap* pBitmap,
    CPalette* pPal = NULL,
    BOOL bTransferOwnership = TRUE);

BOOL CreateFromBitmap(
    HBITMAP hbm,
    HPALETTE hpal = NULL,
    BOOL bTransferOwnership = FALSE);
```

### <a name="parameters"></a>Parametri

*idRisorsa*<br/>
ID risorsa di una risorsa bitmap.

*pBitmap*<br/>
Puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto.

*pPal (in pal)*<br/>
Puntatore a un [CPalette](../../mfc/reference/cpalette-class.md) oggetto.

*bTrasferisciProprietà*<br/>
Indica se l'oggetto immagine assumerà la proprietà degli oggetti bitmap e della tavolozza.

*Hbm*<br/>
Gestire la bitmap da `CPictureHolder` cui viene creato l'oggetto.

*hpal*<br/>
Gestire la tavolozza utilizzata per il rendering della bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *bTransferOwnership* è TRUE, il chiamante non deve utilizzare l'oggetto bitmap o tavolozza in alcun modo dopo la restituzione di questa chiamata. Se *bTransferOwnership* è FALSE, il chiamante è responsabile di garantire che gli oggetti bitmap e tavolozza rimangano validi per tutta la durata dell'oggetto immagine.

## <a name="cpictureholdercreatefromicon"></a><a name="createfromicon"></a>CPictureHolder::CreateFromIcon

Utilizza un'icona per inizializzare `CPictureHolder`l'oggetto immagine in un oggetto .

```
BOOL CreateFromIcon(
    UINT idResource);

BOOL CreateFromIcon(
    HICON hIcon,
    BOOL bTransferOwnership = FALSE);
```

### <a name="parameters"></a>Parametri

*idRisorsa*<br/>
ID risorsa di una risorsa bitmap.

*hIcon*<br/>
Gestire l'icona da `CPictureHolder` cui viene creato l'oggetto.

*bTrasferisciProprietà*<br/>
Indica se l'oggetto immagine assumerà la proprietà dell'oggetto icona.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *bTransferOwnership* è TRUE, il chiamante non deve utilizzare l'oggetto icona in alcun modo dopo la restituzione di questa chiamata. Se *bTransferOwnership* è FALSE, il chiamante è responsabile di garantire che l'oggetto icona rimanga valido per la durata dell'oggetto immagine.

## <a name="cpictureholdercreatefrommetafile"></a><a name="createfrommetafile"></a>CPictureHolder::CreateFromMetafile

Utilizza un metafile per inizializzare `CPictureHolder`l'oggetto immagine in un oggetto .

```
BOOL CreateFromMetafile(
    HMETAFILE hmf,
    int xExt,
    int yExt,
    BOOL bTransferOwnership = FALSE);
```

### <a name="parameters"></a>Parametri

*Hmf*<br/>
Handle per il metafile `CPictureHolder` utilizzato per creare l'oggetto.

*xExt (in modo non esagu*<br/>
Estensione X dell'immagine.

*yExt (informazioni in netto stato in stato di*<br/>
Estensione Y dell'immagine.

*bTrasferisciProprietà*<br/>
Indica se l'oggetto immagine assumerà la proprietà dell'oggetto metafile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se *bTransferOwnership* è TRUE, il chiamante non deve utilizzare l'oggetto metafile in alcun modo dopo la restituzione di questa chiamata. Se *bTransferOwnership* è FALSE, il chiamante è responsabile di garantire che l'oggetto metafile rimanga valido per tutta la durata dell'oggetto immagine.

## <a name="cpictureholdergetdisplaystring"></a><a name="getdisplaystring"></a>CPictureHolder::GetDisplayString

Recupera la stringa visualizzata nel visualizzatore proprietà di un contenitore.

```
BOOL GetDisplayString(CString& strValue);
```

### <a name="parameters"></a>Parametri

*strValue (informazioni in due)*<br/>
Riferimento al [CString](../../atl-mfc-shared/reference/cstringt-class.md) che deve contenere la stringa di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa viene recuperata correttamente; in caso contrario 0.

## <a name="cpictureholdergetpicturedispatch"></a><a name="getpicturedispatch"></a>CPictureHolder::GetPictureDispatch

Questa funzione restituisce `CPictureHolder` un puntatore all'interfaccia dell'oggetto. `IPictureDisp`

```
LPPICTUREDISP GetPictureDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia `CPictureHolder` `IPictureDisp` dell'oggetto.

### <a name="remarks"></a>Osservazioni

Il chiamante `Release` deve chiamare su questo puntatore al termine.

## <a name="cpictureholdergettype"></a><a name="gettype"></a>CPictureHolder::GetType

Indica se l'immagine è bitmap, metafile o icona.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito

Valore che indica il tipo di immagine. I valori possibili e i relativi significati sono i seguenti:

|valore|Significato|
|-----------|-------------|
|PICTYPE_UNINITIALIZED|`CPictureHolder`oggetto è uniti.|
|PICTYPE_NONE|`CPictureHolder`l'oggetto è vuoto.|
|PICTYPE_BITMAP|L'immagine è una bitmap.|
|PICTYPE_METAFILE|L'immagine è un metafile.|
|PICTYPE_ICON|Immagine è un'icona.|

## <a name="cpictureholderm_ppict"></a><a name="m_ppict"></a>CPictureHolder::m_pPict

Puntatore all'interfaccia `CPictureHolder` `IPicture` dell'oggetto.

```
LPPICTURE m_pPict;
```

## <a name="cpictureholderrender"></a><a name="render"></a>CPictureHolder::Rendering

Esegue il rendering dell'immagine nel rettangolo a cui fa riferimento *rcRender*.

```cpp
void Render(
    CDC* pDC,
    const CRect& rcRender,
    const CRect& rcWBounds);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di visualizzazione in cui deve essere eseguito il rendering dell'immagine.

*rcRender*<br/>
Rettangolo in cui deve essere eseguito il rendering dell'immagine.

*rcWBounds (Limiti)*<br/>
Rettangolo che rappresenta il rettangolo di delimitazione dell'oggetto che esegue il rendering dell'immagine. Per un controllo, questo rettangolo è il parametro *rcBounds* passato a un override di [COleControl::OnDraw](../../mfc/reference/colecontrol-class.md#ondraw).

## <a name="cpictureholdersetpicturedispatch"></a><a name="setpicturedispatch"></a>CPictureHolder::SetPictureDispatch

Connette l'oggetto `CPictureHolder` `IPictureDisp` a un'interfaccia.

```cpp
void SetPictureDispatch(LPPICTUREDISP pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp (in vi edisp)*<br/>
Puntatore alla `IPictureDisp` nuova interfaccia.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFontHolder](../../mfc/reference/cfontholder-class.md)
