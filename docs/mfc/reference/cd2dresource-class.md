---
title: Classe CD2DResource | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DResource
- AFXRENDERTARGET/CD2DResource
- AFXRENDERTARGET/CD2DResource::CD2DResource
- AFXRENDERTARGET/CD2DResource::Create
- AFXRENDERTARGET/CD2DResource::Destroy
- AFXRENDERTARGET/CD2DResource::IsValid
- AFXRENDERTARGET/CD2DResource::IsAutoDestroy
- AFXRENDERTARGET/CD2DResource::ReCreate
- AFXRENDERTARGET/CD2DResource::m_bIsAutoDestroy
- AFXRENDERTARGET/CD2DResource::m_pParentTarget
dev_langs:
- C++
helpviewer_keywords:
- CD2DResource class
ms.assetid: 34e3ee18-aab6-4c39-9294-de869e1f7820
caps.latest.revision: 18
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
ms.openlocfilehash: b5a357a3653e2126de85b21efddca881c6c43a09
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dresource-class"></a>Classe CD2DResource
Classe astratta che fornisce un'interfaccia per la creazione e la gestione delle risorse D2D, ad esempio pennelli, livelli e testi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DResource : public CObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::CD2DResource](#cd2dresource)|Costruisce un oggetto CD2DResource.|  
|[CD2DResource:: ~ CD2DResource](#cd2dresource__~cd2dresource)|Distruttore. Chiamato quando viene eliminato un oggetto risorsa D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource:: Create](#create)|Crea un CD2DResource.|  
|[CD2DResource:: Destroy](#destroy)|Elimina un oggetto CD2DResource.|  
|[CD2DResource:: IsValid](#isvalid)|Verifica la validità della risorsa|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::IsAutoDestroy](#isautodestroy)|Controllare il flag l'eliminazione.|  
|[CD2DResource:: ReCreate](#recreate)|Consente di ricreare un CD2DResource.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::m_bIsAutoDestroy](#m_bisautodestroy)|Risorsa verrà eliminata dal proprietario (CRenderTarget)|  
|[CD2DResource::m_pParentTarget](#m_pparenttarget)|Puntatore all'oggetto padre CRenderTarget)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CD2DResource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dresource"></a>CD2DResource:: ~ CD2DResource  
 Distruttore. Chiamato quando viene eliminato un oggetto risorsa D2D.  
  
```  
virtual ~CD2DResource();
```  
  
##  <a name="cd2dresource"></a>CD2DResource::CD2DResource  
 Costruisce un oggetto CD2DResource.  
  
```  
CD2DResource(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminata dal proprietario (pParentTarget).  
  
##  <a name="create"></a>CD2DResource:: Create  
 Crea un CD2DResource.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DResource:: Destroy  
 Elimina un oggetto CD2DResource.  
  
```  
virtual void Destroy() = 0;  
```  
  
##  <a name="isautodestroy"></a>CD2DResource::IsAutoDestroy  
 Controllare il flag l'eliminazione.  
  
```  
BOOL IsAutoDestroy() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'oggetto verrà eliminata dal relativo proprietario; in caso contrario FALSE.  
  
##  <a name="isvalid"></a>CD2DResource:: IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="m_bisautodestroy"></a>CD2DResource::m_bIsAutoDestroy  
 Risorsa verrà eliminata dal proprietario (CRenderTarget)  
  
```  
BOOL m_bIsAutoDestroy;  
```  
  
##  <a name="m_pparenttarget"></a>CD2DResource::m_pParentTarget  
 Puntatore all'oggetto padre CRenderTarget)  
  
```  
CRenderTarget* m_pParentTarget;  
```  
  
##  <a name="recreate"></a>CD2DResource:: ReCreate  
 Consente di ricreare un CD2DResource.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pRenderTarget`  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

