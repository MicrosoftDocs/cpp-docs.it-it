---
title: Classe CRenderTarget | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CRenderTarget
- AFXRENDERTARGET/CRenderTarget
- AFXRENDERTARGET/CRenderTarget::CRenderTarget
- AFXRENDERTARGET/CRenderTarget::Attach
- AFXRENDERTARGET/CRenderTarget::BeginDraw
- AFXRENDERTARGET/CRenderTarget::Clear
- AFXRENDERTARGET/CRenderTarget::COLORREF_TO_D2DCOLOR
- AFXRENDERTARGET/CRenderTarget::CreateCompatibleRenderTarget
- AFXRENDERTARGET/CRenderTarget::Destroy
- AFXRENDERTARGET/CRenderTarget::Detach
- AFXRENDERTARGET/CRenderTarget::DrawBitmap
- AFXRENDERTARGET/CRenderTarget::DrawEllipse
- AFXRENDERTARGET/CRenderTarget::DrawGeometry
- AFXRENDERTARGET/CRenderTarget::DrawGlyphRun
- AFXRENDERTARGET/CRenderTarget::DrawLine
- AFXRENDERTARGET/CRenderTarget::DrawRectangle
- AFXRENDERTARGET/CRenderTarget::DrawRoundedRectangle
- AFXRENDERTARGET/CRenderTarget::DrawText
- AFXRENDERTARGET/CRenderTarget::DrawTextLayout
- AFXRENDERTARGET/CRenderTarget::EndDraw
- AFXRENDERTARGET/CRenderTarget::FillEllipse
- AFXRENDERTARGET/CRenderTarget::FillGeometry
- AFXRENDERTARGET/CRenderTarget::FillMesh
- AFXRENDERTARGET/CRenderTarget::FillOpacityMask
- AFXRENDERTARGET/CRenderTarget::FillRectangle
- AFXRENDERTARGET/CRenderTarget::FillRoundedRectangle
- AFXRENDERTARGET/CRenderTarget::Flush
- AFXRENDERTARGET/CRenderTarget::GetAntialiasMode
- AFXRENDERTARGET/CRenderTarget::GetDpi
- AFXRENDERTARGET/CRenderTarget::GetMaximumBitmapSize
- AFXRENDERTARGET/CRenderTarget::GetPixelFormat
- AFXRENDERTARGET/CRenderTarget::GetPixelSize
- AFXRENDERTARGET/CRenderTarget::GetRenderTarget
- AFXRENDERTARGET/CRenderTarget::GetSize
- AFXRENDERTARGET/CRenderTarget::GetTags
- AFXRENDERTARGET/CRenderTarget::GetTextAntialiasMode
- AFXRENDERTARGET/CRenderTarget::GetTextRenderingParams
- AFXRENDERTARGET/CRenderTarget::GetTransform
- AFXRENDERTARGET/CRenderTarget::IsSupported
- AFXRENDERTARGET/CRenderTarget::IsValid
- AFXRENDERTARGET/CRenderTarget::PopAxisAlignedClip
- AFXRENDERTARGET/CRenderTarget::PopLayer
- AFXRENDERTARGET/CRenderTarget::PushAxisAlignedClip
- AFXRENDERTARGET/CRenderTarget::PushLayer
- AFXRENDERTARGET/CRenderTarget::RestoreDrawingState
- AFXRENDERTARGET/CRenderTarget::SaveDrawingState
- AFXRENDERTARGET/CRenderTarget::SetAntialiasMode
- AFXRENDERTARGET/CRenderTarget::SetDpi
- AFXRENDERTARGET/CRenderTarget::SetTags
- AFXRENDERTARGET/CRenderTarget::SetTextAntialiasMode
- AFXRENDERTARGET/CRenderTarget::SetTextRenderingParams
- AFXRENDERTARGET/CRenderTarget::SetTransform
- AFXRENDERTARGET/CRenderTarget::VerifyResource
- AFXRENDERTARGET/CRenderTarget::m_lstResources
- AFXRENDERTARGET/CRenderTarget::m_pRenderTarget
- AFXRENDERTARGET/CRenderTarget::m_pTextFormatDefault
dev_langs:
- C++
helpviewer_keywords:
- CRenderTarget [MFC], CRenderTarget
- CRenderTarget [MFC], Attach
- CRenderTarget [MFC], BeginDraw
- CRenderTarget [MFC], Clear
- CRenderTarget [MFC], COLORREF_TO_D2DCOLOR
- CRenderTarget [MFC], CreateCompatibleRenderTarget
- CRenderTarget [MFC], Destroy
- CRenderTarget [MFC], Detach
- CRenderTarget [MFC], DrawBitmap
- CRenderTarget [MFC], DrawEllipse
- CRenderTarget [MFC], DrawGeometry
- CRenderTarget [MFC], DrawGlyphRun
- CRenderTarget [MFC], DrawLine
- CRenderTarget [MFC], DrawRectangle
- CRenderTarget [MFC], DrawRoundedRectangle
- CRenderTarget [MFC], DrawText
- CRenderTarget [MFC], DrawTextLayout
- CRenderTarget [MFC], EndDraw
- CRenderTarget [MFC], FillEllipse
- CRenderTarget [MFC], FillGeometry
- CRenderTarget [MFC], FillMesh
- CRenderTarget [MFC], FillOpacityMask
- CRenderTarget [MFC], FillRectangle
- CRenderTarget [MFC], FillRoundedRectangle
- CRenderTarget [MFC], Flush
- CRenderTarget [MFC], GetAntialiasMode
- CRenderTarget [MFC], GetDpi
- CRenderTarget [MFC], GetMaximumBitmapSize
- CRenderTarget [MFC], GetPixelFormat
- CRenderTarget [MFC], GetPixelSize
- CRenderTarget [MFC], GetRenderTarget
- CRenderTarget [MFC], GetSize
- CRenderTarget [MFC], GetTags
- CRenderTarget [MFC], GetTextAntialiasMode
- CRenderTarget [MFC], GetTextRenderingParams
- CRenderTarget [MFC], GetTransform
- CRenderTarget [MFC], IsSupported
- CRenderTarget [MFC], IsValid
- CRenderTarget [MFC], PopAxisAlignedClip
- CRenderTarget [MFC], PopLayer
- CRenderTarget [MFC], PushAxisAlignedClip
- CRenderTarget [MFC], PushLayer
- CRenderTarget [MFC], RestoreDrawingState
- CRenderTarget [MFC], SaveDrawingState
- CRenderTarget [MFC], SetAntialiasMode
- CRenderTarget [MFC], SetDpi
- CRenderTarget [MFC], SetTags
- CRenderTarget [MFC], SetTextAntialiasMode
- CRenderTarget [MFC], SetTextRenderingParams
- CRenderTarget [MFC], SetTransform
- CRenderTarget [MFC], VerifyResource
- CRenderTarget [MFC], m_lstResources
- CRenderTarget [MFC], m_pRenderTarget
- CRenderTarget [MFC], m_pTextFormatDefault
ms.assetid: 30d1607d-68d3-4d14-ac36-fdbd0ef903a1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 871cca2256f44542f1347e0dfc8be08805e5389e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46400523"
---
# <a name="crendertarget-class"></a>Classe CRenderTarget

