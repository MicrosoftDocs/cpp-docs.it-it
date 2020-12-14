---
description: 'Altre informazioni su: classe CDrawingManager'
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
ms.openlocfilehash: b30218dd41e3591c4a39df078bb19e3ac653ba1b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184790"
---
# <a name="cdrawingmanager-class"></a>Classe CDrawingManager

La `CDrawingManager` classe implementa algoritmi di disegno complessi.

## <a name="syntax"></a>Sintassi

```
class CDrawingManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDrawingManager:: CDrawingManager](#cdrawingmanager)|Costruisce un oggetto `CDrawingManager`.|
|`CDrawingManager::~CDrawingManager`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDrawingManager:: CreateBitmap_32](#createbitmap_32)|Crea una bitmap indipendente dal dispositivo (DIB) a 32 bit in cui le applicazioni possono scrivere direttamente.|
|[CDrawingManager::D rawAlpha](#drawalpha)|Visualizza le bitmap con pixel trasparenti o semitrasparenti.|
|[CDrawingManager::D rawRotated](#drawrotated)|Ruota un contenuto del controller di dominio di origine all'interno del rettangolo specificato di +/-90 gradi|
|[CDrawingManager::D rawEllipse](#drawellipse)|Disegna un'ellisse con i colori specificati per il riempimento e il bordo.|
|[CDrawingManager::D rawGradientRing](#drawgradientring)|Disegna un anello e lo riempie con una sfumatura di colore.|
|[CDrawingManager::D rawLine, CDrawingManager::D rawLineA](#drawline_cdrawingmanager__drawlinea)|Disegna una linea.|
|[CDrawingManager::D rawRect](#drawrect)|Disegna un rettangolo con i colori specificati per il riempimento e il bordo.|
|[CDrawingManager::D rawShadow](#drawshadow)|Disegna un'ombreggiatura per un'area rettangolare.|
|[CDrawingManager:: Fill4ColorsGradient](#fill4colorsgradient)|Riempie un'area rettangolare con due sfumature di colore.|
|[CDrawingManager:: FillGradient](#fillgradient)|Riempie un'area rettangolare con una sfumatura di colore specificata.|
|[CDrawingManager:: FillGradient2](#fillgradient2)|Riempie un'area rettangolare con una sfumatura di colore specificata. Viene inoltre specificata la direzione della modifica del colore della sfumatura.|
|[CDrawingManager:: GrayRect](#grayrect)|Riempie un rettangolo con un colore grigio specificato.|
|[CDrawingManager:: HighlightRect](#highlightrect)|Evidenzia un'area rettangolare.|
|[CDrawingManager:: HLStoRGB_ONE](#hlstorgb_one)|Converte un colore da una rappresentazione HLS a una rappresentazione RGB.|
|[CDrawingManager:: HLStoRGB_TWO](#hlstorgb_two)|Converte un colore da una rappresentazione HLS a una rappresentazione RGB.|
|[CDrawingManager:: HSVtoRGB](#hsvtorgb)|Converte un colore da una rappresentazione HSV a una rappresentazione RGB.|
|[CDrawingManager:: HuetoRGB](#huetorgb)|Metodo di supporto che converte un valore Hue in un componente rosso, verde o blu.|
|[CDrawingManager:: MirrorRect](#mirrorrect)|Capovolge un'area rettangolare.|
|[CDrawingManager::P ixelAlpha](#pixelalpha)|Metodo di supporto che determina il colore finale per un pixel semitrasparente.|
|[CDrawingManager::P repareShadowMask](#prepareshadowmask)|Crea una bitmap che può essere utilizzata come ombreggiatura.|
|[CDrawingManager:: RGBtoHSL](#rgbtohsl)|Converte un colore da una rappresentazione RGB a una rappresentazione HSL.|
|[CDrawingManager:: RGBtoHSV](#rgbtohsv)|Converte un colore da una rappresentazione RGB a una rappresentazione HSV.|
|[CDrawingManager:: SetAlphaPixel](#setalphapixel)|Metodo di supporto che colora un pixel parzialmente trasparente in una bitmap.|
|[CDrawingManager:: sepixel](#setpixel)|Metodo di supporto che modifica un singolo pixel in una bitmap nel colore specificato.|
|[CDrawingManager:: SmartMixColors](#smartmixcolors)|Combina due colori in base a un rapporto ponderato.|

## <a name="remarks"></a>Commenti

La `CDrawingManager` classe fornisce funzioni per disegnare ombreggiature, sfumature di colore e rettangoli evidenziati. Esegue anche la fusione alfa. È possibile usare questa classe per modificare direttamente l'interfaccia utente dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)<br/>
`CDrawingManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdrawmanager. h

