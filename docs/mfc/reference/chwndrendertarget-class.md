---
title: Classe CHwndRenderTarget | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::Attach
- AFXRENDERTARGET/CHwndRenderTarget::CheckWindowState
- AFXRENDERTARGET/CHwndRenderTarget::Create
- AFXRENDERTARGET/CHwndRenderTarget::Detach
- AFXRENDERTARGET/CHwndRenderTarget::GetHwnd
- AFXRENDERTARGET/CHwndRenderTarget::GetHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::ReCreate
- AFXRENDERTARGET/CHwndRenderTarget::Resize
- AFXRENDERTARGET/CHwndRenderTarget::m_pHwndRenderTarget
dev_langs:
- C++
helpviewer_keywords:
- CHwndRenderTarget [MFC], CHwndRenderTarget
- CHwndRenderTarget [MFC], Attach
- CHwndRenderTarget [MFC], CheckWindowState
- CHwndRenderTarget [MFC], Create
- CHwndRenderTarget [MFC], Detach
- CHwndRenderTarget [MFC], GetHwnd
- CHwndRenderTarget [MFC], GetHwndRenderTarget
- CHwndRenderTarget [MFC], ReCreate
- CHwndRenderTarget [MFC], Resize
- CHwndRenderTarget [MFC], m_pHwndRenderTarget
ms.assetid: aa65b69f-7202-46ea-af81-ef325da0b840
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0e0962d4a0c97db27f7d5ae31ec58eb26f20a7f7
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038393"
---
# <a name="chwndrendertarget-class"></a>Classe CHwndRenderTarget
Wrapper per ID2D1HwndRenderTarget.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHwndRenderTarget : public CRenderTarget;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::CHwndRenderTarget](#chwndrendertarget)|Costruisce un oggetto CHwndRenderTarget da HWND.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::Attach](#attach)|Associa esistenti di eseguire il rendering dell'interfaccia di destinazione per l'oggetto|  
|[CHwndRenderTarget::CheckWindowState](#checkwindowstate)|Indica se l'HWND associato a questa destinazione di rendering è nascosto.|  
|[CHwndRenderTarget::Create](#create)|Crea una destinazione di rendering associata alla finestra|  
|[CHwndRenderTarget::Detach](#detach)|Disconnette l'interfaccia di destinazione di rendering dall'oggetto|  
|[CHwndRenderTarget::GetHwnd](#gethwnd)|Restituisce l'HWND associato a questa destinazione di rendering.|  
|[CHwndRenderTarget::GetHwndRenderTarget](#gethwndrendertarget)|Restituisce l'interfaccia ID2D1HwndRenderTarget.|  
|[CHwndRenderTarget::ReCreate](#recreate)|Consente di ricreare una destinazione di rendering associata alla finestra|  
|[CHwndRenderTarget::Resize](#resize)|Modifica la dimensione di destinazione di rendering per le dimensioni di pixel specificato|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::operator ID2D1HwndRenderTarget *](#operator_id2d1hwndrendertarget_star)|Restituisce l'interfaccia ID2D1HwndRenderTarget.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::m_pHwndRenderTarget](#m_phwndrendertarget)|Un puntatore a un oggetto ID2D1HwndRenderTarget.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CHwndRenderTarget](../../mfc/reference/chwndrendertarget-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="attach"></a>  CHwndRenderTarget::Attach  
 Associa esistenti di eseguire il rendering dell'interfaccia di destinazione per l'oggetto  
  
```  
void Attach(ID2D1HwndRenderTarget* pTarget);
```  
  
### <a name="parameters"></a>Parametri  
 *pTarget*  
 Interfaccia destinazione di rendering esistente. Non può essere NULL  
  
##  <a name="checkwindowstate"></a>  CHwndRenderTarget::CheckWindowState  
 Indica se l'HWND associato a questa destinazione di rendering è nascosto.  
  
```  
D2D1_WINDOW_STATE CheckWindowState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica se l'HWND associato a questa destinazione di rendering è nascosto.  
  
##  <a name="chwndrendertarget"></a>  CHwndRenderTarget::CHwndRenderTarget  
 Costruisce un oggetto CHwndRenderTarget da HWND.  
  
```  
CHwndRenderTarget(HWND hwnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *HWND*  
 HWND associato a questa destinazione di rendering  
  
##  <a name="create"></a>  CHwndRenderTarget::Create  
 Crea una destinazione di rendering associata alla finestra  
  
```  
BOOL Create(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *hWnd*  
 HWND associato a questa destinazione di rendering  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE  
  
##  <a name="detach"></a>  CHwndRenderTarget::Detach  
 Disconnette l'interfaccia di destinazione di rendering dall'oggetto  
  
```  
ID2D1HwndRenderTarget* Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a scollegato interfaccia destinazione di rendering.  
  
##  <a name="gethwnd"></a>  CHwndRenderTarget::GetHwnd  
 Restituisce l'HWND associato a questa destinazione di rendering.  
  
```  
HWND GetHwnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 HWND associato a questa destinazione di rendering.  
  
##  <a name="gethwndrendertarget"></a>  CHwndRenderTarget::GetHwndRenderTarget  
 Restituisce l'interfaccia ID2D1HwndRenderTarget.  
  
```  
ID2D1HwndRenderTarget* GetHwndRenderTarget();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1HwndRenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="m_phwndrendertarget"></a>  CHwndRenderTarget::m_pHwndRenderTarget  
 Un puntatore a un oggetto ID2D1HwndRenderTarget.  
  
```  
ID2D1HwndRenderTarget* m_pHwndRenderTarget;  
```  
  
##  <a name="operator_id2d1hwndrendertarget_star"></a>  CHwndRenderTarget::operator ID2D1HwndRenderTarget *  
 Restituisce l'interfaccia ID2D1HwndRenderTarget.  
  
```  
operator ID2D1HwndRenderTarget*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia ID2D1HwndRenderTarget o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="recreate"></a>  CHwndRenderTarget::ReCreate  
 Consente di ricreare una destinazione di rendering associata alla finestra  
  
```  
BOOL ReCreate(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *hWnd*  
 HWND associato a questa destinazione di rendering  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
##  <a name="resize"></a>  CHwndRenderTarget::Resize  
 Modifica la dimensione di destinazione di rendering per le dimensioni di pixel specificato  
  
```  
BOOL Resize(const CD2DSizeU& size);
```  
  
### <a name="parameters"></a>Parametri  
 *size*  
 Le nuove dimensioni della destinazione di rendering in pixel del dispositivo  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
