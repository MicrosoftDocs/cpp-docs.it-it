---
title: Classe CD2DPointF | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CD2DPointF
- AFXRENDERTARGET/CD2DPointF
- AFXRENDERTARGET/CD2DPointF::CD2DPointF
dev_langs:
- C++
helpviewer_keywords:
- CD2DPointF [MFC], CD2DPointF
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e23dbce668234fecc3162d52e0bbea6fb05a7b06
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36957273"
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
|[CD2DPointF::CD2DPointF](#cd2dpointf)|Di overload. Costruisce un `CD2DPointF` dall'oggetto `D2D1_POINT_2F` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint CD2DPointF::operator](#operator_cpoint)|Converte `CD2DPointF` a `CPoint` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_POINT_2F`  
  
 `CD2DPointF`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="cd2dpointf"></a>  CD2DPointF::CD2DPointF  
 Costruisce un oggetto CD2DPointF da un oggetto CPoint.  
  
```  
CD2DPointF(const CPoint& pt);    
CD2DPointF(const D2D1_POINT_2F& pt);    
CD2DPointF(const D2D1_POINT_2F* pt); 
CD2DPointF(FLOAT fX = 0., FLOAT fY = 0.);
```  
  
### <a name="parameters"></a>Parametri  
 *pt*  
 punto di origine  
  
 *fX*  
 origine X  
  
 *anno fiscale*  
 origine Y  
  
##  <a name="operator_cpoint"></a>  CPoint CD2DPointF::operator  
 Converte un oggetto CPoint CD2DPointF.  
  
```  
operator CPoint();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del punto di D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
