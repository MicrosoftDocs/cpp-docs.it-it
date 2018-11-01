---
title: Classe CD2DBitmap
ms.date: 11/04/2016
f1_keywords:
- CD2DBitmap
- AFXRENDERTARGET/CD2DBitmap
- AFXRENDERTARGET/CD2DBitmap::CD2DBitmap
- AFXRENDERTARGET/CD2DBitmap::Attach
- AFXRENDERTARGET/CD2DBitmap::CopyFromBitmap
- AFXRENDERTARGET/CD2DBitmap::CopyFromMemory
- AFXRENDERTARGET/CD2DBitmap::CopyFromRenderTarget
- AFXRENDERTARGET/CD2DBitmap::Create
- AFXRENDERTARGET/CD2DBitmap::Destroy
- AFXRENDERTARGET/CD2DBitmap::Detach
- AFXRENDERTARGET/CD2DBitmap::Get
- AFXRENDERTARGET/CD2DBitmap::GetDPI
- AFXRENDERTARGET/CD2DBitmap::GetPixelFormat
- AFXRENDERTARGET/CD2DBitmap::GetPixelSize
- AFXRENDERTARGET/CD2DBitmap::GetSize
- AFXRENDERTARGET/CD2DBitmap::IsValid
- AFXRENDERTARGET/CD2DBitmap::CommonInit
- AFXRENDERTARGET/CD2DBitmap::m_bAutoDestroyHBMP
- AFXRENDERTARGET/CD2DBitmap::m_hBmpSrc
- AFXRENDERTARGET/CD2DBitmap::m_lpszType
- AFXRENDERTARGET/CD2DBitmap::m_pBitmap
- AFXRENDERTARGET/CD2DBitmap::m_sizeDest
- AFXRENDERTARGET/CD2DBitmap::m_strPath
- AFXRENDERTARGET/CD2DBitmap::m_uiResID
helpviewer_keywords:
- CD2DBitmap [MFC], CD2DBitmap
- CD2DBitmap [MFC], CD2DBitmap
- CD2DBitmap [MFC], Attach
- CD2DBitmap [MFC], CopyFromBitmap
- CD2DBitmap [MFC], CopyFromMemory
- CD2DBitmap [MFC], CopyFromRenderTarget
- CD2DBitmap [MFC], Create
- CD2DBitmap [MFC], Destroy
- CD2DBitmap [MFC], Detach
- CD2DBitmap [MFC], Get
- CD2DBitmap [MFC], GetDPI
- CD2DBitmap [MFC], GetPixelFormat
- CD2DBitmap [MFC], GetPixelSize
- CD2DBitmap [MFC], GetSize
- CD2DBitmap [MFC], IsValid
- CD2DBitmap [MFC], CommonInit
- CD2DBitmap [MFC], m_bAutoDestroyHBMP
- CD2DBitmap [MFC], m_hBmpSrc
- CD2DBitmap [MFC], m_lpszType
- CD2DBitmap [MFC], m_pBitmap
- CD2DBitmap [MFC], m_sizeDest
- CD2DBitmap [MFC], m_strPath
- CD2DBitmap [MFC], m_uiResID
ms.assetid: 2b3686f1-812c-462b-b449-9f0cb6949bf6
ms.openlocfilehash: 869d8c9cffae1a257de04cf82446025be33ef7de
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605868"
---
# <a name="cd2dbitmap-class"></a>Classe CD2DBitmap

Un wrapper per ID2D1Bitmap.

## <a name="syntax"></a>Sintassi

