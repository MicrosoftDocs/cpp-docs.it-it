---
title: Classe CD2DSizeF | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF::CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DSizeF [MFC], CD2DSizeF
- CD2DSizeF [MFC], IsNull
ms.assetid: f486a1e1-997d-4286-8cb9-26369dc82055
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: a64798f2b89cf43451fffff1ccf18d1981e55b55
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="cd2dsizef-class"></a>Classe CD2DSizeF
Wrapper per D2D1_SIZE_F.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DSizeF : public D2D1_SIZE_F;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSizeF::CD2DSizeF](#cd2dsizef)|Di overload. Costruisce un `CD2DSizeF` oggetto `D2D1_SIZE_F` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSizeF::IsNull](#isnull)|Restituisce un `boolean` valore che indica se un'espressione non contiene dati validi ( `null`).|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSize CD2DSizeF::operator](#operator_csize)|Converte `CD2DSizeF` a `CSize` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `D2D1_SIZE_F`  
  
 [CD2DSizeF](../../mfc/reference/cd2dsizef-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="cd2dsizef"></a>CD2DSizeF::CD2DSizeF  
 Costruisce un oggetto CD2DSizeF da un oggetto CSize.  
  
```  
CD2DSizeF(const CSize& size);  
CD2DSizeF(const D2D1_SIZE_F& size);  
  CD2DSizeF(const D2D1_SIZE_F* size);

 
CD2DSizeF(
    FLOAT cx = 0.,  
    FLOAT cy = 0.);
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 dimensioni di origine  
  
 `cx`  
 larghezza di origine  
  
 `cy`  
 altezza di origine  
  
##  <a name="isnull"></a>CD2DSizeF::IsNull  
 Restituisce un valore booleano che indica se un'espressione non contiene dati validi (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la larghezza e altezza sono vuote; in caso contrario FALSE.  
  
##  <a name="operator_csize"></a>CSize CD2DSizeF::operator  
 Converte un oggetto CSize CD2DSizeF.  
  
```  
operator CSize();
```   
  
### <a name="return-value"></a>Valore restituito  
 Valore corrente della dimensione D2D.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
