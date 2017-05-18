---
title: Classe CD2DRectU | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DRectU
- AFXRENDERTARGET/CD2DRectU
- AFXRENDERTARGET/CD2DRectU::CD2DRectU
- AFXRENDERTARGET/CD2DRectU::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DRectU class
ms.assetid: a62f17d1-011d-4867-8f51-fd7e7c00561d
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 74c05d7f4be9b9308cdcb2b91a0455a4cd025dc1
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[CD2DRectU::CD2DRectU](#cd2drectu)|Di overload. Costruisce un `CD2DRectU` dell'oggetto da `D2D1_RECT_U` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DRectU::IsNull](#isnull)|Restituisce un `boolean` valore che indica se un'espressione non contiene dati validi ( `null`).|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect CD2DRectU::operator](#operator_crect)|Converte `CD2DRectU` a `CRect` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_RECT_U`  
  
 `CD2DRectU`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="cd2drectu"></a>CD2DRectU::CD2DRectU  
 Costruisce un oggetto CD2DRectU da un oggetto CRect.  
  
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
 `rect`  
 rettangolo di origine  
  
 `uLeft`  
 coordinata sinistra di origine  
  
 `uTop`  
 coordinata superiore di origine  
  
 `uRight`  
 coordinata destra di origine  
  
 `uBottom`  
 coordinata inferiore di origine  
  
##  <a name="isnull"></a>CD2DRectU::IsNull  
 Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il rettangolo superiore, sinistro, inferiore e valori corretti sono tutti uguali a 0; in caso contrario FALSE.  
  
##  <a name="operator_crect"></a>CRect CD2DRectU::operator  
 Converte un oggetto CRect CD2DRectU.  
  
```  
operator CRect();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente del rettangolo D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

