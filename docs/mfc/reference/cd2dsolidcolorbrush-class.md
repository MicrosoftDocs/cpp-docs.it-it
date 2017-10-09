---
title: Classe CD2DSolidColorBrush | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DSolidColorBrush
- AFXRENDERTARGET/CD2DSolidColorBrush
- AFXRENDERTARGET/CD2DSolidColorBrush::CD2DSolidColorBrush
- AFXRENDERTARGET/CD2DSolidColorBrush::Attach
- AFXRENDERTARGET/CD2DSolidColorBrush::Create
- AFXRENDERTARGET/CD2DSolidColorBrush::Destroy
- AFXRENDERTARGET/CD2DSolidColorBrush::Detach
- AFXRENDERTARGET/CD2DSolidColorBrush::Get
- AFXRENDERTARGET/CD2DSolidColorBrush::GetColor
- AFXRENDERTARGET/CD2DSolidColorBrush::SetColor
- AFXRENDERTARGET/CD2DSolidColorBrush::m_colorSolid
- AFXRENDERTARGET/CD2DSolidColorBrush::m_pSolidColorBrush
dev_langs:
- C++
helpviewer_keywords:
- CD2DSolidColorBrush [MFC], CD2DSolidColorBrush
- CD2DSolidColorBrush [MFC], Attach
- CD2DSolidColorBrush [MFC], Create
- CD2DSolidColorBrush [MFC], Destroy
- CD2DSolidColorBrush [MFC], Detach
- CD2DSolidColorBrush [MFC], Get
- CD2DSolidColorBrush [MFC], GetColor
- CD2DSolidColorBrush [MFC], SetColor
- CD2DSolidColorBrush [MFC], m_colorSolid
- CD2DSolidColorBrush [MFC], m_pSolidColorBrush
ms.assetid: d4506637-acce-4f74-8a9b-f0a45571a735
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 9c381ae5d20c3bfe6cc34f2279c1868cd693670b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dsolidcolorbrush-class"></a>Classe CD2DSolidColorBrush
Wrapper per ID2D1SolidColorBrush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DSolidColorBrush : public CD2DBrush;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::CD2DSolidColorBrush](#cd2dsolidcolorbrush)|Di overload. Costruisce un oggetto CD2DSolidColorBrush.|  
|[CD2DSolidColorBrush:: ~ CD2DSolidColorBrush](#cd2dsolidcolorbrush__~cd2dsolidcolorbrush)|Distruttore. Chiamato quando viene eliminato un oggetto pennello tinta unita D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DSolidColorBrush::Create](#create)|Crea un CD2DSolidColorBrush. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DSolidColorBrush::Destroy](#destroy)|Elimina un oggetto CD2DSolidColorBrush. (Esegue l'override [CD2DBrush:: Destroy](../../mfc/reference/cd2dbrush-class.md#destroy).)|  
|[CD2DSolidColorBrush::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DSolidColorBrush::Get](#get)|Restituisce l'interfaccia ID2D1SolidColorBrush|  
|[CD2DSolidColorBrush::getColor](#getcolor)|Recupera il colore del pennello tinta unita|  
|[CD2DSolidColorBrush::setColor](#setcolor)|Specifica il colore del pennello tinta unita|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::operator ID2D1SolidColorBrush *](#operator_id2d1solidcolorbrush_star)|Restituisce l'interfaccia ID2D1SolidColorBrush|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::m_colorSolid](#m_colorsolid)|Pennello tinta unita.|  
|[CD2DSolidColorBrush::m_pSolidColorBrush](#m_psolidcolorbrush)|Archivia un puntatore a un oggetto ID2D1SolidColorBrush.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DSolidColorBrush](../../mfc/reference/cd2dsolidcolorbrush-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dsolidcolorbrush"></a>CD2DSolidColorBrush:: ~ CD2DSolidColorBrush  
 Distruttore. Chiamato quando viene eliminato un oggetto pennello tinta unita D2D.  
  
```  
virtual ~CD2DSolidColorBrush();
```  
  
##  <a name="attach"></a>CD2DSolidColorBrush::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1SolidColorBrush* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dsolidcolorbrush"></a>CD2DSolidColorBrush::CD2DSolidColorBrush  
 Costruisce un oggetto CD2DSolidColorBrush.  
  
```  
CD2DSolidColorBrush(
    CRenderTarget* pParentTarget,  
    D2D1_COLOR_F color,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);

 
CD2DSolidColorBrush(
    CRenderTarget* pParentTarget,  
    COLORREF color,  
    int nAlpha = 255,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `color`  
 I valori di rossi, verdi, blu e alfa del colore del pennello.  
  
 `pBrushProperties`  
 Puntatore a una trasformazione di un pennello e di opacità.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
 `nAlpha`  
 L'opacità del colore del pennello.  
  
##  <a name="create"></a>CD2DSolidColorBrush::Create  
 Crea un CD2DSolidColorBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DSolidColorBrush::Destroy  
 Elimina un oggetto CD2DSolidColorBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>CD2DSolidColorBrush::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1SolidColorBrush* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="get"></a>CD2DSolidColorBrush::Get  
 Restituisce l'interfaccia ID2D1SolidColorBrush  
  
```  
ID2D1SolidColorBrush* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1SolidColorBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getcolor"></a>CD2DSolidColorBrush::getColor  
 Recupera il colore del pennello tinta unita  
  
```  
D2D1_COLOR_F GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore del pennello tinta unita  
  
##  <a name="m_colorsolid"></a>CD2DSolidColorBrush::m_colorSolid  
 Pennello tinta unita.  
  
```  
D2D1_COLOR_F m_colorSolid;  
```  
  
##  <a name="m_psolidcolorbrush"></a>CD2DSolidColorBrush::m_pSolidColorBrush  
 Archivia un puntatore a un oggetto ID2D1SolidColorBrush.  
  
```  
ID2D1SolidColorBrush* m_pSolidColorBrush;  
```  
  
##  <a name="operator_id2d1solidcolorbrush_star"></a>CD2DSolidColorBrush::operator ID2D1SolidColorBrush *  
 Restituisce l'interfaccia ID2D1SolidColorBrush  
  
```  
operator ID2D1SolidColorBrush*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1SolidColorBrush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="setcolor"></a>CD2DSolidColorBrush::setColor  
 Specifica il colore del pennello tinta unita  
  
```  
void SetColor(D2D1_COLOR_F color);
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Il colore del pennello tinta unita  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

