---
title: Classe CDrawingManager
ms.date: 11/04/2016
f1_keywords:
- CDrawingManager
- AFXDRAWMANAGER/CDrawingManager
- AFXDRAWMANAGER/CDrawingManager::CDrawingManager
- AFXDRAWMANAGER/CDrawingManager::CreateBitmap_32
- AFXDRAWMANAGER/CDrawingManager::DrawAlpha
- AFXDRAWMANAGER/CDrawingManager::DrawRotated
- AFXDRAWMANAGER/CDrawingManager::DrawEllipse
- AFXDRAWMANAGER/CDrawingManager::DrawGradientRing
- AFXDRAWMANAGER/CDrawingManager::DrawRect
- AFXDRAWMANAGER/CDrawingManager::DrawShadow
- AFXDRAWMANAGER/CDrawingManager::Fill4ColorsGradient
- AFXDRAWMANAGER/CDrawingManager::FillGradient
- AFXDRAWMANAGER/CDrawingManager::FillGradient2
- AFXDRAWMANAGER/CDrawingManager::GrayRect
- AFXDRAWMANAGER/CDrawingManager::HighlightRect
- AFXDRAWMANAGER/CDrawingManager::HLStoRGB_ONE
- AFXDRAWMANAGER/CDrawingManager::HLStoRGB_TWO
- AFXDRAWMANAGER/CDrawingManager::HSVtoRGB
- AFXDRAWMANAGER/CDrawingManager::HuetoRGB
- AFXDRAWMANAGER/CDrawingManager::MirrorRect
- AFXDRAWMANAGER/CDrawingManager::PixelAlpha
- AFXDRAWMANAGER/CDrawingManager::PrepareShadowMask
- AFXDRAWMANAGER/CDrawingManager::RGBtoHSL
- AFXDRAWMANAGER/CDrawingManager::RGBtoHSV
- AFXDRAWMANAGER/CDrawingManager::SetAlphaPixel
- AFXDRAWMANAGER/CDrawingManager::SetPixel
- AFXDRAWMANAGER/CDrawingManager::SmartMixColors
helpviewer_keywords:
- CDrawingManager [MFC], CDrawingManager
- CDrawingManager [MFC], CreateBitmap_32
- CDrawingManager [MFC], DrawAlpha
- CDrawingManager [MFC], DrawRotated
- CDrawingManager [MFC], DrawEllipse
- CDrawingManager [MFC], DrawGradientRing
- CDrawingManager [MFC], DrawRect
- CDrawingManager [MFC], DrawShadow
- CDrawingManager [MFC], Fill4ColorsGradient
- CDrawingManager [MFC], FillGradient
- CDrawingManager [MFC], FillGradient2
- CDrawingManager [MFC], GrayRect
- CDrawingManager [MFC], HighlightRect
- CDrawingManager [MFC], HLStoRGB_ONE
- CDrawingManager [MFC], HLStoRGB_TWO
- CDrawingManager [MFC], HSVtoRGB
- CDrawingManager [MFC], HuetoRGB
- CDrawingManager [MFC], MirrorRect
- CDrawingManager [MFC], PixelAlpha
- CDrawingManager [MFC], PrepareShadowMask
- CDrawingManager [MFC], RGBtoHSL
- CDrawingManager [MFC], RGBtoHSV
- CDrawingManager [MFC], SetAlphaPixel
- CDrawingManager [MFC], SetPixel
- CDrawingManager [MFC], SmartMixColors
ms.assetid: 9e4775ca-101b-4aa9-a85a-4d047c701215
ms.openlocfilehash: 506ab7a06653942ecff05043a7e7efabd535115f
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781692"
---
# <a name="cdrawingmanager-class"></a>Classe CDrawingManager

Il `CDrawingManager` classe implementa gli algoritmi di disegni complessi.

## <a name="syntax"></a>Sintassi

