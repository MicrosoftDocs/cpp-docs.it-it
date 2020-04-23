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
ms.openlocfilehash: a3cabb00ded7dbc5f9c396a1de767058443a4436
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754214"
---
# <a name="cd2dbitmap-class"></a>Classe CD2DBitmap

Wrapper per ID2D1Bitmap.

## <a name="syntax"></a>Sintassi

```
class CD2DBitmap : public CD2DResource;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::CD2DBitmap](#cd2dbitmap)|Di overload. Costruisce un oggetto CD2DBitmap da HBITMAP.|
|[CD2DBitmap:: CD2DBitmap](#_dtorcd2dbitmap)|Distruttore. Chiamato quando un oggetto bitmap D2D viene eliminato definitivamente.|

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::CD2DBitmap](#cd2dbitmap)|Di overload. Costruisce un oggetto CD2DBitmap.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::Associare](#attach)|Associa all'oggetto un'interfaccia di risorsa esistente|
|[CD2DBitmap::CopiaFromBitmap](#copyfrombitmap)|Copia l'area specificata dalla bitmap specificata nella bitmap corrente|
|[CD2DBitmap::CopiaFromMemory](#copyfrommemory)|Copia l'area specificata dalla memoria nella bitmap corrente|
|[CD2DBitmap::CopiaFromRenderTarget](#copyfromrendertarget)|Copia l'area specificata dalla destinazione di rendering specificata nella bitmap corrente|
|[CD2DBitmap::Creare](#create)|Crea un cd2DBitmap. (Esegue l'override di [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|
|[CD2DBitmap::Destroy](#destroy)|Elimina un oggetto CD2DBitmap. (Esegue l'override di [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|
|[CD2DBitmap::Detach](#detach)|Scollega l'interfaccia delle risorse dall'oggetto|
|[CD2DBitmap::Ottenere](#get)|Restituisce l'interfaccia ID2D1Bitmap|
|[CD2DBitmap::GetDPI](#getdpi)|Restituire i punti per pollice (DPI) della bitmap|
|[CD2DBitmap::FormatoPixel](#getpixelformat)|Recupera il formato pixel e la modalità alfa della bitmap|
|[CD2DBitmap::GetPixelSize](#getpixelsize)|Restituisce le dimensioni, in unità dipendenti dal dispositivo (pixel), della bitmap|
|[CD2DBitmap::GetSize](#getsize)|Restituisce le dimensioni, in pixel indipendenti dal dispositivo (DIP), della bitmap|
|[CD2DBitmap::IsValid](#isvalid)|Controlla la validità delle risorse (sostituisce [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::CommonInit](#commoninit)|Inizializza l'oggetto|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::operatore ID2D1Bitmap](#operator_id2d1bitmap_star)|Restituisce l'interfaccia ID2D1Bitmap|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CD2DBitmap::m_bAutoDestroyHBMP](#m_bautodestroyhbmp)|TRUESe m_hBmpSrc deve essere eliminato. in caso contrario, FALSE.|
|[CD2DBitmap::m_hBmpSrc](#m_hbmpsrc)|Handle della bitmap di origine.|
|[CD2DBitmap::m_lpszType](#m_lpsztype)|Tipo di risorsa.|
|[CD2DBitmap::m_pBitmap](#m_pbitmap)|Archivia un puntatore a un oggetto ID2D1Bitmap.|
|[CD2DBitmap::m_sizeDest](#m_sizedest)|Dimensioni della destinazione bitmap.|
|[CD2DBitmap::m_strPath](#m_strpath)|Percorso del file botmap.|
|[CD2DBitmap::m_uiResID](#m_uiresid)|ID risorsa bitmap.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CD2DResource (informazioni in confronto a 3)](../../mfc/reference/cd2dresource-class.md)

`CD2DBitmap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dbitmapcd2dbitmap"></a><a name="_dtorcd2dbitmap"></a>CD2DBitmap:: CD2DBitmap

Distruttore. Chiamato quando un oggetto bitmap D2D viene eliminato definitivamente.

```
virtual ~CD2DBitmap();
```

