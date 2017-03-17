---
title: Classe CDrawingManager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CDrawingManager class
ms.assetid: 9e4775ca-101b-4aa9-a85a-4d047c701215
caps.latest.revision: 30
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 53929fff6df57b4e5fe00572f8a7cec8a218c638
ms.lasthandoff: 02/24/2017

---
# <a name="cdrawingmanager-class"></a>Classe CDrawingManager
La `CDrawingManager` classe implementa gli algoritmi di disegno complessi.  
  
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
|[CDrawingManager::CreateBitmap_32](#createbitmap_32)|Crea una bitmap indipendente dalla periferica a 32 bit (DIB) che possono scrivere applicazioni direttamente.|  
|[CDrawingManager::DrawAlpha](#drawalpha)|Visualizza le bitmap con pixel trasparente o semitrasparente.|  
|[CDrawingManager::DrawRotated](#drawrotated)|Ruota un'origine contenuto di controller di dominio all'interno del rettangolo specificato da + /-90 gradi|  
|[CDrawingManager::DrawEllipse](#drawellipse)|Disegna un'ellisse con i colori di riempimento e bordo specificati.|  
|[CDrawingManager::DrawGradientRing](#drawgradientring)|Disegna un anello e la riempie con una sfumatura di colore.|  
|[CDrawingManager::DrawLine, CDrawingManager::DrawLineA](#drawline_cdrawingmanager__drawlinea)|Disegna una linea.|  
|[CDrawingManager::DrawRect](#drawrect)|Disegna un rettangolo con colori di riempimento e bordo specificati.|  
|[CDrawingManager::DrawShadow](#drawshadow)|Disegna un'ombreggiatura per un'area rettangolare.|  
|[CDrawingManager::Fill4ColorsGradient](#fill4colorsgradient)|Riempie un'area rettangolare con due sfumature di colore.|  
|[CDrawingManager::FillGradient](#fillgradient)|Riempie un'area rettangolare con una sfumatura di colore specificato.|  
|[CDrawingManager::FillGradient2](#fillgradient2)|Riempie un'area rettangolare con una sfumatura di colore specificato. È inoltre specificare la direzione della modifica del colore della sfumatura.|  
|[CDrawingManager::GrayRect](#grayrect)|Riempie un rettangolo con un colore grigio specificato.|  
|[CDrawingManager::HighlightRect](#highlightrect)|Evidenzia un'area rettangolare.|  
|[CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)|Converte un colore da una rappresentazione HLS in una rappresentazione RGB.|  
|[CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)|Converte un colore da una rappresentazione HLS in una rappresentazione RGB.|  
|[CDrawingManager::HSVtoRGB](#hsvtorgb)|Converte un colore da una rappresentazione HSV in una rappresentazione RGB.|  
|[CDrawingManager::HuetoRGB](#huetorgb)|Metodo helper che converte un valore di tonalità in un componente rosso, verde o blu.|  
|[CDrawingManager::MirrorRect](#mirrorrect)|Consente di capovolgere un'area rettangolare.|  
|[CDrawingManager::PixelAlpha](#pixelalpha)|Metodo di supporto che determina il colore finale per un pixel semitrasparente.|  
|[CDrawingManager::PrepareShadowMask](#prepareshadowmask)|Crea una bitmap che può essere utilizzata come un'ombreggiatura.|  
|[CDrawingManager::RGBtoHSL](#rgbtohsl)|Converte una rappresentazione HSL un colore da una rappresentazione RGB.|  
|[CDrawingManager::RGBtoHSV](#rgbtohsv)|Converte una rappresentazione HSV un colore da una rappresentazione RGB.|  
|[CDrawingManager::SetAlphaPixel](#setalphapixel)|Metodo di supporto che i colori di un pixel parzialmente trasparente in una bitmap.|  
|[CDrawingManager::SetPixel](#setpixel)|Metodo di supporto che consente di modificare un singolo pixel nella bitmap specificata.|  
|[CDrawingManager::SmartMixColors](#smartmixcolors)|Combina due colori in base a un rapporto ponderato.|  
  
## <a name="remarks"></a>Note  
 La `CDrawingManager` classe fornisce funzioni per il disegno di rettangoli evidenziati ombreggiature e sfumature di colore. Esegue inoltre la fusione alfa. Per modificare direttamente l'interfaccia utente dell'applicazione, è possibile utilizzare questa classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
 `CDrawingManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdrawmanager.h  
  
##  <a name="cdrawingmanager"></a>CDrawingManager::CDrawingManager  
 Costruisce un [CDrawingManager](../../mfc/reference/cdrawingmanager-class.md) oggetto.  
  
```  
CDrawingManager(CDC& dc);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dc`  
 Un riferimento a un contesto di dispositivo. Il `CDrawingManager` utilizza questo contesto per il disegno.  
  
##  <a name="createbitmap_32"></a>CDrawingManager::CreateBitmap_32  
 Crea una bitmap indipendente dalla periferica a 32 bit (DIB) che possono scrivere applicazioni direttamente.  
  
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
|[in] `size`|Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) parametro che indica le dimensioni della bitmap.|  
|[out] `pBits`|Un puntatore a un puntatore a dati che riceve il percorso del immagine DIB bit di valori.|  
|`bitmap`|Un handle per la bitmap originale|  
|`clrTransparent`|Un valore RGB che specifica il colore trasparente dell'immagine bitmap originale.|  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per la bitmap DIB appena creato se questo metodo dà esito positivo. in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su come creare una bitmap DIB, vedere [CreateDIBSection](http://msdn.microsoft.com/library/windows/desktop/dd183491).  
  
##  <a name="drawalpha"></a>CDrawingManager::DrawAlpha  
 Visualizza le bitmap con pixel trasparente o semitrasparente.  
  
```  
void DrawAlpha(
    CDC* pDstDC,  
    const CRect& rectDst,  
    CDC* pSrcDC,  
    const CRect& rectSrc);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDstDC`  
 Puntatore al contesto di dispositivo per la destinazione.  
  
 [in] `rectDst`  
 Il rettangolo di destinazione.  
  
 [in] `pSrcDC`  
 Puntatore al contesto di dispositivo per l'origine.  
  
 [in] `rectSrc`  
 Il rettangolo di origine.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue la fusione alfa per due bitmap. Per ulteriori informazioni su fusione alfa, vedere [AlphaBlend](http://msdn.microsoft.com/library/windows/desktop/dd183351) in Windows SDK.  
  
##  <a name="drawellipse"></a>CDrawingManager::DrawEllipse  
 Disegna un'ellisse con i colori di riempimento e bordo specificati.  
  
```  
void DrawEllipse(
    const CRect& rect,  
    COLORREF clrFill,  
    COLORREF clrLine);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 Il rettangolo di delimitazione dell'ellisse.  
  
 [in] `clrFill`  
 Il colore di che questo metodo viene utilizzato per riempire l'ellisse.  
  
 [in] `clrLine`  
 Il colore del bordo dell'ellisse viene utilizzato questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce senza disegnare un'ellisse se dei colori è impostato su -1. Restituisce anche senza disegnare un'ellisse se una dimensione del rettangolo di delimitazione è 0.  
  
##  <a name="drawgradientring"></a>CDrawingManager::DrawGradientRing  
 Disegna un anello e la riempie con una sfumatura di colore.  
  
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
 [in] `rect`  
 Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) parametro che specifica il limite per l'anello sfumatura.  
  
 [in] `colorStart`  
 Il primo colore della sfumatura.  
  
 [in] `colorFinish`  
 L'ultimo colore della sfumatura.  
  
 [in] `colorBorder`  
 Il colore del bordo.  
  
 [in] `nAngle`  
 Un parametro che specifica l'angolo iniziale di disegno sfumatura. Questo valore deve essere compreso tra 0 e 360.  
  
 [in] `nWidth`  
 La larghezza del bordo per l'anello.  
  
 [in] `clrFace`  
 Il colore all'interno dell'anello.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il rettangolo definito da `rect` deve essere almeno 5 pixel di larghezza e di 5 pixel.  
  
##  <a name="drawline_cdrawingmanager__drawlinea"></a>CDrawingManager::DrawLine, CDrawingManager::DrawLineA  
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
|[in] `x1`|Coordinata x in cui inizia la riga.|  
|[in] `y1`|Coordinata y in cui inizia la riga.|  
|[in] `x2`|Coordinata x in cui termina la riga.|  
|[in] `y2`|Coordinata y in cui termina la riga.|  
|[in] `clrLine`|Il colore della linea.|  
  
### <a name="remarks"></a>Note  
 Questo metodo non riesce se `clrLine` è uguale a -1.  
  
##  <a name="drawrect"></a>CDrawingManager::DrawRect  
 Disegna un rettangolo con colori di riempimento e bordo specificati.  
  
```  
void DrawRect(
    const CRect& rect,  
    COLORREF clrFill,  
    COLORREF clrLine);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 I limiti del rettangolo.  
  
 [in] `clrFill`  
 Il colore di che questo metodo viene utilizzato per riempire il rettangolo.  
  
 [in] `clrLine`  
 Il colore di questo metodo viene utilizzato per il bordo del rettangolo.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce senza disegnare un rettangolo se dei colori è impostato su -1. Restituisce anche se una dimensione del rettangolo è 0.  
  
##  <a name="drawshadow"></a>CDrawingManager::DrawShadow  
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
 [in] `rect`  
 Un'area rettangolare all'interno dell'applicazione. Gestione di disegno verrà disegnata un'ombreggiatura di sotto di quest'area.  
  
 [in] `nDepth`  
 La larghezza e altezza dell'ombreggiatura.  
  
 [in] `iMinBrightness`  
 La luminosità minima dell'ombreggiatura.  
  
 [in] `iMaxBrightness`  
 La luminosità massima dell'ombreggiatura.  
  
 [in] `pBmpSaveBottom`  
 Un puntatore a una bitmap che contiene l'immagine per la parte inferiore dell'ombreggiatura.  
  
 [in] `pBmpSaveRight`  
 Un puntatore a una bitmap che contiene l'immagine per l'ombreggiatura che viene disegnato sul lato destro del rettangolo.  
  
 [in] `clrBase`  
 Colore dell'ombreggiatura.  
  
 [in] `bRightShadow`  
 Un parametro booleano che indica come viene disegnata l'ombreggiatura. Se `bRightShadow` è `TRUE`, `DrawShadow` disegna un'ombreggiatura a destra del rettangolo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile fornire due bitmap valida per l'ombreggiatura inferiore e destro utilizzando i parametri `pBmpSaveBottom` e `pBmpSaveRight`. Se queste [CBitmap](../../mfc/reference/cbitmap-class.md) gli oggetti hanno un oggetto associato in GDI, `DrawShadow` utilizzerà tali bitmap come le ombreggiature. Se il `CBitmap` non è un oggetto associato in GDI, i parametri `DrawShadow` disegna ombreggiatura e collega le bitmap per i parametri. Nelle future chiamate a `DrawShadow`, è possibile fornire queste mappe di bit per accelerare il processo di disegno. Per ulteriori informazioni sui `CBitmap` classe e gli oggetti GDI, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
 Se uno di questi parametri è `NULL`, `DrawShadow` automaticamente verrà disegnata l'ombreggiatura.  
  
 Se si imposta `bRightShadow` a `FALSE`, verrà disegnata l'ombreggiatura di sotto e a sinistra dell'area rettangolare.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `DrawShadow` metodo la `CDrawingManager` classe. Questo frammento di codice fa parte di [esempio dimostrativo foglio Prop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_PropSheetDemo n.&1;](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_1.cpp)]  
  
##  <a name="fill4colorsgradient"></a>CDrawingManager::Fill4ColorsGradient  
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
 [in] `rect`  
 Rettangolo da riempire.  
  
 [in] `colorStart1`  
 Il colore iniziale per la sfumatura di colore prima.  
  
 [in] `colorFinish1`  
 Il colore finale della sfumatura di colore prima.  
  
 [in] `colorStart2`  
 Il colore iniziale per la sfumatura di colore secondo.  
  
 [in] `colorFinish2`  
 Il colore finale della sfumatura di colore secondo.  
  
 [in] `bHorz`  
 Un parametro booleano che indica se `Fill4ColorsGradient` i colori di una sfumatura orizzontale o verticale. `TRUE`indica una sfumatura orizzontale.  
  
 [in] `nPercentage`  
 Intero compreso tra 0 e 100. Questo valore indica la percentuale del rettangolo da riempire con la sfumatura di colore prima.  
  
### <a name="remarks"></a>Note  
 Quando un rettangolo viene riempito con due sfumature di colore, che sono si trova sopra tra loro o avanti tra loro, a seconda del valore di `bHorz`. Ogni sfumatura di colore viene calcolato in modo indipendente con il metodo [CDrawingManager::FillGradient](#fillgradient).  
  
 Questo metodo genera un errore di asserzione se `nPercentage` è minore di 0 o maggiore di 100.  
  
##  <a name="fillgradient"></a>CDrawingManager::FillGradient  
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
 [in] `rect`  
 L'area rettangolare da riempire.  
  
 [in] `colorStart`  
 Il primo colore della sfumatura.  
  
 [in] `colorFinish`  
 Il colore finale della sfumatura.  
  
 [in] `bHorz`  
 Un parametro booleano che specifica se `FillGradient` deve creare una sfumatura orizzontale o verticale.  
  
 [in] `nStartFlatPercentage`  
 La percentuale del rettangolo che `FillGradient` riempie con `colorStart` prima di avviare la sfumatura.  
  
 [in] `nEndFlatPercentage`  
 La percentuale del rettangolo che `FillGradient` riempie con `colorFinish` al termine della sfumatura.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `FillGradient` metodo la `CDrawingManager` classe. Questo frammento di codice fa parte di [esempio MS Office 2007 Demo](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo&#12;](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_2.cpp)]  
  
##  <a name="fillgradient2"></a>CDrawingManager::FillGradient2  
 Riempie un'area rettangolare con una sfumatura di colore specificato.  
  
```  
void FillGradient2 (
    CRect rect,  
    COLORREF colorStart,  
    COLORREF colorFinish,  
    int nAngle = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 L'area rettangolare da riempire.  
  
 [in] `colorStart`  
 Il primo colore della sfumatura.  
  
 [in] `colorFinish`  
 L'ultimo colore della sfumatura.  
  
 [in] `nAngle`  
 Numero intero compreso tra 0 e 360. Questo parametro specifica la direzione della sfumatura di colore.  
  
### <a name="remarks"></a>Note  
 Utilizzare `nAngle` per specificare la direzione della sfumatura di colore. Quando si specifica la direzione della sfumatura di colore, specificare anche dove inizia la sfumatura di colore. Il valore 0 per `nAngle` indica la sfumatura inizia dalla parte superiore del rettangolo. Come `nAngle` aumenta, la posizione iniziale della sfumatura spostato in direzione in senso antiorario in base all'angolo.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `FillGradient2` metodo la `CDrawingManager` classe. Questo frammento di codice fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls&#37;](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_3.cpp)]  
  
##  <a name="grayrect"></a>CDrawingManager::GrayRect  
 Riempie un rettangolo con un colore grigio specificato.  
  
```  
BOOL GrayRect(
    CRect rect,  
    int nPercentage = -1,  
    COLORREF clrTransparent = (COLORREF)-1,  
    COLORREF clrDisabled = (COLORREF)-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 L'area rettangolare da riempire.  
  
 [in] `nPercentage`  
 La percentuale di grigio desiderato nel rettangolo.  
  
 [in] `clrTransparent`  
 Colore trasparente.  
  
 [in] `clrDisabled`  
 Il colore utilizzato da questo metodo per la saturazione se `nPercentage` è impostato su -1.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per il parametro `nPercentage`, un valore inferiore indica un colore più scuro.  
  
 Il valore massimo per `nPercentage` è 200. Un valore maggiore di 200 non modifica l'aspetto del rettangolo. Se il valore è -1, questo metodo utilizza `clrDisabled` per limitare la saturazione del rettangolo.  
  
##  <a name="highlightrect"></a>CDrawingManager::HighlightRect  
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
 [in] `rect`  
 Un'area rettangolare da evidenziare.  
  
 [in] `nPercentage`  
 Una percentuale che indica come trasparente deve essere l'evidenziazione.  
  
 [in] `clrTransparent`  
 Colore trasparente.  
  
 [in] `nTolerance`  
 Valore intero compreso tra 0 e 255 che indica la tolleranza di colore.  
  
 [in] `clrBlend`  
 Il colore di base per la fusione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se `nPercentage` è compreso tra 0 e 99, `HighlightRect` utilizza alfa dell'algoritmo di sfumatura. Per ulteriori informazioni su la fusione alfa, vedere [linee con fusione alfa e riempimenti](http://msdn.microsoft.com/library/5440f48c-3ac9-44c3-b170-c1c110bdbab8). Se `nPercentage` è -1, questo metodo utilizza il livello di evidenziazione predefinito. Se `nPercentage` è 100, questo metodo non esegue alcuna operazione e restituisce `TRUE`.  
  
 Il metodo utilizza il parametro `nTolerance` per determinare se evidenziare l'area rettangolare. Per evidenziare il rettangolo, la differenza tra il colore di sfondo dell'applicazione e `clrTransparent` deve essere minore di `nTolerance` in ciascun componente di colore (rosso, verde e blu).  
  
##  <a name="hlstorgb_one"></a>CDrawingManager::HLStoRGB_ONE  
 Converte un colore da una rappresentazione HLS in una rappresentazione RGB.  
  
```  
static COLORREF __stdcall HLStoRGB_ONE(
    double H,  
    double L,  
    double S);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `H`  
 Un numero compreso tra 0 e 1 che rappresenta la tonalità del colore.  
  
 [in] `L`  
 Un numero compreso tra 0 e 1 che indica la luminosità del colore.  
  
 [in] `S`  
 Un numero compreso tra 0 e 1 che indica la saturazione del colore.  
  
### <a name="return-value"></a>Valore restituito  
 La rappresentazione RGB del colore HLS fornito.  
  
### <a name="remarks"></a>Note  
 Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, vedere [colore](http://go.microsoft.com/fwlink/linkid=119126).  
  
 Questo metodo e `CDrawingManager::HLStoRGB_TWO` metodo eseguono la stessa operazione, ma richiedono valori diversi per il `H` parametro. In questo metodo, `H` è una percentuale del cerchio. Nel `CDrawingManager::HLStoRGB_TWO` metodo `H` è un valore compreso tra 0 e 360, che rappresentano rosso. Ad esempio, con `HLStoRGB_ONE`, il valore 0.25 per `H` equivale a un valore pari a 90 con `HLStoRGB_TWO`.  
  
##  <a name="hlstorgb_two"></a>CDrawingManager::HLStoRGB_TWO  
 Converte un colore da una rappresentazione HLS in una rappresentazione RGB.  
  
```  
static COLORREF __stdcall HLStoRGB_TWO(
    double H,  
    double L,  
    double S);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `H`  
 Un numero compreso tra 0 e 360 che rappresenta la tonalità del colore.  
  
 [in] `L`  
 Un numero compreso tra 0 e 1 che indica la luminosità del colore.  
  
 [in] `S`  
 Un numero compreso tra 0 e 1 che indica la saturazione del colore.  
  
### <a name="return-value"></a>Valore restituito  
 La rappresentazione RGB del colore HLS fornito.  
  
### <a name="remarks"></a>Note  
 Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, vedere [colore](http://go.microsoft.com/fwlink/linkid=119126).  
  
 Questo metodo e [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) metodo eseguono la stessa operazione, ma richiedono valori diversi per il `H` parametro. In questo metodo, `H` è un valore compreso tra 0 e 360, che rappresentano rosso. Nel [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) metodo `H` è una percentuale del cerchio. Ad esempio, con `HLStoRGB_ONE`, il valore 0.25 per `H` equivale a un valore pari a 90 con `HLStoRGB_TWO`.  
  
##  <a name="hsvtorgb"></a>CDrawingManager::HSVtoRGB  
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
|[in] `H`|Un numero compreso tra 0 e 360 che indica la tonalità del colore.|  
|[in] `S`|Un numero compreso tra 0 e 1 che indica la saturazione del colore.|  
|[in] `V`|Un numero compreso tra 0 e 1 che indica il valore per il colore.|  
  
### <a name="return-value"></a>Valore restituito  
 La rappresentazione RGB del colore HSV fornito.  
  
### <a name="remarks"></a>Note  
 Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, vedere [colore](http://go.microsoft.com/fwlink/linkid=119126).  
  
##  <a name="huetorgb"></a>CDrawingManager::HuetoRGB  
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
 [in] `m1`  
 Vedere la sezione Osservazioni.  
  
 [in] `m2`  
 Vedere la sezione Osservazioni.  
  
 [in] `h`  
 Vedere la sezione Osservazioni.  
  
 [in] `rm1`  
 Vedere la sezione Osservazioni.  
  
 [in] `rm2`  
 Vedere la sezione Osservazioni.  
  
 [in] `rh`  
 Vedere la sezione Osservazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Il componente rosso, verde o blu singoli relativo alla tonalità fornito.  
  
### <a name="remarks"></a>Note  
 Questo metodo è un metodo helper che la `CDrawingManager` classe viene utilizzato per calcolare i singoli componenti rosso, verdi e blu di un colore in una rappresentazione HSV o HSL. Questo metodo non è progettato per essere chiamato direttamente dal programmatore. I parametri di input sono valori che variano a seconda dell'algoritmo di conversione.  
  
 Per convertire un colore HSV o HSL in una rappresentazione RGB, chiamare uno dei metodi seguenti:  
  
- [CDrawingManager::HSVtoRGB](#hsvtorgb)  
  
- [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)  
  
- [CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)  
  
##  <a name="mirrorrect"></a>CDrawingManager::MirrorRect  
 Consente di capovolgere un'area rettangolare.  
  
```  
void MirrorRect(
    CRect rect,  
    BOOL bHorz = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 Il rettangolo di delimitazione dell'area da invertire.  
  
 [in] `bHorz`  
 Un parametro booleano che indica se il rettangolo consente di capovolgere orizzontalmente o verticalmente.  
  
### <a name="remarks"></a>Note  
 Questo metodo è possibile capovolgere qualsiasi area del contesto del dispositivo di proprietà di `CDrawingManager` (classe). Se `bHorz` è impostato su `TRUE`, questo metodo consente di capovolgere l'area orizzontalmente. In caso contrario, capovolge verticalmente l'area.  
  
##  <a name="pixelalpha"></a>CDrawingManager::PixelAlpha  
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
 [in] `srcPixel`  
 Il colore iniziale per il pixel.  
  
 [in] `percent`  
 Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza. Un valore pari a 100 indica che il colore iniziale è completamente trasparente.  
  
 [in] `percentR`  
 Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente rosso.  
  
 [in] `percentG`  
 Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente verde.  
  
 [in] `percentB`  
 Un numero compreso tra 0 e 100 che rappresenta la percentuale di trasparenza per il componente blu.  
  
 [in] `dstPixel`  
 Il colore di base per il pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Colore finale per il pixel semitrasparente.  
  
### <a name="remarks"></a>Note  
 Questa è una classe helper per colorare semitrasparente bitmap e non è progettata per essere chiamato direttamente dal programmatore.  
  
 Quando si utilizza la versione del metodo che ha `dstPixel`, il colore finale è una combinazione di `dstPixel` e `srcPixel`. Il `srcPixel` è il colore parzialmente trasparente sul colore di base `dstPixel`.  
  
##  <a name="prepareshadowmask"></a>CDrawingManager::PrepareShadowMask  
 Crea una bitmap che può essere utilizzata come un'ombreggiatura.  
  
```  
static HBITMAP __stdcall PrepareShadowMask (
    int nDepth,  
    COLORREF clrBase,  
    int iMinBrightness = 0,  
    int iMaxBrightness = 100);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nDepth`  
 La larghezza e altezza dell'ombreggiatura.  
  
 [in] `clrBase`  
 Colore dell'ombreggiatura.  
  
 [in] `iMinBrightness`  
 La luminosità minima dell'ombreggiatura.  
  
 [in] `iMaxBrightness`  
 La luminosità massima dell'ombreggiatura.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per la bitmap creata se questo metodo dà esito positivo. in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Se `nDepth` è impostato su 0, questo metodo viene chiusa e restituisce `NULL`. Se `nDepth` è inferiore a 3, la larghezza e l'altezza dell'ombreggiatura viene impostate su 3 pixel.  
  
##  <a name="rgbtohsl"></a>CDrawingManager::RGBtoHSL  
 Converte un colore da una rappresentazione di colore rossa, verde e blu (RGB) in una tonalità, saturazione e luminosità (HSL) rappresentazione.  
  
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
|[in] `rgb`|Il colore in valori RGB.|  
|[out] `H`|Un puntatore a un valore double in cui il metodo archivia la tonalità del colore.|  
|[out] `S`|Un puntatore a un valore double in cui il metodo archivia la saturazione del colore.|  
|[out] `L`|Un puntatore a un valore double in cui il metodo archivia la luminosità del colore.|  
  
### <a name="remarks"></a>Note  
 Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, vedere [colore](http://go.microsoft.com/fwlink/linkid=119126).  
  
 Il valore restituito per `H` viene rappresentata come frazione tra 0 e 1 in 0 e 1 rappresentano entrambi rosso. I valori restituiti per `S` e `L` sono numeri compresi tra 0 e 1.  
  
##  <a name="rgbtohsv"></a>CDrawingManager::RGBtoHSV  
 Converte una rappresentazione HSV un colore da una rappresentazione RGB.  
  
```  
static void __stdcall RGBtoHSV(
    COLORREF rgb,  
    double* H,  
    double* S,  
    double* V);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rgb`  
 Il colore da convertire in una rappresentazione RGB.  
  
 [out] `H`  
 Un puntatore a un valore double in cui questo metodo archivia la tonalità del colore risulta.  
  
 [out] `S`  
 Un puntatore a un valore double in cui questo metodo archivia la saturazione del colore risulta.  
  
 [out] `V`  
 Un puntatore a un valore double in cui questo metodo archivia il valore per il colore risultante.  
  
### <a name="remarks"></a>Note  
 Un colore può essere rappresentato come HSV (tonalità, saturazione e valore), HSL (tonalità, saturazione e luminosità) o RGB (rosso, verde e blu). Per ulteriori informazioni sulle diverse rappresentazioni di colore, vedere [colore](http://go.microsoft.com/fwlink/linkid=119126).  
  
 Il valore restituito per `H` è un numero compreso tra 0 e 360 dove sia 0 e 360 indicano rosso. La restituzione di valori per `S` e `V` sono numeri compresi tra 0 e 1.  
  
##  <a name="setalphapixel"></a>CDrawingManager::SetAlphaPixel  
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
 [in] `pBits`  
 Un puntatore per i valori di bit della bitmap.  
  
 [in] `rect`  
 Un'area rettangolare all'interno dell'applicazione. Il gestore disegno disegna un'ombreggiatura di sotto e a destra di quest'area.  
  
 [in] `x`  
 Coordinata orizzontale del pixel a colori.  
  
 [in] `y`  
 Coordinata verticale del pixel a colori.  
  
 [in] `percent`  
 La percentuale di trasparenza.  
  
 [in] `iShadowSize`  
 La larghezza e altezza dell'ombreggiatura.  
  
 [in] `clrBase`  
 Colore dell'ombreggiatura.  
  
 [in] `bIsRight`  
 Un parametro booleano che indica quale pixel a colori. Per altre informazioni, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Questo metodo è un metodo di supporto che viene utilizzato il [CDrawingManager::DrawShadow](#drawshadow) metodo. È consigliabile che se si desidera tracciare un'ombreggiatura, chiamare `CDrawingManager::DrawShadow` invece.  
  
 Se `bIsRight` è impostato su `TRUE`, viene misurato il pixel colore `x` pixel dal bordo destro di `rect`. In questo caso `FALSE`, viene misurato il pixel colore `x` pixel dal bordo sinistro di `rect`.  
  
##  <a name="setpixel"></a>CDrawingManager::SetPixel  
 Consente di modificare un singolo pixel nella bitmap specificata.  
  
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
|[in] `pBits`|Un puntatore per i valori di bit della bitmap.|  
|[in] `cx`|La larghezza totale della bitmap.|  
|[in] `cy`|L'altezza totale della bitmap.|  
|[in] `x`|Coordinata x del pixel della bitmap da modificare.|  
|[in] `y`|Coordinata y del pixel della bitmap da modificare.|  
|[in] `color`|Il nuovo colore per il pixel identificato dalle coordinate specificate.|  
  
##  <a name="smartmixcolors"></a>CDrawingManager::SmartMixColors  
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
|[in] `color1`|Il primo colore da combinare.|  
|[in] `color2`|Il secondo colore da combinare.|  
|[in] `dblLumRatio`|Il rapporto per luminosità del colore nuovo. `SmartMixColors`Moltiplica la luminosità del colore misto per questo rapporto prima di determinare il colore finale.|  
|[in] `k1`|Il rapporto ponderato per il primo colore.|  
|[in] `k2`|Il rapporto ponderato per il secondo colore.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto color che rappresenta una combinazione di colori forniti ponderata.  
  
### <a name="remarks"></a>Note  
 Questo metodo genera un errore se il valore `k1` o `k2` è minore di zero. Se entrambi i parametri vengono impostati su 0, il metodo restituisce `RGB(0, 0, 0)`.  
  
 Il rapporto Media ponderato viene calcolato con la seguente formula: (color1 * k1 + color2 \* k2) /(k1 + k2). Dopo aver determinata la percentuale media ponderata, il metodo calcola la luminosità del colore misto. Quindi, Moltiplica la luminosità da `dblLumRatio`. Se il valore è maggiore di 1.0, il metodo imposta la luminosità per la combinazione di colori per il nuovo valore. In caso contrario, la luminosità è impostata su 1.0.  
  
##  <a name="drawrotated"></a>CDrawingManager::DrawRotated  
 Consente di ruotare di 90 gradi un'origine contenuto di controller di dominio all'interno del rettangolo specificato.  
  
```  
void DrawRotated(
    CRect rectDest,  
    CDC& dcSrc,  
    BOOL bClockWise);
```  
  
### <a name="parameters"></a>Parametri  
 `rectDest`  
 Rettangolo di destinazione.  
  
 `dcSrc`  
 Il contesto di dispositivo di origine.  
  
 `bClockWise`  
 `TRUE`indica di rotazione +&90; gradi; `FALSE` indica ruotare-90 gradi.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