Un wrapper per ID2D1RenderTarget.

## <a name="syntax"></a>Sintassi

```
class CRenderTarget : public CObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRenderTarget::CRenderTarget](#crendertarget)|Costruisce un oggetto CRenderTarget.|
|[CRenderTarget:: ~ CRenderTarget](#crendertarget__~crendertarget)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di destinazione di rendering.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRenderTarget::Attach](#attach)|Collega esistente di eseguire il rendering come interfaccia di destinazione per l'oggetto|
|[CRenderTarget::BeginDraw](#begindraw)|Avvia il disegno in questa destinazione di rendering.|
|[CRenderTarget::Clear](#clear)|Cancella l'area di disegno sul colore specificato.|
|[CRenderTarget::COLORREF_TO_D2DCOLOR](#colorref_to_d2dcolor)|Converte i valori di colore e alfa GDI per l'oggetto D2D1_COLOR_F.|
|[CRenderTarget::CreateCompatibleRenderTarget](#createcompatiblerendertarget)|Crea una nuova destinazione di rendering di bitmap per l'uso durante il disegno fuori schermo intermedio che è compatibile con la destinazione di rendering corrente.|
|[CRenderTarget::Destroy](#destroy)|Elimina una o più risorse|
|[CRenderTarget::Detach](#detach)|Scollega interfaccia di destinazione di rendering dell'oggetto|
|[CRenderTarget::DrawBitmap](#drawbitmap)|Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.|
|[CRenderTarget::DrawEllipse](#drawellipse)|Consente di disegnare il contorno dell'ellisse specificato utilizzando lo stile del tratto specificato.|
|[CRenderTarget::DrawGeometry](#drawgeometry)|Consente di disegnare la struttura della geometria specificata utilizzando lo stile del tratto specificato.|
|[CRenderTarget::DrawGlyphRun](#drawglyphrun)|Consente di disegnare glifi specificati.|
|[CRenderTarget::DrawLine](#drawline)|Disegna una linea tra i punti specificati utilizzando lo stile di traccia specificato.|
|[CRenderTarget::DrawRectangle](#drawrectangle)|Consente di disegnare la struttura di un rettangolo con le dimensioni specificate e stile di traccia.|
|[CRenderTarget::DrawRoundedRectangle](#drawroundedrectangle)|Consente di disegnare il contorno del rettangolo arrotondato specificato utilizzando lo stile del tratto specificato.|
|[CRenderTarget::DrawText](#drawtext)|Disegna il testo specificato usando le informazioni di formato fornite da un oggetto IDWriteTextFormat.|
|[CRenderTarget::DrawTextLayout](#drawtextlayout)|Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.|
|[CRenderTarget::EndDraw](#enddraw)|Termina operazioni di disegno sulla destinazione di rendering e indica lo stato di errore corrente e i tag associati.|
|[CRenderTarget::FillEllipse](#fillellipse)|Disegna la parte interna dell'ellisse specificato.|
|[CRenderTarget::FillGeometry](#fillgeometry)|Disegna l'interno della geometria specificata.|
|[CRenderTarget::FillMesh](#fillmesh)|Disegna l'interno della rete specificata.|
|[CRenderTarget::FillOpacityMask](#fillopacitymask)|Si applica la maschera di opacità descritta da nella bitmap specificata in un pennello e Usa il pennello per disegnare un'area di destinazione di rendering.|
|[CRenderTarget::FillRectangle](#fillrectangle)|Disegna l'interno del rettangolo specificato.|
|[CRenderTarget::FillRoundedRectangle](#fillroundedrectangle)|Disegna l'interno del rettangolo arrotondato specificato.|
|[CRenderTarget::Flush](#flush)|Esegue tutti i comandi di disegno in sospeso.|
|[CRenderTarget::GetAntialiasMode](#getantialiasmode)|Recupera la modalità di anti-aliasing corrente per le operazioni di disegno non di testo.|
|[CRenderTarget::GetDpi](#getdpi)|Restituisce il rendering punti per pollice (DPI) di destinazione|
|[CRenderTarget::GetMaximumBitmapSize](#getmaximumbitmapsize)|Ottiene la dimensione massima, in unità di dipendente dalla periferica (pixel), di qualsiasi dimensione di una singola bitmap supportate dalla destinazione rendering|
|[CRenderTarget::GetPixelFormat](#getpixelformat)|Recupera la modalità di formato e alfa di pixel della destinazione di rendering|
|[CRenderTarget::GetPixelSize](#getpixelsize)|Restituisce le dimensioni della destinazione di rendering in pixel del dispositivo|
|[CRenderTarget::GetRenderTarget](#getrendertarget)|Restituisce l'interfaccia ID2D1RenderTarget|
|[CRenderTarget::GetSize](#getsize)|Restituisce le dimensioni della destinazione di rendering in device independent pixel|
|[CRenderTarget::GetTags](#gettags)|Ottiene l'etichetta per le operazioni di disegno successivi.|
|[CRenderTarget::GetTextAntialiasMode](#gettextantialiasmode)|Ottiene la modalità corrente di anti-aliasing per testo e glifo operazioni di disegno.|
|[CRenderTarget::GetTextRenderingParams](#gettextrenderingparams)|Recupera opzioni di rendering del testo corrente della destinazione di rendering.|
|[CRenderTarget::GetTransform](#gettransform)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato.|
|[CRenderTarget::IsSupported](#issupported)|Indica se la destinazione di rendering supporta le proprietà specificate|
|[CRenderTarget::IsValid](#isvalid)|Verifica la validità della risorsa|
|[CRenderTarget::PopAxisAlignedClip](#popaxisalignedclip)|Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il ritaglio non viene più applicato alle operazioni di disegno successivi.|
|[CRenderTarget::PopLayer](#poplayer)|Interrompe il reindirizzamento delle operazioni di disegno al livello specificato dal PushLayer ultima chiamata.|
|[CRenderTarget::PushAxisAlignedClip](#pushaxisalignedclip)|Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il ritaglio non viene più applicato alle operazioni di disegno successivi.|
|[CRenderTarget::PushLayer](#pushlayer)|Aggiunge il livello specificato nella destinazione di rendering, in modo che riceva tutte le operazioni di disegnare successive fino a quando non viene chiamato PopLayer.|
|[CRenderTarget::RestoreDrawingState](#restoredrawingstate)|Imposta lo stato di disegno della destinazione di rendering a quella del ID2D1DrawingStateBlock specificato.|
|[CRenderTarget::SaveDrawingState](#savedrawingstate)|Salva lo stato corrente di disegno di ID2D1DrawingStateBlock specificato.|
|[CRenderTarget::SetAntialiasMode](#setantialiasmode)|Imposta la modalità di anti-aliasing della destinazione di rendering. La modalità di anti-aliasing si applica a tutte le operazioni di disegnare successive, ad eccezione di testo e glifo operazioni di disegno.|
|[CRenderTarget::SetDpi](#setdpi)|Imposta i punti per pollice (DPI) della destinazione di rendering.|
|[CRenderTarget::SetTags](#settags)|Specifica un'etichetta per le operazioni di disegno successivi.|
|[CRenderTarget::SetTextAntialiasMode](#settextantialiasmode)|Specifica la modalità di anti-aliasing da utilizzare per il testo che segue e operazioni di disegno del glifo.|
|[CRenderTarget::SetTextRenderingParams](#settextrenderingparams)|Specifica le opzioni per il rendering di testo da applicare a tutti i successivi testo e glifo operazioni di disegno.|
|[CRenderTarget::SetTransform](#settransform)|Di overload. Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CRenderTarget::VerifyResource](#verifyresource)|Verifica la validità dell'oggetto CD2DResource; Crea l'oggetto se non esiste già.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRenderTarget::operator ID2D1RenderTarget *](#operator_id2d1rendertarget_star)|Restituisce l'interfaccia ID2D1RenderTarget|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CRenderTarget::m_lstResources](#m_lstresources)|Elenco di puntatori a oggetti CD2DResource.|
|[CRenderTarget::m_pRenderTarget](#m_prendertarget)|Un puntatore a un oggetto ID2D1RenderTarget.|
|[CRenderTarget::m_pTextFormatDefault](#m_ptextformatdefault)|Un puntatore all'oggetto CD2DTextFormat contenente un formato di testo predefinito.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

##  <a name="_dtorcrendertarget"></a>  CRenderTarget:: ~ CRenderTarget

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di destinazione di rendering.

```
virtual ~CRenderTarget();
```

##  <a name="attach"></a>  CRenderTarget::Attach

Collega esistente di eseguire il rendering come interfaccia di destinazione per l'oggetto

```
void Attach(ID2D1RenderTarget* pRenderTarget);
```

### <a name="parameters"></a>Parametri

*pRenderTarget*<br/>
Interfaccia destinazione di rendering esistente. Non può essere NULL

##  <a name="begindraw"></a>  CRenderTarget::BeginDraw

Avvia il disegno in questa destinazione di rendering.

```
void BeginDraw();
```

##  <a name="clear"></a>  CRenderTarget::Clear

Cancella l'area di disegno sul colore specificato.

```
void Clear(D2D1_COLOR_F color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Il colore a cui è viene cancellato l'area di disegno.

##  <a name="colorref_to_d2dcolor"></a>  CRenderTarget::COLORREF_TO_D2DCOLOR

Converte i valori di colore e alfa GDI per l'oggetto D2D1_COLOR_F.

```
static D2D1_COLOR_F COLORREF_TO_D2DCOLOR(
    COLORREF color,
    int nAlpha = 255);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Valore RGB.

*nAlpha*

### <a name="return-value"></a>Valore restituito

Valore D2D1_COLOR_F.

##  <a name="createcompatiblerendertarget"></a>  CRenderTarget::CreateCompatibleRenderTarget

Crea una nuova destinazione di rendering di bitmap per l'uso durante il disegno fuori schermo intermedio che è compatibile con la destinazione di rendering corrente.

```
BOOL CreateCompatibleRenderTarget(
    CBitmapRenderTarget& bitmapTarget,
    CD2DSizeF sizeDesired = CD2DSizeF(0., 0.),
    CD2DSizeU sizePixelDesired = CD2DSizeU(0, 0),
    D2D1_PIXEL_FORMAT* desiredFormat = NULL,
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS options = D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE);
```

### <a name="parameters"></a>Parametri

*bitmapTarget*<br/>
Quando termina, questo metodo contiene l'indirizzo di un puntatore a una nuova destinazione di rendering di bitmap. Questo parametro viene passato non inizializzato.

*sizeDesired*<br/>
Le dimensioni desiderate della nuova destinazione di rendering in pixel indipendenti dal dispositivo se deve essere diverso dalla versione originale di destinazione di rendering, o NULL. Per altre informazioni, vedere la sezione Osservazioni.

*sizePixelDesired*<br/>
Le dimensioni desiderate della nuova destinazione di rendering in pixel se deve essere diverso dalla versione originale di destinazione di rendering, o NULL. Per altre informazioni, vedere la sezione Osservazioni.

*desiredFormat*<br/>
Il formato pixel desiderato e la modalità alfa della nuova destinazione di rendering, o NULL. Se il formato pixel è impostato su DXGI_FORMAT_UNKNOWN o se questo parametro è null, la nuova destinazione di rendering Usa lo stesso formato di pixel come destinazione di rendering dell'originale. Se la modalità di alfa è D2D1_ALPHA_MODE_UNKNOWN o questo parametro è NULL, la modalità alfa della nuova destinazione di rendering predefinito D2D1_ALPHA_MODE_PREMULTIPLIED. Per informazioni sui formati di pixel supportati, vedere modalità Alpha e formati di Pixel supportati.

*options*<br/>
Un valore che specifica se la nuova destinazione di rendering deve essere compatibile con GDI.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.

##  <a name="crendertarget"></a>  CRenderTarget::CRenderTarget

Costruisce un oggetto CRenderTarget.

```
CRenderTarget();
```

##  <a name="destroy"></a>  CRenderTarget::Destroy

Elimina una o più risorse

```
BOOL Destroy(BOOL bDeleteResources = TRUE);
```

### <a name="parameters"></a>Parametri

*bDeleteResources*<br/>
Se bDeleteResources è TRUE, tutte le risorse disponibili in m_lstResources verranno automaticamente distrutte.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE

##  <a name="detach"></a>  CRenderTarget::Detach

Scollega interfaccia di destinazione di rendering dell'oggetto

```
ID2D1RenderTarget* Detach ();
```

### <a name="return-value"></a>Valore restituito

Puntatore a scollegare il rendering dell'interfaccia di destinazione.

##  <a name="drawbitmap"></a>  CRenderTarget::DrawBitmap

Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.

```
void DrawBitmap(
    CD2DBitmap* pBitmap,
    const CD2DRectF& rectDest,
    float fOpacity = 1.0,
    D2D1_BITMAP_INTERPOLATION_MODE interpolationMode = D2D1_BITMAP_INTERPOLATION_MODE_LINEAR,
    const CD2DRectF* pRectSrc = NULL);
```

### <a name="parameters"></a>Parametri

*pBitmap*<br/>
Mappa di bit per eseguire il rendering.

*rectDest*<br/>
Le dimensioni e posizione, espressa in pixel indipendenti dal dispositivo nello spazio delle coordinate della destinazione di rendering, dell'area in cui la bitmap viene tracciata. Se il rettangolo non è ben ordinato, non viene disegnato alcun elemento, ma la destinazione di rendering non entri in uno stato di errore.

*fOpacity*<br/>
Un valore compreso tra 0.0 f e 1.0, inclusi, che specifica un valore di opacità da applicare alla bitmap; Questo valore viene moltiplicato per i valori alfa del contenuto della mappa di bit.

*interpolationMode*<br/>
La modalità di interpolazione da utilizzare se la bitmap viene ridimensionata o ruotata dall'operazione di disegno.

*pRectSrc*<br/>
Le dimensioni e posizione, espressa in pixel indipendenti dal dispositivo nello spazio delle coordinate della mappa di bit, dell'area della bitmap da disegnare.

##  <a name="drawellipse"></a>  CRenderTarget::DrawEllipse

Consente di disegnare il contorno dell'ellisse specificato utilizzando lo stile del tratto specificato.

```
void DrawEllipse(
    const CD2DEllipse& ellipse,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### <a name="parameters"></a>Parametri

*ellisse*<br/>
La posizione e un raggio di puntini di sospensione per disegnare, in pixel indipendenti dal dispositivo.

*pBrush*<br/>
Il pennello utilizzato per disegnare il contorno dell'ellisse.

*fStrokeWidth*<br/>
Lo spessore del tratto dell'ellisse. Il tratto coincide con il contorno dell'ellisse.

*strokeStyle*<br/>
Lo stile del tratto da applicare al contorno dell'ellisse oppure NULL per disegnare un tratto a tinta unita.

##  <a name="drawgeometry"></a>  CRenderTarget::DrawGeometry

Consente di disegnare la struttura della geometria specificata utilizzando lo stile del tratto specificato.

```
void DrawGeometry(
    CD2DGeometry* pGeometry,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### <a name="parameters"></a>Parametri

*pGeometry*<br/>
Geometria da disegnare.

*pBrush*<br/>
Il pennello utilizzato per disegnare il tratto della geometria.

*fStrokeWidth*<br/>
Lo spessore del tratto della geometria. Il tratto è centrato sulla struttura della geometria.

*strokeStyle*<br/>
Stile del tratto da applicare alla struttura della geometria oppure NULL per disegnare un tratto a tinta unita.

##  <a name="drawglyphrun"></a>  CRenderTarget::DrawGlyphRun

Consente di disegnare glifi specificati.

```
void DrawGlyphRun(
    const CD2DPointF& ptBaseLineOrigin,
    const DWRITE_GLYPH_RUN& glyphRun,
    CD2DBrush* pForegroundBrush,
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```

### <a name="parameters"></a>Parametri

*ptBaseLineOrigin*<br/>
L'origine, in pixel indipendenti dal dispositivo, della linea di base dei glifi.

*glyphRun*<br/>
I glifi per il rendering.

*pForegroundBrush*<br/>
Il pennello utilizzato per disegnare i glifi specificati.

*measuringMode*<br/>
Un valore che indica come metrica del glifo viene usata per misurare il testo quando viene formattato. Il valore predefinito è DWRITE_MEASURING_MODE_NATURAL.

##  <a name="drawline"></a>  CRenderTarget::DrawLine

Disegna una linea tra i punti specificati utilizzando lo stile di traccia specificato.

```
void DrawLine(
    const CD2DPointF& ptFrom,
    const CD2DPointF& ptTo,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### <a name="parameters"></a>Parametri

*ptFrom*<br/>
Il punto iniziale della riga, in pixel indipendenti dal dispositivo.

*ptTo*<br/>
Il punto finale della linea, in pixel indipendenti dal dispositivo.

*pBrush*<br/>
Il pennello utilizzato per disegnare il tratto della linea.

*fStrokeWidth*<br/>
Un valore maggiore o uguale a 0,0 f che specifica lo spessore del tratto. Se questo parametro non è specificato, per impostazione predefinita 1.0f. Il tratto coincide con la riga.

*strokeStyle*<br/>
Lo stile del tratto da disegno o NULL per disegnare una linea continua.

##  <a name="drawrectangle"></a>  CRenderTarget::DrawRectangle

Consente di disegnare la struttura di un rettangolo con le dimensioni specificate e stile di traccia.

```
void DrawRectangle(
    const CD2DRectF& rect,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Le dimensioni del rettangolo da disegnare, in pixel indipendenti dal dispositivo

*pBrush*<br/>
Il pennello utilizzato per disegnare il tratto del rettangolo

*fStrokeWidth*<br/>
Un valore maggiore o uguale a 0,0 f che specifica lo spessore del tratto del rettangolo. Il tratto è centrato sulla struttura del rettangolo.

*strokeStyle*<br/>
Lo stile del tratto da paint o NULL per disegnare un tratto a tinta unita.

##  <a name="drawroundedrectangle"></a>  CRenderTarget::DrawRoundedRectangle

Consente di disegnare il contorno del rettangolo arrotondato specificato utilizzando lo stile del tratto specificato.

```
void DrawRoundedRectangle(
    const CD2DRoundedRect& rectRounded,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### <a name="parameters"></a>Parametri

*rectRounded*<br/>
Le dimensioni del rettangolo arrotondato da disegnare, in pixel indipendenti dal dispositivo.

*pBrush*<br/>
Il pennello utilizzato per disegnare il contorno del rettangolo arrotondato.

*fStrokeWidth*<br/>
La larghezza del tratto del rettangolo arrotondato. Il tratto è centrato sulla struttura del rettangolo arrotondato. Il valore predefinito è 1.0f.

*strokeStyle*<br/>
Stile del tratto del rettangolo arrotondato o NULL per disegnare un tratto a tinta unita. Il valore predefinito è NULL.

##  <a name="drawtext"></a>  CRenderTarget::DrawText

Disegna il testo specificato usando le informazioni di formato fornite da un oggetto IDWriteTextFormat.

```
void DrawText(
    const CString& strText,
    const CD2DRectF& rect,
    CD2DBrush* pForegroundBrush,
    CD2DTextFormat* textFormat = NULL,
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE,
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```

### <a name="parameters"></a>Parametri

*strText*<br/>
Un puntatore a una matrice di caratteri Unicode da disegnare.

*Rect*<br/>
Le dimensioni e posizione dell'area in cui viene disegnato il testo.

*pForegroundBrush*<br/>
Il pennello utilizzato per disegnare il testo.

*TextFormat*<br/>
Un oggetto che descrive i dettagli del testo da disegnare, ad esempio il tipo di carattere, dimensioni del carattere e la direzione di flusso di formattazione.

*options*<br/>
Un valore che indica se il testo deve essere bloccato per i limiti dei pixel e indica se il testo deve essere ritagliata in base al rettangolo di layout. Il valore predefinito è D2D1_DRAW_TEXT_OPTIONS_NONE, che indica che il testo deve essere bloccato nei limiti dei pixel e non deve essere ritagliato nel rettangolo di layout.

*measuringMode*<br/>
Un valore che indica come metrica del glifo viene usata per misurare il testo quando viene formattato. Il valore predefinito è DWRITE_MEASURING_MODE_NATURAL.

##  <a name="drawtextlayout"></a>  CRenderTarget::DrawTextLayout

Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.

```
void DrawTextLayout(
    const CD2DPointF& ptOrigin,
    CD2DTextLayout* textLayout,
    CD2DBrush* pBrushForeground,
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE);
```

### <a name="parameters"></a>Parametri

*ptOrigin*<br/>
Il punto, descritto in device independent pixel, in corrispondenza del quale viene disegnata l'angolo superiore sinistro del testo descritto da textLayout.

*textLayout*<br/>
Il testo formattato da disegnare. Eventuali effetti di disegno che non ereditano da ID2D1Resource vengono ignorati. Se sono presenti effetti di disegno che ereditano da ID2D1Resource které nejsou pennelli, questo metodo ha esito negativo e la destinazione di rendering verrà inserita in uno stato di errore.

*pBrushForeground*<br/>
Il pennello utilizzato per disegnare il testo desiderato nel textLayout che non dispone già di un pennello associato all'effetto di disegno (specificato dal metodo IDWriteTextLayout::SetDrawingEffect).

*options*<br/>
Un valore che indica se il testo deve essere bloccato per i limiti dei pixel e indica se il testo deve essere ritagliata in base al rettangolo di layout. Il valore predefinito è D2D1_DRAW_TEXT_OPTIONS_NONE, che indica che il testo deve essere bloccato nei limiti dei pixel e non deve essere ritagliato nel rettangolo di layout.

##  <a name="enddraw"></a>  CRenderTarget::EndDraw

Termina operazioni di disegno sulla destinazione di rendering e indica lo stato di errore corrente e i tag associati.

```
HRESULT EndDraw();
```

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="fillellipse"></a>  CRenderTarget::FillEllipse

Disegna la parte interna dell'ellisse specificato.

```
void FillEllipse(
    const CD2DEllipse& ellipse,
    CD2DBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*ellisse*<br/>
La posizione e un raggio, in device independent pixel, dell'ellisse per disegnare.

*pBrush*<br/>
Il pennello utilizzato per disegnare la parte interna dell'ellisse.

##  <a name="fillgeometry"></a>  CRenderTarget::FillGeometry

Disegna l'interno della geometria specificata.

```
void FillGeometry(
    CD2DGeometry* pGeometry,
    CD2DBrush* pBrush,
    CD2DBrush* pOpacityBrush = NULL);
```

### <a name="parameters"></a>Parametri

*pGeometry*<br/>
Geometria da disegnare.

*pBrush*<br/>
Il pennello utilizzato per disegnare la geometria della parte interno.

*pOpacityBrush*<br/>
La maschera di opacità da applicare alla geometria, NULL per alcuna maschera di opacità. Se si specifica una maschera di opacità (il parametro opacityBrush), pennello deve essere un ID2D1BitmapBrush che è impostato su D2D1_EXTEND_MODE_CLAMP relative modalità di x e y aumentano. Per altre informazioni, vedere la sezione Osservazioni.

##  <a name="fillmesh"></a>  CRenderTarget::FillMesh

Disegna l'interno della rete specificata.

```
void FillMesh(
    CD2DMesh* pMesh,
    CD2DBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*pMesh*<br/>
Disegnare la mesh.

*pBrush*<br/>
Il pennello utilizzato per disegnare la mesh.

##  <a name="fillopacitymask"></a>  CRenderTarget::FillOpacityMask

Si applica la maschera di opacità descritta da nella bitmap specificata in un pennello e Usa il pennello per disegnare un'area di destinazione di rendering.

```
void FillOpacityMask(
    CD2DBitmap* pOpacityMask,
    CD2DBrush* pBrush,
    D2D1_OPACITY_MASK_CONTENT content,
    const CD2DRectF& rectDest,
    const CD2DRectF& rectSrc);
```

### <a name="parameters"></a>Parametri

*pOpacityMask*<br/>
La posizione e un raggio, in device independent pixel, dell'ellisse per disegnare.

*pBrush*<br/>
Il pennello utilizzato per disegnare l'area di destinazione di rendering specificata da destinationRectangle.

*content*<br/>
Il tipo di contenuto che contiene la maschera di opacità. Il valore viene utilizzato per determinare lo spazio colore in cui viene fusa la maschera di opacità.

*rectDest*<br/>
L'area di destinazione di rendering per disegnare, in pixel indipendenti dal dispositivo.

*rectSrc*<br/>
L'area della bitmap da usare come maschera di opacità, in pixel indipendenti dal dispositivo.

##  <a name="fillrectangle"></a>  CRenderTarget::FillRectangle

Disegna l'interno del rettangolo specificato.

```
void FillRectangle(
    const CD2DRectF& rect,
    CD2DBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
La dimensione del rettangolo da disegnare, in pixel indipendenti dal dispositivo.

*pBrush*<br/>
Il pennello utilizzato per disegnare il rettangolo della parte interno.

##  <a name="fillroundedrectangle"></a>  CRenderTarget::FillRoundedRectangle

Disegna l'interno del rettangolo arrotondato specificato.

```
void FillRoundedRectangle(
    const CD2DRoundedRect& rectRounded,
    CD2DBrush* pBrush);
```

### <a name="parameters"></a>Parametri

*rectRounded*<br/>
Le dimensioni del rettangolo arrotondato da disegnare, in DIP (device independent pixel).

*pBrush*<br/>
Il pennello utilizzato per colorare l'interno del rettangolo arrotondato.

##  <a name="flush"></a>  CRenderTarget::Flush

Esegue tutti i comandi di disegno in sospeso.

```
void Flush(
    D2D1_TAG* tag1 = NULL,
    D2D1_TAG* tag2 = NULL);
```

### <a name="parameters"></a>Parametri

*tag1*<br/>
Contiene il tag per la creazione di operazioni che hanno generato errori o 0 se si sono verificati senza errori. Questo parametro viene passato non inizializzato.

*tag2*<br/>
Contiene il tag per la creazione di operazioni che hanno generato errori o 0 se si sono verificati senza errori. Questo parametro viene passato non inizializzato.

##  <a name="getantialiasmode"></a>  CRenderTarget::GetAntialiasMode

Recupera la modalità di anti-aliasing corrente per le operazioni di disegno non di testo.

```
D2D1_ANTIALIAS_MODE GetAntialiasMode() const;
```

### <a name="return-value"></a>Valore restituito

Modalità di anti-aliasing corrente per le operazioni di disegno non di testo.

##  <a name="getdpi"></a>  CRenderTarget::GetDpi

Restituisce il rendering punti per pollice (DPI) di destinazione

```
CD2DSizeF GetDpi() const;
```

### <a name="return-value"></a>Valore restituito

Punti della destinazione di rendering per pollice (DPI).

##  <a name="getmaximumbitmapsize"></a>  CRenderTarget::GetMaximumBitmapSize

Ottiene la dimensione massima, in unità di dipendente dalla periferica (pixel), di qualsiasi dimensione di una singola bitmap supportate dalla destinazione rendering

```
UINT32 GetMaximumBitmapSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni massime, in pixel, di qualsiasi dimensione di una singola bitmap supportate dalla destinazione rendering

##  <a name="getpixelformat"></a>  CRenderTarget::GetPixelFormat

Recupera la modalità di formato e alfa di pixel della destinazione di rendering

```
D2D1_PIXEL_FORMAT GetPixelFormat() const;
```

### <a name="return-value"></a>Valore restituito

Il formato pixel e alfa modalità della destinazione di rendering

##  <a name="getpixelsize"></a>  CRenderTarget::GetPixelSize

Restituisce le dimensioni della destinazione di rendering in pixel del dispositivo

```
CD2DSizeU GetPixelSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni della destinazione di rendering in pixel del dispositivo

##  <a name="getrendertarget"></a>  CRenderTarget::GetRenderTarget

Restituisce l'interfaccia ID2D1RenderTarget

```
ID2D1RenderTarget* GetRenderTarget();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1RenderTarget o NULL se l'oggetto non è ancora inizializzato.

##  <a name="getsize"></a>  CRenderTarget::GetSize

Restituisce le dimensioni della destinazione di rendering in device independent pixel

```
CD2DSizeF GetSize() const;
```

### <a name="return-value"></a>Valore restituito

La dimensione corrente della destinazione di rendering in pixel indipendenti dal dispositivo

##  <a name="gettags"></a>  CRenderTarget::GetTags

Ottiene l'etichetta per le operazioni di disegno successivi.

```
void GetTags(
    D2D1_TAG* tag1 = NULL,
    D2D1_TAG* tag2 = NULL) const;
```

### <a name="parameters"></a>Parametri

*tag1*<br/>
Contiene la prima etichetta per le operazioni di disegnare successivi. Questo parametro viene passato non inizializzato. Se viene specificato NULL, non viene recuperato alcun valore per questo parametro.

*tag2*<br/>
Contiene la seconda etichetta per le operazioni di disegnare successivi. Questo parametro viene passato non inizializzato. Se viene specificato NULL, non viene recuperato alcun valore per questo parametro.

##  <a name="gettextantialiasmode"></a>  CRenderTarget::GetTextAntialiasMode

Ottiene la modalità corrente di anti-aliasing per testo e glifo operazioni di disegno.

```
D2D1_TEXT_ANTIALIAS_MODE GetTextAntialiasMode() const;
```

### <a name="return-value"></a>Valore restituito

Modalità corrente di anti-aliasing per testo e glifo operazioni di disegno.

##  <a name="gettextrenderingparams"></a>  CRenderTarget::GetTextRenderingParams

Recupera opzioni di rendering del testo corrente della destinazione di rendering.

```
void GetTextRenderingParams(IDWriteRenderingParams** textRenderingParams);
```

### <a name="parameters"></a>Parametri

*textRenderingParams*<br/>
Quando termina, questo metodo corrente textRenderingParams contiene l'indirizzo di un puntatore alla destinazione di rendering della opzioni di rendering del testo.

##  <a name="gettransform"></a>  CRenderTarget::GetTransform

Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato.

```
void GetTransform(D2D1_MATRIX_3X2_F* transform);
```

### <a name="parameters"></a>Parametri

*transform*<br/>
La trasformazione da applicare nella destinazione di rendering.

##  <a name="issupported"></a>  CRenderTarget::IsSupported

Indica se la destinazione di rendering supporta le proprietà specificate

```
BOOL IsSupported(const D2D1_RENDER_TARGET_PROPERTIES& renderTargetProperties) const;
```

### <a name="parameters"></a>Parametri

*renderTargetProperties*<br/>
Le proprietà di destinazione di rendering per eseguire il test

### <a name="return-value"></a>Valore restituito

TRUE se sono supportate le proprietà di destinazione di rendering specificato da questa destinazione di rendering; in caso contrario, FALSE

##  <a name="isvalid"></a>  CRenderTarget::IsValid

Verifica la validità della risorsa

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la risorsa è valida. in caso contrario, FALSE.

##  <a name="m_lstresources"></a>  CRenderTarget::m_lstResources

Elenco di puntatori a oggetti CD2DResource.

```
CObList m_lstResources;
```

##  <a name="m_prendertarget"></a>  CRenderTarget::m_pRenderTarget

Un puntatore a un oggetto ID2D1RenderTarget.

```
ID2D1RenderTarget* m_pRenderTarget;
```

##  <a name="m_ptextformatdefault"></a>  CRenderTarget::m_pTextFormatDefault

Un puntatore all'oggetto CD2DTextFormat contenente un formato di testo predefinito.

```
CD2DTextFormat* m_pTextFormatDefault;
```

##  <a name="operator_id2d1rendertarget_star"></a>  CRenderTarget::operator ID2D1RenderTarget *

Restituisce l'interfaccia ID2D1RenderTarget

```
operator ID2D1RenderTarget*();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia ID2D1RenderTarget o NULL se l'oggetto non è ancora inizializzato.

##  <a name="popaxisalignedclip"></a>  CRenderTarget::PopAxisAlignedClip

Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il ritaglio non viene più applicato alle operazioni di disegno successivi.

```
void PopAxisAlignedClip();
```

##  <a name="poplayer"></a>  CRenderTarget::PopLayer

Interrompe il reindirizzamento delle operazioni di disegno al livello specificato dal PushLayer ultima chiamata.

```
void PopLayer();
```

##  <a name="pushaxisalignedclip"></a>  CRenderTarget::PushAxisAlignedClip

Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il ritaglio non viene più applicato alle operazioni di disegno successivi.

```
void PushAxisAlignedClip(
    const CD2DRectF& rectClip,
    D2D1_ANTIALIAS_MODE mode = D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
```

### <a name="parameters"></a>Parametri

*rectClip*<br/>
Le dimensioni e posizione dell'area di visualizzazione, in pixel indipendenti dal dispositivo.

*mode*<br/>
La modalità di anti-aliasing che viene utilizzata per disegnare i bordi dei rettangoli di ritaglio che sono previsti limiti dei subpixel e per il ritaglio con il contenuto della scena di blend. La sfumatura viene eseguita una volta quando viene chiamato il metodo PopAxisAlignedClip e non si applica a ogni primitiva all'interno del livello.

##  <a name="pushlayer"></a>  CRenderTarget::PushLayer

Aggiunge il livello specificato nella destinazione di rendering, in modo che riceva tutte le operazioni di disegnare successive fino a quando non viene chiamato PopLayer.

```
void PushLayer(
    const D2D1_LAYER_PARAMETERS& layerParameters,
    CD2DLayer& layer);
```

### <a name="parameters"></a>Parametri

*layerParameters*<br/>
I limiti del contenuto, maschera geometrica, opacità, maschera di opacità e opzioni di anti-aliasing per il livello.

*Livello*<br/>
Il livello che riceve le operazioni di disegno successivi.

##  <a name="restoredrawingstate"></a>  CRenderTarget::RestoreDrawingState

Imposta lo stato di disegno della destinazione di rendering a quella del ID2D1DrawingStateBlock specificato.

```
void RestoreDrawingState(ID2D1DrawingStateBlock& drawingStateBlock);
```

### <a name="parameters"></a>Parametri

*drawingStateBlock*<br/>
Il nuovo stato di disegno della destinazione di rendering.

##  <a name="savedrawingstate"></a>  CRenderTarget::SaveDrawingState

Salva lo stato corrente di disegno di ID2D1DrawingStateBlock specificato.

```
void SaveDrawingState(ID2D1DrawingStateBlock& drawingStateBlock) const;
```

### <a name="parameters"></a>Parametri

*drawingStateBlock*<br/>
Quando termina, questo metodo contiene lo stato corrente di disegno della destinazione di rendering. Questo parametro deve essere inizializzato prima di passarlo al metodo.

##  <a name="setantialiasmode"></a>  CRenderTarget::SetAntialiasMode

Imposta la modalità di anti-aliasing della destinazione di rendering. La modalità di anti-aliasing si applica a tutte le operazioni di disegnare successive, ad eccezione di testo e glifo operazioni di disegno.

```
void SetAntialiasMode(D2D1_ANTIALIAS_MODE antialiasMode);
```

### <a name="parameters"></a>Parametri

*antialiasMode*<br/>
La modalità di anti-aliasing per operazioni future di disegnare.

##  <a name="setdpi"></a>  CRenderTarget::SetDpi

Imposta i punti per pollice (DPI) della destinazione di rendering.

```
void SetDpi(const CD2DSizeF& sizeDPI);
```

### <a name="parameters"></a>Parametri

*sizeDPI*<br/>
Un valore maggiore o uguale a zero che specifica il DPI orizzontale/verticale della destinazione di rendering.

##  <a name="settags"></a>  CRenderTarget::SetTags

Specifica un'etichetta per le operazioni di disegno successivi.

```
void SetTags(
    D2D1_TAG tag1,
    D2D1_TAG tag2);
```

### <a name="parameters"></a>Parametri

*tag1*<br/>
Etichetta da applicare alle operazioni di disegno successivi.

*tag2*<br/>
Etichetta da applicare alle operazioni di disegno successivi.

##  <a name="settextantialiasmode"></a>  CRenderTarget::SetTextAntialiasMode

Specifica la modalità di anti-aliasing da utilizzare per il testo che segue e operazioni di disegno del glifo.

```
void SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode);
```

### <a name="parameters"></a>Parametri

*textAntialiasMode*<br/>
La modalità di anti-aliasing da utilizzare per testo e glifo operazioni di disegno successive.

##  <a name="settextrenderingparams"></a>  CRenderTarget::SetTextRenderingParams

Specifica le opzioni per il rendering di testo da applicare a tutti i successivi testo e glifo operazioni di disegno.

```
void SetTextRenderingParams(IDWriteRenderingParams* textRenderingParams = NULL);
```

### <a name="parameters"></a>Parametri

*textRenderingParams*<br/>
Le opzioni per il rendering di testo da applicare a tutti i successivi testo e glifo; NULL per cancellare le opzioni per il rendering di testo corrente.

##  <a name="settransform"></a>  CRenderTarget::SetTransform

Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato.

```
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
void SetTransform(const D2D1_MATRIX_3X2_F& transform);
```

### <a name="parameters"></a>Parametri

*transform*<br/>
La trasformazione da applicare nella destinazione di rendering.

##  <a name="verifyresource"></a>  CRenderTarget::VerifyResource

Verifica la validità dell'oggetto CD2DResource; Crea l'oggetto se non esiste già.

```
BOOL VerifyResource(CD2DResource* pResource);
```

### <a name="parameters"></a>Parametri

*pResource*<br/>
Puntatore all'oggetto CD2DResource.

### <a name="return-value"></a>Valore restituito

TRUE se valido; l'oggetto è in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