## <a name="cd2dbitmapattach"></a><a name="attach"></a>CD2DBitmap::Associare

Associa l'interfaccia delle risorse esistente all'oggetto.

```cpp
void Attach(ID2D1Bitmap* pResource);
```

### <a name="parameters"></a>Parametri

*pRisorsa*<br/>
Interfaccia delle risorse esistente. Non può essere NULL.

## <a name="cd2dbitmapcd2dbitmap"></a><a name="cd2dbitmap"></a>CD2DBitmap::CD2DBitmap

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

*pParentTarget (Destinazionepadre)*<br/>
Puntatore alla destinazione di rendering.

*uiResID (informazioni in cui è in stato possibile appun*<br/>
Numero ID risorsa della risorsa.

*lpszType (tipo lpsz)*<br/>
Puntatore a una stringa con terminazione null che contiene il tipo di risorsa.

*più grande*<br/>
Dimensione della destinazione della bitmap.

*bAutoDistruggi*<br/>
Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).

*LpszPath (percorso ipinoso)*<br/>
Puntatore a una stringa con terminazione null che contiene il nome del file.

*hbmpSrc*<br/>
Handle per la bitmap.

## <a name="cd2dbitmapcommoninit"></a><a name="commoninit"></a>CD2DBitmap::CommonInit

Inizializza l'oggetto.

```cpp
void CommonInit();
```

## <a name="cd2dbitmapcopyfrombitmap"></a><a name="copyfrombitmap"></a>CD2DBitmap::CopiaFromBitmap

Copia l'area specificata dalla bitmap specificata nella bitmap corrente.

```
HRESULT CopyFromBitmap(
    const CD2DBitmap* pBitmap,
    const CD2DPointU* destPoint = NULL,
    const CD2DRectU* srcRect = NULL);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
Bitmap da cui copiare.

*destPoint (informazioni in stato inminore)*<br/>
Nella bitmap corrente, nell'angolo superiore sinistro dell'area in cui viene copiata l'area specificata da srcRect.

*SrcRect*<br/>
Area della bitmap da copiare.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dbitmapcopyfrommemory"></a><a name="copyfrommemory"></a>CD2DBitmap::CopiaFromMemory

Copia l'area specificata dalla memoria nella bitmap corrente.

```
HRESULT CopyFromMemory(
    const void* srcData,
    UINT32 pitch,
    const CD2DRectU* destRect = NULL);
```

### <a name="parameters"></a>Parametri

*dati src*<br/>
I dati da copiare.

*Passo*<br/>
Lo stride, o pitch, della bitmap di origine archiviata in srcData. Lo sforzo è il numero di byte di una linea di scansione (una riga di pixel in memoria). Lo stride può essere calcolato a partire \* dalla formula seguente: byte di larghezza in pixel per pixel e spaziatura interna della memoria.

*destRect*<br/>
Nella bitmap corrente, nell'angolo superiore sinistro dell'area in cui viene copiata l'area specificata da srcRect.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dbitmapcopyfromrendertarget"></a><a name="copyfromrendertarget"></a>CD2DBitmap::CopiaFromRenderTarget

Copia l'area specificata dalla destinazione di rendering specificata nella bitmap corrente.

```
HRESULT CopyFromRenderTarget(
    const CRenderTarget* pRenderTarget,
    const CD2DPointU* destPoint = NULL,
    const CD2DRectU* srcRect = NULL);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Destinazione di rendering che contiene l'area da copiare.

*destPoint (informazioni in stato inminore)*<br/>
Nella bitmap corrente, nell'angolo superiore sinistro dell'area in cui viene copiata l'area specificata da srcRect.

*SrcRect*<br/>
Area di renderTarget da copiare.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dbitmapcreate"></a><a name="create"></a>CD2DBitmap::Creare

Crea un cd2DBitmap.

```
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget (informazioni in base alla proprietà*<br/>
Puntatore alla destinazione di rendering.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="cd2dbitmapdestroy"></a><a name="destroy"></a>CD2DBitmap::Destroy

Elimina un oggetto CD2DBitmap.

```
virtual void Destroy();
```

## <a name="cd2dbitmapdetach"></a><a name="detach"></a>CD2DBitmap::Detach

Scollega l'interfaccia delle risorse dall'oggetto.

```
ID2D1Bitmap* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia delle risorse disconnesse.

