---
title: Classe CStockPropImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CStockPropImpl
- ATLCTL/ATL::CStockPropImpl
- ATLCTL/ATL::get_Appearance
- ATLCTL/ATL::get_AutoSize
- ATLCTL/ATL::get_BackColor
- ATLCTL/ATL::get_BackStyle
- ATLCTL/ATL::get_BorderColor
- ATLCTL/ATL::get_BorderStyle
- ATLCTL/ATL::get_BorderVisible
- ATLCTL/ATL::get_BorderWidth
- ATLCTL/ATL::get_Caption
- ATLCTL/ATL::get_DrawMode
- ATLCTL/ATL::get_DrawStyle
- ATLCTL/ATL::get_DrawWidth
- ATLCTL/ATL::get_Enabled
- ATLCTL/ATL::get_FillColor
- ATLCTL/ATL::get_FillStyle
- ATLCTL/ATL::get_Font
- ATLCTL/ATL::get_ForeColor
- ATLCTL/ATL::get_HWND
- ATLCTL/ATL::get_MouseIcon
- ATLCTL/ATL::get_MousePointer
- ATLCTL/ATL::get_Picture
- ATLCTL/ATL::get_ReadyState
- ATLCTL/ATL::get_TabStop
- ATLCTL/ATL::get_Text
- ATLCTL/ATL::getvalid
- ATLCTL/ATL::get_Window
- ATLCTL/ATL::put_Appearance
- ATLCTL/ATL::put_AutoSize
- ATLCTL/ATL::put_BackColor
- ATLCTL/ATL::put_BackStyle
- ATLCTL/ATL::put_BorderColor
- ATLCTL/ATL::put_BorderStyle
- ATLCTL/ATL::put_BorderVisible
- ATLCTL/ATL::put_BorderWidth
- ATLCTL/ATL::put_Caption
- ATLCTL/ATL::put_DrawMode
- ATLCTL/ATL::put_DrawStyle
- ATLCTL/ATL::put_DrawWidth
- ATLCTL/ATL::put_Enabled
- ATLCTL/ATL::put_FillColor
- ATLCTL/ATL::put_FillStyle
- ATLCTL/ATL::put_Font
- ATLCTL/ATL::put_ForeColor
- ATLCTL/ATL::put_HWND
- ATLCTL/ATL::put_MouseIcon
- ATLCTL/ATL::put_MousePointer
- ATLCTL/ATL::put_Picture
- ATLCTL/ATL::put_ReadyState
- ATLCTL/ATL::put_TabStop
- ATLCTL/ATL::put_Text
- ATLCTL/ATL::putvalid
- ATLCTL/ATL::put_Window
- ATLCTL/ATL::putref_Font
- ATLCTL/ATL::putref_MouseIcon
- ATLCTL/ATL::putref_Picture
dev_langs:
- C++
helpviewer_keywords:
- CStockPropImpl class
- controls [ATL], stock properties
- stock properties, ATL controls
ms.assetid: 45f11d7d-6580-4a0e-872d-3bc8b836cfda
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3625667ccdbff85291d82ea519815bfc30c600f
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43219810"
---
# <a name="cstockpropimpl-class"></a>Classe CStockPropImpl
Questa classe fornisce metodi per il supporto di valori di proprietà predefinite.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class InterfaceName,
    const IID* piid = &_ATL_IIDOF(InterfaceName),
    const GUID* plibid = &CComModule::m_libid,
    WORD wMajor = 1,
    WORD wMinor = 0, class tihclass = CcomTypeInfoHolder>  
class ATL_NO_VTABLE CStockPropImpl : public IDispatchImpl<InterfaceName, piid,
 plibid,
    wMajor,
 wMinor,
    tihclass>
