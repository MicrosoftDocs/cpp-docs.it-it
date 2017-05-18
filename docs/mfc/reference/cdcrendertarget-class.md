---
title: Classe CDCRenderTarget | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget::CDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget::Attach
- AFXRENDERTARGET/CDCRenderTarget::BindDC
- AFXRENDERTARGET/CDCRenderTarget::Create
- AFXRENDERTARGET/CDCRenderTarget::Detach
- AFXRENDERTARGET/CDCRenderTarget::GetDCRenderTarget
- AFXRENDERTARGET/CDCRenderTarget::m_pDCRenderTarget
dev_langs:
- C++
helpviewer_keywords:
- CDCRenderTarget class
ms.assetid: aa8059c9-08e6-49e4-9b8c-00fa54077a61
caps.latest.revision: 16
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 2bbd62b06f4287904fce49f8a6ce9900476b07c0
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cdcrendertarget-class"></a>Classe CDCRenderTarget
Un wrapper per ID2D1DCRenderTarget.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDCRenderTarget : public CRenderTarget;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDCRenderTarget::CDCRenderTarget](#cdcrendertarget)|Costruisce un oggetto CDCRenderTarget.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDCRenderTarget::Attach](#attach)|Consente di collegare esistente eseguire il rendering di interfaccia di destinazione per l'oggetto|  
|[CDCRenderTarget::BindDC](#binddc)|Associa la destinazione di rendering per il contesto di dispositivo a cui emette comandi di disegno|  
|[CDCRenderTarget::Create](#create)|Crea un CDCRenderTarget.|  
|[CDCRenderTarget::Detach](#detach)|Disconnette l'interfaccia di destinazione di rendering dall'oggetto|  
|[CDCRenderTarget::GetDCRenderTarget](#getdcrendertarget)|Restituisce l'interfaccia ID2D1DCRenderTarget|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDCRenderTarget::operator ID2D1DCRenderTarget *](#operator_id2d1dcrendertarget_star)|Restituisce l'interfaccia ID2D1DCRenderTarget|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDCRenderTarget::m_pDCRenderTarget](#m_pdcrendertarget)|Un puntatore a un oggetto ID2D1DCRenderTarget.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="attach"></a>CDCRenderTarget::Attach  
 Consente di collegare esistente eseguire il rendering di interfaccia di destinazione per l'oggetto  
  
```  
void Attach(ID2D1DCRenderTarget* pTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pTarget`  
 Interfaccia di destinazione di rendering esistente. Non può essere NULL  
  
##  <a name="binddc"></a>CDCRenderTarget::BindDC  
 Associa la destinazione di rendering per il contesto di dispositivo a cui emette comandi di disegno  
  
```  
BOOL BindDC(
    const CDC& dc,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `dc`  
 Il contesto di dispositivo a cui la destinazione di rendering emette comandi di disegno  
  
 `rect`  
 Le dimensioni dell'handle per un contesto di dispositivo (HDC) a cui è associata la destinazione di rendering  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="cdcrendertarget"></a>CDCRenderTarget::CDCRenderTarget  
 Costruisce un oggetto CDCRenderTarget.  
  
```  
CDCRenderTarget();
```  
  
##  <a name="create"></a>CDCRenderTarget::Create  
 Crea un CDCRenderTarget.  
  
```  
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```  
  
### <a name="parameters"></a>Parametri  
 `props`  
 La modalità di rendering, formato pixel, opzioni di .NET remoting, informazioni DPI e il supporto DirectX minimo richiesto per il rendering hardware.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="detach"></a>CDCRenderTarget::Detach  
 Disconnette l'interfaccia di destinazione di rendering dall'oggetto  
  
```  
ID2D1DCRenderTarget* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a scollegato interfaccia destinazione di rendering.  
  
##  <a name="getdcrendertarget"></a>CDCRenderTarget::GetDCRenderTarget  
 Restituisce l'interfaccia ID2D1DCRenderTarget  
  
```  
ID2D1DCRenderTarget* GetDCRenderTarget();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="m_pdcrendertarget"></a>CDCRenderTarget::m_pDCRenderTarget  
 Un puntatore a un oggetto ID2D1DCRenderTarget.  
  
```  
ID2D1DCRenderTarget* m_pDCRenderTarget;  
```  
  
##  <a name="operator_id2d1dcrendertarget_star"></a>CDCRenderTarget::operator ID2D1DCRenderTarget *  
 Restituisce l'interfaccia ID2D1DCRenderTarget  
  
```  
operator ID2D1DCRenderTarget*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