## <a name="cdrawingmanagercdrawingmanager"></a><a name="cdrawingmanager"></a> CDrawingManager:: CDrawingManager

Costruisce un oggetto [CDrawingManager](../../mfc/reference/cdrawingmanager-class.md) .

```
CDrawingManager(CDC& dc);
```

### <a name="parameters"></a>Parametri

*DC*<br/>
in Riferimento a un contesto di dispositivo. `CDrawingManager`Usa questo contesto per il disegno.

## <a name="cdrawingmanagercreatebitmap_32"></a><a name="createbitmap_32"></a> CDrawingManager:: CreateBitmap_32

Crea una bitmap indipendente dal dispositivo (DIB) a 32 bit in cui le applicazioni possono scrivere direttamente.

```
static HBITMAP __stdcall CreateBitmap_32(
    const CSize& size,
    void** pBits);

static HBITMAP __stdcall CreateBitmap_32(
    HBITMAP bitmap,
    COLORREF clrTransparent = -1);
```

### <a name="parameters"></a>Parametri

*dimensioni*\
in Parametro [CSize](../../atl-mfc-shared/reference/csize-class.md) che indica le dimensioni della bitmap.

*pBits*\
out Puntatore a un puntatore a dati che riceve la posizione dei valori di bit della DIB.

*bitmap*\
Handle per la bitmap originale

*clrTransparent*\
Valore RGB che specifica il colore trasparente della bitmap originale.

### <a name="return-value"></a>Valore restituito

Handle per la bitmap DIB appena creata se questo metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni su come creare una bitmap DIB, vedere [CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibitmap).

## <a name="cdrawingmanagerdrawalpha"></a><a name="drawalpha"></a> CDrawingManager::D rawAlpha

Visualizza le bitmap con pixel trasparenti o semitrasparenti.

```cpp
void DrawAlpha(
    CDC* pDstDC,
    const CRect& rectDst,
    CDC* pSrcDC,
    const CRect& rectSrc);
```

### <a name="parameters"></a>Parametri

*pDstDC*<br/>
in Puntatore al contesto di dispositivo per la destinazione.

*rectDst*<br/>
in Rettangolo di destinazione.

*pSrcDC*<br/>
in Puntatore al contesto di dispositivo per l'origine.

*rectSrc*<br/>
in Rettangolo di origine.

### <a name="remarks"></a>Commenti

Questo metodo esegue la fusione alfa per due bitmap. Per ulteriori informazioni sulla fusione alfa, vedere [AlphaBlend](/windows/win32/api/wingdi/nf-wingdi-alphablend) nel Windows SDK.

## <a name="cdrawingmanagerdrawellipse"></a><a name="drawellipse"></a> CDrawingManager::D rawEllipse

Disegna un'ellisse con i colori specificati per il riempimento e il bordo.

```cpp
void DrawEllipse(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Rettangolo di delimitazione per l'ellisse.

*clrFill*<br/>
in Colore usato da questo metodo per riempire l'ellisse.

*clrLine*<br/>
in Il colore usato da questo metodo come bordo dell'ellisse.

### <a name="remarks"></a>Commenti

Questo metodo restituisce senza disegnare un'ellisse se uno o più colori è impostato su-1. Restituisce anche senza disegnare un'ellisse se una delle dimensioni del rettangolo di delimitazione è 0.

## <a name="cdrawingmanagerdrawgradientring"></a><a name="drawgradientring"></a> CDrawingManager::D rawGradientRing

Disegna un anello e lo riempie con una sfumatura di colore.

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

*Rect*<br/>
in Parametro [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica il limite per l'anello della sfumatura.

*colorStart*<br/>
in Primo colore per la sfumatura.

*colorFinish*<br/>
in Ultimo colore per la sfumatura.

*colorBorder*<br/>
in Colore del bordo.

*nAngle*<br/>
in Parametro che specifica l'angolo di disegno sfumato iniziale. Questo valore deve essere compreso tra 0 e 360.

*nWidth*<br/>
in Larghezza del bordo per l'anello.

*clrFace*<br/>
in Colore dell'interno dell'anello.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il rettangolo definito da *Rect* deve avere una larghezza di almeno 5 pixel e 5 pixel di altezza.

## <a name="cdrawingmanagerdrawline-cdrawingmanagerdrawlinea"></a><a name="drawline_cdrawingmanager__drawlinea"></a> CDrawingManager::D rawLine, CDrawingManager::D rawLineA

Disegna una linea.

```cpp
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

