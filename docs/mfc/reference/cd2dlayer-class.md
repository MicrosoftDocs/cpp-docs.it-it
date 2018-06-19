---
title: Classe CD2DLayer | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CD2DLayer
- AFXRENDERTARGET/CD2DLayer
- AFXRENDERTARGET/CD2DLayer::CD2DLayer
- AFXRENDERTARGET/CD2DLayer::Attach
- AFXRENDERTARGET/CD2DLayer::Create
- AFXRENDERTARGET/CD2DLayer::Destroy
- AFXRENDERTARGET/CD2DLayer::Detach
- AFXRENDERTARGET/CD2DLayer::Get
- AFXRENDERTARGET/CD2DLayer::GetSize
- AFXRENDERTARGET/CD2DLayer::IsValid
- AFXRENDERTARGET/CD2DLayer::m_pLayer
dev_langs:
- C++
helpviewer_keywords:
- CD2DLayer [MFC], CD2DLayer
- CD2DLayer [MFC], Attach
- CD2DLayer [MFC], Create
- CD2DLayer [MFC], Destroy
- CD2DLayer [MFC], Detach
- CD2DLayer [MFC], Get
- CD2DLayer [MFC], GetSize
- CD2DLayer [MFC], IsValid
- CD2DLayer [MFC], m_pLayer
ms.assetid: 2f96378e-66bb-40d1-9661-6afe324de3c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 197fc5ecb1b9676dd1ff11327c62950992f6f06d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33359229"
---
# <a name="cd2dlayer-class"></a>Classe CD2DLayer
Wrapper per ID2D1Layer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DLayer : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::CD2DLayer](#cd2dlayer)|Costruisce un oggetto CD2DLayer.|  
|[CD2DLayer:: ~ CD2DLayer](#_dtorcd2dlayer)|Distruttore. Chiamato quando viene eliminato un oggetto di livello D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::Attach](#attach)|Collega a esistente di interfaccia di risorsa per l'oggetto|  
|[CD2DLayer::Create](#create)|Crea un CD2DLayer. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DLayer::Destroy](#destroy)|Elimina un oggetto CD2DLayer. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DLayer::Detach](#detach)|Disconnette l'interfaccia di risorsa dall'oggetto|  
|[CD2DLayer::Get](#get)|Restituisce l'interfaccia ID2D1Layer|  
|[CD2DLayer::GetSize](#getsize)|Restituisce le dimensioni della destinazione di rendering in pixel indipendenti dal dispositivo|  
|[CD2DLayer::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::operator ID2D1Layer *](#operator_id2d1layer_star)|Restituisce l'interfaccia ID2D1Layer|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::m_pLayer](#m_player)|Archivia un puntatore a un oggetto ID2D1Layer.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 `CD2DLayer`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dlayer"></a>  CD2DLayer:: ~ CD2DLayer  
 Distruttore. Chiamato quando viene eliminato un oggetto di livello D2D.  
  
```  
virtual ~CD2DLayer();
```  
  
##  <a name="attach"></a>  CD2DLayer::Attach  
 Collega a esistente di interfaccia di risorsa per l'oggetto  
  
```  
void Attach(ID2D1Layer* pResource);
```  
  
### <a name="parameters"></a>Parametri  
 `pResource`  
 Interfaccia della risorsa esistente. Non può essere NULL  
  
##  <a name="cd2dlayer"></a>  CD2DLayer::CD2DLayer  
 Costruisce un oggetto CD2DLayer.  
  
```  
CD2DLayer(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="create"></a>  CD2DLayer::Create  
 Crea un CD2DLayer.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>  CD2DLayer::Destroy  
 Elimina un oggetto CD2DLayer.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>  CD2DLayer::Detach  
 Disconnette l'interfaccia di risorsa dall'oggetto  
  
```  
ID2D1Layer* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia risorse scollegato.  
  
##  <a name="get"></a>  CD2DLayer::Get  
 Restituisce l'interfaccia ID2D1Layer  
  
```  
ID2D1Layer* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Layer o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getsize"></a>  CD2DLayer::GetSize  
 Restituisce le dimensioni della destinazione di rendering in pixel indipendenti dal dispositivo  
  
```  
CD2DSizeF GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La dimensione corrente della destinazione di rendering in pixel indipendenti dal dispositivo  
  
##  <a name="isvalid"></a>  CD2DLayer::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="m_player"></a>  CD2DLayer::m_pLayer  
 Archivia un puntatore a un oggetto ID2D1Layer.  
  
```  
ID2D1Layer* m_pLayer;  
```  
  
##  <a name="operator_id2d1layer_star"></a>  CD2DLayer::operator ID2D1Layer *  
 Restituisce l'interfaccia ID2D1Layer  
  
```  
operator ID2D1Layer* ();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1Layer o NULL se l'oggetto non è ancora inizializzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