## <a name="cd2dbitmapget"></a><a name="get"></a>CD2DBitmap::Ottenere

Restituisce l'interfaccia ID2D1Bitmap.

```
ID2D1Bitmap* Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Bitmap o NULL se l'oggetto non è ancora inizializzato.

## <a name="cd2dbitmapgetdpi"></a><a name="getdpi"></a>CD2DBitmap::GetDPI

Restituisce i punti per pollice (DPI) della bitmap.

```
CD2DSizeF GetDPI() const;
```

### <a name="return-value"></a>Valore restituito

Il valore DPI orizzontale e verticale della bitmap.

## <a name="cd2dbitmapgetpixelformat"></a><a name="getpixelformat"></a>CD2DBitmap::FormatoPixel

Recupera il formato pixel e la modalità alfa della bitmap

```
D2D1_PIXEL_FORMAT GetPixelFormat() const;
```

### <a name="return-value"></a>Valore restituito

Formato pixel e modalità alfa della bitmap.

## <a name="cd2dbitmapgetpixelsize"></a><a name="getpixelsize"></a>CD2DBitmap::GetPixelSize

Restituisce le dimensioni, in unità dipendenti dal dispositivo (pixel), della bitmap.

```
CD2DSizeU GetPixelSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni, in pixel, della bitmap.

## <a name="cd2dbitmapgetsize"></a><a name="getsize"></a>CD2DBitmap::GetSize

Restituisce le dimensioni, in pixel indipendenti dal dispositivo (DIP), della bitmap.

```
CD2DSizeF GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni, in DIP, della bitmap.

## <a name="cd2dbitmapisvalid"></a><a name="isvalid"></a>CD2DBitmap::IsValid

Controlla la validità delle risorse.

```
virtual BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la risorsa è valida. in caso contrario, FALSE.

## <a name="cd2dbitmapm_bautodestroyhbmp"></a><a name="m_bautodestroyhbmp"></a>CD2DBitmap::m_bAutoDestroyHBMP

TRUESe m_hBmpSrc deve essere eliminato. in caso contrario, FALSE.

```
BOOL m_bAutoDestroyHBMP;
```

## <a name="cd2dbitmapm_hbmpsrc"></a><a name="m_hbmpsrc"></a>CD2DBitmap::m_hBmpSrc

Handle della bitmap di origine.

```
HBITMAP m_hBmpSrc;
```

## <a name="cd2dbitmapm_lpsztype"></a><a name="m_lpsztype"></a>CD2DBitmap::m_lpszType

Tipo di risorsa.

```
LPCTSTR m_lpszType;
```

## <a name="cd2dbitmapm_pbitmap"></a><a name="m_pbitmap"></a>CD2DBitmap::m_pBitmap

Archivia un puntatore a un oggetto ID2D1Bitmap.

```
ID2D1Bitmap* m_pBitmap;
```

## <a name="cd2dbitmapm_sizedest"></a><a name="m_sizedest"></a>CD2DBitmap::m_sizeDest

Dimensioni della destinazione bitmap.

```
CD2DSizeU m_sizeDest;
```

## <a name="cd2dbitmapm_strpath"></a><a name="m_strpath"></a>CD2DBitmap::m_strPath

Percorso del file botmap.

```
CString m_strPath;
```

## <a name="cd2dbitmapm_uiresid"></a><a name="m_uiresid"></a>CD2DBitmap::m_uiResID

ID risorsa bitmap.

```
UINT m_uiResID;
```

## <a name="cd2dbitmapoperator-id2d1bitmap"></a><a name="operator_id2d1bitmap_star"></a>CD2DBitmap::operatore ID2D1Bitmap

Restituisce l'interfaccia ID2D1Bitmap

```
operator ID2D1Bitmap*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1Bitmap o NULL se l'oggetto non è ancora inizializzato.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
