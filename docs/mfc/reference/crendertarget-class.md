---
title: Classe CRenderTarget | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRenderTarget
- afxrendertarget/CRenderTarget
dev_langs:
- C++
helpviewer_keywords:
- CRenderTarget class
ms.assetid: 30d1607d-68d3-4d14-ac36-fdbd0ef903a1
caps.latest.revision: 17
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 6f77d482e7ee3bf0798ad488067893b3712aac62
ms.lasthandoff: 02/24/2017

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
|[CRenderTarget:: ~ CRenderTarget](#crendertarget__~crendertarget)|Distruttore. Chiamato quando viene eliminato un oggetto di destinazione di rendering.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::Attach](#attach)|Consente di collegare esistente eseguire il rendering di interfaccia di destinazione per l'oggetto|  
|[CRenderTarget::BeginDraw](#begindraw)|Avvia il disegno in questa destinazione di rendering.|  
|[CRenderTarget::Clear](#clear)|Cancella area di disegno per il colore specificato.|  
|[CRenderTarget::COLORREF_TO_D2DCOLOR](#colorref_to_d2dcolor)|Converte l'oggetto D2D1_COLOR_F GDI colore e i valori alfa.|  
|[CRenderTarget::CreateCompatibleRenderTarget](#createcompatiblerendertarget)|Crea una nuova destinazione di rendering di bitmap per l'utilizzo durante il disegno fuori schermo intermedio compatibile con la destinazione di rendering corrente.|  
|[CRenderTarget::Destroy](#destroy)|Elimina una o più risorse|  
|[CRenderTarget::Detach](#detach)|Disconnette l'interfaccia di destinazione di rendering dall'oggetto|  
|[CRenderTarget::DrawBitmap](#drawbitmap)|Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.|  
|[CRenderTarget::DrawEllipse](#drawellipse)|Disegna la struttura dell'ellisse specificato utilizzando lo stile del tratto specificato.|  
|[CRenderTarget::DrawGeometry](#drawgeometry)|Disegna la struttura della geometria specificata utilizzando lo stile del tratto specificato.|  
|[CRenderTarget::DrawGlyphRun](#drawglyphrun)|Consente di disegnare i glifi specificati.|  
|[CRenderTarget::DrawLine](#drawline)|Disegna una linea tra i punti specificati utilizzando lo stile di traccia specificato.|  
|[CRenderTarget::DrawRectangle](#drawrectangle)|Disegna la struttura di un rettangolo con le dimensioni specificate e stile di traccia.|  
|[CRenderTarget::DrawRoundedRectangle](#drawroundedrectangle)|Disegna la struttura del rettangolo arrotondato specificato utilizzando lo stile del tratto specificato.|  
|[CRenderTarget::DrawText](#drawtext)|Disegna il testo specificato mediante le informazioni di formato fornite da un oggetto IDWriteTextFormat.|  
|[CRenderTarget::DrawTextLayout](#drawtextlayout)|Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.|  
|[CRenderTarget::EndDraw](#enddraw)|Termina le operazioni di disegno sulla destinazione di rendering e indica lo stato di errore corrente e i tag associati.|  
|[CRenderTarget::FillEllipse](#fillellipse)|Disegna la parte interna dell'ellisse specificata.|  
|[CRenderTarget::FillGeometry](#fillgeometry)|Disegna l'interno della geometria specificata.|  
|[CRenderTarget::FillMesh](#fillmesh)|Disegna la parte interna della rete specificata.|  
|[CRenderTarget::FillOpacityMask](#fillopacitymask)|Applica la maschera di opacità descritta da nella bitmap specificata in un pennello che, utilizzato per disegnare un'area della destinazione di rendering.|  
|[CRenderTarget::FillRectangle](#fillrectangle)|Disegna l'interno del rettangolo specificato.|  
|[CRenderTarget::FillRoundedRectangle](#fillroundedrectangle)|Disegna l'interno del rettangolo arrotondato specificato.|  
|[CRenderTarget::Flush](#flush)|Esegue tutti i comandi di disegno in sospeso.|  
|[CRenderTarget::GetAntialiasMode](#getantialiasmode)|Recupera la modalità di anti-aliasing corrente per le operazioni di disegno non di testo.|  
|[CRenderTarget::GetDpi](#getdpi)|Restituisce il rendering punti per pollice (DPI) della destinazione|  
|[CRenderTarget::GetMaximumBitmapSize](#getmaximumbitmapsize)|Ottiene la dimensione massima, in unità dipendenti dalla periferica (pixel), di qualsiasi dimensione di una bitmap supportato dalla destinazione di rendering|  
|[CRenderTarget::GetPixelFormat](#getpixelformat)|Recupera il formato pixel e alpha modalità della destinazione di rendering|  
|[CRenderTarget::GetPixelSize](#getpixelsize)|Restituisce la dimensione della destinazione di rendering in pixel del dispositivo|  
|[CRenderTarget::GetRenderTarget](#getrendertarget)|Restituisce l'interfaccia ID2D1RenderTarget|  
|[CRenderTarget::GetSize](#getsize)|Restituisce la dimensione della destinazione di rendering in pixel indipendenti dal dispositivo|  
|[CRenderTarget::GetTags](#gettags)|Ottiene l'etichetta per le successive operazioni di disegno.|  
|[CRenderTarget::GetTextAntialiasMode](#gettextantialiasmode)|Ottiene la modalità di anti-aliasing per testo e le operazioni di disegno del glifo.|  
|[CRenderTarget::GetTextRenderingParams](#gettextrenderingparams)|Recupera opzioni per il rendering di testo corrente della destinazione di rendering.|  
|[CRenderTarget::GetTransform](#gettransform)|Applica la trasformazione specificata per la destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato.|  
|[CRenderTarget::IsSupported](#issupported)|Indica se la destinazione di rendering supporta le proprietà specificate|  
|[CRenderTarget::IsValid](#isvalid)|Verifica la validità della risorsa|  
|[CRenderTarget::PopAxisAlignedClip](#popaxisalignedclip)|Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il clip non è più applicato alle successive operazioni di disegno.|  
|[CRenderTarget::PopLayer](#poplayer)|Interrompe il reindirizzamento delle operazioni di disegno al livello specificato da PushLayer ultima chiamata.|  
|[CRenderTarget::PushAxisAlignedClip](#pushaxisalignedclip)|Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il clip non è più applicato alle successive operazioni di disegno.|  
|[CRenderTarget::PushLayer](#pushlayer)|Aggiunge il livello specificato per la destinazione di rendering in modo che riceva tutte le operazioni di disegno successive fino a quando non viene chiamato PopLayer.|  
|[CRenderTarget::RestoreDrawingState](#restoredrawingstate)|Imposta lo stato di disegno della destinazione di rendering di ID2D1DrawingStateBlock specificato.|  
|[CRenderTarget::SaveDrawingState](#savedrawingstate)|Salva lo stato corrente di disegno ID2D1DrawingStateBlock specificato.|  
|[CRenderTarget::SetAntialiasMode](#setantialiasmode)|Imposta la modalità di anti-aliasing della destinazione di rendering. La modalità di anti-aliasing si applica a tutte le operazioni di disegno successivi, ad eccezione di testo e icona le operazioni di disegno.|  
|[CRenderTarget::SetDpi](#setdpi)|Imposta i punti per pollice (DPI) della destinazione di rendering.|  
|[CRenderTarget::SetTags](#settags)|Specifica un'etichetta per le successive operazioni di disegno.|  
|[CRenderTarget::SetTextAntialiasMode](#settextantialiasmode)|Specifica la modalità di anti-aliasing da utilizzare per il testo e le operazioni di disegno del glifo.|  
|[CRenderTarget::SetTextRenderingParams](#settextrenderingparams)|Specifica le opzioni per il rendering di testo da applicare a tutti testo e glifo successive operazioni di disegno.|  
|[CRenderTarget::SetTransform](#settransform)|Di overload. Applica la trasformazione specificata per la destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::VerifyResource](#verifyresource)|Verifica la validità dell'oggetto CD2DResource; Crea l'oggetto se non esiste già.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::operator ID2D1RenderTarget *](#operator_id2d1rendertarget_star)|Restituisce l'interfaccia ID2D1RenderTarget|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRenderTarget::m_lstResources](#m_lstresources)|Un elenco di puntatori agli oggetti CD2DResource.|  
|[CRenderTarget::m_pRenderTarget](#m_prendertarget)|Un puntatore a un oggetto ID2D1RenderTarget.|  
|[CRenderTarget::m_pTextFormatDefault](#m_ptextformatdefault)|Un puntatore a oggetto CD2DTextFormat che contiene un formato di testo predefinito.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="a-namedtorcrendertargeta--crendertargetcrendertarget"></a><a name="_dtorcrendertarget"></a>CRenderTarget:: ~ CRenderTarget  
 Distruttore. Chiamato quando viene eliminato un oggetto di destinazione di rendering.  
  
```  
virtual ~CRenderTarget();
```  
  
##  <a name="a-nameattacha--crendertargetattach"></a><a name="attach"></a>CRenderTarget::Attach  
 Consente di collegare esistente eseguire il rendering di interfaccia di destinazione per l'oggetto  
  
```  
void Attach(ID2D1RenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Interfaccia di destinazione di rendering esistente. Non può essere NULL  
  
##  <a name="a-namebegindrawa--crendertargetbegindraw"></a><a name="begindraw"></a>CRenderTarget::BeginDraw  
 Avvia il disegno in questa destinazione di rendering.  
  
```  
void BeginDraw();
```  
  
##  <a name="a-namecleara--crendertargetclear"></a><a name="clear"></a>CRenderTarget::Clear  
 Cancella area di disegno per il colore specificato.  
  
```  
void Clear(D2D1_COLOR_F color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Il colore a cui viene cancellata l'area di disegno.  
  
##  <a name="a-namecolorreftod2dcolora--crendertargetcolorreftod2dcolor"></a><a name="colorref_to_d2dcolor"></a>CRenderTarget::COLORREF_TO_D2DCOLOR  
 Converte l'oggetto D2D1_COLOR_F GDI colore e i valori alfa.  
  
```  
static D2D1_COLOR_F COLORREF_TO_D2DCOLOR(
    COLORREF color,  
    int nAlpha = 255);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Valore RGB.  
  
 `nAlpha`  
  
### <a name="return-value"></a>Valore restituito  
 Valore D2D1_COLOR_F.  
  
##  <a name="a-namecreatecompatiblerendertargeta--crendertargetcreatecompatiblerendertarget"></a><a name="createcompatiblerendertarget"></a>CRenderTarget::CreateCompatibleRenderTarget  
 Crea una nuova destinazione di rendering di bitmap per l'utilizzo durante il disegno fuori schermo intermedio compatibile con la destinazione di rendering corrente.  
  
```  
BOOL CreateCompatibleRenderTarget(
    CBitmapRenderTarget& bitmapTarget,  
    CD2DSizeF sizeDesired = CD2DSizeF(0., 0.), 
    CD2DSizeU sizePixelDesired = CD2DSizeU(0, 0), 
    D2D1_PIXEL_FORMAT* desiredFormat = NULL,  
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS options = D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE);
```  
  
### <a name="parameters"></a>Parametri  
 `bitmapTarget`  
 Quando termina, questo metodo contiene l'indirizzo di un puntatore a una nuova destinazione di rendering di bitmap. Questo parametro viene passato non inizializzato.  
  
 `sizeDesired`  
 Le dimensioni desiderate per la nuova destinazione di rendering in pixel indipendenti dal dispositivo se deve essere diverso dall'originale destinazione di rendering o NULL. Per altre informazioni, vedere la sezione Osservazioni.  
  
 `sizePixelDesired`  
 Le dimensioni desiderate per la nuova destinazione di rendering in pixel se deve essere diverso dall'originale destinazione di rendering o NULL. Per altre informazioni, vedere la sezione Osservazioni.  
  
 `desiredFormat`  
 Il formato di pixel desiderato e la modalità alfa della nuova destinazione di rendering o NULL. Se il formato pixel è impostato su DXGI_FORMAT_UNKNOWN o se questo parametro è null, la nuova destinazione di rendering utilizza lo stesso formato pixel come destinazione di rendering originale. Se la modalità alfa è D2D1_ALPHA_MODE_UNKNOWN o questo parametro è NULL, la modalità alfa della nuova destinazione di rendering predefinito D2D1_ALPHA_MODE_PREMULTIPLIED. Per informazioni sui formati pixel supportati, vedere formati Pixel supportati e modalità alfa.  
  
 `options`  
 Un valore che specifica se la nuova destinazione di rendering deve essere compatibile con GDI.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="a-namecrendertargeta--crendertargetcrendertarget"></a><a name="crendertarget"></a>CRenderTarget::CRenderTarget  
 Costruisce un oggetto CRenderTarget.  
  
```  
CRenderTarget();
```  
  
##  <a name="a-namedestroya--crendertargetdestroy"></a><a name="destroy"></a>CRenderTarget::Destroy  
 Elimina una o più risorse  
  
```  
BOOL Destroy(BOOL bDeleteResources = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bDeleteResources`  
 Se bDeleteResources è TRUE, tutte le risorse disponibili in m_lstResources verranno distrutti automaticamente.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE  
  
##  <a name="a-namedetacha--crendertargetdetach"></a><a name="detach"></a>CRenderTarget::Detach  
 Disconnette l'interfaccia di destinazione di rendering dall'oggetto  
  
```  
ID2D1RenderTarget* Detach ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a scollegato interfaccia destinazione di rendering.  
  
##  <a name="a-namedrawbitmapa--crendertargetdrawbitmap"></a><a name="drawbitmap"></a>CRenderTarget::DrawBitmap  
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
 `pBitmap`  
 Mappa di bit per il rendering.  
  
 `rectDest`  
 Le dimensioni e posizione, espressa in pixel indipendenti dal dispositivo nello spazio delle coordinate della destinazione di rendering, dell'area in cui la bitmap viene tracciata. Se il rettangolo non è ben ordinato, non viene disegnato, ma la destinazione di rendering non entri in uno stato di errore.  
  
 `fOpacity`  
 Un valore compreso tra 0.0 f e 1.0, inclusi, che specifica un valore di opacità da applicare alla bitmap. Questo valore viene moltiplicato per i valori alfa del contenuto della bitmap.  
  
 `interpolationMode`  
 La modalità di interpolazione da utilizzare se la bitmap viene ridimensionata o ruotata dall'operazione di disegno.  
  
 `pRectSrc`  
 Le dimensioni e posizione, espressa in pixel indipendenti dal dispositivo nello spazio delle coordinate della bitmap, dell'area della bitmap da disegnare.  
  
##  <a name="a-namedrawellipsea--crendertargetdrawellipse"></a><a name="drawellipse"></a>CRenderTarget::DrawEllipse  
 Disegna la struttura dell'ellisse specificato utilizzando lo stile del tratto specificato.  
  
```  
void DrawEllipse(
    const CD2DEllipse& ellipse,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `ellipse`  
 La posizione e un raggio dell'ellisse da disegnare, in pixel indipendenti dal dispositivo.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare il contorno dell'ellisse.  
  
 `fStrokeWidth`  
 Lo spessore del tratto dell'ellisse. Il tratto è centrato sulla struttura dell'ellisse.  
  
 `strokeStyle`  
 Stile del tratto da applicare alla struttura dell'ellisse o NULL per disegnare un tratto continuo.  
  
##  <a name="a-namedrawgeometrya--crendertargetdrawgeometry"></a><a name="drawgeometry"></a>CRenderTarget::DrawGeometry  
 Disegna la struttura della geometria specificata utilizzando lo stile del tratto specificato.  
  
```  
void DrawGeometry(
    CD2DGeometry* pGeometry,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pGeometry`  
 La geometria da disegnare.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare il tratto della geometria.  
  
 `fStrokeWidth`  
 Lo spessore del tratto della geometria. Il tratto è centrato sulla struttura della geometria.  
  
 `strokeStyle`  
 Stile del tratto da applicare alla struttura della geometria o NULL per disegnare un tratto continuo.  
  
##  <a name="a-namedrawglyphruna--crendertargetdrawglyphrun"></a><a name="drawglyphrun"></a>CRenderTarget::DrawGlyphRun  
 Consente di disegnare i glifi specificati.  
  
```  
void DrawGlyphRun(
    const CD2DPointF& ptBaseLineOrigin,  
    const DWRITE_GLYPH_RUN& glyphRun,  
    CD2DBrush* pForegroundBrush,  
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```  
  
### <a name="parameters"></a>Parametri  
 `ptBaseLineOrigin`  
 L'origine, in pixel indipendenti dal dispositivo, di base i glifi.  
  
 `glyphRun`  
 Le icone per il rendering.  
  
 `pForegroundBrush`  
 Il pennello utilizzato per disegnare i glifi specificati.  
  
 `measuringMode`  
 Un valore che indica come metrica del glifo viene utilizzata per misurare il testo quando viene formattata. Il valore predefinito è DWRITE_MEASURING_MODE_NATURAL.  
  
##  <a name="a-namedrawlinea--crendertargetdrawline"></a><a name="drawline"></a>CRenderTarget::DrawLine  
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
 `ptFrom`  
 Il punto di inizio della riga, in pixel indipendenti dal dispositivo.  
  
 `ptTo`  
 Il punto finale della linea, in pixel indipendenti dal dispositivo.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare il tratto della linea.  
  
 `fStrokeWidth`  
 Un valore maggiore o uguale a 0,0 f che specifica lo spessore del tratto. Se questo parametro viene omesso, viene impostata automaticamente su 1.0 f. Il tratto è centrato sulla riga.  
  
 `strokeStyle`  
 Lo stile del tratto da dipingere o NULL per disegnare una linea continua.  
  
##  <a name="a-namedrawrectanglea--crendertargetdrawrectangle"></a><a name="drawrectangle"></a>CRenderTarget::DrawRectangle  
 Disegna la struttura di un rettangolo con le dimensioni specificate e stile di traccia.  
  
```  
void DrawRectangle(
    const CD2DRectF& rect,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Le dimensioni del rettangolo da disegnare, in pixel indipendenti dal dispositivo  
  
 `pBrush`  
 Il pennello utilizzato per disegnare il tratto del rettangolo  
  
 `fStrokeWidth`  
 Un valore maggiore o uguale a 0,0 f che specifica lo spessore del tratto del rettangolo. Il tratto è centrato sulla struttura del rettangolo.  
  
 `strokeStyle`  
 Lo stile del tratto da dipingere o NULL per disegnare un tratto continuo.  
  
##  <a name="a-namedrawroundedrectanglea--crendertargetdrawroundedrectangle"></a><a name="drawroundedrectangle"></a>CRenderTarget::DrawRoundedRectangle  
 Disegna la struttura del rettangolo arrotondato specificato utilizzando lo stile del tratto specificato.  
  
```  
void DrawRoundedRectangle(
    const CD2DRoundedRect& rectRounded,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `rectRounded`  
 Le dimensioni del rettangolo arrotondato da disegnare, in pixel indipendenti dal dispositivo.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare il contorno del rettangolo arrotondato.  
  
 `fStrokeWidth`  
 Larghezza del tratto del rettangolo arrotondato. Il tratto è centrato sulla struttura del rettangolo arrotondato. Il valore predefinito è 1.0 f.  
  
 `strokeStyle`  
 Stile del tratto del rettangolo arrotondato o NULL per disegnare un tratto continuo. Il valore predefinito è NULL.  
  
##  <a name="a-namedrawtexta--crendertargetdrawtext"></a><a name="drawtext"></a>CRenderTarget::DrawText  
 Disegna il testo specificato mediante le informazioni di formato fornite da un oggetto IDWriteTextFormat.  
  
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
 `strText`  
 Un puntatore a una matrice di caratteri Unicode da disegnare.  
  
 `rect`  
 Le dimensioni e posizione dell'area in cui viene disegnato il testo.  
  
 `pForegroundBrush`  
 Il pennello utilizzato per disegnare il testo.  
  
 `textFormat`  
 Un oggetto che descrive i dettagli del testo da disegnare, ad esempio il tipo di carattere, dimensione e la direzione di flusso di formattazione.  
  
 `options`  
 Un valore che indica se il testo deve essere bloccato nei limiti dei pixel e se il testo deve essere ritagliato nel rettangolo di layout. Il valore predefinito è D2D1_DRAW_TEXT_OPTIONS_NONE, che indica che il testo deve essere bloccato nei limiti dei pixel e non deve essere ritagliato nel rettangolo di layout.  
  
 `measuringMode`  
 Un valore che indica come metrica del glifo viene utilizzata per misurare il testo quando viene formattata. Il valore predefinito è DWRITE_MEASURING_MODE_NATURAL.  
  
##  <a name="a-namedrawtextlayouta--crendertargetdrawtextlayout"></a><a name="drawtextlayout"></a>CRenderTarget::DrawTextLayout  
 Disegna il testo formattato descritto dall'oggetto IDWriteTextLayout specificato.  
  
```  
void DrawTextLayout(
    const CD2DPointF& ptOrigin,  
    CD2DTextLayout* textLayout,  
    CD2DBrush* pBrushForeground,  
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE);
```  
  
### <a name="parameters"></a>Parametri  
 `ptOrigin`  
 Il punto, descritto in pixel indipendenti dal dispositivo, in cui viene disegnato l'angolo superiore sinistro del testo descritto da textLayout.  
  
 `textLayout`  
 Testo formattato da disegnare. Gli effetti di disegno che non ereditano da ID2D1Resource vengono ignorati. Se vi sono effetti di disegno che ereditano da ID2D1Resource che non sono pennelli, questo metodo ha esito negativo e la destinazione di rendering viene inserita in uno stato di errore.  
  
 `pBrushForeground`  
 Il pennello utilizzato per disegnare il testo in textLayout che non dispone già di un pennello associato come un effetto di disegno (specificato dal metodo IDWriteTextLayout:: SetDrawingEffect).  
  
 `options`  
 Un valore che indica se il testo deve essere bloccato nei limiti dei pixel e se il testo deve essere ritagliato nel rettangolo di layout. Il valore predefinito è D2D1_DRAW_TEXT_OPTIONS_NONE, che indica che il testo deve essere bloccato nei limiti dei pixel e non deve essere ritagliato nel rettangolo di layout.  
  
##  <a name="a-nameenddrawa--crendertargetenddraw"></a><a name="enddraw"></a>CRenderTarget::EndDraw  
 Termina le operazioni di disegno sulla destinazione di rendering e indica lo stato di errore corrente e i tag associati.  
  
```  
HRESULT EndDraw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="a-namefillellipsea--crendertargetfillellipse"></a><a name="fillellipse"></a>CRenderTarget::FillEllipse  
 Disegna la parte interna dell'ellisse specificata.  
  
```  
void FillEllipse(
    const CD2DEllipse& ellipse,  
    CD2DBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `ellipse`  
 La posizione e radius, in pixel indipendenti dal dispositivo, dell'ellisse da disegnare.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare la parte interna dell'ellisse.  
  
##  <a name="a-namefillgeometrya--crendertargetfillgeometry"></a><a name="fillgeometry"></a>CRenderTarget::FillGeometry  
 Disegna l'interno della geometria specificata.  
  
```  
void FillGeometry(
    CD2DGeometry* pGeometry,  
    CD2DBrush* pBrush,  
    CD2DBrush* pOpacityBrush = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pGeometry`  
 La geometria da disegnare.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare la geometria della parte interno.  
  
 `pOpacityBrush`  
 Maschera di opacità da applicare alla geometria; NULL per non maschera di opacità. Se si specifica una maschera di opacità (il parametro opacityBrush), pennello deve essere un ID2D1BitmapBrush con la modalità x e y estendere impostata su D2D1_EXTEND_MODE_CLAMP. Per altre informazioni, vedere la sezione Osservazioni.  
  
##  <a name="a-namefillmesha--crendertargetfillmesh"></a><a name="fillmesh"></a>CRenderTarget::FillMesh  
 Disegna la parte interna della rete specificata.  
  
```  
void FillMesh(
    CD2DMesh* pMesh,  
    CD2DBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `pMesh`  
 La mesh da colorare.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare la mesh.  
  
##  <a name="a-namefillopacitymaska--crendertargetfillopacitymask"></a><a name="fillopacitymask"></a>CRenderTarget::FillOpacityMask  
 Applica la maschera di opacità descritta da nella bitmap specificata in un pennello che, utilizzato per disegnare un'area della destinazione di rendering.  
  
```  
void FillOpacityMask(
    CD2DBitmap* pOpacityMask,  
    CD2DBrush* pBrush,  
    D2D1_OPACITY_MASK_CONTENT content,  
    const CD2DRectF& rectDest,  
    const CD2DRectF& rectSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `pOpacityMask`  
 La posizione e radius, in pixel indipendenti dal dispositivo, dell'ellisse da disegnare.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare l'area di destinazione di rendering specificata da destinationRectangle.  
  
 `content`  
 Il tipo di contenuto che contiene la maschera di opacità. Il valore viene utilizzato per determinare lo spazio colore in cui la maschera di opacità viene sfumata.  
  
 `rectDest`  
 L'area della destinazione di rendering da disegnare, in pixel indipendenti dal dispositivo.  
  
 `rectSrc`  
 L'area della bitmap da utilizzare come maschera di opacità, in pixel indipendenti dal dispositivo.  
  
##  <a name="a-namefillrectanglea--crendertargetfillrectangle"></a><a name="fillrectangle"></a>CRenderTarget::FillRectangle  
 Disegna l'interno del rettangolo specificato.  
  
```  
void FillRectangle(
    const CD2DRectF& rect,  
    CD2DBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 La dimensione del rettangolo da disegnare, in pixel indipendenti dal dispositivo.  
  
 `pBrush`  
 Il pennello utilizzato per disegnare il rettangolo della parte interno.  
  
##  <a name="a-namefillroundedrectanglea--crendertargetfillroundedrectangle"></a><a name="fillroundedrectangle"></a>CRenderTarget::FillRoundedRectangle  
 Disegna l'interno del rettangolo arrotondato specificato.  
  
```  
void FillRoundedRectangle(
    const CD2DRoundedRect& rectRounded,  
    CD2DBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `rectRounded`  
 Le dimensioni del rettangolo arrotondato da disegnare, in pixel indipendenti dal dispositivo.  
  
 `pBrush`  
 Pennello utilizzato per disegnare l'interno del rettangolo arrotondato.  
  
##  <a name="a-nameflusha--crendertargetflush"></a><a name="flush"></a>CRenderTarget::Flush  
 Esegue tutti i comandi di disegno in sospeso.  
  
```  
void Flush(
    D2D1_TAG* tag1 = NULL,  
    D2D1_TAG* tag2 = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `tag1`  
 Contiene il tag per le operazioni che hanno generato errori o 0 se si sono verificati errori. Questo parametro viene passato non inizializzato.  
  
 `tag2`  
 Contiene il tag per le operazioni che hanno generato errori o 0 se si sono verificati errori. Questo parametro viene passato non inizializzato.  
  
##  <a name="a-namegetantialiasmodea--crendertargetgetantialiasmode"></a><a name="getantialiasmode"></a>CRenderTarget::GetAntialiasMode  
 Recupera la modalità di anti-aliasing corrente per le operazioni di disegno non di testo.  
  
```  
D2D1_ANTIALIAS_MODE GetAntialiasMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Modalità di anti-aliasing corrente per le operazioni di disegno non di testo.  
  
##  <a name="a-namegetdpia--crendertargetgetdpi"></a><a name="getdpi"></a>CRenderTarget::GetDpi  
 Restituisce il rendering punti per pollice (DPI) della destinazione  
  
```  
CD2DSizeF GetDpi() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Punti per pollice (DPI) della destinazione di rendering.  
  
##  <a name="a-namegetmaximumbitmapsizea--crendertargetgetmaximumbitmapsize"></a><a name="getmaximumbitmapsize"></a>CRenderTarget::GetMaximumBitmapSize  
 Ottiene la dimensione massima, in unità dipendenti dalla periferica (pixel), di qualsiasi dimensione di una bitmap supportato dalla destinazione di rendering  
  
```  
UINT32 GetMaximumBitmapSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione massima, in pixel, di qualsiasi dimensione di una bitmap supportato dalla destinazione di rendering  
  
##  <a name="a-namegetpixelformata--crendertargetgetpixelformat"></a><a name="getpixelformat"></a>CRenderTarget::GetPixelFormat  
 Recupera il formato pixel e alpha modalità della destinazione di rendering  
  
```  
D2D1_PIXEL_FORMAT GetPixelFormat() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il formato pixel e alpha modalità della destinazione di rendering  
  
##  <a name="a-namegetpixelsizea--crendertargetgetpixelsize"></a><a name="getpixelsize"></a>CRenderTarget::GetPixelSize  
 Restituisce la dimensione della destinazione di rendering in pixel del dispositivo  
  
```  
CD2DSizeU GetPixelSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della destinazione di rendering in pixel del dispositivo  
  
##  <a name="a-namegetrendertargeta--crendertargetgetrendertarget"></a><a name="getrendertarget"></a>CRenderTarget::GetRenderTarget  
 Restituisce l'interfaccia ID2D1RenderTarget  
  
```  
ID2D1RenderTarget* GetRenderTarget();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1RenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="a-namegetsizea--crendertargetgetsize"></a><a name="getsize"></a>CRenderTarget::GetSize  
 Restituisce la dimensione della destinazione di rendering in pixel indipendenti dal dispositivo  
  
```  
CD2DSizeF GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione corrente della destinazione di rendering in pixel indipendenti dal dispositivo  
  
##  <a name="a-namegettagsa--crendertargetgettags"></a><a name="gettags"></a>CRenderTarget::GetTags  
 Ottiene l'etichetta per le successive operazioni di disegno.  
  
```  
void GetTags(
    D2D1_TAG* tag1 = NULL,  
    D2D1_TAG* tag2 = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `tag1`  
 Contiene la prima etichetta per le successive operazioni di disegno. Questo parametro viene passato non inizializzato. Se si specifica NULL, viene recuperato alcun valore per questo parametro.  
  
 `tag2`  
 Contiene la seconda etichetta per le successive operazioni di disegno. Questo parametro viene passato non inizializzato. Se si specifica NULL, viene recuperato alcun valore per questo parametro.  
  
##  <a name="a-namegettextantialiasmodea--crendertargetgettextantialiasmode"></a><a name="gettextantialiasmode"></a>CRenderTarget::GetTextAntialiasMode  
 Ottiene la modalità di anti-aliasing per testo e le operazioni di disegno del glifo.  
  
```  
D2D1_TEXT_ANTIALIAS_MODE GetTextAntialiasMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Modalità di anti-aliasing corrente per il testo e icona le operazioni di disegno.  
  
##  <a name="a-namegettextrenderingparamsa--crendertargetgettextrenderingparams"></a><a name="gettextrenderingparams"></a>CRenderTarget::GetTextRenderingParams  
 Recupera opzioni per il rendering di testo corrente della destinazione di rendering.  
  
```  
void GetTextRenderingParams(IDWriteRenderingParams** textRenderingParams);
```  
  
### <a name="parameters"></a>Parametri  
 `textRenderingParams`  
 Quando termina, questo metodo corrente textRenderingParams contiene l'indirizzo di un puntatore alla destinazione di rendering della opzioni di rendering del testo.  
  
##  <a name="a-namegettransforma--crendertargetgettransform"></a><a name="gettransform"></a>CRenderTarget::GetTransform  
 Applica la trasformazione specificata per la destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato.  
  
```  
void GetTransform(D2D1_MATRIX_3X2_F* transform);
```  
  
### <a name="parameters"></a>Parametri  
 `transform`  
 La trasformazione da applicare alla destinazione di rendering.  
  
##  <a name="a-nameissupporteda--crendertargetissupported"></a><a name="issupported"></a>CRenderTarget::IsSupported  
 Indica se la destinazione di rendering supporta le proprietà specificate  
  
```  
BOOL IsSupported(const D2D1_RENDER_TARGET_PROPERTIES& renderTargetProperties) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `renderTargetProperties`  
 Le proprietà di destinazione di rendering per eseguire il test  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le proprietà di destinazione di rendering specificate sono supportate da questa destinazione di rendering; in caso contrario, FALSE  
  
##  <a name="a-nameisvalida--crendertargetisvalid"></a><a name="isvalid"></a>CRenderTarget::IsValid  
 Verifica la validità della risorsa  
  
```  
BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="a-namemlstresourcesa--crendertargetmlstresources"></a><a name="m_lstresources"></a>CRenderTarget::m_lstResources  
 Un elenco di puntatori agli oggetti CD2DResource.  
  
```  
CObList m_lstResources;  
```  
  
##  <a name="a-namemprendertargeta--crendertargetmprendertarget"></a><a name="m_prendertarget"></a>CRenderTarget::m_pRenderTarget  
 Un puntatore a un oggetto ID2D1RenderTarget.  
  
```  
ID2D1RenderTarget* m_pRenderTarget;  
```  
  
##  <a name="a-namemptextformatdefaulta--crendertargetmptextformatdefault"></a><a name="m_ptextformatdefault"></a>CRenderTarget::m_pTextFormatDefault  
 Un puntatore a oggetto CD2DTextFormat che contiene un formato di testo predefinito.  
  
```  
CD2DTextFormat* m_pTextFormatDefault;  
```  
  
##  <a name="a-nameoperatorid2d1rendertargetstara--crendertargetoperator-id2d1rendertarget"></a><a name="operator_id2d1rendertarget_star"></a>CRenderTarget::operator ID2D1RenderTarget *  
 Restituisce l'interfaccia ID2D1RenderTarget  
  
```  
operator ID2D1RenderTarget*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1RenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="a-namepopaxisalignedclipa--crendertargetpopaxisalignedclip"></a><a name="popaxisalignedclip"></a>CRenderTarget::PopAxisAlignedClip  
 Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il clip non è più applicato alle successive operazioni di disegno.  
  
```  
void PopAxisAlignedClip();
```  
  
##  <a name="a-namepoplayera--crendertargetpoplayer"></a><a name="poplayer"></a>CRenderTarget::PopLayer  
 Interrompe il reindirizzamento delle operazioni di disegno al livello specificato da PushLayer ultima chiamata.  
  
```  
void PopLayer();
```  
  
##  <a name="a-namepushaxisalignedclipa--crendertargetpushaxisalignedclip"></a><a name="pushaxisalignedclip"></a>CRenderTarget::PushAxisAlignedClip  
 Rimuove l'ultimo clip allineato all'asse dalla destinazione di rendering. Dopo che questo metodo viene chiamato, il clip non è più applicato alle successive operazioni di disegno.  
  
```  
void PushAxisAlignedClip(
    const CD2DRectF& rectClip,  
    D2D1_ANTIALIAS_MODE mode = D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
```  
  
### <a name="parameters"></a>Parametri  
 `rectClip`  
 Le dimensioni e posizione dell'area di visualizzazione, in pixel indipendenti dal dispositivo.  
  
 `mode`  
 La modalità di anti-aliasing utilizzata per disegnare i bordi dei rettangoli clip che hanno limiti dei subpixel, nonché di blend clip con il contenuto della scena. La combinazione viene eseguita una volta quando viene chiamato il metodo PopAxisAlignedClip e non si applica a ogni primitiva all'interno del livello.  
  
##  <a name="a-namepushlayera--crendertargetpushlayer"></a><a name="pushlayer"></a>CRenderTarget::PushLayer  
 Aggiunge il livello specificato per la destinazione di rendering in modo che riceva tutte le operazioni di disegno successive fino a quando non viene chiamato PopLayer.  
  
```  
void PushLayer(
    const D2D1_LAYER_PARAMETERS& layerParameters,  
    CD2DLayer& layer);
```  
  
### <a name="parameters"></a>Parametri  
 `layerParameters`  
 I limiti del contenuto, maschera geometrica, opacità, maschera di opacità e opzioni di anti-aliasing per il livello.  
  
 `layer`  
 Il livello che riceve le successive operazioni di disegno.  
  
##  <a name="a-namerestoredrawingstatea--crendertargetrestoredrawingstate"></a><a name="restoredrawingstate"></a>CRenderTarget::RestoreDrawingState  
 Imposta lo stato di disegno della destinazione di rendering di ID2D1DrawingStateBlock specificato.  
  
```  
void RestoreDrawingState(ID2D1DrawingStateBlock& drawingStateBlock);
```  
  
### <a name="parameters"></a>Parametri  
 `drawingStateBlock`  
 Il nuovo stato di disegno della destinazione di rendering.  
  
##  <a name="a-namesavedrawingstatea--crendertargetsavedrawingstate"></a><a name="savedrawingstate"></a>CRenderTarget::SaveDrawingState  
 Salva lo stato corrente di disegno ID2D1DrawingStateBlock specificato.  
  
```  
void SaveDrawingState(ID2D1DrawingStateBlock& drawingStateBlock) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `drawingStateBlock`  
 Quando termina, questo metodo contiene lo stato corrente di disegno della destinazione di rendering. Questo parametro deve essere inizializzato prima di passarlo al metodo.  
  
##  <a name="a-namesetantialiasmodea--crendertargetsetantialiasmode"></a><a name="setantialiasmode"></a>CRenderTarget::SetAntialiasMode  
 Imposta la modalità di anti-aliasing della destinazione di rendering. La modalità di anti-aliasing si applica a tutte le operazioni di disegno successivi, ad eccezione di testo e icona le operazioni di disegno.  
  
```  
void SetAntialiasMode(D2D1_ANTIALIAS_MODE antialiasMode);
```  
  
### <a name="parameters"></a>Parametri  
 `antialiasMode`  
 La modalità di anti-aliasing per future operazioni di disegno.  
  
##  <a name="a-namesetdpia--crendertargetsetdpi"></a><a name="setdpi"></a>CRenderTarget::SetDpi  
 Imposta i punti per pollice (DPI) della destinazione di rendering.  
  
```  
void SetDpi(const CD2DSizeF& sizeDPI);
```  
  
### <a name="parameters"></a>Parametri  
 `sizeDPI`  
 Un valore maggiore o uguale a zero che specifica il DPI orizzontale/verticale della destinazione di rendering.  
  
##  <a name="a-namesettagsa--crendertargetsettags"></a><a name="settags"></a>CRenderTarget::SetTags  
 Specifica un'etichetta per le successive operazioni di disegno.  
  
```  
void SetTags(
    D2D1_TAG tag1,  
    D2D1_TAG tag2);
```  
  
### <a name="parameters"></a>Parametri  
 `tag1`  
 Etichetta da applicare alle successive operazioni di disegno.  
  
 `tag2`  
 Etichetta da applicare alle successive operazioni di disegno.  
  
##  <a name="a-namesettextantialiasmodea--crendertargetsettextantialiasmode"></a><a name="settextantialiasmode"></a>CRenderTarget::SetTextAntialiasMode  
 Specifica la modalità di anti-aliasing da utilizzare per il testo e le operazioni di disegno del glifo.  
  
```  
void SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode);
```  
  
### <a name="parameters"></a>Parametri  
 `textAntialiasMode`  
 La modalità di anti-aliasing da utilizzare per il testo e glifo.  
  
##  <a name="a-namesettextrenderingparamsa--crendertargetsettextrenderingparams"></a><a name="settextrenderingparams"></a>CRenderTarget::SetTextRenderingParams  
 Specifica le opzioni per il rendering di testo da applicare a tutti testo e glifo successive operazioni di disegno.  
  
```  
void SetTextRenderingParams(IDWriteRenderingParams* textRenderingParams = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `textRenderingParams`  
 Le opzioni per il rendering di testo da applicare a tutto il testo e glifo; NULL per cancellare le opzioni di rendering di testo corrente.  
  
##  <a name="a-namesettransforma--crendertargetsettransform"></a><a name="settransform"></a>CRenderTarget::SetTransform  
 Applica la trasformazione specificata per la destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegno successive si verificano nello spazio trasformato.  
  
```  
void SetTransform(const D2D1_MATRIX_3X2_F* transform);  
void SetTransform(const D2D1_MATRIX_3X2_F& transform);
```  
  
### <a name="parameters"></a>Parametri  
 `transform`  
 La trasformazione da applicare alla destinazione di rendering.  
  
##  <a name="a-nameverifyresourcea--crendertargetverifyresource"></a><a name="verifyresource"></a>CRenderTarget::VerifyResource  
 Verifica la validità dell'oggetto CD2DResource; Crea l'oggetto se non esiste già.  
  
```  
BOOL VerifyResource(CD2DResource* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Puntatore all'oggetto CD2DResource.  
  
### <a name="return-value"></a>Valore restituito  
 È TRUE se valido. in caso contrario FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

