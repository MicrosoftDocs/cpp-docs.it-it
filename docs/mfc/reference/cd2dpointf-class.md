---
title: Classe CD2DPointF | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DPointF
- AFXRENDERTARGET/CD2DPointF
- AFXRENDERTARGET/CD2DPointF::CD2DPointF
dev_langs: C++
helpviewer_keywords: CD2DPointF [MFC], CD2DPointF
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7084aca19c2f6729505d1934a8c94d4d2cb7f8cd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[CD2DPointF::CD2DPointF](#cd2dpointf)|Di overload. Costruisce un `CD2DPointF` oggetto `D2D1_POINT_2F` oggetto.|  
  
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