*X1*\
in Coordinata x in cui inizia la riga.

*Y1*\
in Coordinata y in cui inizia la riga.

*X2*\
in Coordinata x in cui termina la riga.

*Y2*\
in Coordinata y in cui termina la riga.

*clrLine*\
in Colore della linea.

### <a name="remarks"></a>Commenti

Questo metodo ha esito negativo se *clrLine* è uguale a-1.

## <a name="cdrawingmanagerdrawrect"></a><a name="drawrect"></a> CDrawingManager::D rawRect

Disegna un rettangolo con i colori specificati per il riempimento e il bordo.

```cpp
void DrawRect(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Limiti per il rettangolo.

*clrFill*<br/>
in Colore usato da questo metodo per riempire il rettangolo.

*clrLine*<br/>
in Colore usato da questo metodo per il bordo del rettangolo.

### <a name="remarks"></a>Commenti

Questo metodo restituisce senza disegnare un rettangolo se uno o più colori è impostato su-1. Restituisce anche se una delle dimensioni del rettangolo è 0.

## <a name="cdrawingmanagerdrawshadow"></a><a name="drawshadow"></a> CDrawingManager::D rawShadow

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

*Rect*<br/>
in Area rettangolare nell'applicazione. Il gestore di disegno disegna un'ombreggiatura sotto quest'area.

*nDepth*<br/>
in Larghezza e altezza dell'ombreggiatura.

*iMinBrightness*<br/>
in Luminosità minima dell'ombreggiatura.

*iMaxBrightness*<br/>
in Luminosità massima dell'ombreggiatura.

*pBmpSaveBottom*<br/>
in Puntatore a una bitmap che contiene l'immagine per la parte inferiore dell'ombreggiatura.

*pBmpSaveRight*<br/>
in Puntatore a una bitmap che contiene l'immagine per l'ombreggiatura disegnata sul lato destro del rettangolo.

*clrBase*<br/>
in Colore dell'ombreggiatura.

*bRightShadow*<br/>
in Parametro booleano che indica come viene disegnata l'ombreggiatura. Se *bRightShadow* è `TRUE` , `DrawShadow` Disegna un'ombreggiatura sul lato destro del rettangolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

È possibile specificare due bitmap valide per le ombreggiature in basso e a destra usando i parametri *pBmpSaveBottom* e *pBmpSaveRight*. Se a questi oggetti [CBitmap](../../mfc/reference/cbitmap-class.md) è associato un oggetto GDI, `DrawShadow` utilizzerà tali bitmap come ombreggiature. Se i `CBitmap` parametri non dispongono di un oggetto GDI collegato, `DrawShadow` Disegna l'ombreggiatura e collega le bitmap ai parametri. Nelle chiamate future a `DrawShadow` è possibile fornire tali bitmap per velocizzare il processo di disegno. Per ulteriori informazioni sulla `CBitmap` classe e sugli oggetti GDI, vedere [oggetti grafici](../../mfc/graphic-objects.md).

Se uno di questi parametri è `NULL` , `DrawShadow` verrà automaticamente disegnato l'ombreggiatura.

Se si imposta *bRightShadow* su false, l'ombreggiatura verrà disegnata sotto e a sinistra dell'area rettangolare.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `DrawShadow` metodo della `CDrawingManager` classe. Questo frammento di codice fa parte dell' [esempio demo del foglio prop](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_PropSheetDemo#1](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_1.cpp)]

## <a name="cdrawingmanagerfill4colorsgradient"></a><a name="fill4colorsgradient"></a> CDrawingManager:: Fill4ColorsGradient

Riempie un'area rettangolare con due sfumature di colore.

```cpp
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

