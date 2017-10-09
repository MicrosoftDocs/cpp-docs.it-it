---
title: Classe CD2DRadialGradientBrush | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush::CD2DRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush::Attach
- AFXRENDERTARGET/CD2DRadialGradientBrush::Create
- AFXRENDERTARGET/CD2DRadialGradientBrush::Destroy
- AFXRENDERTARGET/CD2DRadialGradientBrush::Detach
- AFXRENDERTARGET/CD2DRadialGradientBrush::Get
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetCenter
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetGradientOriginOffset
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetRadiusX
- AFXRENDERTARGET/CD2DRadialGradientBrush::GetRadiusY
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetCenter
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetGradientOriginOffset
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetRadiusX
- AFXRENDERTARGET/CD2DRadialGradientBrush::SetRadiusY
- AFXRENDERTARGET/CD2DRadialGradientBrush::m_pRadialGradientBrush
- AFXRENDERTARGET/CD2DRadialGradientBrush::m_RadialGradientBrushProperties
dev_langs:
- C++
helpviewer_keywords:
- CD2DRadialGradientBrush [MFC], CD2DRadialGradientBrush
- CD2DRadialGradientBrush [MFC], Attach
- CD2DRadialGradientBrush [MFC], Create
- CD2DRadialGradientBrush [MFC], Destroy
- CD2DRadialGradientBrush [MFC], Detach
- CD2DRadialGradientBrush [MFC], Get
- CD2DRadialGradientBrush [MFC], GetCenter
- CD2DRadialGradientBrush [MFC], GetGradientOriginOffset
- CD2DRadialGradientBrush [MFC], GetRadiusX
- CD2DRadialGradientBrush [MFC], GetRadiusY
- CD2DRadialGradientBrush [MFC], SetCenter
- CD2DRadialGradientBrush [MFC], SetGradientOriginOffset
- CD2DRadialGradientBrush [MFC], SetRadiusX
- CD2DRadialGradientBrush [MFC], SetRadiusY
- CD2DRadialGradientBrush [MFC], m_pRadialGradientBrush
- CD2DRadialGradientBrush [MFC], m_RadialGradientBrushProperties
ms.assetid: 6c76d84a-d831-4ee2-96f1-82c1f5b0d6a9
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: f44927e2882e168f1e466deab29b56f32a6c5c9e
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dradialgradientbrush-class"></a>Classe CD2DRadialGradientBrush
Wrapper per ID2D1RadialGradientBrush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DRadialGradientBrush : public CD2DGradientBrush;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::CD2DRadialGradientBrush](#cd2dradialgradientbrush)|Costruisce un oggetto CD2DLinearGradientBrush.|  
|[CD2DRadialGradientBrush:: ~ CD2DRadialGradientBrush](#_dtorcd2dradialgradientbrush)|Distruttore. Chiamato quando viene eliminato un oggetto di un pennello sfumatura radiale D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DRadialGradientBrush::Create](#create)|Crea un CD2DRadialGradientBrush. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DRadialGradientBrush::Destroy](#destroy)|Elimina un oggetto CD2DRadialGradientBrush. (Esegue l'override [CD2DGradientBrush:: Destroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).)|  
|[CD2DRadialGradientBrush::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DRadialGradientBrush::Get](#get)|Restituisce l'interfaccia ID2D1RadialGradientBrush|  
|[CD2DRadialGradientBrush::GetCenter](#getcenter)|Recupera il centro dell'ellisse di sfumatura|  
|[CD2DRadialGradientBrush::GetGradientOriginOffset](#getgradientoriginoffset)|Recupera l'offset dell'origine della sfumatura rispetto al centro dell'ellisse sfumatura|  
|[CD2DRadialGradientBrush::GetRadiusX](#getradiusx)|Recupera il raggio x dell'ellisse di sfumatura|  
|[CD2DRadialGradientBrush::GetRadiusY](#getradiusy)|Recupera il raggio y dell'ellisse di sfumatura|  
|[CD2DRadialGradientBrush::SetCenter](#setcenter)|Specifica il centro dell'ellisse di sfumatura nello spazio delle coordinate del pennello.|  
|[CD2DRadialGradientBrush::SetGradientOriginOffset](#setgradientoriginoffset)|Specifica l'offset dell'origine della sfumatura rispetto al centro dell'ellisse sfumatura|  
|[CD2DRadialGradientBrush::SetRadiusX](#setradiusx)|Specifica il raggio x dell'ellisse di sfumatura, nello spazio delle coordinate del pennello.|  
|[CD2DRadialGradientBrush::SetRadiusY](#setradiusy)|Specifica il raggio y dell'ellisse di sfumatura nello spazio delle coordinate del pennello.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush *](#operator_id2d1radialgradientbrush_star)|Restituisce l'interfaccia ID2D1RadialGradientBrush|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::m_pRadialGradientBrush](#m_pradialgradientbrush)|Puntatore a un ID2D1RadialGradientBrush.|  
|[CD2DRadialGradientBrush::m_RadialGradientBrushProperties](#m_radialgradientbrushproperties)|Il centro, offset dell'origine sfumatura e raggio x e raggio y del pennello sfumatura del consentiti.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)  
  
 `CD2DRadialGradientBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dradialgradientbrush"></a>CD2DRadialGradientBrush:: ~ CD2DRadialGradientBrush  
 Distruttore. Chiamato quando viene eliminato un oggetto di un pennello sfumatura radiale D2D.  
  
```  
virtual ~CD2DRadialGradientBrush();
```  
  
##  <a name="attach"></a>CD2DRadialGradientBrush::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1RadialGradientBrush* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dradialgradientbrush"></a>CD2DRadialGradientBrush::CD2DRadialGradientBrush  
 Costruisce un oggetto CD2DLinearGradientBrush.  
  
```  
CD2DRadialGradientBrush(
    CRenderTarget* pParentTarget,  
    const D2D1_GRADIENT_STOP* gradientStops,  
    UINT gradientStopsCount,  
    D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES RadialGradientBrushProperties,  
    D2D1_GAMMA colorInterpolationGamma = D2D1_GAMMA_2_2,  
    D2D1_EXTEND_MODE extendMode = D2D1_EXTEND_MODE_CLAMP,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `gradientStops`  
 Puntatore a una matrice di strutture D2D1_GRADIENT_STOP.  
  
 `gradientStopsCount`  
 Un valore maggiore o uguale a 1 che specifica il numero di cursori sfumatura nella matrice gradientStops.  
  
 `RadialGradientBrushProperties`  
 Il centro, offset dell'origine sfumatura e raggio x e raggio y del pennello sfumatura del consentiti.  
  
 `colorInterpolationGamma`  
 Lo spazio in cui il viene eseguito l'interpolazione tra i cursori sfumatura.  
  
 `extendMode`  
 Il comportamento della sfumatura non compreso nell'intervallo normalizzato [0,1].  
  
 `pBrushProperties`  
 Puntatore a una trasformazione di un pennello e di opacità.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="create"></a>CD2DRadialGradientBrush::Create  
 Crea un CD2DRadialGradientBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DRadialGradientBrush::Destroy  
 Elimina un oggetto CD2DRadialGradientBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>CD2DRadialGradientBrush::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1RadialGradientBrush* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="get"></a>CD2DRadialGradientBrush::Get  
 Restituisce l'interfaccia ID2D1RadialGradientBrush  
  
```  
ID2D1RadialGradientBrush* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1RadialGradientBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getcenter"></a>CD2DRadialGradientBrush::GetCenter  
 Recupera il centro dell'ellisse di sfumatura  
  
```  
CD2DPointF GetCenter() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il centro dell'ellisse di sfumatura. Questo valore è espresso in spazio di coordinate del pennello.  
  
##  <a name="getgradientoriginoffset"></a>CD2DRadialGradientBrush::GetGradientOriginOffset  
 Recupera l'offset dell'origine della sfumatura rispetto al centro dell'ellisse sfumatura  
  
```  
CD2DPointF GetGradientOriginOffset() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'offset dell'origine della sfumatura dal centro dell'ellisse di sfumatura. Questo valore è espresso in spazio di coordinate del pennello.  
  
##  <a name="getradiusx"></a>CD2DRadialGradientBrush::GetRadiusX  
 Recupera il raggio x dell'ellisse di sfumatura  
  
```  
FLOAT GetRadiusX() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il raggio x dell'ellisse di sfumatura. Questo valore è espresso in spazio di coordinate del pennello.  
  
##  <a name="getradiusy"></a>CD2DRadialGradientBrush::GetRadiusY  
 Recupera il raggio y dell'ellisse di sfumatura  
  
```  
FLOAT GetRadiusY() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il raggio y dell'ellisse di sfumatura. Questo valore è espresso in spazio di coordinate del pennello.  
  
##  <a name="m_pradialgradientbrush"></a>CD2DRadialGradientBrush::m_pRadialGradientBrush  
 Puntatore a un ID2D1RadialGradientBrush.  
  
```  
ID2D1RadialGradientBrush* m_pRadialGradientBrush;  
```  
  
##  <a name="m_radialgradientbrushproperties"></a>CD2DRadialGradientBrush::m_RadialGradientBrushProperties  
 Il centro, offset dell'origine sfumatura e raggio x e raggio y del pennello sfumatura del consentiti.  
  
```  
D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES m_RadialGradientBrushProperties;  
```  
  
##  <a name="operator_id2d1radialgradientbrush_star"></a>CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush *  
 Restituisce l'interfaccia ID2D1RadialGradientBrush  
  
```  
operator ID2D1RadialGradientBrush*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1RadialGradientBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="setcenter"></a>CD2DRadialGradientBrush::SetCenter  
 Specifica il centro dell'ellisse di sfumatura nello spazio delle coordinate del pennello.  
  
```  
void SetCenter(CD2DPointF point);
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Il centro dell'ellisse di sfumatura, nello spazio delle coordinate del pennello.  
  
##  <a name="setgradientoriginoffset"></a>CD2DRadialGradientBrush::SetGradientOriginOffset  
 Specifica l'offset dell'origine della sfumatura rispetto al centro dell'ellisse sfumatura  
  
```  
void SetGradientOriginOffset(CD2DPointF gradientOriginOffset);
```  
  
### <a name="parameters"></a>Parametri  
 `gradientOriginOffset`  
 L'offset dell'origine della sfumatura dal centro dell'ellisse di sfumatura  
  
##  <a name="setradiusx"></a>CD2DRadialGradientBrush::SetRadiusX  
 Specifica il raggio x dell'ellisse di sfumatura, nello spazio delle coordinate del pennello.  
  
```  
void SetRadiusX(FLOAT radiusX);
```  
  
### <a name="parameters"></a>Parametri  
 `radiusX`  
 Il raggio x dell'ellisse di sfumatura. Questo valore è nello spazio delle coordinate del pennello.  
  
##  <a name="setradiusy"></a>CD2DRadialGradientBrush::SetRadiusY  
 Specifica il raggio y dell'ellisse di sfumatura nello spazio delle coordinate del pennello.  
  
```  
void SetRadiusY(FLOAT radiusY);
```  
  
### <a name="parameters"></a>Parametri  
 `radiusY`  
 Il raggio y dell'ellisse di sfumatura. Questo valore è nello spazio delle coordinate del pennello.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

