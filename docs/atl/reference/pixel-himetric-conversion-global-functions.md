---
title: Funzioni globali di conversione pixel-HIMETRIC
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlHiMetricToPixel
- atlwin/ATL::AtlPixelToHiMetric
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
ms.openlocfilehash: 43a12985f259603a9b67f22f7a7891bf847c0b0f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57272334"
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

*lpSizeInHiMetric*<br/>
[in] Puntatore alla dimensione dell'oggetto in unità HIMETRIC.

*lpSizeInPix*<br/>
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

*lpSizeInPix*<br/>
[in] Puntatore alla dimensione dell'oggetto in pixel.

*lpSizeInHiMetric*<br/>
[out] Puntatore alla dimensione dell'oggetto in unità HIMETRIC, in cui deve essere restituita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#51](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