*Rect*<br/>
in Rettangolo da riempire.

*colorStart1*<br/>
in Colore iniziale per la prima sfumatura di colore.

*colorFinish1*<br/>
in Colore finale per la prima sfumatura di colore.

*colorStart2*<br/>
in Colore iniziale per la seconda sfumatura di colore.

*colorFinish2*<br/>
in Colore finale per la seconda sfumatura di colore.

*bHorz*<br/>
in Parametro booleano che indica se `Fill4ColorsGradient` i colori di una sfumatura orizzontale o verticale. TRUE indica una sfumatura orizzontale.

*nPercentage*<br/>
in Intero compreso tra 0-100. Questo valore indica la percentuale del rettangolo da riempire con la prima sfumatura di colore.

### <a name="remarks"></a>Commenti

Quando un rettangolo viene riempito con due sfumature di colore, si trovano sopra l'uno accanto all'altro o uno accanto all'altro, a seconda del valore di *bHorz*. Ogni sfumatura di colore viene calcolata in modo indipendente con il metodo [CDrawingManager:: FillGradient](#fillgradient).

Questo metodo genera un errore di asserzione se *nPercentage* è minore di 0 o maggiore di 100.

## <a name="cdrawingmanagerfillgradient"></a><a name="fillgradient"></a> CDrawingManager:: FillGradient

Riempie un'area rettangolare con la sfumatura di colore specificata.

```cpp
void FillGradient(
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    BOOL bHorz = TRUE,
    int nStartFlatPercentage = 0,
    int nEndFlatPercentage = 0);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Area rettangolare da riempire.

*colorStart*<br/>
in Primo colore per la sfumatura.

*colorFinish*<br/>
in Colore finale per la sfumatura.

*bHorz*<br/>
in Parametro booleano che specifica se `FillGradient` deve creare una sfumatura orizzontale o verticale.

*nStartFlatPercentage*<br/>
in Percentuale del rettangolo che `FillGradient` riempie il valore di *colorStart* prima di avviare la sfumatura.

*nEndFlatPercentage*<br/>
in Percentuale del rettangolo che `FillGradient` riempie il valore di *colorFinish* dopo aver completato la sfumatura.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `FillGradient` metodo della `CDrawingManager` classe. Questo frammento di codice fa parte dell' [esempio Microsoft Office 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#12](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_2.cpp)]

## <a name="cdrawingmanagerfillgradient2"></a><a name="fillgradient2"></a> CDrawingManager:: FillGradient2

Riempie un'area rettangolare con una sfumatura di colore specificata.

```cpp
void FillGradient2 (
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    int nAngle = 0);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Area rettangolare da riempire.

*colorStart*<br/>
in Primo colore della sfumatura.

*colorFinish*<br/>
in Ultimo colore della sfumatura.

*nAngle*<br/>
in Numero intero compreso tra 0 e 360. Questo parametro specifica la direzione della sfumatura di colore.

### <a name="remarks"></a>Commenti

Usare *Nangle* per specificare la direzione della sfumatura di colore. Quando si specifica la direzione della sfumatura di colore, si specifica anche la posizione in cui viene avviata la sfumatura di colore. Il valore 0 per *Nangle* indica che la sfumatura inizia dalla parte superiore del rettangolo. Man mano che *Nangle* aumenta, la posizione iniziale per la sfumatura si sposta in senso antiorario in base all'angolo.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `FillGradient2` metodo della `CDrawingManager` classe. Questo frammento di codice fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#37](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_3.cpp)]

## <a name="cdrawingmanagergrayrect"></a><a name="grayrect"></a> CDrawingManager:: GrayRect

Riempie un rettangolo con un colore grigio specificato.