```   
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe che implementa il controllo e la derivazione da `CStockPropImpl`.  
  
 *InterfaceName*  
 Un'interfaccia duale espone le proprietà predefinite.  
  
 *piid*  
 Un puntatore all'IID di `InterfaceName`.  
  
 *plibid*  
 Un puntatore a LIBID della libreria dei tipi contenente la definizione di `InterfaceName`.  
  
 *wMajor*  
 Versione principale della libreria dei tipi. Il valore predefinito è 1.  
  
 *wMinor*  
 Versione secondaria della libreria dei tipi. Il valore predefinito è 0.  
  
 *tihclass*  
 La classe usata per gestire le informazioni sul tipo per *T*. Il valore predefinito è `CComTypeInfoHolder`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|[get_Appearance](#get_appearance)|Chiamare questo metodo per ottenere lo stile di disegno utilizzata dal controllo, ad esempio, flat o 3D.|  
|[get_AutoSize](#get_autosize)|Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo non può essere qualsiasi altra dimensione.|  
|[get_BackColor](#get_backcolor)|Chiamare questo metodo per ottenere il colore di sfondo del controllo.|  
|[get_BackStyle](#get_backstyle)|Chiamare questo metodo per ottenere lo stile del controllo in background, trasparente o opaco.|  
|[get_BorderColor](#get_bordercolor)|Chiamare questo metodo per ottenere colore del bordo del controllo.|  
|[get_BorderStyle](#get_borderstyle)|Chiamare questo metodo per ottenere lo stile del bordo del controllo.|  
|[get_BorderVisible](#get_bordervisible)|Chiamare questo metodo per ottenere lo stato del flag che indica se il bordo del controllo è visibile o meno.|  
|[get_BorderWidth](#get_borderwidth)|Chiamare questo metodo per ottenere lo spessore, in pixel, del bordo del controllo.|  
|[get_Caption](#get_caption)|Chiamare questo metodo per ottenere il testo specificato nella didascalia di un oggetto.|  
|[get_DrawMode](#get_drawmode)|Chiamare questo metodo per ottenere la modalità del controllo disegno, ad esempio, XOR penna o Inverti colori.|  
|[get_DrawStyle](#get_drawstyle)|Chiamare questo metodo per ottenere lo stile di disegno del controllo, ad esempio, a tinta unita, tratteggiato o punteggiato.|  
|[get_DrawWidth](#get_drawwidth)|Chiamare questo metodo per ottenere la larghezza di disegno, in pixel, utilizzata dai metodi di disegno del controllo.|  
|[get_Enabled](#get_enabled)|Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo è abilitato.|  
|[get_FillColor](#get_fillcolor)|Chiamare questo metodo per ottenere il colore di riempimento del controllo.|  
|[get_FillStyle](#get_fillstyle)|Chiamare questo metodo per ottenere lo stile di riempimento del controllo, ad esempio, a tinta unita, transparent o tratteggiato.|  
|[get_Font](#get_font)|Chiamare questo metodo per ottenere un puntatore alla proprietà del tipo di carattere del controllo.|  
|[get_ForeColor](#get_forecolor)|Chiamare questo metodo per ottenere il colore di primo piano del controllo.|  
|[get_HWND](#get_hwnd)|Chiamare questo metodo per ottenere l'handle della finestra associato al controllo.|  
|[get_MouseIcon](#get_mouseicon)|Chiamare questo metodo per ottenere le proprietà di immagine dell'elemento grafico (icone, bitmap o metafile) da visualizzare quando il mouse è posizionato sul controllo.|  
|[get_MousePointer](#get_mousepointer)|Chiamare questo metodo per ottenere il tipo di puntatore visualizzato al passaggio del mouse sul controllo, ad esempio, sulla freccia, cross o clessidra.|  
|[get_Picture](#get_picture)|Chiamare questo metodo per ottenere un puntatore per la proprietà immagine di un'immagine (icone, bitmap o metafile) da visualizzare.|  
|[get_ReadyState](#get_readystate)|Chiamare questo metodo per ottenere lo stato del controllo pronto, ad esempio, il caricamento o caricamento.|  
|[get_TabStop](#get_tabstop)|Chiamare questo metodo per ottenere il flag che indica se il controllo è un punto di tabulazione o meno.|  
|[get_Text](#get_text)|Chiamare questo metodo per ottenere il testo visualizzato con il controllo.|  
|[getvalid](#get_valid)|Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo è valido o meno.|  
|[get_Window](#get_window)|Chiamare questo metodo per ottenere l'handle della finestra associato al controllo. Identico al [CStockPropImpl::get_HWND](#get_hwnd).|  
|[put_Appearance](#put_appearance)|Chiamare questo metodo per impostare lo stile di disegno utilizzata dal controllo, ad esempio, flat o 3D.|  
|[put_AutoSize](#put_autosize)|Chiamare questo metodo per impostare il valore del flag che indica se il controllo non può essere qualsiasi altra dimensione.|  
|[put_BackColor](#put_backcolor)|Chiamare questo metodo per impostare il colore di sfondo del controllo.|  
|[put_BackStyle](#put_backstyle)|Chiamare questo metodo per impostare lo stile dello sfondo del controllo.|  
|[put_BorderColor](#put_bordercolor)|Chiamare questo metodo per impostare colore del bordo del controllo.|  
|[put_BorderStyle](#put_borderstyle)|Chiamare questo metodo per impostare lo stile del bordo del controllo.|  
|[put_BorderVisible](#put_bordervisible)|Chiamare questo metodo per impostare il valore del flag che indica se il bordo del controllo è visibile o meno.|  
|[put_BorderWidth](#put_borderwidth)|Chiamare questo metodo per impostare lo spessore del bordo del controllo.|  
|[PUT Caption](#put_caption)|Chiamare questo metodo per impostare il testo da visualizzare con il controllo.|  
|[put_DrawMode](#put_drawmode)|Chiamare questo metodo per impostare la modalità del controllo disegno, ad esempio, XOR penna o Inverti colori.|  
|[put_DrawStyle](#put_drawstyle)|Chiamare questo metodo per impostare lo stile di disegno del controllo, ad esempio, a tinta unita, tratteggiato o punteggiato.|  
|[put_DrawWidth](#put_drawwidth)|Chiamare questo metodo per impostare la larghezza (espressa in pixel) utilizzata dai metodi di disegno del controllo.|  
|[put_Enabled](#put_enabled)|Chiamare questo metodo per impostare il flag che indica se il controllo è abilitato.|  
|[put_FillColor](#put_fillcolor)|Chiamare questo metodo per impostare il colore di riempimento del controllo.|  
|[put_FillStyle](#put_fillstyle)|Chiamare questo metodo per impostare lo stile di riempimento del controllo, ad esempio, a tinta unita, transparent o tratteggiato.|  
|[put_Font](#put_font)|Chiamare questo metodo per impostare le proprietà del controllo del tipo di carattere.|  
|[put_ForeColor](#put_forecolor)|Chiamare questo metodo per impostare il colore di primo piano del controllo.|  
|[put_HWND](#put_hwnd)|Questo metodo restituisce E_FAIL.|  
|[put_MouseIcon](#put_mouseicon)|Chiamare questo metodo per impostare le proprietà di immagine dell'elemento grafico (icone, bitmap o metafile) da visualizzare quando il mouse è posizionato sul controllo.|  
|[put_MousePointer](#put_mousepointer)|Chiamare questo metodo per impostare il tipo di puntatore visualizzato al passaggio del mouse sul controllo, ad esempio, sulla freccia, cross o clessidra.|  
|[put_Picture](#put_picture)|Chiamare questo metodo per impostare le proprietà di immagine di un grafico (icone, bitmap o metafile) da visualizzare.|  
|[put_ReadyState](#put_readystate)|Chiamare questo metodo per impostare lo stato del controllo pronto, ad esempio, il caricamento o caricamento.|  
|[put_TabStop](#put_tabstop)|Chiamare questo metodo per impostare il valore del flag che indica se il controllo è un punto di tabulazione o meno.|  
|[put_Text](#put_text)|Chiamare questo metodo per impostare il testo visualizzato con il controllo.|  
|[putvalid](#put_valid)|Chiamare questo metodo per impostare il flag che indica se il controllo è valido o meno.|  
|[put_Window](#put_window)|Questo metodo chiama [CStockPropImpl::put_HWND](#put_hwnd), che restituisce E_FAIL.|  
|[putref_Font](#putref_font)|Chiamare questo metodo per impostare le proprietà del controllo del tipo di carattere, con un conteggio dei riferimenti.|  
|[putref_MouseIcon](#putref_mouseicon)|Chiamare questo metodo per impostare le proprietà di immagine dell'elemento grafico (icone, bitmap o metafile) da visualizzare quando il mouse è posizionato sul controllo, con un conteggio dei riferimenti.|  
|[putref_Picture](#putref_picture)|Chiamare questo metodo per impostare le proprietà di immagine di un grafico (icona, bitmap o metafile), verrà visualizzata con un conteggio dei riferimenti.|  
  
## <a name="remarks"></a>Note  
 `CStockPropImpl` fornisce **inserito** e **ottenere** metodi per ogni proprietà predefinite. Questi metodi forniscono il codice necessario per impostare o ottenere il membro dei dati associato a ogni proprietà e per inviare una notifica e la sincronizzazione con il contenitore quando viene modificata una proprietà.  
  
 Visual C++ fornisce il supporto per le proprietà predefinite tramite le procedure guidate. Per altre informazioni sull'aggiunta di proprietà predefinite per un controllo, vedere la [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md).  
  
 Per motivi di compatibilità `CStockPropImpl` espone inoltre `get_Window` e `put_Window` metodi che è sufficiente chiamare `get_HWND` e `put_HWND`, rispettivamente. L'implementazione predefinita di `put_HWND` restituisce E_FAIL poiché HWND deve essere una proprietà di sola lettura.  
  
 Le proprietà seguenti avranno anche un **putref** implementazione:  
  
-   Tipo di carattere  
  
-   MouseIcon  
  
-   Foto  
  
 Le stesse tre proprietà predefinite richiedono il membro dati corrispondente di tipo `CComPtr` o il conteggio di un'altra classe che fornisce riferimenti all'interfaccia corretta tramite l'operatore di assegnazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `T`  
  
 [IDispatchImpl](../../atl/reference/idispatchimpl-class.md)  
  
 `CStockPropImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="get_appearance"></a>  CStockPropImpl::get_Appearance  
 Chiamare questo metodo per ottenere lo stile di disegno utilizzata dal controllo, ad esempio, flat o 3D.  
  