```
class CDrawingManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDrawingManager::CDrawingManager](#cdrawingmanager)|Costruisce un oggetto `CDrawingManager`.|
|`CDrawingManager::~CDrawingManager`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDrawingManager::CreateBitmap_32](#createbitmap_32)|Crea una bitmap indipendente dalla periferica a 32 bit (DIB) che le applicazioni possono scrivere direttamente.|
|[CDrawingManager::DrawAlpha](#drawalpha)|Consente di visualizzare le bitmap con pixel trasparente o semitrasparente.|
|[CDrawingManager::DrawRotated](#drawrotated)|Ruota un'origine contenuto di controller di dominio all'interno del rettangolo specificato da + /-90 gradi|
|[CDrawingManager::DrawEllipse](#drawellipse)|Disegna un'ellisse con colori di riempimento e bordo specificati.|
|[CDrawingManager::DrawGradientRing](#drawgradientring)|Disegna un anello e vi inserisce una sfumatura di colore.|
|[CDrawingManager::DrawLine, CDrawingManager::DrawLineA](#drawline_cdrawingmanager__drawlinea)|Disegna una linea.|
|[CDrawingManager::DrawRect](#drawrect)|Disegna un rettangolo con colori di riempimento e bordo specificati.|
|[CDrawingManager::DrawShadow](#drawshadow)|Disegna un'ombreggiatura per un'area rettangolare.|
|[CDrawingManager::Fill4ColorsGradient](#fill4colorsgradient)|Riempie un'area rettangolare con due sfumature di colore.|
|[CDrawingManager::FillGradient](#fillgradient)|Riempie un'area rettangolare con una sfumatura di colore specificato.|
|[CDrawingManager::FillGradient2](#fillgradient2)|Riempie un'area rettangolare con una sfumatura di colore specificato. Viene specificata anche la direzione della modifica del colore della sfumatura.|
|[CDrawingManager::GrayRect](#grayrect)|Riempie un rettangolo con un colore grigio specificato.|
|[CDrawingManager::HighlightRect](#highlightrect)|Evidenzia un'area rettangolare.|
|[CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)|Converte una rappresentazione RGB un colore da una rappresentazione di HLS.|
|[CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)|Converte una rappresentazione RGB un colore da una rappresentazione di HLS.|
|[CDrawingManager::HSVtoRGB](#hsvtorgb)|Converte un colore da una rappresentazione HSV in una rappresentazione RGB.|
|[CDrawingManager::HuetoRGB](#huetorgb)|Metodo helper che converte un valore di hue in un componente rosso, verde o blu.|
|[CDrawingManager::MirrorRect](#mirrorrect)|Capovolge un'area rettangolare.|
|[CDrawingManager::PixelAlpha](#pixelalpha)|Metodo helper che determina il colore finale per un pixel semitrasparente.|
|[CDrawingManager::PrepareShadowMask](#prepareshadowmask)|Crea una bitmap che può essere utilizzata come un'ombreggiatura.|
|[CDrawingManager::RGBtoHSL](#rgbtohsl)|Converte un colore da una rappresentazione RGB in una rappresentazione HSL.|
|[CDrawingManager::RGBtoHSV](#rgbtohsv)|Converte una rappresentazione HSV un colore da una rappresentazione RGB.|
|[CDrawingManager::SetAlphaPixel](#setalphapixel)|Metodo helper che un pixel parzialmente trasparente nella bitmap di colori.|
|[CDrawingManager::SetPixel](#setpixel)|Metodo helper che modifica un singolo pixel in una bitmap sul colore specificato.|
|[CDrawingManager::SmartMixColors](#smartmixcolors)|Combina due colori in base a un rapporto ponderato.|

## <a name="remarks"></a>Note

Il `CDrawingManager` classe fornisce funzioni per tracciare le ombreggiature, sfumature di colore e rettangoli evidenziati. Esegue inoltre la fusione alfa. È possibile utilizzare questa classe per modificare direttamente l'interfaccia utente dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)<br/>
`CDrawingManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdrawmanager.h

##  <a name="cdrawingmanager"></a>  CDrawingManager::CDrawingManager

Costruisce un [CDrawingManager](../../mfc/reference/cdrawingmanager-class.md) oggetto.

```
CDrawingManager(CDC& dc);
```

### <a name="parameters"></a>Parametri

*dc*<br/>
[in] Un riferimento a un contesto di dispositivo. Il `CDrawingManager` utilizza questo contesto per il disegno.

##  <a name="createbitmap_32"></a>  CDrawingManager::CreateBitmap_32

Crea una bitmap indipendente dalla periferica a 32 bit (DIB) che le applicazioni possono scrivere direttamente.

```
static HBITMAP __stdcall CreateBitmap_32(
    const CSize& size,
    void** pBits);

static HBITMAP __stdcall CreateBitmap_32(
    HBITMAP bitmap,
    COLORREF clrTransparent = -1);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*size*|[in] Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) parametro che indica le dimensioni della bitmap.|
|*pBits*|[out] Valori di bit un puntatore a un puntatore a dati che riceve il percorso delle DIB.|
|*bitmap*|Un handle alla bitmap originale|
|*clrTransparent*|Un valore RGB che specifica un colore trasparente dell'immagine bitmap originale.|

### <a name="return-value"></a>Valore restituito

Un handle alla bitmap DIB appena creato se questo metodo ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Note

Per altre informazioni su come creare una bitmap DIB, vedere [CreateDIBSection](/windows/desktop/api/wingdi/nf-wingdi-createdibitmap).

##  <a name="drawalpha"></a>  CDrawingManager::DrawAlpha

Consente di visualizzare le bitmap con pixel trasparente o semitrasparente.

```
void DrawAlpha(
    CDC* pDstDC,
    const CRect& rectDst,
    CDC* pSrcDC,
    const CRect& rectSrc);