```
BOOL GrayRect(
    CRect rect,
    int nPercentage = -1,
    COLORREF clrTransparent = (COLORREF)-1,
    COLORREF clrDisabled = (COLORREF)-1);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Area rettangolare da riempire.

*nPercentage*<br/>
in Percentuale di grigio desiderata nel rettangolo.

*clrTransparent*<br/>
in Colore trasparente.

*clrDisabled*<br/>
in Il colore usato da questo metodo per la desaturazione se *nPercentage* è impostato su-1.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Per il parametro *nPercentage*, un valore inferiore indica un colore più scuro.

Il valore massimo per *nPercentage* è 200. Un valore maggiore di 200 non modifica l'aspetto del rettangolo. Se il valore è-1, questo metodo usa *clrDisabled* per limitare la saturazione del rettangolo.

## <a name="cdrawingmanagerhighlightrect"></a><a name="highlightrect"></a> CDrawingManager:: HighlightRect

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

*Rect*<br/>
in Area rettangolare da evidenziare.

*nPercentage*<br/>
in Percentuale che indica la trasparenza dell'evidenziazione.

*clrTransparent*<br/>
in Colore trasparente.

*nTolerance*<br/>
in Numero intero compreso tra 0 e 255 che indica la tolleranza del colore.

*clrBlend*<br/>
in Colore di base per la fusione.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se *nPercentage* è compreso tra 0 e 99, `HighlightRect` Usa l'algoritmo di fusione alfa. Per ulteriori informazioni sulla fusione alfa, vedere la pagina relativa alle [linee e ai Fill alfa](/dotnet/framework/winforms/advanced/alpha-blending-lines-and-fills). Se *nPercentage* è-1, questo metodo usa il livello di evidenziazione predefinito. Se *nPercentage* è 100, questo metodo non esegue alcuna operazione e restituisce true.

Il metodo usa il parametro *nTolerance* per determinare se evidenziare l'area rettangolare. Per evidenziare il rettangolo, la differenza tra il colore di sfondo dell'applicazione e *clrTransparent* deve essere minore di *nTolerance* in ogni componente colore (rosso, verde e blu).

## <a name="cdrawingmanagerhlstorgb_one"></a><a name="hlstorgb_one"></a> CDrawingManager:: HLStoRGB_ONE

Converte un colore da una rappresentazione HLS a una rappresentazione RGB.

```
static COLORREF __stdcall HLStoRGB_ONE(
    double H,
    double L,
    double S);
```

### <a name="parameters"></a>Parametri

*H*<br/>
in Numero compreso tra 0 e 1 che rappresenta la tonalità per il colore.

*L*<br/>
in Numero compreso tra 0 e 1 che indica la luminosità per il colore.

*S*<br/>
in Numero compreso tra 0 e 1 che indica la saturazione per il colore.

### <a name="return-value"></a>Valore restituito

Rappresentazione RGB del colore HLS fornito.

### <a name="remarks"></a>Commenti

Un colore può essere rappresentato come HSV (Hue, Saturation, and value), HSL (Hue, Saturation, and luminosità) oppure RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni dei colori, vedere [color](/windows/win32/uxguide/vis-color).

Questo metodo e il `CDrawingManager::HLStoRGB_TWO` metodo eseguono la stessa operazione, ma richiedono valori diversi per il parametro *H* . In questo metodo *H* è una percentuale del cerchio. Nel `CDrawingManager::HLStoRGB_TWO` metodo *H* è un valore Degree compreso tra 0 e 360, entrambi rappresentati da rosso. Ad esempio, con `HLStoRGB_ONE` , il valore 0,25 per *H* è equivalente al valore 90 con `HLStoRGB_TWO` .

## <a name="cdrawingmanagerhlstorgb_two"></a><a name="hlstorgb_two"></a> CDrawingManager:: HLStoRGB_TWO

Converte un colore da una rappresentazione HLS a una rappresentazione RGB.

```
static COLORREF __stdcall HLStoRGB_TWO(
    double H,
    double L,
    double S);