```
class CD2DBitmap : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::CD2DBitmap](#cd2dbitmap)|Di overload. Costruisce un oggetto CD2DBitmap dal HBITMAP.|
|[CD2DBitmap:: ~ CD2DBitmap](#_dtorcd2dbitmap)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto bitmap D2D.|

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::CD2DBitmap](#cd2dbitmap)|Di overload. Costruisce un oggetto CD2DBitmap.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::Attach](#attach)|Collega esistente all'oggetto di interfaccia delle risorse|
|[CD2DBitmap::CopyFromBitmap](#copyfrombitmap)|Copia l'area specificata dalla mappa di bit specificato nella bitmap corrente|
|[CD2DBitmap::CopyFromMemory](#copyfrommemory)|Copia l'area specificata dalla memoria in bitmap corrente|
|[CD2DBitmap::CopyFromRenderTarget](#copyfromrendertarget)|Copia l'area specificata dall'oggetto destinazione rendering nella bitmap corrente|
|[CD2DBitmap::Create](#create)|Crea un CD2DBitmap. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DBitmap::Destroy](#destroy)|Elimina un oggetto CD2DBitmap. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DBitmap::Detach](#detach)|Scollega interfaccia di risorse dall'oggetto|
|[CD2DBitmap::Get](#get)|Restituisce l'interfaccia ID2D1Bitmap|
|[CD2DBitmap::GetDPI](#getdpi)|Restituire i punti per pollice (DPI) di bitmap|
|[CD2DBitmap::GetPixelFormat](#getpixelformat)|Recupera la modalità di formato e alfa di pixel della bitmap|
|[CD2DBitmap::GetPixelSize](#getpixelsize)|Restituisce la dimensione, in unità di misura dipendente dalla periferica (pixel), della bitmap|
|[CD2DBitmap::GetSize](#getsize)|Restituisce la dimensione, espressa in pixel indipendenti dal dispositivo (DIP), della bitmap|
|[CD2DBitmap::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::CommonInit](#commoninit)|Inizializza l'oggetto|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::operator ID2D1Bitmap *](#operator_id2d1bitmap_star)|Restituisce l'interfaccia ID2D1Bitmap|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::m_bAutoDestroyHBMP](#m_bautodestroyhbmp)|TRUE se deve essere eliminata m_hBmpSrc; in caso contrario, FALSE.|
|[CD2DBitmap::m_hBmpSrc](#m_hbmpsrc)|Handle di bitmap di origine.|
|[CD2DBitmap::m_lpszType](#m_lpsztype)|Tipo di risorsa.|
|[CD2DBitmap::m_pBitmap](#m_pbitmap)|Archivia un puntatore a un oggetto ID2D1Bitmap.|
|[CD2DBitmap::m_sizeDest](#m_sizedest)|La dimensione di destinazione delle bitmap.|
|[CD2DBitmap::m_strPath](#m_strpath)|Del file botmap.|
|[CD2DBitmap::m_uiResID](#m_uiresid)|ID risorsa della bitmap.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource](../../mfc/reference/cd2dresource-class.md)

`CD2DBitmap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcd2dbitmap"></a>  CD2DBitmap:: ~ CD2DBitmap

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto bitmap D2D.

```
virtual ~CD2DBitmap();
```

##  <a name="attach"></a>  CD2DBitmap::Attach

Associa interfaccia delle risorse per l'oggetto esistente.

```
void Attach(ID2D1Bitmap* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Interfaccia di risorse esistente. Non può essere NULL.

##  <a name="cd2dbitmap"></a>  CD2DBitmap::CD2DBitmap

Costruisce un oggetto CD2DBitmap dalla risorsa.

```
CD2DBitmap(
    CRenderTarget* pParentTarget,
    UINT uiResID,
    LPCTSTR lpszType = NULL,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    BOOL bAutoDestroy = TRUE);

CD2DBitmap(
    CRenderTarget* pParentTarget,
    LPCTSTR lpszPath,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    BOOL bAutoDestroy = TRUE);

CD2DBitmap(
    CRenderTarget* pParentTarget,
    HBITMAP hbmpSrc,
    CD2DSizeU sizeDest = CD2DSizeU(0, 0),
    BOOL bAutoDestroy = TRUE);

