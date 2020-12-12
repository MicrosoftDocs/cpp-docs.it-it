---
description: 'Altre informazioni su: Classe CPictureHolder'
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
ms.openlocfilehash: 47eacb66191e21b300aaa0d06bc23155fabaf651
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301477"
---
# <a name="cpictureholder-class"></a>Classe CPictureHolder

Implementa una proprietà immagine che consente all'utente di visualizzare un'immagine nel controllo.

## <a name="syntax"></a>Sintassi

```
class CPictureHolder
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CPictureHolder:: CPictureHolder](#cpictureholder)|Costruisce un oggetto `CPictureHolder`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPictureHolder:: CreateEmpty](#createempty)|Crea un oggetto `CPictureHolder` vuoto.|
|[CPictureHolder:: CreateFromBitmap](#createfrombitmap)|Crea un `CPictureHolder` oggetto da una bitmap.|
|[CPictureHolder:: CreateFromIcon](#createfromicon)|Crea un `CPictureHolder` oggetto da un'icona.|
|[CPictureHolder:: CreateFromMetafile](#createfrommetafile)|Crea un `CPictureHolder` oggetto da un metafile.|
|[CPictureHolder:: GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel Visualizzatore proprietà di un contenitore di controlli.|
|[CPictureHolder:: GetPictureDispatch](#getpicturedispatch)|Restituisce l' `CPictureHolder` interfaccia dell'oggetto `IDispatch` .|
|[CPictureHolder:: GetType](#gettype)|Indica se l' `CPictureHolder` oggetto è una bitmap, un metafile o un'icona.|
|[CPictureHolder:: Render](#render)|Esegue il rendering dell'immagine.|
|[CPictureHolder:: SetPictureDispatch](#setpicturedispatch)|Imposta l' `CPictureHolder` interfaccia dell'oggetto `IDispatch` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CPictureHolder:: m_pPict](#m_ppict)|Puntatore a un oggetto immagine.|

## <a name="remarks"></a>Commenti

`CPictureHolder` non dispone di una classe base.

Con la proprietà Stock Picture, lo sviluppatore può specificare una bitmap, un'icona o un metafile per la visualizzazione.

Per informazioni sulla creazione di proprietà immagine personalizzate, vedere l'articolo [controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX](../../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CPictureHolder`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="cpictureholdercpictureholder"></a><a name="cpictureholder"></a> CPictureHolder:: CPictureHolder

Costruisce un oggetto `CPictureHolder`.

```
CPictureHolder();
```

## <a name="cpictureholdercreateempty"></a><a name="createempty"></a> CPictureHolder:: CreateEmpty

Crea un `CPictureHolder` oggetto vuoto e lo connette a un' `IPicture` interfaccia.

```
BOOL CreateEmpty();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario, 0.

## <a name="cpictureholdercreatefrombitmap"></a><a name="createfrombitmap"></a> CPictureHolder:: CreateFromBitmap

Usa una bitmap per inizializzare l'oggetto immagine in un oggetto `CPictureHolder` .

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

*idResource*<br/>
ID risorsa di una risorsa bitmap.

*pBitmap*<br/>
Puntatore a un oggetto [CBitmap](../../mfc/reference/cbitmap-class.md) .

*pPal*<br/>
Puntatore a un oggetto [CPalette](../../mfc/reference/cpalette-class.md) .

*bTransferOwnership*<br/>
Indica se l'oggetto immagine assumerà la proprietà degli oggetti bitmap e tavolozza.

*HBM*<br/>
Handle per la bitmap da cui `CPictureHolder` viene creato l'oggetto.

*hpal*<br/>
Handle per la tavolozza utilizzata per il rendering della bitmap.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se *bTransferOwnership* è true, il chiamante non deve usare l'oggetto bitmap o palette in alcun modo dopo la restituzione di questa chiamata. Se *bTransferOwnership* è false, il chiamante è responsabile di garantire che gli oggetti bitmap e palette rimangano validi per la durata dell'oggetto immagine.

## <a name="cpictureholdercreatefromicon"></a><a name="createfromicon"></a> CPictureHolder:: CreateFromIcon

Usa un'icona per inizializzare l'oggetto immagine in un oggetto `CPictureHolder` .

```
BOOL CreateFromIcon(
    UINT idResource);

BOOL CreateFromIcon(
    HICON hIcon,
    BOOL bTransferOwnership = FALSE);
