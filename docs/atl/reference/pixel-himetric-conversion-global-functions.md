---
title: Funzioni globali di conversione pixel-HIMETRIC
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlHiMetricToPixel
- atlwin/ATL::AtlPixelToHiMetric
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
ms.openlocfilehash: 43a12985f259603a9b67f22f7a7891bf847c0b0f
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417572"
---
# <a name="pixelhimetric-conversion-global-functions"></a>Funzioni globali di conversione pixel/HIMETRIC

Queste funzioni forniscono supporto per la conversione da e verso le unità pixel e HIMETRIC.

> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere usate nelle applicazioni eseguite nel Windows Runtime.

|||
|-|-|
|[AtlHiMetricToPixel](#atlhimetrictopixel)|Converte le unità HIMETRIC (ogni unità è 0,01 millimetri) in pixel.|
|[AtlPixelToHiMetric](#atlpixeltohimetric)|Converte i pixel in unità HIMETRIC (ogni unità è 0,01 millimetri).|

##  <a name="atlhimetrictopixel"></a>AtlHiMetricToPixel

Converte la dimensione di un oggetto in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) in una dimensione in pixel sullo schermo.

```
extern void AtlHiMetricToPixel(
    const SIZEL* lpSizeInHiMetric,
    LPSIZEL lpSizeInPix);
```

### <a name="parameters"></a>Parametri

*lpSizeInHiMetric*<br/>
in Puntatore alla dimensione dell'oggetto in unità HIMETRIC.

*lpSizeInPix*<br/>
out Puntatore alla posizione in cui devono essere restituite le dimensioni dell'oggetto in pixel.

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

*lpSizeInPix*<br/>
in Puntatore alla dimensione dell'oggetto in pixel.

*lpSizeInHiMetric*<br/>
out Puntatore alla posizione in cui devono essere restituite le dimensioni dell'oggetto in unità HIMETRIC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#51](../../atl/codesnippet/cpp/pixel-himetric-conversion-global-functions_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
