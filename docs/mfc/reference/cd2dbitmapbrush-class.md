---
title: Classe CD2DBitmapBrush | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush::CD2DBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush::Attach
- AFXRENDERTARGET/CD2DBitmapBrush::Create
- AFXRENDERTARGET/CD2DBitmapBrush::Destroy
- AFXRENDERTARGET/CD2DBitmapBrush::Detach
- AFXRENDERTARGET/CD2DBitmapBrush::Get
- AFXRENDERTARGET/CD2DBitmapBrush::GetBitmap
- AFXRENDERTARGET/CD2DBitmapBrush::GetExtendModeX
- AFXRENDERTARGET/CD2DBitmapBrush::GetExtendModeY
- AFXRENDERTARGET/CD2DBitmapBrush::GetInterpolationMode
- AFXRENDERTARGET/CD2DBitmapBrush::SetBitmap
- AFXRENDERTARGET/CD2DBitmapBrush::SetExtendModeX
- AFXRENDERTARGET/CD2DBitmapBrush::SetExtendModeY
- AFXRENDERTARGET/CD2DBitmapBrush::SetInterpolationMode
- AFXRENDERTARGET/CD2DBitmapBrush::CommonInit
- AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmap
- AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmapBrush
- AFXRENDERTARGET/CD2DBitmapBrush::m_pBitmapBrushProperties
dev_langs: C++
helpviewer_keywords:
- CD2DBitmapBrush [MFC], CD2DBitmapBrush
- CD2DBitmapBrush [MFC], Attach
- CD2DBitmapBrush [MFC], Create
- CD2DBitmapBrush [MFC], Destroy
- CD2DBitmapBrush [MFC], Detach
- CD2DBitmapBrush [MFC], Get
- CD2DBitmapBrush [MFC], GetBitmap
- CD2DBitmapBrush [MFC], GetExtendModeX
- CD2DBitmapBrush [MFC], GetExtendModeY
- CD2DBitmapBrush [MFC], GetInterpolationMode
- CD2DBitmapBrush [MFC], SetBitmap
- CD2DBitmapBrush [MFC], SetExtendModeX
- CD2DBitmapBrush [MFC], SetExtendModeY
- CD2DBitmapBrush [MFC], SetInterpolationMode
- CD2DBitmapBrush [MFC], CommonInit
- CD2DBitmapBrush [MFC], m_pBitmap
- CD2DBitmapBrush [MFC], m_pBitmapBrush
- CD2DBitmapBrush [MFC], m_pBitmapBrushProperties
ms.assetid: 46ebbe34-66e0-44c8-af1d-d129e851de5e
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3dd588a26b73fb6e5f1b205b20f21aab8272c439
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cd2dbitmapbrush-class"></a>Classe CD2DBitmapBrush
Wrapper per ID2D1BitmapBrush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DBitmapBrush : public CD2DBrush;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::CD2DBitmapBrush](#cd2dbitmapbrush)|Di overload. Costruisce un oggetto CD2DBitmapBrush dal file.|  
|[CD2DBitmapBrush:: ~ CD2DBitmapBrush](#dtor)|Distruttore. Chiamato quando viene eliminato un oggetto di pennello bitmap D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DBitmapBrush::Create](#create)|Crea un CD2DBitmapBrush. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DBitmapBrush::Destroy](#destroy)|Elimina un oggetto CD2DBitmapBrush. (Esegue l'override [CD2DBrush:: Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|  
|[CD2DBitmapBrush::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DBitmapBrush::Get](#get)|Restituisce l'interfaccia ID2D1BitmapBrush|  
|[CD2DBitmapBrush::getBitmap](#getbitmap)|Ottiene l'origine della bitmap che pennello utilizzato per disegnare|  
|[CD2DBitmapBrush::GetExtendModeX](#getextendmodex)|Ottiene il metodo mediante il quale il pennello Affianca orizzontalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::GetExtendModeY](#getextendmodey)|Ottiene il metodo mediante il quale il pennello affianca verticalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::GetInterpolationMode](#getinterpolationmode)|Ottiene il metodo di interpolazione utilizzato quando la bitmap pennello viene ridimensionata o ruotata|  
|[CD2DBitmapBrush::SetBitmap](#setbitmap)|Specifica l'origine della bitmap che pennello utilizzato per disegnare|  
|[CD2DBitmapBrush::SetExtendModeX](#setextendmodex)|Specifica come il pennello Affianca orizzontalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::SetExtendModeY](#setextendmodey)|Specifica come il pennello affianca verticalmente tali aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::SetInterpolationMode](#setinterpolationmode)|Specifica la modalità di interpolazione utilizzata quando la bitmap pennello viene ridimensionata o ruotata|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::CommonInit](#commoninit)|Inizializza l'oggetto|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::operator ID2D1BitmapBrush *](#operator_id2d1bitmapbrush_star)|Restituisce l'interfaccia ID2D1BitmapBrush|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::m_pBitmap](#m_pbitmap)|Archivia un puntatore a un oggetto CD2DBitmap.|  
|[CD2DBitmapBrush::m_pBitmapBrush](#m_pbitmapbrush)|Archivia un puntatore a un oggetto ID2D1BitmapBrush.|  
|[CD2DBitmapBrush::m_pBitmapBrushProperties](#m_pbitmapbrushproperties)|Proprietà del pennello bitmap.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 `CD2DBitmapBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="dtor"></a>CD2DBitmapBrush:: ~ CD2DBitmapBrush  
 Distruttore. Chiamato quando viene eliminato un oggetto di pennello bitmap D2D.  
  
```  
virtual ~CD2DBitmapBrush();
```  
  
##  <a name="attach"></a>CD2DBitmapBrush::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1BitmapBrush* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dbitmapbrush"></a>CD2DBitmapBrush::CD2DBitmapBrush  
 Costruisce un oggetto CD2DBitmapBrush.  
  
```  
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,  
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);

 
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,  
    UINT uiResID,  
    LPCTSTR lpszType = NULL,  
    CD2DSizeU sizeDest = CD2DSizeU(0, 0), 
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);

 
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,  
    LPCTSTR lpszImagePath,  
    CD2DSizeU sizeDest = CD2DSizeU(0, 0), 
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `pBitmapBrushProperties`  
 Puntatore alla modalità di estensione e la modalità di interpolazione di un pennello bitmap.  
  
 `pBrushProperties`  
 Puntatore a una trasformazione di un pennello e di opacità.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
 `uiResID`  
 Il numero di ID di risorsa della risorsa.  
  
 `lpszType`  
 Puntatore a una stringa con terminazione null che contiene il tipo di risorsa.  
  
 `sizeDest`  
 Dimensioni di destinazione della bitmap.  
  
 `lpszImagePath`  
 Puntatore a una stringa con terminazione null che contiene il nome del file.  
  
##  <a name="commoninit"></a>CD2DBitmapBrush::CommonInit  
 Inizializza l'oggetto  
  
```  
void CommonInit(D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties);
```  
  
### <a name="parameters"></a>Parametri  
 `pBitmapBrushProperties`  
 Puntatore a una proprietà del pennello bitmap.  
  
##  <a name="create"></a>CD2DBitmapBrush::Create  
 Crea un CD2DBitmapBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DBitmapBrush::Destroy  
 Elimina un oggetto CD2DBitmapBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>CD2DBitmapBrush::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1BitmapBrush* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="get"></a>CD2DBitmapBrush::Get  
 Restituisce l'interfaccia ID2D1BitmapBrush  
  
```  
ID2D1BitmapBrush* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1BitmapBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getbitmap"></a>CD2DBitmapBrush::getBitmap  
 Ottiene l'origine della bitmap che pennello utilizzato per disegnare  
  
```  
CD2DBitmap* GetBitmap();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un oggetto CD2DBitmap o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getextendmodex"></a>CD2DBitmapBrush::GetExtendModeX  
 Ottiene il metodo mediante il quale il pennello Affianca orizzontalmente quelle aree che si estendono oltre la bitmap  
  
```  
D2D1_EXTEND_MODE GetExtendModeX() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che specifica come il pennello Affianca orizzontalmente quelle aree che si estendono oltre la bitmap  
  
##  <a name="getextendmodey"></a>CD2DBitmapBrush::GetExtendModeY  
 Ottiene il metodo mediante il quale il pennello affianca verticalmente quelle aree che si estendono oltre la bitmap  
  
```  
D2D1_EXTEND_MODE GetExtendModeY() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che specifica come il pennello affianca verticalmente tali aree che si estendono oltre la bitmap  
  
##  <a name="getinterpolationmode"></a>CD2DBitmapBrush::GetInterpolationMode  
 Ottiene il metodo di interpolazione utilizzato quando la bitmap pennello viene ridimensionata o ruotata  
  
```  
D2D1_BITMAP_INTERPOLATION_MODE GetInterpolationMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo di interpolazione utilizzato quando la bitmap pennello viene ridimensionata o ruotata  
  
##  <a name="m_pbitmap"></a>CD2DBitmapBrush::m_pBitmap  
 Archivia un puntatore a un oggetto CD2DBitmap.  
  
```  
CD2DBitmap* m_pBitmap;  
```  
  
##  <a name="m_pbitmapbrush"></a>CD2DBitmapBrush::m_pBitmapBrush  
 Archivia un puntatore a un oggetto ID2D1BitmapBrush.  
  
```  
ID2D1BitmapBrush* m_pBitmapBrush;  
```  
  
##  <a name="m_pbitmapbrushproperties"></a>CD2DBitmapBrush::m_pBitmapBrushProperties  
 Proprietà del pennello bitmap.  
  
```  
D2D1_BITMAP_BRUSH_PROPERTIES* m_pBitmapBrushProperties;  
```  
  
##  <a name="operator_id2d1bitmapbrush_star"></a>CD2DBitmapBrush::operator ID2D1BitmapBrush *  
 Restituisce l'interfaccia ID2D1BitmapBrush  
  
```  
operator ID2D1BitmapBrush*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1BitmapBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="setbitmap"></a>CD2DBitmapBrush::SetBitmap  
 Specifica l'origine della bitmap che pennello utilizzato per disegnare  
  
```  
void SetBitmap(CD2DBitmap* pBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 `pBitmap`  
 L'origine della bitmap utilizzata dal pennello.  
  
##  <a name="setextendmodex"></a>CD2DBitmapBrush::SetExtendModeX  
 Specifica come il pennello Affianca orizzontalmente quelle aree che si estendono oltre la bitmap  
  
```  
void SetExtendModeX(D2D1_EXTEND_MODE extendModeX);
```  
  
### <a name="parameters"></a>Parametri  
 `extendModeX`  
 Un valore che specifica come il pennello Affianca orizzontalmente quelle aree che si estendono oltre la bitmap  
  
##  <a name="setextendmodey"></a>CD2DBitmapBrush::SetExtendModeY  
 Specifica come il pennello affianca verticalmente tali aree che si estendono oltre la bitmap  
  
```  
void SetExtendModeY(D2D1_EXTEND_MODE extendModeY);
```  
  
### <a name="parameters"></a>Parametri  
 `extendModeY`  
 Un valore che specifica come il pennello affianca verticalmente tali aree che si estendono oltre la bitmap  
  
##  <a name="setinterpolationmode"></a>CD2DBitmapBrush::SetInterpolationMode  
 Specifica la modalità di interpolazione utilizzata quando la bitmap pennello viene ridimensionata o ruotata  
  
```  
void SetInterpolationMode(D2D1_BITMAP_INTERPOLATION_MODE interpolationMode);
```  
  
### <a name="parameters"></a>Parametri  
 `interpolationMode`  
 La modalità di interpolazione utilizzata quando la bitmap pennello viene ridimensionata o ruotata  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
