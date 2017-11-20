---
title: Classe CD2DPointU | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DPointU
- AFXRENDERTARGET/CD2DPointU
- AFXRENDERTARGET/CD2DPointU::CD2DPointU
dev_langs:
- C++
helpviewer_keywords:
- CD2DPointU [MFC], CD2DPointU
ms.assetid: 04733f96-b6de-4a89-82e3-caad1e8087a9
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: b0da6e31ccc14e9e050da9f246582abb173ec31b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dpointu-class"></a>Classe CD2DPointF
Wrapper per `D2D1_POINT_2U`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DPointU : public D2D1_POINT_2U;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPointU::CD2DPointU](#cd2dpointu)|Di overload. Costruisce un `CD2DPointU` dall'oggetto `D2D1_POINT_2U` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint CD2DPointU::operator](#operator_cpoint)|Converte `CD2DPointU` a `CPoint` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_POINT_2U`  
  
 `CD2DPointU`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="cd2dpointu"></a>CD2DPointU::CD2DPointU  
 Costruisce un oggetto CD2DPointU da un oggetto CPoint.  
  
```  
CD2DPointU(const CPoint& pt);  
CD2DPointU(const D2D1_POINT_2U& pt);  
  CD2DPointU(const D2D1_POINT_2U* pt);  
CD2DPointU(UINT32 uX = 0, UINT32 uY = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 punto di origine  
  
 `uX`  
 origine X  
  
 `uY`  
 origine Y  
  
##  <a name="operator_cpoint"></a>CPoint CD2DPointU::operator  
 Converte un oggetto CPoint CD2DPointU.  
  
```  
operator CPoint();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del punto D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