```
HRESULT STDMETHODCALLTYPE get_Appearance(SHORT pnAppearance);
```  
  
### <a name="parameters"></a>Parametri  
 *pnAppearance*  
 Variabile che riceve lo stile di disegno del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_autosize"></a>  CStockPropImpl::get_AutoSize  
 Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo non può essere qualsiasi altra dimensione.  
  
```
HRESULT STDMETHODCALLTYPE get_Autosize(VARIANT_BOOL* pbAutoSize);
```  
  
### <a name="parameters"></a>Parametri  
 *pbAutoSize*  
 Variabile che riceve lo stato del flag. TRUE indica che il controllo non può essere qualsiasi altra dimensione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_backcolor"></a>  CStockPropImpl::get_BackColor  
 Chiamare questo metodo per ottenere il colore di sfondo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_BackColor(OLE_COLOR* pclrBackColor);
```  
  
### <a name="parameters"></a>Parametri  
 *pclrBackColor*  
 Variabile che riceve il colore di sfondo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_backstyle"></a>  CStockPropImpl::get_BackStyle  
 Chiamare questo metodo per ottenere lo stile del controllo in background, trasparente o opaco.  
  
```
HRESULT STDMETHODCALLTYPE get_BackStyle(LONG* pnBackStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *pnBackStyle*  
 Variabile che riceve lo stile dello sfondo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_bordercolor"></a>  CStockPropImpl::get_BorderColor  
 Chiamare questo metodo per ottenere colore del bordo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderColor(OLE_COLOR* pclrBorderColor);
```  
  
### <a name="parameters"></a>Parametri  
 *pclrBorderColor*  
 Variabile che riceve colore del bordo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_borderstyle"></a>  CStockPropImpl::get_BorderStyle  
 Chiamare questo metodo per ottenere lo stile del bordo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderStyle(LONG* pnBorderStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *pnBorderStyle*  
 Variabile che riceve lo stile del bordo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_bordervisible"></a>  CStockPropImpl::get_BorderVisible  
 Chiamare questo metodo per ottenere lo stato del flag che indica se il bordo del controllo è visibile o meno.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderVisible(VARIANT_BOOL* pbBorderVisible);
```  
  
### <a name="parameters"></a>Parametri  
 *pbBorderVisible*  
 Variabile che riceve lo stato del flag. TRUE indica che il bordo del controllo è visibile.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_borderwidth"></a>  CStockPropImpl::get_BorderWidth  
 Chiamare questo metodo per ottenere lo spessore del bordo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderWidth(LONG* pnBorderWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *pnBorderWidth*  
 Variabile che riceve la larghezza del bordo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_caption"></a>  CStockPropImpl::get_Caption  
 Chiamare questo metodo per ottenere il testo specificato nella didascalia di un oggetto.  
  
```
HRESULT STDMETHODCALLTYPE get_Caption(BSTR* pbstrCaption);
```  
  
### <a name="parameters"></a>Parametri  
 *pbstrCaption*  
 Il testo da visualizzare con il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_drawmode"></a>  CStockPropImpl::get_DrawMode  
 Chiamare questo metodo per ottenere la modalità del controllo disegno, ad esempio, XOR penna o Inverti colori.  
  
```
HRESULT STDMETHODCALLTYPE get_DrawMode(LONG* pnDrawMode);
```  
  
### <a name="parameters"></a>Parametri  
 *pnDrawMode*  
 Variabile che riceve le modalità di disegno del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_drawstyle"></a>  CStockPropImpl::get_DrawStyle  
 Chiamare questo metodo per ottenere lo stile di disegno del controllo, ad esempio, a tinta unita, tratteggiato o punteggiato.  
  
```
HRESULT STDMETHODCALLTYPE get_DrawStyle(LONG* pnDrawStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *pnDrawStyle*  
 Variabile che riceve lo stile di disegno del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_drawwidth"></a>  CStockPropImpl::get_DrawWidth  
 Chiamare questo metodo per ottenere la larghezza di disegno, in pixel, utilizzata dai metodi di disegno del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_DrawWidth(LONG* pnDrawWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *pnDrawWidth*  
 Variabile che riceve il valore del controllo larghezza, in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_enabled"></a>  CStockPropImpl::get_Enabled  
 Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo è abilitato.  
  
```
HRESULT STDMETHODCALLTYPE get_Enabled(VARIANT_BOOL* pbEnabled);
```  
  
### <a name="parameters"></a>Parametri  
 *pbEnabled*  
 Variabile che riceve lo stato del flag. TRUE indica che il controllo è abilitato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_fillcolor"></a>  CStockPropImpl::get_FillColor  
 Chiamare questo metodo per ottenere il colore di riempimento del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_FillColor(OLE_COLOR* pclrFillColor);
```  
  
### <a name="parameters"></a>Parametri  
 *pclrFillColor*  
 Variabile che riceve il colore di riempimento del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_fillstyle"></a>  CStockPropImpl::get_FillStyle  
 Chiamare questo metodo per ottenere lo stile di riempimento del controllo, ad esempio, a tinta unita, transparent o campitura.  
  
```
HRESULT STDMETHODCALLTYPE get_FillStyle(LONG* pnFillStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *pnFillStyle*  
 Variabile che riceve lo stile di riempimento del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_font"></a>  CStockPropImpl::get_Font  
 Chiamare questo metodo per ottenere un puntatore alla proprietà del tipo di carattere del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_Font(IFontDisp** ppFont);
```  
  
### <a name="parameters"></a>Parametri  
 *ppFont*  
 Variabile che riceve un puntatore alla proprietà del tipo di carattere del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_forecolor"></a>  CStockPropImpl::get_ForeColor  
 Chiamare questo metodo per ottenere il colore di primo piano del controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_ForeColor(OLE_COLOR* pclrForeColor);
```  
  
### <a name="parameters"></a>Parametri  
 *pclrForeColor*  
 Variabile che riceve il colore di primo piano i controlli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_hwnd"></a>  CStockPropImpl::get_HWND  
 Chiamare questo metodo per ottenere l'handle della finestra associato al controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_HWND(LONG_PTR* phWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *phWnd*  
 Handle della finestra associato al controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_mouseicon"></a>  CStockPropImpl::get_MouseIcon  
 Chiamare questo metodo per ottenere le proprietà di immagine dell'elemento grafico (icone, bitmap o metafile) da visualizzare quando il mouse è posizionato sul controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_MouseIcon(IPictureDisp** ppPicture);
```  
  
### <a name="parameters"></a>Parametri  
 *ppPicture*  
 Variabile che riceve un puntatore alle proprietà di immagine del grafico.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_mousepointer"></a>  CStockPropImpl::get_MousePointer  
 Chiamare questo metodo per ottenere il tipo di puntatore visualizzato al passaggio del mouse sul controllo, ad esempio, sulla freccia, cross o clessidra.  
  
```
HRESULT STDMETHODCALLTYPE get_MousePointer(LONG* pnMousePointer);
```  
  
### <a name="parameters"></a>Parametri  
 *pnMousePointer*  
 Variabile che riceve il tipo del puntatore del mouse.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_picture"></a>  CStockPropImpl::get_Picture  
 Chiamare questo metodo per ottenere un puntatore per la proprietà immagine di un'immagine (icone, bitmap o metafile) da visualizzare.  
  
```
HRESULT STDMETHODCALLTYPE get_Picture(IPictureDisp** ppPicture);
```  
  
### <a name="parameters"></a>Parametri  
 *ppPicture*  
 Variabile che riceve un puntatore alla proprietà dell'immagine. Visualizzare [IPictureDisp](https://msdn.microsoft.com/library/windows/desktop/ms680762) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_readystate"></a>  CStockPropImpl::get_ReadyState  
 Chiamare questo metodo per ottenere lo stato del controllo pronto, ad esempio, il caricamento o caricamento.  
  
```
HRESULT STDMETHODCALLTYPE get_ReadyState(LONG* pnReadyState);
```  
  
### <a name="parameters"></a>Parametri  
 *pnReadyState*  
 Variabile che riceve lo stato del controllo pronto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_tabstop"></a>  CStockPropImpl::get_TabStop  
 Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo è un punto di tabulazione o meno.  
  
```
HRESULT STDMETHODCALLTYPE get_TabStop(VARIANT_BOOL* pbTabStop);
```  
  
### <a name="parameters"></a>Parametri  
 *pbTabStop*  
 Variabile che riceve lo stato del flag. TRUE indica che il controllo è un punto di tabulazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_text"></a>  CStockPropImpl::get_Text  
 Chiamare questo metodo per ottenere il testo visualizzato con il controllo.  
  
```
HRESULT STDMETHODCALLTYPE get_Text(BSTR* pbstrText);
```  
  
### <a name="parameters"></a>Parametri  
 *pbstrText*  
 Il testo visualizzato con il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_valid"></a>  CStockPropImpl::getvalid  
 Chiamare questo metodo per ottenere lo stato del flag che indica se il controllo è valido o meno.  
  
```
HRESULT STDMETHODCALLTYPE getvalid(VARIANT_BOOL* pbValid);
```  
  
### <a name="parameters"></a>Parametri  
 *pbValid*  
 Variabile che riceve lo stato del flag. TRUE indica che il controllo è valido.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="get_window"></a>  CStockPropImpl::get_Window  
 Chiamare questo metodo per ottenere l'handle della finestra associato al controllo. Identico al [CStockPropImpl::get_HWND](#get_hwnd).  
  
```
HRESULT STDMETHODCALLTYPE get_Window(LONG_PTR* phWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *phWnd*  
 Handle della finestra associato al controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_appearance"></a>  CStockPropImpl::put_Appearance  
 Chiamare questo metodo per impostare lo stile di disegno utilizzata dal controllo, ad esempio, flat o 3D.  
  
```
HRESULT STDMETHODCALLTYPE put_Appearance(SHORT nAppearance);
```  
  
### <a name="parameters"></a>Parametri  
 *nAppearance*  
 Il nuovo stile di disegno per essere utilizzato dal controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_autosize"></a>  CStockPropImpl::put_AutoSize  
 Chiamare questo metodo per impostare il valore del flag che indica se il controllo non può essere qualsiasi altra dimensione.  
  
```
HRESULT STDMETHODCALLTYPE put_AutoSize(VARIANT_BOOL bAutoSize,);
```  
  
### <a name="parameters"></a>Parametri  
 *bAutoSize*  
 TRUE se il controllo non può essere qualsiasi altra dimensione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_backcolor"></a>  CStockPropImpl::put_BackColor  
 Chiamare questo metodo per impostare il colore di sfondo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_BackColor(OLE_COLOR clrBackColor);
```  
  
### <a name="parameters"></a>Parametri  
 *clrBackColor*  
 Il nuovo colore di sfondo controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_backstyle"></a>  CStockPropImpl::put_BackStyle  
 Chiamare questo metodo per impostare lo stile dello sfondo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_BackStyle(LONG nBackStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *nBackStyle*  
 Il nuovo stile dello sfondo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_bordercolor"></a>  CStockPropImpl::put_BorderColor  
 Chiamare questo metodo per impostare colore del bordo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderColor(OLE_COLOR clrBorderColor);
```  
  
### <a name="parameters"></a>Parametri  
 *clrBorderColor*  
 Il nuovo colore del bordo. Il tipo di dati OLE_COLOR viene rappresentato internamente come valore long integer a 32 bit.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_borderstyle"></a>  CStockPropImpl::put_BorderStyle  
 Chiamare questo metodo per impostare lo stile del bordo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderStyle(LONG nBorderStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *nBorderStyle*  
 Il nuovo stile del bordo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_bordervisible"></a>  CStockPropImpl::put_BorderVisible  
 Chiamare questo metodo per impostare il valore del flag che indica se il bordo del controllo è visibile o meno.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderVisible(VARIANT_BOOL bBorderVisible);
```  
  
### <a name="parameters"></a>Parametri  
 *bBorderVisible*  
 TRUE se il bordo deve essere visibile.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_borderwidth"></a>  CStockPropImpl::put_BorderWidth  
 Chiamare questo metodo per impostare lo spessore del bordo del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderWidth(LONG nBorderWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *nBorderWidth*  
 La nuova larghezza del bordo del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_caption"></a>  CStockPropImpl::put_Caption  
 Chiamare questo metodo per impostare il testo da visualizzare con il controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_Caption(BSTR bstrCaption);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrCaption*  
 Il testo da visualizzare con il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_drawmode"></a>  CStockPropImpl::put_DrawMode  
 Chiamare questo metodo per impostare la modalità del controllo disegno, ad esempio, XOR penna o Inverti colori.  
  
```
HRESULT STDMETHODCALLTYPE put_DrawMode(LONG nDrawMode);
```  
  
### <a name="parameters"></a>Parametri  
 *nDrawMode*  
 La nuova modalità di disegno del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_drawstyle"></a>  CStockPropImpl::put_DrawStyle  
 Chiamare questo metodo per impostare lo stile di disegno del controllo, ad esempio, a tinta unita, tratteggiato o punteggiato.  
  
```
HRESULT STDMETHODCALLTYPE put_DrawStyle(LONG pnDrawStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *nDrawStyle*  
 Il nuovo stile di disegno del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_drawwidth"></a>  CStockPropImpl::put_DrawWidth  
 Chiamare questo metodo per impostare la larghezza (espressa in pixel) utilizzata dai metodi di disegno del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_DrawWidth(LONG nDrawWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *nDrawWidth*  
 La nuova larghezza utilizzabile dal controllo di metodi di disegno.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_enabled"></a>  CStockPropImpl::put_Enabled  
 Chiamare questo metodo per impostare il valore del flag che indica se il controllo è abilitato.  
  
```
HRESULT STDMETHODCALLTYPE put_Enabled(VARIANT_BOOL bEnabled);
```  
  
### <a name="parameters"></a>Parametri  
 *bEnabled*  
 TRUE se il controllo è abilitato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_fillcolor"></a>  CStockPropImpl::put_FillColor  
 Chiamare questo metodo per impostare il colore di riempimento del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_FillColor(OLE_COLOR clrFillColor);
```  
  
### <a name="parameters"></a>Parametri  
 *clrFillColor*  
 Il nuovo colore di riempimento per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_fillstyle"></a>  CStockPropImpl::put_FillStyle  
 Chiamare questo metodo per impostare lo stile di riempimento del controllo, ad esempio, a tinta unita, transparent o tratteggiato.  
  
```
HRESULT STDMETHODCALLTYPE put_FillStyle(LONG nFillStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *nFillStyle*  
 Il nuovo stile di riempimento per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_font"></a>  CStockPropImpl::put_Font  
 Chiamare questo metodo per impostare le proprietà del controllo del tipo di carattere.  
  
```
HRESULT STDMETHODCALLTYPE put_Font(IFontDisp* pFont);
```  
  
### <a name="parameters"></a>Parametri  
 *pFont*  
 Puntatore alla proprietà del tipo di carattere del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_forecolor"></a>  CStockPropImpl::put_ForeColor  
 Chiamare questo metodo per impostare il colore di primo piano del controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_ForeColor(OLE_COLOR clrForeColor);
```  
  
### <a name="parameters"></a>Parametri  
 *clrForeColor*  
 Il nuovo colore di primo piano del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_hwnd"></a>  CStockPropImpl::put_HWND  
 Questo metodo restituisce E_FAIL.  
  
```
HRESULT STDMETHODCALLTYPE put_HWND(LONG_PTR /* hWnd */);
```  
  
### <a name="parameters"></a>Parametri  
 */\* hWnd \*/*  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce E_FAIL.  
  
### <a name="remarks"></a>Note  
 L'handle della finestra è un valore di sola lettura.  
  
##  <a name="put_mouseicon"></a>  CStockPropImpl::put_MouseIcon  
 Chiamare questo metodo per impostare le proprietà di immagine dell'elemento grafico (icone, bitmap o metafile) da visualizzare quando il mouse è posizionato sul controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_MouseIcon(IPictureDisp* pPicture);
```  
  
### <a name="parameters"></a>Parametri  
 *pPicture*  
 Puntatore alle proprietà di immagine del grafico.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_mousepointer"></a>  CStockPropImpl::put_MousePointer  
 Chiamare questo metodo per impostare il tipo di puntatore visualizzato al passaggio del mouse sul controllo, ad esempio, sulla freccia, cross o clessidra.  
  
```
HRESULT STDMETHODCALLTYPE put_MousePointer(LONG nMousePointer);
```  
  
### <a name="parameters"></a>Parametri  
 *nMousePointer*  
 Tipo del puntatore del mouse.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_picture"></a>  CStockPropImpl::put_Picture  
 Chiamare questo metodo per impostare le proprietà di immagine di un grafico (icone, bitmap o metafile) da visualizzare.  
  
```
HRESULT STDMETHODCALLTYPE put_Picture(IPictureDisp* pPicture);
```  
  
### <a name="parameters"></a>Parametri  
 *pPicture*  
 Puntatore alla proprietà dell'immagine. Visualizzare [IPictureDisp](https://msdn.microsoft.com/library/windows/desktop/ms680762) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_readystate"></a>  CStockPropImpl::put_ReadyState  
 Chiamare questo metodo per impostare lo stato del controllo pronto, ad esempio, il caricamento o caricamento.  
  
```
HRESULT STDMETHODCALLTYPE put_ReadyState(LONG nReadyState);
```  
  
### <a name="parameters"></a>Parametri  
 *nReadyState*  
 Lo stato del controllo pronto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_tabstop"></a>  CStockPropImpl::put_TabStop  
 Chiamare questo metodo per impostare il flag che indica se il controllo è un punto di tabulazione o meno.  
  
```
HRESULT STDMETHODCALLTYPE put_TabStop(VARIANT_BOOL bTabStop);
```  
  
### <a name="parameters"></a>Parametri  
 *bTabStop*  
 TRUE se il controllo è un punto di tabulazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_text"></a>  CStockPropImpl::put_Text  
 Chiamare questo metodo per impostare il testo visualizzato con il controllo.  
  
```
HRESULT STDMETHODCALLTYPE put_Text(BSTR bstrText);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrText*  
 Il testo visualizzato con il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_valid"></a>  CStockPropImpl::putvalid  
 Chiamare questo metodo per impostare il flag che indica se il controllo è valido o meno.  
  
```
HRESULT STDMETHODCALLTYPE getvalid(VARIANT_BOOL bValid);
```  
  
### <a name="parameters"></a>Parametri  
 *bValid*  
 TRUE se il controllo è valido.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
##  <a name="put_window"></a>  CStockPropImpl::put_Window  
 Questo metodo chiama [CStockPropImpl::put_HWND](#put_hwnd), che restituisce E_FAIL.  
  
```
HRESULT STDMETHODCALLTYPE put_Window(LONG_PTR hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *hWnd*  
 Handle di finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce E_FAIL.  
  
### <a name="remarks"></a>Note  
 L'handle della finestra è un valore di sola lettura.  
  
##  <a name="putref_font"></a>  CStockPropImpl::putref_Font  
 Chiamare questo metodo per impostare le proprietà del controllo del tipo di carattere, con un conteggio dei riferimenti.  
  
```
HRESULT STDMETHODCALLTYPE putref_Font(IFontDisp* pFont);
```  
  
### <a name="parameters"></a>Parametri  
 *pFont*  
 Puntatore alla proprietà del tipo di carattere del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Identico [CStockPropImpl::put_Font](#put_font), ma con un conteggio dei riferimenti.  
  
##  <a name="putref_mouseicon"></a>  CStockPropImpl::putref_MouseIcon  
 Chiamare questo metodo per impostare le proprietà di immagine dell'elemento grafico (icone, bitmap o metafile) da visualizzare quando il mouse è posizionato sul controllo, con un conteggio dei riferimenti.  
  
```
HRESULT STDMETHODCALLTYPE putref_MouseIcon(IPictureDisp* pPicture);
```  
  
### <a name="parameters"></a>Parametri  
 *pPicture*  
 Puntatore alle proprietà di immagine del grafico.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Identico [CStockPropImpl::put_MouseIcon](#put_mouseicon), ma con un conteggio dei riferimenti.  
  
##  <a name="putref_picture"></a>  CStockPropImpl::putref_Picture  
 Chiamare questo metodo per impostare le proprietà di immagine di un grafico (icona, bitmap o metafile), verrà visualizzata con un conteggio dei riferimenti.  
  
```
HRESULT STDMETHODCALLTYPE putref_Picture(IPictureDisp* pPicture);
```  
  
### <a name="parameters"></a>Parametri  
 *pPicture*  
 Puntatore alla proprietà dell'immagine. Visualizzare [IPictureDisp](https://msdn.microsoft.com/library/windows/desktop/ms680762) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Identico [CStockPropImpl::put_Picture](#put_picture), ma con un conteggio dei riferimenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe IDispatchImpl](../../atl/reference/idispatchimpl-class.md)
