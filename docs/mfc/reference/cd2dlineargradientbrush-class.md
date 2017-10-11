---
title: Classe CD2DLinearGradientBrush | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush::CD2DLinearGradientBrush
- AFXRENDERTARGET/CD2DLinearGradientBrush::Attach
- AFXRENDERTARGET/CD2DLinearGradientBrush::Create
- AFXRENDERTARGET/CD2DLinearGradientBrush::Destroy
- AFXRENDERTARGET/CD2DLinearGradientBrush::Detach
- AFXRENDERTARGET/CD2DLinearGradientBrush::Get
- AFXRENDERTARGET/CD2DLinearGradientBrush::GetEndPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::GetStartPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::SetEndPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::SetStartPoint
- AFXRENDERTARGET/CD2DLinearGradientBrush::m_LinearGradientBrushProperties
- AFXRENDERTARGET/CD2DLinearGradientBrush::m_pLinearGradientBrush
dev_langs:
- C++
helpviewer_keywords:
- CD2DLinearGradientBrush [MFC], CD2DLinearGradientBrush
- CD2DLinearGradientBrush [MFC], Attach
- CD2DLinearGradientBrush [MFC], Create
- CD2DLinearGradientBrush [MFC], Destroy
- CD2DLinearGradientBrush [MFC], Detach
- CD2DLinearGradientBrush [MFC], Get
- CD2DLinearGradientBrush [MFC], GetEndPoint
- CD2DLinearGradientBrush [MFC], GetStartPoint
- CD2DLinearGradientBrush [MFC], SetEndPoint
- CD2DLinearGradientBrush [MFC], SetStartPoint
- CD2DLinearGradientBrush [MFC], m_LinearGradientBrushProperties
- CD2DLinearGradientBrush [MFC], m_pLinearGradientBrush
ms.assetid: d4be9ff9-0ea8-45e6-9b8d-f3bc5673cbac
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 50f0c3c8fbfb56e41e492e7dcea7188858a69831
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dlineargradientbrush-class"></a>Classe CD2DLinearGradientBrush
Wrapper per ID2D1LinearGradientBrush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DLinearGradientBrush : public CD2DGradientBrush;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::CD2DLinearGradientBrush](#cd2dlineargradientbrush)|Costruisce un oggetto CD2DLinearGradientBrush.|  
|[CD2DLinearGradientBrush:: ~ CD2DLinearGradientBrush](#_dtorcd2dlineargradientbrush)|Distruttore. Chiamato quando viene eliminato un oggetto pennello sfumato lineare D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DLinearGradientBrush::Create](#create)|Crea un CD2DLinearGradientBrush. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DLinearGradientBrush::Destroy](#destroy)|Elimina un oggetto CD2DLinearGradientBrush. (Esegue l'override [CD2DGradientBrush:: Destroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).)|  
|[CD2DLinearGradientBrush::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DLinearGradientBrush::Get](#get)|Restituisce l'interfaccia ID2D1LinearGradientBrush|  
|[CD2DLinearGradientBrush::GetEndPoint](#getendpoint)|Recupera le coordinate finale della sfumatura lineare|  
|[CD2DLinearGradientBrush::GetStartPoint](#getstartpoint)|Recupera le coordinate di iniziale della sfumatura lineare|  
|[CD2DLinearGradientBrush::setEndPoint](#setendpoint)|Imposta le coordinate finale della sfumatura lineare nello spazio delle coordinate del pennello.|  
|[CD2DLinearGradientBrush::SetStartPoint](#setstartpoint)|Imposta le coordinate di iniziale della sfumatura lineare nello spazio delle coordinate del pennello.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush *](#operator_id2d1lineargradientbrush_star)|Restituisce l'interfaccia ID2D1LinearGradientBrush|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::m_LinearGradientBrushProperties](#m_lineargradientbrushproperties)|I punti iniziale e finale della sfumatura.|  
|[CD2DLinearGradientBrush::m_pLinearGradientBrush](#m_plineargradientbrush)|Puntatore a un ID2D1LinearGradientBrush.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)  
  
 `CD2DLinearGradientBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dlineargradientbrush"></a>CD2DLinearGradientBrush:: ~ CD2DLinearGradientBrush  
 Distruttore. Chiamato quando viene eliminato un oggetto pennello sfumato lineare D2D.  
  
```  
virtual ~CD2DLinearGradientBrush();
```  
  
##  <a name="attach"></a>CD2DLinearGradientBrush::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1LinearGradientBrush* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dlineargradientbrush"></a>CD2DLinearGradientBrush::CD2DLinearGradientBrush  
 Costruisce un oggetto CD2DLinearGradientBrush.  
  
```  
CD2DLinearGradientBrush(
    CRenderTarget* pParentTarget,  
    const D2D1_GRADIENT_STOP* gradientStops,  
    UINT gradientStopsCount,  
    D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES LinearGradientBrushProperties,  
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
  
 `LinearGradientBrushProperties`  
 I punti iniziale e finale della sfumatura.  
  
 `colorInterpolationGamma`  
 Lo spazio in cui il viene eseguito l'interpolazione tra i cursori sfumatura.  
  
 `extendMode`  
 Il comportamento della sfumatura non compreso nell'intervallo normalizzato [0,1].  
  
 `pBrushProperties`  
 Puntatore a una trasformazione di un pennello e di opacità.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="create"></a>CD2DLinearGradientBrush::Create  
 Crea un CD2DLinearGradientBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DLinearGradientBrush::Destroy  
 Elimina un oggetto CD2DLinearGradientBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>CD2DLinearGradientBrush::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1LinearGradientBrush* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="get"></a>CD2DLinearGradientBrush::Get  
 Restituisce l'interfaccia ID2D1LinearGradientBrush  
  
```  
ID2D1LinearGradientBrush* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1LinearGradientBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getendpoint"></a>CD2DLinearGradientBrush::GetEndPoint  
 Recupera le coordinate finale della sfumatura lineare  
  
```  
CD2DPointF GetEndPoint() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le coordinate bidimensionali finali della sfumatura lineare, nello spazio delle coordinate del pennello.  
  
##  <a name="getstartpoint"></a>CD2DLinearGradientBrush::GetStartPoint  
 Recupera le coordinate di iniziale della sfumatura lineare  
  
```  
CD2DPointF GetStartPoint() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le coordinate bidimensionali iniziali della sfumatura lineare, nello spazio delle coordinate del pennello.  
  
##  <a name="m_lineargradientbrushproperties"></a>CD2DLinearGradientBrush::m_LinearGradientBrushProperties  
 I punti iniziale e finale della sfumatura.  
  
```  
D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES m_LinearGradientBrushProperties;  
```  
  
##  <a name="m_plineargradientbrush"></a>CD2DLinearGradientBrush::m_pLinearGradientBrush  
 Puntatore a un ID2D1LinearGradientBrush.  
  
```  
ID2D1LinearGradientBrush* m_pLinearGradientBrush;  
```  
  
##  <a name="operator_id2d1lineargradientbrush_star"></a>CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush *  
 Restituisce l'interfaccia ID2D1LinearGradientBrush  
  
```  
operator ID2D1LinearGradientBrush*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1LinearGradientBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="setendpoint"></a>CD2DLinearGradientBrush::setEndPoint  
 Imposta le coordinate finale della sfumatura lineare nello spazio delle coordinate del pennello.  
  
```  
void SetEndPoint(CD2DPointF point);
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Le coordinate bidimensionali finali della sfumatura lineare, nello spazio delle coordinate del pennello.  
  
##  <a name="setstartpoint"></a>CD2DLinearGradientBrush::SetStartPoint  
 Imposta le coordinate di iniziale della sfumatura lineare nello spazio delle coordinate del pennello.  
  
```  
void SetStartPoint(CD2DPointF point);
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Le coordinate bidimensionali iniziali della sfumatura lineare, nello spazio delle coordinate del pennello.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

