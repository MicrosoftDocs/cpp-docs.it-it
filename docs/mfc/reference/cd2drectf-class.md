---
title: Classe CD2DRectF | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DRectF
- AFXRENDERTARGET/CD2DRectF
- AFXRENDERTARGET/CD2DRectF::CD2DRectF
- AFXRENDERTARGET/CD2DRectF::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DRectF [MFC], CD2DRectF
- CD2DRectF [MFC], IsNull
ms.assetid: 87c12d87-9d18-4a19-ba14-0f51d6b6835a
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: cc43fd636955573f7c163623775053c9c283fada
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
|[CD2DRectF::CD2DRectF](#cd2drectf)|Di overload. Costruisce un `CD2DRectF` oggetto `D2D1_RECT_F` oggetto.|  
  
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
  
##  <a name="cd2drectf"></a>CD2DRectF::CD2DRectF  
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
  
##  <a name="isnull"></a>CD2DRectF::IsNull  
 Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se superiore del rettangolo, sinistro, inferiore e i valori corretti sono tutti pari a 0; in caso contrario FALSE.  
  
##  <a name="operator_crect"></a>CRect CD2DRectF::operator  
 Converte un oggetto CRect CD2DRectF.  
  
```  
operator CRect();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del rettangolo D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
