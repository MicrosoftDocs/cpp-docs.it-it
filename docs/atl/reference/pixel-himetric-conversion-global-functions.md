---
title: Funzioni globali di conversione Pixel-HIMETRIC
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlHiMetricToPixel
- atlwin/ATL::AtlPixelToHiMetric
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
ms.openlocfilehash: 08c72c0d8f3d061950d6945d9fb412c0a16355da
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326150"
---
# <a name="pixelhimetric-conversion-global-functions"></a>Funzioni globali di conversione Pixel/HIMETRIC

Queste funzioni forniscono supporto per la conversione da e verso unità pixel e HIMETRIC.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlHiMetricToPixel](#atlhimetrictopixel)|Converte le unità HIMETRIC (ogni unità è 0,01 millimetri) in pixel.|
|[AtlPixelToHiMetric](#atlpixeltohimetric)|Converte i pixel in unità HIMETRIC (ogni unità è 0,01 millimetri).|

## <a name="atlhimetrictopixel"></a><a name="atlhimetrictopixel"></a>AtlHiMetricToPixel

Converte la dimensione di un oggetto in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in una dimensione in pixel sullo schermo.

```
extern void AtlHiMetricToPixel(
    const SIZEL* lpSizeInHiMetric,
    LPSIZEL lpSizeInPix);
```

### <a name="parameters"></a>Parametri

*LpSizeInHiMetric*<br/>
[in] Puntatore alla dimensione dell'oggetto in unità HIMETRIC.

*LpSizeInPix (informazioni in cui i pè*<br/>
[fuori] Puntatore al punto in cui deve essere restituita la dimensione dell'oggetto in pixel.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#49](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="atlpixeltohimetric"></a><a name="atlpixeltohimetric"></a>AtlPixelToHiMetric

Converte la dimensione di un oggetto in pixel sullo schermo in una dimensione in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).

```
extern void AtlPixelToHiMetric(
    const SIZEL* lpSizeInPix,
    LPSIZEL lpSizeInHiMetric);
```

### <a name="parameters"></a>Parametri

*LpSizeInPix (informazioni in cui i pè*<br/>
[in] Puntatore alle dimensioni dell'oggetto in pixel.

*LpSizeInHiMetric*<br/>
[fuori] Puntatore al punto in cui deve essere restituita la dimensione dell'oggetto in unità HIMETRIC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#51](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
