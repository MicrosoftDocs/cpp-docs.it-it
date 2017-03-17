---
title: Classe CD2DPointU | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DPointU
- AFXRENDERTARGET/CD2DPointU
- AFXRENDERTARGET/CD2DPointU::CD2DPointU
dev_langs:
- C++
helpviewer_keywords:
- CD2DPointU class
ms.assetid: 04733f96-b6de-4a89-82e3-caad1e8087a9
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
ms.openlocfilehash: 605415ad5a2739d8f8ac3a6a47c562796d55a813
ms.lasthandoff: 02/24/2017

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

