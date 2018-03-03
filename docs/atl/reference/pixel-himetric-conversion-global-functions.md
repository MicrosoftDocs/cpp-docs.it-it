---
title: Funzioni globali di conversione pixel HIMETRIC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlwin/ATL::AtlHiMetricToPixel
- atlwin/ATL::AtlPixelToHiMetric
dev_langs:
- C++
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9d670d667345c233fc499cda42194dfafa185dfe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pixelhimetric-conversion-global-functions"></a>Funzioni globali di pixel/HIMETRIC conversione
Queste funzioni forniscono supporto per la conversione da e verso pixel e unità HIMETRIC.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[AtlHiMetricToPixel](#atlhimetrictopixel)|Converte unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in pixel.|  
|[AtlPixelToHiMetric](#atlpixeltohimetric)|Converte i pixel in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).|  
  
##  <a name="atlhimetrictopixel"></a>AtlHiMetricToPixel  
 Converte la dimensione di un oggetto in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in una dimensione in pixel sullo schermo.  
  
 
```
extern void AtlHiMetricToPixel(
  const SIZEL* lpSizeInHiMetric, 
  LPSIZEL lpSizeInPix);
```  
  
### <a name="parameters"></a>Parametri  
 `lpSizeInHiMetric`  
 [in] Puntatore alla dimensione dell'oggetto in unità HIMETRIC.  
  
 `lpSizeInPix`  
 [out] Puntatore a cui sono necessario restituire le dimensioni dell'oggetto in pixel.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#49](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_1.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="atlpixeltohimetric"></a>AtlPixelToHiMetric  
 Converte la dimensione di un oggetto in pixel sullo schermo in una dimensione in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).  
  
```
extern void AtlPixelToHiMetric(
    const SIZEL* lpSizeInPix, 
    LPSIZEL lpSizeInHiMetric);
```  
  
### <a name="parameters"></a>Parametri  
 `lpSizeInPix`  
 [in] Puntatore alla dimensione dell'oggetto in pixel.  
  
 `lpSizeInHiMetric`  
 [out] Puntatore a in cui le dimensioni dell'oggetto in unità HIMETRIC deve essere restituito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#51](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_2.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
