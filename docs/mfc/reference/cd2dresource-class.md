---
title: Classe CD2DResource | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CD2DResource [MFC], CD2DResource
- CD2DResource [MFC], Create
- CD2DResource [MFC], Destroy
- CD2DResource [MFC], IsValid
- CD2DResource [MFC], IsAutoDestroy
- CD2DResource [MFC], ReCreate
- CD2DResource [MFC], m_bIsAutoDestroy
- CD2DResource [MFC], m_pParentTarget
ms.assetid: 34e3ee18-aab6-4c39-9294-de869e1f7820
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1848e0fe6d3e09ea4707279e83293ae2dc0feb64
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950677"
---
# <a name="cd2dresource-class"></a>Classe CD2DResource
Una classe astratta che fornisce un'interfaccia per la creazione e la gestione delle risorse D2D, ad esempio pennelli, livelli e testi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DResource : public CObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::CD2DResource](#cd2dresource)|Costruisce un oggetto CD2DResource.|  
|[CD2DResource:: ~ CD2DResource](#cd2dresource__~cd2dresource)|Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto della risorsa D2D.|  
  
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
|[CD2DResource:: ReCreate](#recreate)|Ricrea un CD2DResource.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CD2DResource::m_bIsAutoDestroy](#m_bisautodestroy)|Risorsa verrà eliminata dal proprietario (CRenderTarget)|  
|[CD2DResource::m_pParentTarget](#m_pparenttarget)|Puntatore all'elemento padre CRenderTarget)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CD2DResource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dresource"></a>  CD2DResource:: ~ CD2DResource  
 Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto della risorsa D2D.  
  
```  
virtual ~CD2DResource();
```  
  
##  <a name="cd2dresource"></a>  CD2DResource::CD2DResource  
 Costruisce un oggetto CD2DResource.  
  
```  
CD2DResource(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy);
```  
  
### <a name="parameters"></a>Parametri  
 *pParentTarget*  
 Puntatore alla destinazione di rendering.  
  
 *flag bAutoDestroy*  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="create"></a>  CD2DResource:: Create  
 Crea un CD2DResource.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *pRenderTarget*  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituirà un codice di errore HRESULT.  
  
##  <a name="destroy"></a>  CD2DResource:: Destroy  
 Elimina un oggetto CD2DResource.  
  
```  
virtual void Destroy() = 0;  
```  
  
##  <a name="isautodestroy"></a>  CD2DResource::IsAutoDestroy  
 Controllare il flag l'eliminazione.  
  
```  
BOOL IsAutoDestroy() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'oggetto verrà eliminato dal relativo proprietario. in caso contrario, FALSE.  
  
##  <a name="isvalid"></a>  CD2DResource:: IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const = 0;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario, FALSE.  
  
##  <a name="m_bisautodestroy"></a>  CD2DResource::m_bIsAutoDestroy  
 Risorsa verrà eliminata dal proprietario (CRenderTarget)  
  
```  
BOOL m_bIsAutoDestroy;  
```  
  
##  <a name="m_pparenttarget"></a>  CD2DResource::m_pParentTarget  
 Puntatore all'elemento padre CRenderTarget)  
  
```  
CRenderTarget* m_pParentTarget;  
```  
  
##  <a name="recreate"></a>  CD2DResource:: ReCreate  
 Ricrea un CD2DResource.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* pRenderTarget);
```  
  
### <a name="parameters"></a>Parametri  
 *pRenderTarget*  
 Puntatore alla destinazione di rendering.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituirà un codice di errore HRESULT.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