CD2DBitmap(
    CRenderTarget* pParentTarget,
    BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*pParentTarget*<br/>
Puntatore alla destinazione di rendering.

*uiResID*<br/>
Il numero di ID risorsa della risorsa.

*lpszType*<br/>
Puntatore a una stringa con terminazione null che contiene il tipo di risorsa.

*sizeDest*<br/>
Dimensioni di destinazione della bitmap.

*flag bAutoDestroy*<br/>
Indica che l'oggetto viene distrutto dal proprietario (pParentTarget).

*lpszPath*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del file.

*hbmpSrc*<br/>
Handle alla bitmap.

##  <a name="commoninit"></a>  CD2DBitmap::CommonInit

Inizializza l'oggetto.

```
void CommonInit();
```

##  <a name="copyfrombitmap"></a>  CD2DBitmap::CopyFromBitmap

Copia l'area specificata dalla mappa di bit specificato in bitmap corrente.

```
HRESULT CopyFromBitmap(
    const CD2DBitmap* pBitmap,
    const CD2DPointU* destPoint = NULL,
    const CD2DRectU* srcRect = NULL);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
La bitmap da copiare da.

*destPoint*<br/>
Nell'immagine bitmap corrente, l'angolo superiore sinistro dell'area a cui l'area specificata da srcRect viene copiato.

*srcRect*<br/>
L'area della bitmap da copiare.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="copyfrommemory"></a>  CD2DBitmap::CopyFromMemory

Copia l'area specificata dalla memoria in bitmap corrente.

```
HRESULT CopyFromMemory(
    const void* srcData,
    UINT32 pitch,
    const CD2DRectU* destRect = NULL);
```

### <a name="parameters"></a>Parametri

*srcData*<br/>
I dati da copiare.

*Passo*<br/>
Lo stride o tono, della bitmap di origine archiviati nella srcData. Lo stride è il numero di byte di una linea di digitalizzazione (una riga di pixel in memoria). Lo stride può essere calcolato dalla formula seguente: larghezza in pixel \* byte per pixel e spaziatura interna di memoria.

*destRect*<br/>
Nell'immagine bitmap corrente, l'angolo superiore sinistro dell'area a cui l'area specificata da srcRect viene copiato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="copyfromrendertarget"></a>  CD2DBitmap::CopyFromRenderTarget

Copia l'area specificata dall'oggetto specificato destinazione di rendering nella bitmap corrente.

```
HRESULT CopyFromRenderTarget(
    const CRenderTarget* pRenderTarget,
    const CD2DPointU* destPoint = NULL,
    const CD2DRectU* srcRect = NULL);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
La destinazione di rendering che contiene l'area da copiare.

*destPoint*<br/>
Nell'immagine bitmap corrente, l'angolo superiore sinistro dell'area a cui l'area specificata da srcRect viene copiato.

*srcRect*<br/>
L'area del renderTarget da copiare.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="create"></a>  CD2DBitmap::Create

Crea un CD2DBitmap.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="destroy"></a>  CD2DBitmap::Destroy

Elimina un oggetto CD2DBitmap.

```
virtual void Destroy();
```

##  <a name="detach"></a>  CD2DBitmap::Detach

Scollega interfaccia di risorse dall'oggetto.

```
ID2D1Bitmap* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia risorse scollegato.

##  <a name="get"></a>  CD2DBitmap::Get

Restituisce l'interfaccia ID2D1Bitmap.

```
ID2D1Bitmap* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Bitmap o NULL se l'oggetto non è ancora inizializzato.

##  <a name="getdpi"></a>  CD2DBitmap::GetDPI

Restituire i punti per pollice (DPI) della bitmap.

```
CD2DSizeF GetDPI() const;
```

### <a name="return-value"></a>Valore restituito

DPI orizzontale e verticale della bitmap.

##  <a name="getpixelformat"></a>  CD2DBitmap::GetPixelFormat

Recupera la modalità di formato e alfa di pixel della bitmap

```
D2D1_PIXEL_FORMAT GetPixelFormat() const;
```

### <a name="return-value"></a>Valore restituito

Il formato pixel e alfa modalità della bitmap.

##  <a name="getpixelsize"></a>  CD2DBitmap::GetPixelSize

Restituisce le dimensioni, in unità di misura dipendente dalla periferica (pixel), della bitmap.

```
CD2DSizeU GetPixelSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni, in pixel, della bitmap...

##  <a name="getsize"></a>  CD2DBitmap::GetSize

Restituisce le dimensioni, in pixel indipendenti dal dispositivo (DIP), della bitmap.

```
CD2DSizeF GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni, in DIP, della bitmap.

##  <a name="isvalid"></a>  CD2DBitmap::IsValid

Controlla la validità della risorsa.

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

##  <a name="m_bautodestroyhbmp"></a>  CD2DBitmap::m_bAutoDestroyHBMP

TRUE se deve essere eliminata m_hBmpSrc; in caso contrario, FALSE.

```
BOOL m_bAutoDestroyHBMP;
```

##  <a name="m_hbmpsrc"></a>  CD2DBitmap::m_hBmpSrc

Handle di bitmap di origine.

```
HBITMAP m_hBmpSrc;
```

##  <a name="m_lpsztype"></a>  CD2DBitmap::m_lpszType

Tipo di risorsa.

```
LPCTSTR m_lpszType;
```

##  <a name="m_pbitmap"></a>  CD2DBitmap::m_pBitmap

Archivia un puntatore a un oggetto ID2D1Bitmap.

```
ID2D1Bitmap* m_pBitmap;
```

##  <a name="m_sizedest"></a>  CD2DBitmap::m_sizeDest

La dimensione di destinazione delle bitmap.

```
CD2DSizeU m_sizeDest;
```

##  <a name="m_strpath"></a>  CD2DBitmap::m_strPath

Del file botmap.

```
CString m_strPath;
```

##  <a name="m_uiresid"></a>  CD2DBitmap::m_uiResID

ID risorsa della bitmap.

```
UINT m_uiResID;
```

##  <a name="operator_id2d1bitmap_star"></a>  CD2DBitmap::operator ID2D1Bitmap *

Restituisce l'interfaccia ID2D1Bitmap

```
operator ID2D1Bitmap*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Bitmap o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
