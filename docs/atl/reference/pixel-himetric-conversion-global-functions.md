---
title: Funzioni globali di conversione pixel HIMETRIC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
caps.latest.revision: 19
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
ms.openlocfilehash: efb7e7da896aea4e377225f4c1e2c9948e635705
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="pixelhimetric-conversion-global-functions"></a>Funzioni globali di conversione tra pixel/HIMETRIC
Queste funzioni forniscono supporto per la conversione da e verso pixel e unità HIMETRIC.  
  
> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlHiMetricToPixel](#atlhimetrictopixel)|Converte l'unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in pixel.|  
|[AtlPixelToHiMetric](#atlpixeltohimetric)|Converte pixel in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).|  
  
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
 [out] Puntatore alla posizione in cui le dimensioni dell'oggetto in pixel da restituire.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM N.&49;](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_1.cpp)]  

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
 [out] Puntatore alla posizione in cui le dimensioni dell'oggetto in unità HIMETRIC da restituire.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM&51;](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_2.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  

## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)