```

### <a name="parameters"></a>Parametri

*pDstDC*<br/>
[in] Puntatore al contesto di dispositivo per la destinazione.

*rectDst*<br/>
[in] Il rettangolo di destinazione.

*pSrcDC*<br/>
[in] Puntatore al contesto di dispositivo per l'origine.

*rectSrc*<br/>
[in] Il rettangolo di origine.

### <a name="remarks"></a>Note

Questo metodo esegue la fusione alfa per due immagini bitmap. Per altre informazioni sulla fusione alfa, vedere [AlphaBlend](/windows/desktop/api/wingdi/nf-wingdi-alphablend) nel SDK di Windows.

##  <a name="drawellipse"></a>  CDrawingManager::DrawEllipse

Disegna un'ellisse con colori di riempimento e bordo specificati.

```
void DrawEllipse(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Il rettangolo di delimitazione dell'ellisse.

*clrFill*<br/>
[in] Il colore di che questo metodo viene utilizzato per riempire l'ellisse.

*clrLine*<br/>
[in] Il colore di che questo metodo viene utilizzato come il bordo dell'ellisse.

### <a name="remarks"></a>Note

Questo metodo restituisce senza disegnare un'ellisse se dei colori è impostato su -1. Restituisce anche senza disegnare un'ellisse se una dimensione del rettangolo di delimitazione è 0.

##  <a name="drawgradientring"></a>  CDrawingManager::DrawGradientRing

Disegna un anello e vi inserisce una sfumatura di colore.

```
BOOL DrawGradientRing(
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    COLORREF colorBorder,
    int nAngle,
    int nWidth,
    COLORREF clrFace = (COLORREF)-1);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) parametro che specifica il limite per l'anello di sfumatura.

*colorStart*<br/>
[in] Primo colore della sfumatura.

*colorFinish*<br/>
[in] L'ultimo colore per la sfumatura.

*colorBorder*<br/>
[in] Colore del bordo.

*nAngle*<br/>
[in] Un parametro che specifica l'angolo iniziale di disegno della sfumatura. Questo valore deve essere compreso tra 0 e 360.

*nWidth*<br/>
[in] La larghezza del bordo per l'anello.

*clrFace*<br/>
[in] Il colore all'interno dell'anello.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Il rettangolo definito da *rect* deve essere almeno 5 pixel di larghezza e di 5 pixel di altezza.

##  <a name="drawline_cdrawingmanager__drawlinea"></a>  CDrawingManager::DrawLine, CDrawingManager::DrawLineA

Disegna una linea.

```
void DrawLine(
    int x1,
    int y1,
    int x2,
    int y2,
    COLORREF clrLine);

void DrawLineA(
    double x1,
    double y1,
    double x2,
    double y2,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*x1*|[in] Coordinata x in cui inizia la riga.|
|*y1*|[in] Coordinata y in cui inizia la riga.|
|*x2*|[in] Coordinata x in cui termina la riga.|
|*y2*|[in] Coordinata y in cui termina la riga.|
|*clrLine*|[in] Colore della linea.|

### <a name="remarks"></a>Note

Questo metodo ha esito negativo se *clrLine* è uguale a -1.

##  <a name="drawrect"></a>  CDrawingManager::DrawRect

Disegna un rettangolo con colori di riempimento e bordo specificati.

```
void DrawRect(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] I limiti del rettangolo.

*clrFill*<br/>
[in] Il colore di che questo metodo viene utilizzato per riempire il rettangolo.

*clrLine*<br/>
[in] Il colore di questo metodo viene utilizzato per il bordo del rettangolo.

### <a name="remarks"></a>Note

Questo metodo restituisce senza disegnare un rettangolo se dei colori è impostato su -1. Restituisce anche se una dimensione del rettangolo è 0.

##  <a name="drawshadow"></a>  CDrawingManager::DrawShadow

Disegna un'ombreggiatura per un'area rettangolare.

```
BOOL DrawShadow(
    CRect rect,
    int nDepth,
    int iMinBrightness = 100,
    int iMaxBrightness = 50,
    CBitmap* pBmpSaveBottom = NULL,
    CBitmap* pBmpSaveRight = NULL,
    COLORREF clrBase = (COLORREF)-1,
    BOOL bRightShadow = TRUE);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Un'area rettangolare all'interno dell'applicazione. Il gestore disegno verrà tracciare un'ombreggiatura sottostante quest'area.

*nDepth*<br/>
[in] La larghezza e l'altezza dell'ombreggiatura.

*iMinBrightness*<br/>
[in] La luminosità minima dell'ombreggiatura.

*iMaxBrightness*<br/>
[in] La luminosità massima dell'ombreggiatura.

*pBmpSaveBottom*<br/>
[in] Puntatore a una bitmap che contiene l'immagine per la parte inferiore dell'ombreggiatura.

*pBmpSaveRight*<br/>
[in] Puntatore a una bitmap che contiene l'immagine per l'ombreggiatura che viene disegnata sul lato destro del rettangolo.

*clrBase*<br/>
[in] Colore dell'ombreggiatura.

*bRightShadow*<br/>
[in] Un parametro booleano che indica come viene disegnata l'ombreggiatura. Se *bRightShadow* viene `TRUE`, `DrawShadow` disegna un'ombreggiatura sul lato destro del rettangolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

È possibile fornire due bitmap valida per l'ombreggiatura inferiore e destro con i parametri *pBmpSaveBottom* e *pBmpSaveRight*. Se questi [CBitmap](../../mfc/reference/cbitmap-class.md) gli oggetti hanno un oggetto GDI associato, `DrawShadow` utilizzerà tali bitmap come le ombreggiature. Se il `CBitmap` non è un oggetto GDI collegato, i parametri `DrawShadow` Disegna l'ombreggiatura e collega le bitmap per i parametri. Nelle future chiamate a `DrawShadow`, è possibile specificare tali bitmap per velocizzare il processo di disegno. Per altre informazioni sul `CBitmap` classi e gli oggetti GDI, vedere [degli oggetti grafici](../../mfc/graphic-objects.md).

Se uno di questi parametri viene `NULL`, `DrawShadow` creerà automaticamente l'ombreggiatura.

Se si imposta *bRightShadow* su FALSE, verrà disegnata l'ombreggiatura sotto e a sinistra dell'area rettangolare.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `DrawShadow` metodo del `CDrawingManager` classe. Questo frammento di codice fa parte di [esempio dimostrativo foglio Prop](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_PropSheetDemo#1](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_1.cpp)]

##  <a name="fill4colorsgradient"></a>  CDrawingManager::Fill4ColorsGradient

Riempie un'area rettangolare con due sfumature di colore.

```
void Fill4ColorsGradient(
    CRect rect,
    COLORREF colorStart1,
    COLORREF colorFinish1,
    COLORREF colorStart2,
    COLORREF colorFinish2,
    BOOL bHorz = TRUE,
    int nPercentage = 50);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Rettangolo da riempire.

*colorStart1*<br/>
[in] Colore iniziale per la sfumatura di colore prima.

*colorFinish1*<br/>
[in] Colore finale della sfumatura di colore prima.

*colorStart2*<br/>
[in] Colore iniziale per la sfumatura di colore della seconda.

*colorFinish2*<br/>
[in] Colore finale per la sfumatura di colore della seconda.

*bHorz*<br/>
[in] Un parametro booleano che indica se `Fill4ColorsGradient` i colori di una sfumatura orizzontale o verticale. TRUE indica una sfumatura orizzontale.

*nPercentage*<br/>
[in] Intero compreso tra 0 e 100. Questo valore indica la percentuale del rettangolo da riempire con sfumatura di colore della prima.

### <a name="remarks"></a>Note

Quando un rettangolo viene riempito con due sfumature di colore, che sono si trova di sopra di loro o successivo tra loro, in base al valore *bHorz*. Ogni sfumatura di colore viene calcolato in modo indipendente con il metodo [CDrawingManager::FillGradient](#fillgradient).

Questo metodo genera un errore di asserzione se *nPercentage* è minore di 0 o maggiore di 100.

##  <a name="fillgradient"></a>  CDrawingManager::FillGradient

Riempie un'area rettangolare con la sfumatura di colore specificato.

```
void FillGradient(
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    BOOL bHorz = TRUE,
    int nStartFlatPercentage = 0,
    int nEndFlatPercentage = 0);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] L'area rettangolare da riempire.

*colorStart*<br/>
[in] Primo colore della sfumatura.

*colorFinish*<br/>
[in] Colore finale della sfumatura.

*bHorz*<br/>
[in] Un parametro booleano che specifica se `FillGradient` deve tracciare una sfumatura orizzontale o verticale.

*nStartFlatPercentage*<br/>
[in] La percentuale del rettangolo che `FillGradient` inserisce *colorStart* prima di avviare la sfumatura.

*nEndFlatPercentage*<br/>
[in] La percentuale del rettangolo che `FillGradient` inserisce *colorFinish* al termine della sfumatura.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `FillGradient` metodo del `CDrawingManager` classe. Questo frammento di codice fa parte di [esempio di MS Office 2007 Demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#12](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_2.cpp)]

##  <a name="fillgradient2"></a>  CDrawingManager::FillGradient2

Riempie un'area rettangolare con una sfumatura di colore specificato.

```
void FillGradient2 (
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    int nAngle = 0);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] L'area rettangolare da riempire.

*colorStart*<br/>
[in] Primo colore della sfumatura.

*colorFinish*<br/>
[in] L'ultimo colore della sfumatura.

*nAngle*<br/>
[in] Numero intero compreso tra 0 e 360. Questo parametro specifica la direzione della sfumatura di colore.

### <a name="remarks"></a>Note

Uso *nAngle* per specificare la direzione della sfumatura di colore. Quando si specifica la direzione della sfumatura di colore, è inoltre specificare dove viene avviata la sfumatura di colore. Un valore pari a 0 per *nAngle* indica la sfumatura viene avviato dalla parte superiore del rettangolo. Come *nAngle* aumenta, la posizione iniziale per gli spostamenti di sfumatura in senso antiorario in base all'angolo.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `FillGradient2` metodo del `CDrawingManager` classe. Questo frammento di codice fa parte il [esempio di nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#37](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_3.cpp)]

##  <a name="grayrect"></a>  CDrawingManager::GrayRect

Riempie un rettangolo con un colore grigio specificato.

```
BOOL GrayRect(
    CRect rect,
    int nPercentage = -1,
    COLORREF clrTransparent = (COLORREF)-1,
    COLORREF clrDisabled = (COLORREF)-1);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] L'area rettangolare da riempire.

*nPercentage*<br/>
[in] La percentuale di grigio desiderato nel rettangolo.

*clrTransparent*<br/>
[in] Colore trasparente.

*clrDisabled*<br/>
[in] Il colore di questo metodo utilizza per-saturazione eventualmente *nPercentage* è impostato su -1.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per il parametro *nPercentage*, un valore inferiore indica un colore più scuro.

Il valore massimo *nPercentage* è 200. Un valore superiore a 200 non modifica l'aspetto del rettangolo. Se il valore è -1, questo metodo Usa *clrDisabled* per limitare la saturazione del rettangolo.

##  <a name="highlightrect"></a>  CDrawingManager::HighlightRect

Evidenzia un'area rettangolare.

```
BOOL HighlightRect(
    CRect rect,
    int nPercentage = -1,
    COLORREF clrTransparent = (COLORREF)-1,
    int nTolerance = 0,
    COLORREF clrBlend = (COLORREF)-1);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Un'area rettangolare da evidenziare.

*nPercentage*<br/>
[in] Una percentuale che indica la modalità transparent deve essere l'evidenziazione.

*clrTransparent*<br/>
[in] Colore trasparente.

*nTolerance*<br/>
[in] Un numero intero compreso tra 0 e 255 che indica la tolleranza di colore.

*clrBlend*<br/>
[in] Il colore di base per la sfumatura.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se *nPercentage* è compreso tra 0 e 99, `HighlightRect` Usa l'algoritmo di fusione alfa. Per altre informazioni sulla fusione alfa, vedere [Alpha fusione linee e riempimenti](/dotnet/framework/winforms/advanced/alpha-blending-lines-and-fills). Se *nPercentage* è -1, questo metodo Usa il livello di evidenziazione predefinito. Se *nPercentage* è 100, questo metodo non esegue alcuna operazione e restituisce TRUE.

Il metodo Usa il parametro *nTolerance* per determinare se evidenziare l'area rettangolare. Per evidenziare il rettangolo, la differenza tra il colore di sfondo dell'applicazione e *clrTransparent* deve essere minore di *nTolerance* in ogni componente di colore (rosso, verde e blu).

##  <a name="hlstorgb_one"></a>  CDrawingManager::HLStoRGB_ONE

Converte una rappresentazione RGB un colore da una rappresentazione di HLS.

```
static COLORREF __stdcall HLStoRGB_ONE(
    double H,
    double L,
    double S);
```

### <a name="parameters"></a>Parametri

*H*<br/>
[in] Un numero compreso tra 0 e 1 che rappresenta la tonalità del colore.

*L*<br/>
[in] Un numero compreso tra 0 e 1 che indica la luminosità del colore.

*S*<br/>
[in] Un numero compreso tra 0 e 1 che indica la saturazione del colore.

### <a name="return-value"></a>Valore restituito

La rappresentazione RGB dei colori HLS forniti.

### <a name="remarks"></a>Note

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (hue, saturazione e luminosità) o RGB (rosso, verde e blu). Per altre informazioni sulle diverse rappresentazioni di colore, vedere [colore](/windows/desktop/uxguide/vis-color).

Questo metodo e il `CDrawingManager::HLStoRGB_TWO` metodo eseguono la stessa operazione, ma vengono richiesti valori diversi per il *H* parametro. In questo metodo, *H* è una percentuale del cerchio. Nel `CDrawingManager::HLStoRGB_TWO` metodo *H* è un valore compreso tra 0 e 360, che rappresentano rosso. Ad esempio, con `HLStoRGB_ONE`, un valore di 0,25 per *H* equivale a un valore pari a 90 con `HLStoRGB_TWO`.

##  <a name="hlstorgb_two"></a>  CDrawingManager::HLStoRGB_TWO

Converte una rappresentazione RGB un colore da una rappresentazione di HLS.

```
static COLORREF __stdcall HLStoRGB_TWO(
    double H,
    double L,
    double S);
```

### <a name="parameters"></a>Parametri

*H*<br/>
[in] Un numero compreso tra 0 e 360 che rappresenta la tonalità del colore.

*L*<br/>
[in] Un numero compreso tra 0 e 1 che indica la luminosità del colore.

*S*<br/>
[in] Un numero compreso tra 0 e 1 che indica la saturazione del colore.

### <a name="return-value"></a>Valore restituito

La rappresentazione RGB dei colori HLS forniti.

### <a name="remarks"></a>Note

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (hue, saturazione e luminosità) o RGB (rosso, verde e blu). Per altre informazioni sulle diverse rappresentazioni di colore, vedere [colore](/windows/desktop/uxguide/vis-color).

Questo metodo e il [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) metodo eseguono la stessa operazione, ma vengono richiesti valori diversi per il *H* parametro. In questo metodo, *H* è un valore compreso tra 0 e 360, che rappresentano rosso. Nel [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) metodo *H* è una percentuale del cerchio. Ad esempio, con `HLStoRGB_ONE`, un valore di 0,25 per *H* equivale a un valore pari a 90 con `HLStoRGB_TWO`.

##  <a name="hsvtorgb"></a>  CDrawingManager::HSVtoRGB

Converte un colore da una rappresentazione HSV in una rappresentazione RGB.

```
static COLORREF __stdcall HSVtoRGB(
    double H,
    double S,
    double V);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*H*|[in] Un numero compreso tra 0 e 360 che indica la tonalità del colore.|
|*S*|[in] Un numero compreso tra 0 e 1 che indica la saturazione del colore.|
|*V*|[in] Un numero compreso tra 0 e 1 che indica il valore del colore.|

### <a name="return-value"></a>Valore restituito

La rappresentazione RGB dei colori HSV forniti.

### <a name="remarks"></a>Note

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (hue, saturazione e luminosità) o RGB (rosso, verde e blu). Per altre informazioni sulle diverse rappresentazioni di colore, vedere [colore](/windows/desktop/uxguide/vis-color).

##  <a name="huetorgb"></a>  CDrawingManager::HuetoRGB

Converte un valore di hue in un componente rosso, verde o blu.

```
static double __stdcall HuetoRGB(
    double m1,
    double m2,
    double h);

static BYTE __stdcall HueToRGB(
    float rm1,
    float rm2,
    float rh);
```

### <a name="parameters"></a>Parametri

*m1*<br/>
[in] Vedere la sezione Osservazioni.

*m2*<br/>
[in] Vedere la sezione Osservazioni.

*h*<br/>
[in] Vedere la sezione Osservazioni.

*rm1*<br/>
[in] Vedere la sezione Osservazioni.

*rm2*<br/>
[in] Vedere la sezione Osservazioni.

*rh*<br/>
[in] Vedere la sezione Osservazioni.

### <a name="return-value"></a>Valore restituito

Il componente rosso, verde o blu singoli relativo alla tonalità fornito.

### <a name="remarks"></a>Note

Questo metodo è un metodo helper che il `CDrawingManager` classe viene utilizzato per calcolare i singoli componenti rossi, verdi e blu di un colore in una rappresentazione HSV o HSL. Questo metodo non è progettato per essere chiamato direttamente dal programmatore. I parametri di input sono valori che variano a seconda dell'algoritmo di conversione.

Per convertire un colore HSV o HSL in una rappresentazione RGB, chiamare uno dei metodi seguenti:

- [CDrawingManager::HSVtoRGB](#hsvtorgb)

- [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)

- [CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)

##  <a name="mirrorrect"></a>  CDrawingManager::MirrorRect

Capovolge un'area rettangolare.

```
void MirrorRect(
    CRect rect,
    BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Il rettangolo di delimitazione dell'area da invertire.

*bHorz*<br/>
[in] Un parametro booleano che indica se il rettangolo viene capovolta orizzontalmente o verticalmente.

### <a name="remarks"></a>Note

Questo metodo è possibile passare qualsiasi area del contesto di dispositivo di proprietà di `CDrawingManager` classe. Se *bHorz* è impostata su TRUE, questo metodo consente di capovolgere l'area in orizzontale. In caso contrario, consente di capovolgere l'area in senso verticale.

##  <a name="pixelalpha"></a>  CDrawingManager::PixelAlpha

Calcola il colore finale per un pixel semitrasparente.

```
static COLORREF __stdcall PixelAlpha(
    COLORREF srcPixel,
    int percent);

static COLORREF __stdcall PixelAlpha(
    COLORREF srcPixel,
    double percentR,
    double percentG,
    double percentB);

static COLORREF __stdcall PixelAlpha(
    COLORREF srcPixel,
    COLORREF dstPixel,
    int percent);
```

### <a name="parameters"></a>Parametri

*srcPixel*<br/>
[in] Colore iniziale per il pixel.

*percent*<br/>
[in] Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza. Un valore pari a 100 indica che il colore iniziale è completamente trasparente.

*percentR*<br/>
[in] Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente rossa.

*percentG*<br/>
[in] Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente verde.

*percentB*<br/>
[in] Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente blu.

*dstPixel*<br/>
[in] Il colore di base per il pixel.

### <a name="return-value"></a>Valore restituito

Colore finale per il pixel semitrasparente.

### <a name="remarks"></a>Note

Questa è una classe helper per colorare le bitmap semitrasparente e non è progettata per essere chiamato direttamente dal programmatore.

Quando si usa la versione del metodo che ha *dstPixel*, il colore finale è una combinazione di *dstPixel* e *srcPixel*. Il *srcPixel* è il colore parzialmente trasparente sul colore base *dstPixel*.

##  <a name="prepareshadowmask"></a>  CDrawingManager::PrepareShadowMask

Crea una bitmap che può essere utilizzata come un'ombreggiatura.

```
static HBITMAP __stdcall PrepareShadowMask (
    int nDepth,
    COLORREF clrBase,
    int iMinBrightness = 0,
    int iMaxBrightness = 100);
```

### <a name="parameters"></a>Parametri

*nDepth*<br/>
[in] La larghezza e l'altezza dell'ombreggiatura.

*clrBase*<br/>
[in] Colore dell'ombreggiatura.

*iMinBrightness*<br/>
[in] La luminosità minima dell'ombreggiatura.

*iMaxBrightness*<br/>
[in] La luminosità massima dell'ombreggiatura.

### <a name="return-value"></a>Valore restituito

Un handle alla bitmap creata se questo metodo ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Note

Se *nDepth* è impostato su 0, questo metodo viene chiuso e viene restituito NULL. Se *nDepth* è minore di 3, 3 pixel vengono impostati la larghezza e altezza dell'ombreggiatura.

##  <a name="rgbtohsl"></a>  CDrawingManager::RGBtoHSL

Converte un colore da una rappresentazione di colore rosso, verde e blu (RGB) a una tonalità, saturazione e luminosità (HSL) rappresentazione.

```
static void __stdcall RGBtoHSL(
    COLORREF rgb,
    double* H,
    double* S,
    double* L);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*rgb*|[in] Il colore in valori RGB.|
|*H*|[out] Puntatore a un valore double in cui il metodo archivia la tonalità del colore.|
|*S*|[out] Puntatore a un valore double in cui il metodo archivia la saturazione del colore.|
|*L*|[out] Puntatore a un valore double in cui il metodo archivia la luminosità del colore.|

### <a name="remarks"></a>Note

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (hue, saturazione e luminosità) o RGB (rosso, verde e blu). Per altre informazioni sulle diverse rappresentazioni di colore, vedere [colore](/windows/desktop/uxguide/vis-color).

Il valore restituito per *H* viene rappresentata come frazione tra 0 e 1 dove sia 0 e 1 rappresentano rosso. I valori restituiti relativi *S* e *L* sono numeri compresi tra 0 e 1.

##  <a name="rgbtohsv"></a>  CDrawingManager::RGBtoHSV

Converte una rappresentazione HSV un colore da una rappresentazione RGB.

```
static void __stdcall RGBtoHSV(
    COLORREF rgb,
    double* H,
    double* S,
    double* V);
```

### <a name="parameters"></a>Parametri

*rgb*<br/>
[in] Il colore da convertire in una rappresentazione RGB.

*H*<br/>
[out] Puntatore a un valore double in cui questo metodo consente di memorizzare la tonalità risulta per il colore.

*S*<br/>
[out] Puntatore a un valore double in cui questo metodo archivia la saturazione del colore risulta.

*V*<br/>
[out] Puntatore a un valore double in cui questo metodo consente di memorizzare il valore risultante per il colore.

### <a name="remarks"></a>Note

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (hue, saturazione e luminosità) o RGB (rosso, verde e blu). Per altre informazioni sulle diverse rappresentazioni di colore, vedere [colore](/windows/desktop/uxguide/vis-color).

Il valore restituito per *H* è un numero compreso tra 0 e 360, in cui sia 0 e 360 indicano rosso. I valori per la restituzione *S* e *V* sono numeri compresi tra 0 e 1.

##  <a name="setalphapixel"></a>  CDrawingManager::SetAlphaPixel

I colori di un pixel in una bitmap trasparente.

```
static void __stdcall SetAlphaPixel(
    COLORREF* pBits,
    CRect rect,
    int x,
    int y,
    int percent,
    int iShadowSize,
    COLORREF clrBase = (COLORREF)-1,
    BOOL bIsRight = TRUE);
```

### <a name="parameters"></a>Parametri

*pBits*<br/>
[in] Puntatore a valori di bit della bitmap.

*rect*<br/>
[in] Un'area rettangolare all'interno dell'applicazione. Il gestore disegno disegna un'ombreggiatura sotto e a destra di quest'area.

*x*<br/>
[in] La coordinata orizzontale del pixel sul colore.

*y*<br/>
[in] Coordinata verticale del pixel sul colore.

*percent*<br/>
[in] La percentuale di trasparenza.

*iShadowSize*<br/>
[in] La larghezza e l'altezza dell'ombreggiatura.

*clrBase*<br/>
[in] Colore dell'ombreggiatura.

*bIsRight*<br/>
[in] Un parametro booleano che indica quale pixel sul colore. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

Questo metodo è un metodo helper che viene usato per il [CDrawingManager::DrawShadow](#drawshadow) (metodo). È consigliabile che se si desidera tracciare un'ombreggiatura, chiamare `CDrawingManager::DrawShadow` invece.

Se *bIsRight* è impostata su TRUE, viene misurato il pixel sul colore *x* pixel dal bordo destro di *rect*. Se è FALSE, i pixel sul colore viene misurato *x* pixel dal bordo sinistro del *rect*.

##  <a name="setpixel"></a>  CDrawingManager::SetPixel

Modifica un singolo pixel in una bitmap sul colore specificato.

```
static void __stdcall SetPixel(
    COLORREF* pBits,
    int cx,
    int cy,
    int x,
    int y,
    COLORREF color);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pBits*|[in] Puntatore a valori di bit della bitmap.|
|*cx*|[in] La larghezza totale della bitmap.|
|*cy*|[in] L'altezza totale del bitmap.|
|*x*|[in] La coordinata x del pixel nella bitmap da modificare.|
|*y*|[in] Coordinata y del pixel nella bitmap da modificare.|
|*color*|[in] Il nuovo colore per pixel identificato dalle coordinate specificate.|

##  <a name="smartmixcolors"></a>  CDrawingManager::SmartMixColors

Combina due colori in base a un rapporto ponderato.

```
static COLORREF __stdcall SmartMixColors(
    COLORREF color1,
    COLORREF color2,
    double dblLumRatio = 1.,
    int k1 = 1,
    int k2 = 1);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*color1*|[in] Il primo colore da combinare.|
|*color2*|[in] Il secondo colore da combinare.|
|*dblLumRatio*|[in] Il rapporto per la luminosità del nuovo colore. `SmartMixColors` Moltiplica la luminosità del colore misto per questo rapporto prima di determinare il colore finale.|
|*k1*|[in] Il rapporto ponderato per il primo colore.|
|*k2*|[in] Il rapporto ponderato per il secondo colore.|

### <a name="return-value"></a>Valore restituito

Oggetto color che rappresenta una combinazione di Media ponderata dei colori specificati.

### <a name="remarks"></a>Note

Questo metodo ha esito negativo con un errore se uno dei due *k1* oppure *k2* è minore di zero. Se entrambi i parametri vengono impostati su 0, il metodo restituisce `RGB(0, 0, 0)`.

Viene calcolato il rapporto ponderato con la formula seguente: (color1 \* k1 + color2 \* k2) /(k1 + k2). Dopo aver determinato il rapporto ponderato, il metodo calcola la luminosità per la combinazione di colori. Quindi moltiplica la luminosità dal *dblLumRatio*. Se il valore è maggiore di 1.0, il metodo imposta la luminosità per la combinazione di colori per il nuovo valore. In caso contrario, la luminosità è impostata su 1.0.

##  <a name="drawrotated"></a>  CDrawingManager::DrawRotated

Ruota un'origine contenuto di controller di dominio all'interno del rettangolo specificato di 90 gradi.

```
void DrawRotated(
    CRect rectDest,
    CDC& dcSrc,
    BOOL bClockWise);
```

### <a name="parameters"></a>Parametri

*rectDest*<br/>
Rettangolo di destinazione.

*dcSrc*<br/>
Il contesto di dispositivo di origine.

*bClockWise*<br/>
TRUE indica che ruotare + 90 gradi; FALSE indica che ruotare-90 gradi.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
