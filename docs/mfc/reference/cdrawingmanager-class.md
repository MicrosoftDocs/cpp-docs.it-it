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
ms.openlocfilehash: 73c5775c2cb83dea79401615b31f2194094fac8e
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753232"
---
# <a name="cdrawingmanager-class"></a>Classe CDrawingManager

La `CDrawingManager` classe implementa algoritmi di disegno complessi.

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
|[CDrawingManager::CreateBitmap_32](#createbitmap_32)|Crea una bitmap indipendente dal dispositivo (DIB) a 32 bit in cui le applicazioni possono scrivere direttamente.|
|[CDrawingManager::DrawAlpha](#drawalpha)|Visualizza bitmap con pixel trasparenti o semitrasparenti.|
|[CDrawingManager::DrawRotated](#drawrotated)|Ruota il contenuto di un controller di dominio di origine all'interno del rettangolo specificato di 90 gradi|
|[CDrawingManager::DrawEllipse](#drawellipse)|Disegna un'ellisse con i colori di riempimento e bordo forniti.|
|[CDrawingManager::DrawGradientRing](#drawgradientring)|Disegna un anello e lo riempie con una sfumatura di colore.|
|[CDrawingManager::DrawLine, CDrawingManager::DrawLineA](#drawline_cdrawingmanager__drawlinea)|Disegna una linea.|
|[CDrawingManager::DrawRect](#drawrect)|Disegna un rettangolo con i colori di riempimento e bordo forniti.|
|[CDrawingManager::DrawShadow](#drawshadow)|Disegna un'ombreggiatura per un'area rettangolare.|
|[CDrawingManager::Fill4ColorsGradient](#fill4colorsgradient)|Riempie un'area rettangolare con due sfumature di colore.|
|[CDrawingManager::FillGradient](#fillgradient)|Riempie un'area rettangolare con una sfumatura di colore specificata.|
|[CDrawingManager::FillGradient2](#fillgradient2)|Riempie un'area rettangolare con una sfumatura di colore specificata. Viene inoltre specificata la direzione della modifica del colore del gradiente.|
|[CDrawingManager::GrayRect](#grayrect)|Riempie un rettangolo con un colore grigio specificato.|
|[CDrawingManager::HighlightRect](#highlightrect)|Evidenzia un'area rettangolare.|
|[CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)|Converte un colore da una rappresentazione HLS a una rappresentazione RGB.|
|[CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)|Converte un colore da una rappresentazione HLS a una rappresentazione RGB.|
|[CDrawingManager::HSVtoRGB](#hsvtorgb)|Converte un colore da una rappresentazione HSV a una rappresentazione RGB.|
|[CDrawingManager::HuetoRGB](#huetorgb)|Metodo helper che converte un valore di tonalità in un componente rosso, verde o blu.|
|[CDrawingManager::MirrorRect](#mirrorrect)|Capovolge un'area rettangolare.|
|[CDrawingManager::PixelAlpha](#pixelalpha)|Metodo helper che determina il colore finale per un pixel semitrasparente.|
|[CDrawingManager::PrepareShadowMask](#prepareshadowmask)|Crea una bitmap che può essere utilizzata come ombreggiatura.|
|[CDrawingManager::RGBtoHSL](#rgbtohsl)|Converte un colore da una rappresentazione RGB in una rappresentazione HSL.|
|[CDrawingManager::RGBtoHSV](#rgbtohsv)|Converte un colore da una rappresentazione RGB in una rappresentazione HSV.|
|[CDrawingManager::SetAlphaPixel](#setalphapixel)|Metodo helper che colora un pixel parzialmente trasparente in una bitmap.|
|[CDrawingManager::SetPixel](#setpixel)|Metodo helper che modifica un singolo pixel in una bitmap nel colore specificato.|
|[CDrawingManager::SmartMixColors](#smartmixcolors)|Combina due colori in base a un rapporto ponderato.|

## <a name="remarks"></a>Osservazioni

La `CDrawingManager` classe fornisce funzioni per disegnare ombre, sfumature di colore e rettangoli evidenziati. Esegue anche la fusione alfa. È possibile utilizzare questa classe per modificare direttamente l'interfaccia utente dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)<br/>
`CDrawingManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdrawmanager.h

## <a name="cdrawingmanagercdrawingmanager"></a><a name="cdrawingmanager"></a>CDrawingManager::CDrawingManager

Costruisce un oggetto [CDrawingManager.](../../mfc/reference/cdrawingmanager-class.md)

```
CDrawingManager(CDC& dc);
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
[in] Riferimento a un contesto di dispositivo. L'oggetto `CDrawingManager` utilizza questo contesto per il disegno.

## <a name="cdrawingmanagercreatebitmap_32"></a><a name="createbitmap_32"></a>CDrawingManager::CreateBitmap_32

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

|||
|-|-|
|Parametro|Descrizione|
|*size*|[in] Un parametro [CSize](../../atl-mfc-shared/reference/csize-class.md) che indica le dimensioni della bitmap.|
|*pBits*|[fuori] Puntatore a un puntatore dati che riceve la posizione dei valori di bit della DIB.|
|*Bitmap*|Un handle per la bitmap originale|
|*ClrTransparent*|Valore RGB che specifica il colore trasparente della bitmap originale.|

### <a name="return-value"></a>Valore restituito

Handle per la bitmap DIB appena creata se questo metodo ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su come creare una bitmap DIB, vedere [CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibitmap).

## <a name="cdrawingmanagerdrawalpha"></a><a name="drawalpha"></a>CDrawingManager::DrawAlpha

Visualizza bitmap con pixel trasparenti o semitrasparenti.

```cpp
void DrawAlpha(
    CDC* pDstDC,
    const CRect& rectDst,
    CDC* pSrcDC,
    const CRect& rectSrc);
```

### <a name="parameters"></a>Parametri

*pDSTDC*<br/>
[in] Puntatore al contesto di dispositivo per la destinazione.

*rectDst*<br/>
[in] Rettangolo di destinazione.

*pSrcDC (PSrcDC)*<br/>
[in] Puntatore al contesto di dispositivo per l'origine.

*rectSrc*<br/>
[in] Rettangolo di origine.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue la fusione alfa per due bitmap. Per ulteriori informazioni sulla fusione alfa, vedere [AlphaBlend](/windows/win32/api/wingdi/nf-wingdi-alphablend) in Windows SDK.

## <a name="cdrawingmanagerdrawellipse"></a><a name="drawellipse"></a>CDrawingManager::DrawEllipse

Disegna un'ellisse con i colori di riempimento e bordo forniti.

```cpp
void DrawEllipse(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in] Rettangolo di delimitazione per l'ellisse.

*clrFill*<br/>
[in] Colore utilizzato da questo metodo per riempire l'ellisse.

*Proprietà clrLine*<br/>
[in] Colore utilizzato da questo metodo come bordo dell'ellisse.

### <a name="remarks"></a>Osservazioni

Questo metodo ritorna senza disegnare un'ellisse se uno dei colori è impostato su -1. Restituisce inoltre senza disegnare un'ellisse se una delle due dimensioni del rettangolo di delimitazione è 0.

## <a name="cdrawingmanagerdrawgradientring"></a><a name="drawgradientring"></a>CDrawingManager::DrawGradientRing

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
[in] Parametro [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica il contorno per l'anello sfumatura.

*colorInizio*<br/>
[in] Primo colore per il gradiente.

*colorFinish*<br/>
[in] Ultimo colore per il gradiente.

*colorBorder*<br/>
[in] Colore del bordo.

*nAngolo*<br/>
[in] Parametro che specifica l'angolo di disegno della sfumatura iniziale. Questo valore deve essere compreso tra 0 e 360.

*nLarghezza*<br/>
[in] Larghezza del bordo per l'anello.

*ClrFace*<br/>
[in] Il colore dell'interno dell'anello.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il rettangolo definito da *rect* deve avere una larghezza di almeno 5 pixel e un'altezza di 5 pixel.

## <a name="cdrawingmanagerdrawline-cdrawingmanagerdrawlinea"></a><a name="drawline_cdrawingmanager__drawlinea"></a>CDrawingManager::DrawLine, CDrawingManager::DrawLineA

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

|||
|-|-|
|Parametro|Descrizione|
|*x1 (in modo non in0*|[in] Coordinata x da cui inizia la linea.|
|*y1*|[in] Coordinata y da cui inizia la linea.|
|*x2 (in modo non in0*|[in] Coordinata x in cui termina la linea.|
|*y2*|[in] Coordinata y in cui termina la linea.|
|*Proprietà clrLine*|[in] Colore della linea.|

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se *clrLine* è uguale a -1.

## <a name="cdrawingmanagerdrawrect"></a><a name="drawrect"></a>CDrawingManager::DrawRect

Disegna un rettangolo con i colori di riempimento e bordo forniti.

```cpp
void DrawRect(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in] I contorni per il rettangolo.

*clrFill*<br/>
[in] Colore utilizzato da questo metodo per riempire il rettangolo.

*Proprietà clrLine*<br/>
[in] Colore utilizzato da questo metodo per il bordo del rettangolo.

### <a name="remarks"></a>Osservazioni

Questo metodo ritorna senza disegnare un rettangolo se uno dei colori è impostato su -1. Restituisce anche se una delle due dimensioni del rettangolo è 0.

## <a name="cdrawingmanagerdrawshadow"></a><a name="drawshadow"></a>CDrawingManager::DrawShadow

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
[in] Un'area rettangolare nell'applicazione. Il gestore del disegno disegnerà un'ombra sotto quest'area.

*Ndepth*<br/>
[in] Larghezza e altezza dell'ombreggiatura.

*iMinLuminosità*<br/>
[in] Luminosità minima dell'ombra.

*iMaxLuminosità*<br/>
[in] Luminosità massima dell'ombra.

*pBmpSaveBottom (Informazioni in fondi utente)*<br/>
[in] Puntatore a una bitmap che contiene l'immagine per la parte inferiore dell'ombreggiatura.

*PBmpSaveRight (informazioni in assoluto in questo base'è stato in*<br/>
[in] Puntatore a una bitmap che contiene l'immagine per l'ombreggiatura disegnata sul lato destro del rettangolo.

*clrBase (base di un'azione*<br/>
[in] Colore dell'ombra.

*bRightShadow (Ombreggiatura del diritto)*<br/>
[in] Parametro booleano che indica come viene disegnata l'ombreggiatura. Se *bRightShadow* è `TRUE`, `DrawShadow` disegna un'ombreggiatura sul lato destro del rettangolo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile fornire due bitmap valide per le ombre inferiore e destra utilizzando i parametri *pBmpSaveBottom* e *pBmpSaveRight*. Se questi [oggetti CBitmap](../../mfc/reference/cbitmap-class.md) dispongono di `DrawShadow` un oggetto GDI associato, utilizzeranno tali bitmap come ombreggiature. Se `CBitmap` i parametri non dispongono di `DrawShadow` un oggetto GDI associato, disegnate l'ombra e associate le bitmap ai parametri. Nelle chiamate `DrawShadow`future a , è possibile fornire queste bitmap per velocizzare il processo di disegno. Per ulteriori informazioni `CBitmap` sulla classe e sugli oggetti GDI, vedere [Oggetti grafici](../../mfc/graphic-objects.md).

Se uno di `NULL`questi `DrawShadow` parametri è , disegna automaticamente l'ombra.

Se si imposta *bRightShadow* su FALSE, l'ombreggiatura verrà disegnata sotto e a sinistra dell'area rettangolare.

### <a name="example"></a>Esempio

Nell'esempio riportato di `DrawShadow` seguito `CDrawingManager` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte [dell'esempio Prop Sheet Demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_PropSheetDemo#1](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_1.cpp)]

## <a name="cdrawingmanagerfill4colorsgradient"></a><a name="fill4colorsgradient"></a>CDrawingManager::Fill4ColorsGradient

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
[in] Rettangolo da riempire.

*colorInizio1*<br/>
[in] Colore iniziale per la prima sfumatura di colore.

*colorFinish1*<br/>
[in] Colore finale per la prima sfumatura di colore.

*colorInizio2*<br/>
[in] Colore iniziale per la seconda sfumatura di colore.

*colorFinish2*<br/>
[in] Colore finale per la seconda sfumatura di colore.

*bHorz*<br/>
[in] Parametro booleano che `Fill4ColorsGradient` indica se colora una sfumatura orizzontale o verticale. TRUE indica una sfumatura orizzontale.

*nPercentuale*<br/>
[in] Numero intero compreso tra 0 e 100. Questo valore indica la percentuale del rettangolo da riempire con la prima sfumatura di colore.

### <a name="remarks"></a>Osservazioni

Quando un rettangolo viene riempito con due sfumature di colore, si trovano una sopra l'altra o una accanto all'altra, a seconda del valore di *bHorz*. Ogni sfumatura di colore viene calcolata in modo indipendente con il metodo [CDrawingManager::FillGradient](#fillgradient).

Questo metodo genera un errore di asserzione se *nPercentage* è minore di 0 o maggiore di 100.

## <a name="cdrawingmanagerfillgradient"></a><a name="fillgradient"></a>CDrawingManager::FillGradient

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
[in] Area rettangolare da riempire.

*colorInizio*<br/>
[in] Primo colore per il gradiente.

*colorFinish*<br/>
[in] Colore finale per il gradiente.

*bHorz*<br/>
[in] Parametro booleano che `FillGradient` specifica se deve disegnare una sfumatura orizzontale o verticale.

*nInizioPianoVariazione*<br/>
[in] Percentuale del rettangolo che `FillGradient` riempie con *colorStart* prima di iniziare la sfumatura.

*nEndFlatPercentage*<br/>
[in] La percentuale del `FillGradient` rettangolo che riempie con *colorFinish* dopo aver terminato la sfumatura.

### <a name="example"></a>Esempio

Nell'esempio riportato di `FillGradient` seguito `CDrawingManager` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte dell'esempio Demo di [MS Office 2007.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_MSOffice2007Demo#12](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_2.cpp)]

## <a name="cdrawingmanagerfillgradient2"></a><a name="fillgradient2"></a>CDrawingManager::FillGradient2

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
[in] Area rettangolare da riempire.

*colorInizio*<br/>
[in] Primo colore del gradiente.

*colorFinish*<br/>
[in] Ultimo colore del gradiente.

*nAngolo*<br/>
[in] Numero intero compreso tra 0 e 360. Questo parametro specifica la direzione della sfumatura di colore.

### <a name="remarks"></a>Osservazioni

Utilizzare *nAngle* per specificare la direzione della sfumatura di colore. Quando si specifica la direzione della sfumatura di colore, si specifica anche il punto in cui inizia la sfumatura di colore. Il valore 0 per *nAngle* indica che la sfumatura inizia dalla parte superiore del rettangolo. Man mano che *nAngle* aumenta, la posizione iniziale della sfumatura si sposta in senso antiorario in base all'angolo.

### <a name="example"></a>Esempio

Nell'esempio riportato di `FillGradient2` seguito `CDrawingManager` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#37](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_3.cpp)]

## <a name="cdrawingmanagergrayrect"></a><a name="grayrect"></a>CDrawingManager::GrayRect

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
[in] Area rettangolare da riempire.

*nPercentuale*<br/>
[in] La percentuale di grigio desiderata nel rettangolo.

*ClrTransparent*<br/>
[in] Colore trasparente.

*ClrDisabilitato*<br/>
[in] Colore utilizzato da questo metodo per la desaturazione se *nPercentage* è impostato su -1.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per il parametro *nPercentage*, un valore inferiore indica un colore più scuro.

Il valore massimo per *nPercentage* è 200. Un valore maggiore di 200 non modifica l'aspetto del rettangolo. Se il valore è -1, questo metodo utilizza *clrDisabled* per limitare la saturazione del rettangolo.

## <a name="cdrawingmanagerhighlightrect"></a><a name="highlightrect"></a>CDrawingManager::HighlightRect

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
[in] Area rettangolare da evidenziare.

*nPercentuale*<br/>
[in] Percentuale che indica la trasparenza dell'evidenziazione.

*ClrTransparent*<br/>
[in] Colore trasparente.

*nTolleranza*<br/>
[in] Numero intero compreso tra 0 e 255 che indica la tolleranza del colore.

*clrBlend*<br/>
[in] Colore di base per la fusione.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se *nPercentage* è compreso `HighlightRect` tra 0 e 99, utilizza l'algoritmo di fusione alfa. Per ulteriori informazioni sulla fusione alfa, consultate Linee e riempimenti di [alpha che si fondeno.](/dotnet/framework/winforms/advanced/alpha-blending-lines-and-fills) Se *nPercentage* è -1, questo metodo utilizza il livello di evidenziazione predefinito. Se *nPercentage* è 100, questo metodo non esegue alcuna operazione e restituisce TRUE.

Il metodo utilizza il parametro *nTolerance* per determinare se evidenziare l'area rettangolare. Per evidenziare il rettangolo, la differenza tra il colore di sfondo dell'applicazione e *clrTransparent* deve essere minore di *nTolerance* in ogni componente di colore (rosso, verde e blu).

## <a name="cdrawingmanagerhlstorgb_one"></a><a name="hlstorgb_one"></a>CDrawingManager::HLStoRGB_ONE

Converte un colore da una rappresentazione HLS a una rappresentazione RGB.

```
static COLORREF __stdcall HLStoRGB_ONE(
    double H,
    double L,
    double S);
```

### <a name="parameters"></a>Parametri

*H*<br/>
[in] Numero compreso tra 0 e 1 che rappresenta la tonalità del colore.

*L*<br/>
[in] Numero compreso tra 0 e 1 che indica la luminosità del colore.

*S*<br/>
[in] Numero compreso tra 0 e 1 che indica la saturazione del colore.

### <a name="return-value"></a>Valore restituito

Rappresentazione RGB del colore HLS fornito.

### <a name="remarks"></a>Osservazioni

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, consultate [Colore.](/windows/win32/uxguide/vis-color)

Questo metodo `CDrawingManager::HLStoRGB_TWO` e il metodo eseguono la stessa operazione, ma richiedono valori diversi per *il* H parametro. In questo metodo, *H* è una percentuale del cerchio. Nel `CDrawingManager::HLStoRGB_TWO` metodo, *H* è un valore di grado compreso tra 0 e 360, che rappresentano entrambi il rosso. Ad esempio, `HLStoRGB_ONE`con , un valore di 0,25 per *H* equivale a un valore di 90 con `HLStoRGB_TWO`.

## <a name="cdrawingmanagerhlstorgb_two"></a><a name="hlstorgb_two"></a>CDrawingManager::HLStoRGB_TWO

Converte un colore da una rappresentazione HLS a una rappresentazione RGB.

```
static COLORREF __stdcall HLStoRGB_TWO(
    double H,
    double L,
    double S);
```

### <a name="parameters"></a>Parametri

*H*<br/>
[in] Numero compreso tra 0 e 360 che rappresenta la tonalità del colore.

*L*<br/>
[in] Numero compreso tra 0 e 1 che indica la luminosità del colore.

*S*<br/>
[in] Numero compreso tra 0 e 1 che indica la saturazione del colore.

### <a name="return-value"></a>Valore restituito

Rappresentazione RGB del colore HLS fornito.

### <a name="remarks"></a>Osservazioni

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, consultate [Colore.](/windows/win32/uxguide/vis-color)

Questo metodo e il [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) metodo eseguono la stessa operazione, ma richiedono valori diversi per il *H* parametro. In questo metodo, *H* è un valore di grado compreso tra 0 e 360, che rappresentano entrambi il rosso. Nel [metodo CDrawingManager::HLStoRGB_ONE,](#hlstorgb_one) *H* è una percentuale del cerchio. Ad esempio, `HLStoRGB_ONE`con , un valore di 0,25 per *H* equivale a un valore di 90 con `HLStoRGB_TWO`.

## <a name="cdrawingmanagerhsvtorgb"></a><a name="hsvtorgb"></a>CDrawingManager::HSVtoRGB

Converte un colore da una rappresentazione HSV a una rappresentazione RGB.

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
|*H*|[in] Numero compreso tra 0 e 360 che indica la tonalità del colore.|
|*S*|[in] Numero compreso tra 0 e 1 che indica la saturazione del colore.|
|*Presso*|[in] Numero compreso tra 0 e 1 che indica il valore per il colore.|

### <a name="return-value"></a>Valore restituito

Rappresentazione RGB del colore HSV fornito.

### <a name="remarks"></a>Osservazioni

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, consultate [Colore.](/windows/win32/uxguide/vis-color)

## <a name="cdrawingmanagerhuetorgb"></a><a name="huetorgb"></a>CDrawingManager::HuetoRGB

Converte un valore di tonalità in un componente rosso, verde o blu.

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
[in] Vedere Osservazioni.

*m2 (in nome stato indue*<br/>
[in] Vedere Osservazioni.

*H*<br/>
[in] Vedere Osservazioni.

*rm1*<br/>
[in] Vedere Osservazioni.

*rm2*<br/>
[in] Vedere Osservazioni.

*Rh*<br/>
[in] Vedere Osservazioni.

### <a name="return-value"></a>Valore restituito

Componente rosso, verde o blu per la tonalità fornita.

### <a name="remarks"></a>Osservazioni

Questo metodo è un `CDrawingManager` metodo di supporto che la classe utilizza per calcolare i singoli componenti rosso, verde e blu di un colore in una rappresentazione HSV o HSL. Questo metodo non è progettato per essere chiamato direttamente dal programmatore. I parametri di input sono valori che dipendono dall'algoritmo di conversione.

Per convertire un colore HSV o HSL in una rappresentazione RGB, chiamate uno dei seguenti metodi:

- [CDrawingManager::HSVtoRGB](#hsvtorgb)

- [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)

- [CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)

## <a name="cdrawingmanagermirrorrect"></a><a name="mirrorrect"></a>CDrawingManager::MirrorRect

Capovolge un'area rettangolare.

```cpp
void MirrorRect(
    CRect rect,
    BOOL bHorz = TRUE);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in] Rettangolo di delimitazione dell'area da capovolgere.

*bHorz*<br/>
[in] Parametro booleano che indica se il rettangolo viene capovolto orizzontalmente o verticalmente.

### <a name="remarks"></a>Osservazioni

Questo metodo può capovolgere qualsiasi `CDrawingManager` area del contesto di dispositivo di proprietà della classe. Se *bHorz* è impostato su TRUE, questo metodo capovolge l'area orizzontalmente. In caso contrario, inverte verticalmente l'area.

## <a name="cdrawingmanagerpixelalpha"></a><a name="pixelalpha"></a>CDrawingManager::PixelAlpha

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

*per cento*<br/>
[in] Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza. Il valore 100 indica che il colore iniziale è completamente trasparente.

*percentR*<br/>
[in] Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente rosso.

*percentG*<br/>
[in] Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per la componente verde.

*percentB*<br/>
[in] Numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente blu.

*dstPixel*<br/>
[in] Colore di base per il pixel.

### <a name="return-value"></a>Valore restituito

Colore finale per il pixel semitrasparente.

### <a name="remarks"></a>Osservazioni

Si tratta di una classe helper per colorare le bitmap semitrasparenti e non è progettata per essere chiamata direttamente dal programmatore.

Quando si utilizza la versione del metodo che dispone di *dstPixel*, il colore finale è una combinazione di *dstPixel* e *srcPixel*. Il colore *srcPixel* è il colore parzialmente trasparente sul colore di base di *dstPixel*.

## <a name="cdrawingmanagerprepareshadowmask"></a><a name="prepareshadowmask"></a>CDrawingManager::PrepareShadowMask

Crea una bitmap che può essere utilizzata come ombreggiatura.

```
static HBITMAP __stdcall PrepareShadowMask (
    int nDepth,
    COLORREF clrBase,
    int iMinBrightness = 0,
    int iMaxBrightness = 100);
```

### <a name="parameters"></a>Parametri

*Ndepth*<br/>
[in] Larghezza e altezza dell'ombreggiatura.

*clrBase (base di un'azione*<br/>
[in] Colore dell'ombra.

*iMinLuminosità*<br/>
[in] Luminosità minima dell'ombra.

*iMaxLuminosità*<br/>
[in] Luminosità massima dell'ombra.

### <a name="return-value"></a>Valore restituito

Handle per la bitmap creata se questo metodo ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se *nDepth* è impostato su 0, questo metodo esce e restituisce NULL. Se *nDepth* è minore di 3, la larghezza e l'altezza dell'ombra sono impostate su 3 pixel.

## <a name="cdrawingmanagerrgbtohsl"></a><a name="rgbtohsl"></a>CDrawingManager::RGBtoHSL

Converte un colore da una rappresentazione rosso, verde e blu (RGB) in una rappresentazione HSL (Tonalità, saturazione e luminosità).

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
|*Rgb*|[in] Colore nei valori RGB.|
|*H*|[fuori] Puntatore a un valore double in cui il metodo memorizza la tonalità per il colore.|
|*S*|[fuori] Puntatore a un valore double in cui il metodo archivia la saturazione per il colore.|
|*L*|[fuori] Puntatore a un valore double in cui il metodo memorizza la luminosità per il colore.|

### <a name="remarks"></a>Osservazioni

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, consultate [Colore.](/windows/win32/uxguide/vis-color)

Il valore restituito per *H* è rappresentato come una frazione compresa tra 0 e 1 dove sia 0 che 1 rappresentano il rosso. I valori restituiti per *S* e *L* sono numeri compresi tra 0 e 1.

## <a name="cdrawingmanagerrgbtohsv"></a><a name="rgbtohsv"></a>CDrawingManager::RGBtoHSV

Converte un colore da una rappresentazione RGB in una rappresentazione HSV.

```
static void __stdcall RGBtoHSV(
    COLORREF rgb,
    double* H,
    double* S,
    double* V);
```

### <a name="parameters"></a>Parametri

*Rgb*<br/>
[in] Colore da convertire in una rappresentazione RGB.

*H*<br/>
[fuori] Puntatore a un valore double in cui questo metodo archivia la tonalità risultante per il colore.

*S*<br/>
[fuori] Puntatore a un valore double in cui questo metodo archivia la saturazione risultante per il colore.

*Presso*<br/>
[fuori] Puntatore a un valore double in cui questo metodo archivia il valore risultante per il colore.

### <a name="remarks"></a>Osservazioni

Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, consultate [Colore.](/windows/win32/uxguide/vis-color)

Il valore restituito per *H* è un numero compreso tra 0 e 360 in cui sia 0 che 360 indicano il rosso. I valori restituiti per *S* e *V* sono numeri compresi tra 0 e 1.

## <a name="cdrawingmanagersetalphapixel"></a><a name="setalphapixel"></a>CDrawingManager::SetAlphaPixel

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
[in] Puntatore ai valori di bit per la bitmap.

*Rect*<br/>
[in] Un'area rettangolare nell'applicazione. Il gestore di disegno disegna un'ombra sotto e a destra di quest'area.

*x*<br/>
[in] Coordinata orizzontale del pixel da colorare.

*Y*<br/>
[in] Coordinata verticale del pixel da colorare.

*per cento*<br/>
[in] Percentuale di trasparenza.

*iShadowSize (Dimensioni Shadow)*<br/>
[in] Larghezza e altezza dell'ombreggiatura.

*clrBase (base di un'azione*<br/>
[in] Colore dell'ombra.

*bIsRight (Diritto di sistema)*<br/>
[in] Parametro booleano che indica il pixel da colorare. Per ulteriori informazioni, vedere le sezione Note.

### <a name="remarks"></a>Osservazioni

Questo metodo è un metodo di supporto utilizzato dal [CDrawingManager::DrawShadow](#drawshadow) metodo. Se si desidera disegnare un'ombra, `CDrawingManager::DrawShadow` è consigliabile chiamare.

Se *bIsRight* è impostato su TRUE, il pixel da colorare viene misurato *x* pixel dal bordo destro di *rect*. Se è FALSE, il pixel da colorare viene misurato *x* pixel dal bordo sinistro di *rect*.

## <a name="cdrawingmanagersetpixel"></a><a name="setpixel"></a>CDrawingManager::SetPixel

Converte un singolo pixel in una bitmap nel colore specificato.

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
|*pBits*|[in] Puntatore ai valori di bit della bitmap.|
|*Cx*|[in] Larghezza totale della bitmap.|
|*Cy*|[in] Altezza totale della bitmap.|
|*x*|[in] Coordinata x del pixel nella bitmap da modificare.|
|*Y*|[in] Coordinata y del pixel nella bitmap da modificare.|
|*Colore*|[in] Nuovo colore per il pixel identificato dalle coordinate fornite.|

## <a name="cdrawingmanagersmartmixcolors"></a><a name="smartmixcolors"></a>CDrawingManager::SmartMixColors

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
|*colore1*|[in] Il primo colore da mescolare.|
|*colore2*|[in] Secondo colore da mescolare.|
|*dblLumRatio (dblLumRatio)*|[in] Rapporto per la luminosità del nuovo colore. `SmartMixColors`moltiplica la luminosità del colore misto per questo rapporto prima di determinare un colore finale.|
|*k1*|[in] Rapporto ponderato per il primo colore.|
|*k2*|[in] Rapporto ponderato per il secondo colore.|

### <a name="return-value"></a>Valore restituito

Colore che rappresenta una combinazione ponderata dei colori forniti.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo con un errore se *k1* o *k2* è minore di zero. Se entrambi questi parametri sono impostati `RGB(0, 0, 0)`su 0, il metodo restituisce .

Il rapporto ponderato viene calcolato con \* la seguente formula: (color1 k1 : color2 \* k2)/((k1 : k2). Dopo aver determinato il rapporto ponderato, il metodo calcola la luminosità per il colore misto. Viene quindi moltiplicata la luminosità per *dblLumRatio*. Se il valore è maggiore di 1,0, il metodo imposta la luminosità per il colore misto sul nuovo valore. In caso contrario, la luminosità è impostata su 1.0.Otherwise, the luminosity is set to 1.0.

## <a name="cdrawingmanagerdrawrotated"></a><a name="drawrotated"></a>CDrawingManager::DrawRotated

Ruota di 90 gradi il contenuto del controller di dominio di origine all'interno del rettangolo specificato.

```cpp
void DrawRotated(
    CRect rectDest,
    CDC& dcSrc,
    BOOL bClockWise);
```

### <a name="parameters"></a>Parametri

*rectDest (rectDest)*<br/>
Rettangolo di destinazione.

*dcSrc (dcSrc)*<br/>
Contesto del dispositivo di origine.

*bClockIn modo*<br/>
VERO indica la rotazione di 90 gradi; FALSE indica la rotazione di -90 gradi.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
