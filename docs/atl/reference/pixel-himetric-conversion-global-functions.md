---
title: Funzioni globali di conversione pixel-HIMETRIC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlwin/ATL::AtlHiMetricToPixel
- atlwin/ATL::AtlPixelToHiMetric
dev_langs:
- C++
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 086310efe565e060645320db30526b03d57a68af
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43752410"
---
# <a name="pixelhimetric-conversion-global-functions"></a>Funzioni globali di conversione pixel/HIMETRIC

Queste funzioni forniscono supporto per la conversione da e verso pixel e unità HIMETRIC.

> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite nel Runtime di Windows.

|||
|-|-|
|[AtlHiMetricToPixel](#atlhimetrictopixel)|Converte unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in pixel.|
|[AtlPixelToHiMetric](#atlpixeltohimetric)|Converte pixel in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).|

##  <a name="atlhimetrictopixel"></a>  AtlHiMetricToPixel

Converte la dimensione di un oggetto in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in una dimensione in pixel sullo schermo.

```
extern void AtlHiMetricToPixel(
    const SIZEL* lpSizeInHiMetric, 
    LPSIZEL lpSizeInPix);
```

### <a name="parameters"></a>Parametri

*lpSizeInHiMetric*  
[in] Puntatore alla dimensione dell'oggetto in unità HIMETRIC.

*lpSizeInPix*  
[out] Puntatore alla dimensione dell'oggetto in pixel, in cui deve essere restituita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#49](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_1.cpp)]  

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="atlpixeltohimetric"></a>  AtlPixelToHiMetric

Converte la dimensione di un oggetto in pixel sullo schermo in una dimensione in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).

```
extern void AtlPixelToHiMetric(
    const SIZEL* lpSizeInPix, 
    LPSIZEL lpSizeInHiMetric);
```

### <a name="parameters"></a>Parametri

*lpSizeInPix*  
[in] Puntatore alla dimensione dell'oggetto in pixel.

*lpSizeInHiMetric*  
[out] Puntatore alla dimensione dell'oggetto in unità HIMETRIC, in cui deve essere restituita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#51](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_2.cpp)]  

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h  

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