```

### <a name="parameters"></a>Parametri

*H*<br/>
in Numero compreso tra 0 e 360 che rappresenta la tonalità per il colore.

*L*<br/>
in Numero compreso tra 0 e 1 che indica la luminosità per il colore.

*S*<br/>
in Numero compreso tra 0 e 1 che indica la saturazione per il colore.

### <a name="return-value"></a>Valore restituito

Rappresentazione RGB del colore HLS fornito.

### <a name="remarks"></a>Commenti

Un colore può essere rappresentato come HSV (Hue, Saturation, and value), HSL (Hue, Saturation, and luminosità) oppure RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni dei colori, vedere [color](/windows/win32/uxguide/vis-color).

Questo metodo e il metodo [CDrawingManager:: HLStoRGB_ONE](#hlstorgb_one) eseguono la stessa operazione, ma richiedono valori diversi per il parametro *H* . In questo metodo *H* è un valore Degree compreso tra 0 e 360, entrambi rappresentati da rosso. Nel metodo [CDrawingManager:: HLStoRGB_ONE](#hlstorgb_one) , *H* è una percentuale del cerchio. Ad esempio, con `HLStoRGB_ONE` , il valore 0,25 per *H* è equivalente al valore 90 con `HLStoRGB_TWO` .

## <a name="cdrawingmanagerhsvtorgb"></a><a name="hsvtorgb"></a> CDrawingManager:: HSVtoRGB

Converte un colore da una rappresentazione HSV a una rappresentazione RGB.

```
static COLORREF __stdcall HSVtoRGB(
    double H,
    double S,
    double V);
