---
title: Classe CD2DBrush | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DBrush
- AFXRENDERTARGET/CD2DBrush
- AFXRENDERTARGET/CD2DBrush::CD2DBrush
- AFXRENDERTARGET/CD2DBrush::Attach
- AFXRENDERTARGET/CD2DBrush::Destroy
- AFXRENDERTARGET/CD2DBrush::Detach
- AFXRENDERTARGET/CD2DBrush::Get
- AFXRENDERTARGET/CD2DBrush::GetOpacity
- AFXRENDERTARGET/CD2DBrush::GetTransform
- AFXRENDERTARGET/CD2DBrush::IsValid
- AFXRENDERTARGET/CD2DBrush::SetOpacity
- AFXRENDERTARGET/CD2DBrush::SetTransform
- AFXRENDERTARGET/CD2DBrush::m_pBrush
- AFXRENDERTARGET/CD2DBrush::m_pBrushProperties
dev_langs:
- C++
helpviewer_keywords:
- CD2DBrush [MFC], CD2DBrush
- CD2DBrush [MFC], Attach
- CD2DBrush [MFC], Destroy
- CD2DBrush [MFC], Detach
- CD2DBrush [MFC], Get
- CD2DBrush [MFC], GetOpacity
- CD2DBrush [MFC], GetTransform
- CD2DBrush [MFC], IsValid
- CD2DBrush [MFC], SetOpacity
- CD2DBrush [MFC], SetTransform
- CD2DBrush [MFC], m_pBrush
- CD2DBrush [MFC], m_pBrushProperties
ms.assetid: 0d2c0857-2261-48a8-8ee0-a88cbf08499a
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 9dc27dbe16701432e0e51a3c4fda9075dd4b7a83
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dbrush-class"></a>Classe CD2DBrush
Wrapper per ID2D1Brush.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DBrush : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::CD2DBrush](#cd2dbrush)|Costruisce un oggetto CD2DBrush.|  
|[CD2DBrush:: ~ CD2DBrush](#_dtorcd2dbrush)|Distruttore. Chiamato quando viene eliminato un oggetto brush D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DBrush:: Destroy](#destroy)|Elimina un oggetto CD2DBrush. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DBrush::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DBrush::Get](#get)|Restituisce l'interfaccia ID2D1Brush|  
|[CD2DBrush::GetOpacity](#getopacity)|Ottiene il livello di opacità del pennello|  
|[CD2DBrush::GetTransform](#gettransform)|Ottiene la trasformazione corrente della destinazione di rendering|  
|[CD2DBrush::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DBrush::SetOpacity](#setopacity)|Imposta il livello di opacità del pennello|  
|[CD2DBrush::setTransform](#settransform)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::operator ID2D1Brush *](#operator_id2d1brush_star)|Restituisce l'interfaccia ID2D1Brush|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::m_pBrush](#m_pbrush)|Archivia un puntatore a un oggetto ID2D1Brush.|  
|[CD2DBrush::m_pBrushProperties](#m_pbrushproperties)|Proprietà dei pennelli.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 `CD2DBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dbrush"></a>CD2DBrush:: ~ CD2DBrush  
 Distruttore. Chiamato quando viene eliminato un oggetto brush D2D.  
  
```  
virtual ~CD2DBrush();
```  
  
##  <a name="attach"></a>CD2DBrush::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1Brush* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dbrush"></a>CD2DBrush::CD2DBrush  
 Costruisce un oggetto CD2DBrush.  
  
```  
CD2DBrush(
    CRenderTarget* pParentTarget,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `pBrushProperties`  
 Puntatore a una trasformazione di un pennello e di opacità.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="destroy"></a>CD2DBrush:: Destroy  
 Elimina un oggetto CD2DBrush.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>CD2DBrush::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1Brush* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="get"></a>CD2DBrush::Get  
 Restituisce l'interfaccia ID2D1Brush  
  
```  
ID2D1Brush* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getopacity"></a>CD2DBrush::GetOpacity  
 Ottiene il livello di opacità del pennello  
  
```  
FLOAT GetOpacity() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che viene ridimensionata in modo lineare in valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità sono compresi nell'intervallo da 0 a 1 prima che vengano moltiplicati insieme  
  
##  <a name="gettransform"></a>CD2DBrush::GetTransform  
 Ottiene la trasformazione corrente della destinazione di rendering  
  
```  
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `transform`  
 Quando viene restituito, contiene la trasformazione corrente della destinazione di rendering. Questo parametro viene passato non inizializzato  
  
##  <a name="isvalid"></a>CD2DBrush::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="m_pbrush"></a>CD2DBrush::m_pBrush  
 Archivia un puntatore a un oggetto ID2D1Brush.  
  
```  
ID2D1Brush* m_pBrush;  
```  
  
##  <a name="m_pbrushproperties"></a>CD2DBrush::m_pBrushProperties  
 Proprietà dei pennelli.  
  
```  
CD2DBrushProperties* m_pBrushProperties;  
```  
  
##  <a name="operator_id2d1brush_star"></a>CD2DBrush::operator ID2D1Brush *  
 Restituisce l'interfaccia ID2D1Brush  
  
```  
operator ID2D1Brush*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Brush o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="setopacity"></a>CD2DBrush::SetOpacity  
 Imposta il livello di opacità del pennello  
  
```  
void SetOpacity(FLOAT opacity);
```  
  
### <a name="parameters"></a>Parametri  
 `opacity`  
 Un valore compreso tra 0 e 1 che indica l'opacità del pennello. Questo valore è un moltiplicatore costante che viene ridimensionata in modo lineare in valore alfa di tutti i pixel riempiti dal pennello. I valori di opacità sono compresi nell'intervallo da 0 a 1 prima che vengano moltiplicati insieme  
  
##  <a name="settransform"></a>CD2DBrush::setTransform  
 Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente. Tutte le operazioni di disegnare successive si verificano nello spazio trasformato  
  
```  
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```  
  
### <a name="parameters"></a>Parametri  
 `transform`  
 La trasformazione da applicare alla destinazione di rendering  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
