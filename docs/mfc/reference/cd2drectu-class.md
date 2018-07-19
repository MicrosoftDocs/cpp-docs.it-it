---
title: Classe CD2DRectU | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CD2DRectU
- AFXRENDERTARGET/CD2DRectU
- AFXRENDERTARGET/CD2DRectU::CD2DRectU
- AFXRENDERTARGET/CD2DRectU::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DRectU [MFC], CD2DRectU
- CD2DRectU [MFC], IsNull
ms.assetid: a62f17d1-011d-4867-8f51-fd7e7c00561d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6e054c23d2137f5802c17731fac86dd64080389e
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336474"
---
# <a name="cd2drectu-class"></a>Classe CD2DRectU
Wrapper per `D2D1_RECT_U`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DRectU : public D2D1_RECT_U;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRectU::CD2DRectU](#cd2drectu)|Di overload. Costruisce un `CD2DRectU` dall'oggetto `D2D1_RECT_U` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRectU::IsNull](#isnull)|Restituisce un **booleana** valore che indica se un'espressione non contiene dati validi (NULL).|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect CD2DRectU::operator](#operator_crect)|Consente di convertire `CD2DRectU` a `CRect` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_RECT_U`  
  
 `CD2DRectU`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="cd2drectu"></a>  CD2DRectU::CD2DRectU  
 Costruisce un oggetto CD2DRectU dall'oggetto CRect.  
  
```  
CD2DRectU(const CRect& rect);  
CD2DRectU(const D2D1_RECT_U& rect);  
  CD2DRectU(const D2D1_RECT_U* rect);

 
CD2DRectU(
    UINT32 uLeft = 0,  
    UINT32 uTop = 0,  
    UINT32 uRight = 0,  
    UINT32 uBottom = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *Rect*  
 rettangolo di origine  
  
 *uLeft*  
 coordinata sinistra di origine  
  
 *uTop*  
 coordinata superiore di origine  
  
 *uRight*  
 coordinata destra di origine  
  
 *uBottom*  
 coordinata inferiore di origine  
  
##  <a name="isnull"></a>  CD2DRectU::IsNull  
 Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se sono tutti uguali a 0; del rettangolo superiore, sinistro, inferiore e valori corretti in caso contrario, FALSE.  
  
##  <a name="operator_crect"></a>  CRect CD2DRectU::operator  
 Converte un oggetto CRect CD2DRectU.  
  
```  
operator CRect();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del rettangolo D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