```

### <a name="parameters"></a>Parametri

*H*\
in Numero compreso tra 0 e 360 che indica la tonalità per il colore.

*S*\
in Numero compreso tra 0 e 1 che indica la saturazione per il colore.

*V*\
in Numero compreso tra 0 e 1 che indica il valore per il colore.

### <a name="return-value"></a>Valore restituito

Rappresentazione RGB del colore HSV fornito.

### <a name="remarks"></a>Commenti

Un colore può essere rappresentato come HSV (Hue, Saturation, and value), HSL (Hue, Saturation, and luminosità) oppure RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni dei colori, vedere [color](/windows/win32/uxguide/vis-color).

## <a name="cdrawingmanagerhuetorgb"></a><a name="huetorgb"></a> CDrawingManager:: HuetoRGB

Converte un valore Hue in un componente rosso, verde o blu.

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

*M1*<br/>
in Vedere la sezione Osservazioni.

*m2*<br/>
in Vedere la sezione Osservazioni.

*h*<br/>
in Vedere la sezione Osservazioni.

*RM1*<br/>
in Vedere la sezione Osservazioni.

*RM2*<br/>
in Vedere la sezione Osservazioni.

*RH*<br/>
in Vedere la sezione Osservazioni.

### <a name="return-value"></a>Valore restituito

Singolo componente rosso, verde o blu per la tonalità specificata.

### <a name="remarks"></a>Commenti

Questo metodo è un metodo helper `CDrawingManager` utilizzato dalla classe per calcolare i singoli componenti rosso, verde e blu di un colore in una rappresentazione HSV o HSL. Questo metodo non è progettato per essere chiamato direttamente dal programmatore. I parametri di input sono valori che dipendono dall'algoritmo di conversione.

Per convertire un colore HSV o HSL in una rappresentazione RGB, chiamare uno dei metodi seguenti:

- [CDrawingManager:: HSVtoRGB](#hsvtorgb)

- [CDrawingManager:: HLStoRGB_ONE](#hlstorgb_one)

- [CDrawingManager:: HLStoRGB_TWO](#hlstorgb_two)

## <a name="cdrawingmanagermirrorrect"></a><a name="mirrorrect"></a> CDrawingManager:: MirrorRect

Capovolge un'area rettangolare.

```cpp
void MirrorRect(
    CRect rect,
    BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Rettangolo di delimitazione dell'area da capovolgere.

*bHorz*<br/>
in Parametro booleano che indica se il rettangolo viene invertito orizzontalmente o verticalmente.

### <a name="remarks"></a>Commenti

Questo metodo può capovolgere qualsiasi area del contesto di dispositivo di proprietà della `CDrawingManager` classe. Se *bHorz* è impostato su true, questo metodo capovolge l'area orizzontalmente. In caso contrario, capovolge l'area verticalmente.

## <a name="cdrawingmanagerpixelalpha"></a><a name="pixelalpha"></a> CDrawingManager::P ixelAlpha

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
in Colore iniziale per il pixel.

*%*<br/>
in Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza. Il valore 100 indica che il colore iniziale è completamente trasparente.

*percentuale*<br/>
in Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente rosso.

*percentG*<br/>
in Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente verde.

*percentB*<br/>
in Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente blu.

*dstPixel*<br/>
in Colore di base per il pixel.

### <a name="return-value"></a>Valore restituito

Colore finale per il pixel semitrasparente.

### <a name="remarks"></a>Commenti

Si tratta di una classe helper per la colorazione di bitmap semitrasparenti e non è progettata per essere chiamata direttamente dal programmatore.

Quando si usa la versione del metodo con *dstPixel*, il colore finale è una combinazione di *dstPixel* e *srcPixel*. Il colore *srcPixel* è il colore parzialmente trasparente sul colore di base di *dstPixel*.

## <a name="cdrawingmanagerprepareshadowmask"></a><a name="prepareshadowmask"></a> CDrawingManager::P repareShadowMask

Crea una bitmap che può essere utilizzata come ombreggiatura.

```
static HBITMAP __stdcall PrepareShadowMask (
    int nDepth,
    COLORREF clrBase,
    int iMinBrightness = 0,
    int iMaxBrightness = 100);
```

### <a name="parameters"></a>Parametri

*nDepth*<br/>
in Larghezza e altezza dell'ombreggiatura.

*clrBase*<br/>
in Colore dell'ombreggiatura.

*iMinBrightness*<br/>
in Luminosità minima dell'ombreggiatura.

*iMaxBrightness*<br/>
in Luminosità massima dell'ombreggiatura.

### <a name="return-value"></a>Valore restituito

Handle per la bitmap creata se questo metodo ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Se *nDepth* è impostato su 0, questo metodo viene chiuso e restituisce null. Se *nDepth* è minore di 3, la larghezza e l'altezza dell'ombreggiatura sono impostate su 3 pixel.

## <a name="cdrawingmanagerrgbtohsl"></a><a name="rgbtohsl"></a> CDrawingManager:: RGBtoHSL

Converte un colore da una rappresentazione rossa, verde e blu (RGB) a una rappresentazione di tonalità, saturazione e luminosità (HSL).

```
static void __stdcall RGBtoHSL(
    COLORREF rgb,
    double* H,
    double* S,
    double* L);
```

### <a name="parameters"></a>Parametri

*RGB*\
in Colore nei valori RGB.

*H*\
out Puntatore a un valore Double in cui il metodo archivia la tonalità per il colore.

*S*\
out Puntatore a un valore Double in cui il metodo archivia la saturazione per il colore.

*L*\
out Puntatore a un valore Double in cui il metodo archivia la luminosità per il colore.

### <a name="remarks"></a>Commenti

Un colore può essere rappresentato come HSV (Hue, Saturation, and value), HSL (Hue, Saturation, and luminosità) oppure RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni dei colori, vedere [color](/windows/win32/uxguide/vis-color).

Il valore restituito per *H* viene rappresentato come frazione tra 0 e 1, dove 0 e 1 rappresentano il rosso. I valori restituiti per *S* e *L* sono numeri compresi tra 0 e 1.

## <a name="cdrawingmanagerrgbtohsv"></a><a name="rgbtohsv"></a> CDrawingManager:: RGBtoHSV

Converte un colore da una rappresentazione RGB a una rappresentazione HSV.

```
static void __stdcall RGBtoHSV(
    COLORREF rgb,
    double* H,
    double* S,
    double* V);
```

### <a name="parameters"></a>Parametri

*RGB*<br/>
in Colore da convertire in una rappresentazione RGB.

*H*<br/>
out Puntatore a un valore Double in cui questo metodo archivia la tonalità risultante per il colore.

*S*<br/>
out Puntatore a un valore Double in cui questo metodo archivia la saturazione risultante per il colore.

*V*<br/>
out Puntatore a un valore Double in cui questo metodo archivia il valore risultante per il colore.

### <a name="remarks"></a>Commenti

Un colore può essere rappresentato come HSV (Hue, Saturation, and value), HSL (Hue, Saturation, and luminosità) oppure RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni dei colori, vedere [color](/windows/win32/uxguide/vis-color).

Il valore restituito per *H* è un numero compreso tra 0 e 360, dove 0 e 360 indicano il rosso. I valori restituiti per *S* e *V* sono numeri compresi tra 0 e 1.

## <a name="cdrawingmanagersetalphapixel"></a><a name="setalphapixel"></a> CDrawingManager:: SetAlphaPixel

Colora un pixel trasparente in una bitmap.

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
in Puntatore ai valori di bit per la bitmap.

*Rect*<br/>
in Area rettangolare nell'applicazione. Il gestore di disegno disegna un'ombreggiatura sotto e a destra di quest'area.

*x*<br/>
in Coordinata orizzontale del pixel da colorare.

*y*<br/>
in Coordinata verticale del pixel da colorare.

*%*<br/>
in Percentuale di trasparenza.

*iShadowSize*<br/>
in Larghezza e altezza dell'ombreggiatura.

*clrBase*<br/>
in Colore dell'ombreggiatura.

*bIsRight*<br/>
in Parametro booleano che indica il pixel da colorare. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Commenti

Questo metodo è un metodo helper utilizzato dal metodo [CDrawingManager::D rawshadow](#drawshadow) . Si consiglia di usare invece se si vuole creare un'ombreggiatura `CDrawingManager::DrawShadow` .

Se *bIsRight* è impostato su true, il pixel a Color viene misurato *x* pixel dal bordo destro di *Rect*. Se è FALSE, il pixel a colore viene misurato *x* pixel dal bordo sinistro di *Rect*.

## <a name="cdrawingmanagersetpixel"></a><a name="setpixel"></a> CDrawingManager:: sepixel

Imposta un singolo pixel in una bitmap sul colore specificato.

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

*pBits*\
in Puntatore ai valori di bit della bitmap.

*CX*\
in Larghezza totale della bitmap.

*CY*\
in Altezza totale della bitmap.

*x*\
in Coordinata x del pixel nella bitmap da modificare.

*y*\
in Coordinata y del pixel nella bitmap da modificare.

*Colore*\
in Nuovo colore per il pixel identificato dalle coordinate fornite.

## <a name="cdrawingmanagersmartmixcolors"></a><a name="smartmixcolors"></a> CDrawingManager:: SmartMixColors

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

*color1*\
in Primo colore da combinare.

*color2*\
in Secondo colore da combinare.

*dblLumRatio*\
in Rapporto per la luminosità del nuovo colore. `SmartMixColors` moltiplica la luminosità del colore misto per questo rapporto prima di determinare un colore finale.

*K1*\
in Rapporto ponderato per il primo colore.

*K2*\
in Rapporto ponderato per il secondo colore.

### <a name="return-value"></a>Valore restituito

Colore che rappresenta una combinazione ponderata dei colori forniti.

### <a name="remarks"></a>Commenti

Questo metodo ha esito negativo e restituisce un errore se *K1* o *K2* è minore di zero. Se entrambi i parametri sono impostati su 0, il metodo restituisce `RGB(0, 0, 0)` .

Il rapporto ponderato viene calcolato con la formula seguente: (color1 \* K1 + color2 \* K2)/(K1 + K2). Una volta determinato il rapporto ponderato, il metodo calcola la luminosità per il colore misto. Moltiplica quindi la luminosità per *dblLumRatio*. Se il valore è maggiore di 1,0, il metodo imposta la luminosità per il colore misto sul nuovo valore. In caso contrario, la luminosità è impostata su 1,0.

## <a name="cdrawingmanagerdrawrotated"></a><a name="drawrotated"></a> CDrawingManager::D rawRotated

Ruota un contenuto del controller di dominio di origine all'interno del rettangolo specificato di 90 gradi.

```cpp
void DrawRotated(
    CRect rectDest,
    CDC& dcSrc,
    BOOL bClockWise);
```

### <a name="parameters"></a>Parametri

*rectDest*<br/>
Rettangolo di destinazione.

*dcSrc*<br/>
Contesto del dispositivo di origine.

*bClockWise*<br/>
TRUE indica la rotazione + 90 gradi; FALSE indica la rotazione di 90 gradi.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
