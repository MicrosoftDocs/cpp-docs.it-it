---
title: Classe CDCRenderTarget | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CDCRenderTarget [MFC], CDCRenderTarget
- CDCRenderTarget [MFC], Attach
- CDCRenderTarget [MFC], BindDC
- CDCRenderTarget [MFC], Create
- CDCRenderTarget [MFC], Detach
- CDCRenderTarget [MFC], GetDCRenderTarget
- CDCRenderTarget [MFC], m_pDCRenderTarget
ms.assetid: aa8059c9-08e6-49e4-9b8c-00fa54077a61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4129f57d8985a6e3368a4caf3574669342f06bc0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33366473"
---
# <a name="cdcrendertarget-class"></a>Classe CDCRenderTarget
Wrapper per ID2D1DCRenderTarget.  
  
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
|[CDCRenderTarget::Attach](#attach)|Collega a esistente di eseguire il rendering dell'interfaccia di destinazione per l'oggetto|  
|[CDCRenderTarget::BindDC](#binddc)|Associa la destinazione di rendering per il contesto di dispositivo a cui esegue i comandi di disegno|  
|[CDCRenderTarget::Create](#create)|Crea un CDCRenderTarget.|  
|[CDCRenderTarget::Detach](#detach)|Disconnette l'interfaccia di destinazione di rendering dall'oggetto|  
|[CDCRenderTarget::GetDCRenderTarget](#getdcrendertarget)|Restituisce l'interfaccia ID2D1DCRenderTarget|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDCRenderTarget::operator ID2D1DCRenderTarget *](#operator_id2d1dcrendertarget_star)|Restituisce l'interfaccia ID2D1DCRenderTarget|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CDCRenderTarget::m_pDCRenderTarget](#m_pdcrendertarget)|Un puntatore a un oggetto ID2D1DCRenderTarget.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CDCRenderTarget](../../mfc/reference/cdcrendertarget-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="attach"></a>  CDCRenderTarget::Attach  
 Collega a esistente di eseguire il rendering dell'interfaccia di destinazione per l'oggetto  
  
```  
void Attach(ID2D1DCRenderTarget* pTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pTarget`  
 Interfaccia destinazione di rendering esistente. Non può essere NULL  
  
##  <a name="binddc"></a>  CDCRenderTarget::BindDC  
 Associa la destinazione di rendering per il contesto di dispositivo a cui esegue i comandi di disegno  
  
```  
BOOL BindDC(
    const CDC& dc,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `dc`  
 Il contesto di dispositivo a cui la destinazione di rendering esegue i comandi di disegno  
  
 `rect`  
 Le dimensioni dell'handle per un contesto di dispositivo (HDC) a cui è associata la destinazione di rendering  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="cdcrendertarget"></a>  CDCRenderTarget::CDCRenderTarget  
 Costruisce un oggetto CDCRenderTarget.  
  
```  
CDCRenderTarget();
```  
  
##  <a name="create"></a>  CDCRenderTarget::Create  
 Crea un CDCRenderTarget.  
  
```  
BOOL Create(const D2D1_RENDER_TARGET_PROPERTIES& props);
```  
  
### <a name="parameters"></a>Parametri  
 `props`  
 La modalità di rendering, il formato di pixel, opzioni di comunicazione remota, informazioni DPI e il supporto di DirectX minimo richiesto per il rendering hardware.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="detach"></a>  CDCRenderTarget::Detach  
 Disconnette l'interfaccia di destinazione di rendering dall'oggetto  
  
```  
ID2D1DCRenderTarget* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a scollegare l'interfaccia di destinazione di rendering.  
  
##  <a name="getdcrendertarget"></a>  CDCRenderTarget::GetDCRenderTarget  
 Restituisce l'interfaccia ID2D1DCRenderTarget  
  
```  
ID2D1DCRenderTarget* GetDCRenderTarget();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="m_pdcrendertarget"></a>  CDCRenderTarget::m_pDCRenderTarget  
 Un puntatore a un oggetto ID2D1DCRenderTarget.  
  
```  
ID2D1DCRenderTarget* m_pDCRenderTarget;  
```  
  
##  <a name="operator_id2d1dcrendertarget_star"></a>  CDCRenderTarget::operator ID2D1DCRenderTarget *  
 Restituisce l'interfaccia ID2D1DCRenderTarget  
  
```  
operator ID2D1DCRenderTarget*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1DCRenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