```

### <a name="parameters"></a>Parametri

*idResource*<br/>
ID risorsa di una risorsa bitmap.

*hIcon*<br/>
Handle per l'icona da cui `CPictureHolder` viene creato l'oggetto.

*bTransferOwnership*<br/>
Indica se l'oggetto immagine assume la proprietà dell'oggetto Icon.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se *bTransferOwnership* è true, il chiamante non deve usare l'oggetto Icon in alcun modo dopo la restituzione di questa chiamata. Se *bTransferOwnership* è false, il chiamante è responsabile di garantire che l'oggetto Icon rimanga valido per la durata dell'oggetto Picture.

## <a name="cpictureholdercreatefrommetafile"></a><a name="createfrommetafile"></a> CPictureHolder:: CreateFromMetafile

Usa un metafile per inizializzare l'oggetto immagine in un oggetto `CPictureHolder` .

```
BOOL CreateFromMetafile(
    HMETAFILE hmf,
    int xExt,
    int yExt,
    BOOL bTransferOwnership = FALSE);
```

### <a name="parameters"></a>Parametri

*HMF*<br/>
Handle per il metafile utilizzato per creare l' `CPictureHolder` oggetto.

*xExt*<br/>
Ambito X dell'immagine.

*yExt*<br/>
Extent Y dell'immagine.

*bTransferOwnership*<br/>
Indica se l'oggetto immagine assume la proprietà dell'oggetto Metafile.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se *bTransferOwnership* è true, il chiamante non deve usare l'oggetto Metafile in alcun modo dopo la restituzione di questa chiamata. Se *bTransferOwnership* è false, il chiamante è responsabile di garantire che l'oggetto Metafile rimanga valido per la durata dell'oggetto immagine.

## <a name="cpictureholdergetdisplaystring"></a><a name="getdisplaystring"></a> CPictureHolder:: GetDisplayString

Recupera la stringa visualizzata nel Visualizzatore proprietà di un contenitore.

```
BOOL GetDisplayString(CString& strValue);
```

### <a name="parameters"></a>Parametri

*strValue*<br/>
Riferimento all'oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che deve conservare la stringa di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la stringa viene recuperata correttamente. in caso contrario, 0.

## <a name="cpictureholdergetpicturedispatch"></a><a name="getpicturedispatch"></a> CPictureHolder:: GetPictureDispatch

Questa funzione restituisce un puntatore all' `CPictureHolder` interfaccia dell'oggetto `IPictureDisp` .

```
LPPICTUREDISP GetPictureDispatch();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia dell' `CPictureHolder` oggetto `IPictureDisp` .

### <a name="remarks"></a>Commenti

Il chiamante deve chiamare `Release` su questo puntatore al termine dell'operazione.

## <a name="cpictureholdergettype"></a><a name="gettype"></a> CPictureHolder:: GetType

Indica se l'immagine è una bitmap, un metafile o un'icona.

```
short GetType();
```

### <a name="return-value"></a>Valore restituito

Valore che indica il tipo di immagine. I valori possibili e i relativi significati sono i seguenti:

|Valore|Significato|
|-----------|-------------|
|PICTYPE_UNINITIALIZED|`CPictureHolder` l'oggetto è unititialized.|
|PICTYPE_NONE|`CPictureHolder` oggetto vuoto.|
|PICTYPE_BITMAP|Immagine è una bitmap.|
|PICTYPE_METAFILE|L'immagine è un metafile.|
|PICTYPE_ICON|Immagine è un'icona.|

## <a name="cpictureholderm_ppict"></a><a name="m_ppict"></a> CPictureHolder:: m_pPict

Puntatore all'interfaccia dell' `CPictureHolder` oggetto `IPicture` .

```
LPPICTURE m_pPict;
```

## <a name="cpictureholderrender"></a><a name="render"></a> CPictureHolder:: Render

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

*rcWBounds*<br/>
Rettangolo che rappresenta il rettangolo di delimitazione dell'oggetto che esegue il rendering dell'immagine. Per un controllo, questo rettangolo è il parametro *rcBounds* passato a un override di [COleControl:: onpare](../../mfc/reference/colecontrol-class.md#ondraw).

## <a name="cpictureholdersetpicturedispatch"></a><a name="setpicturedispatch"></a> CPictureHolder:: SetPictureDispatch

Connette l' `CPictureHolder` oggetto a un' `IPictureDisp` interfaccia.

```cpp
void SetPictureDispatch(LPPICTUREDISP pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore alla nuova `IPictureDisp` interfaccia.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFontHolder](../../mfc/reference/cfontholder-class.md)
