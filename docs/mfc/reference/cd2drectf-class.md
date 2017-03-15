---
title: Classe CD2DRectF | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- afxrendertarget/CD2DRectF
- CD2DRectF
dev_langs:
- C++
helpviewer_keywords:
- CD2DRectF class
ms.assetid: 87c12d87-9d18-4a19-ba14-0f51d6b6835a
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
ms.openlocfilehash: 5bca2dcce32679083e5917d855f711984989a489
ms.lasthandoff: 02/24/2017

---
# <a name="cd2drectf-class"></a>Classe CD2DRectF
Wrapper per `D2D1_RECT_F`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DRectF : public D2D1_RECT_F;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRectF::CD2DRectF](#cd2drectf)|Di overload. Costruisce un `CD2DRectF` dell'oggetto da `D2D1_RECT_F` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRectF::IsNull](#isnull)|Restituisce un `boolean` valore che indica se un'espressione non contiene dati validi ( `null`).|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect CD2DRectF::operator](#operator_crect)|Converte `CD2DRectF` a `CRect` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_RECT_F`  
  
 `CD2DRectF`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="a-namecd2drectfa--cd2drectfcd2drectf"></a><a name="cd2drectf"></a>CD2DRectF::CD2DRectF  
 Costruisce un oggetto CD2DRectF da un oggetto CRect.  
  
```  
CD2DRectF(const CRect& rect);  
CD2DRectF(const D2D1_RECT_F& rect);  
  CD2DRectF(const D2D1_RECT_F* rect);

 
CD2DRectF(
    FLOAT fLeft = 0.,  
    FLOAT fTop = 0.,  
    FLOAT fRight = 0.,  
    FLOAT fBottom = 0.);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 rettangolo di origine  
  
 `fLeft`  
 coordinata sinistra di origine  
  
 `fTop`  
 coordinata superiore di origine  
  
 `fRight`  
 coordinata destra di origine  
  
 `fBottom`  
 coordinata inferiore di origine  
  
##  <a name="a-nameisnulla--cd2drectfisnull"></a><a name="isnull"></a>CD2DRectF::IsNull  
 Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il rettangolo superiore, sinistro, inferiore e valori corretti sono tutti uguali a 0; in caso contrario FALSE.  
  
##  <a name="a-nameoperatorcrecta--cd2drectfoperator-crect"></a><a name="operator_crect"></a>CRect CD2DRectF::operator  
 Converte un oggetto CRect CD2DRectF.  
  
```  
operator CRect();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del rettangolo D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

