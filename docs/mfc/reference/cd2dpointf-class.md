---
title: Classe CD2DPointF | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DPointF
- AFXRENDERTARGET/CD2DPointF
- AFXRENDERTARGET/CD2DPointF::CD2DPointF
dev_langs:
- C++
helpviewer_keywords:
- CD2DPointF class
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
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
ms.openlocfilehash: 8449fcadfb72305e9e5b6ed2c6829ba9963ba7ca
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dpointf-class"></a>Classe CD2DPointF
Wrapper per `D2D1_POINT_2F`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DPointF : public D2D1_POINT_2F;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPointF::CD2DPointF](#cd2dpointf)|Di overload. Costruisce un `CD2DPointF` dell'oggetto da `D2D1_POINT_2F` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint CD2DPointF::operator](#operator_cpoint)|Converte `CD2DPointF` a `CPoint` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_POINT_2F`  
  
 `CD2DPointF`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="cd2dpointf"></a>CD2DPointF::CD2DPointF  
 Costruisce un oggetto CD2DPointF da un oggetto CPoint.  
  
```  
CD2DPointF(const CPoint& pt);    
CD2DPointF(const D2D1_POINT_2F& pt);    
CD2DPointF(const D2D1_POINT_2F* pt); 
CD2DPointF(FLOAT fX = 0., FLOAT fY = 0.);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 punto di origine  
  
 `fX`  
 origine X  
  
 `fY`  
 origine Y  
  
##  <a name="operator_cpoint"></a>CPoint CD2DPointF::operator  
 Converte un oggetto CPoint CD2DPointF.  
  
```  
operator CPoint();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del punto D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

