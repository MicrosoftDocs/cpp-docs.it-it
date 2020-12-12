---
description: 'Altre informazioni su: classe CD2DBrushProperties'
title: Classe CD2DBrushProperties
ms.date: 11/04/2016
f1_keywords:
- CD2DBrushProperties
- AFXRENDERTARGET/CD2DBrushProperties
- AFXRENDERTARGET/CD2DBrushProperties::CD2DBrushProperties
- AFXRENDERTARGET/CD2DBrushProperties::CommonInit
helpviewer_keywords:
- CD2DBrushProperties [MFC], CD2DBrushProperties
- CD2DBrushProperties [MFC], CommonInit
ms.assetid: c77d717f-0a16-4d74-b2ce-0ae1766ed6f9
ms.openlocfilehash: d16d08041b5096c8a5ad188201c6a06e21681849
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227559"
---
# <a name="cd2dbrushproperties-class"></a>Classe CD2DBrushProperties

Wrapper per `D2D1_BRUSH_PROPERTIES`.

## <a name="syntax"></a>Sintassi

```
class CD2DBrushProperties : public D2D1_BRUSH_PROPERTIES;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CD2DBrushProperties:: CD2DBrushProperties](#cd2dbrushproperties)|Di overload. Crea una `CD2D_BRUSH_PROPERTIES` struttura|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CD2DBrushProperties:: CommonInit](#commoninit)|Inizializza l'oggetto|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_BRUSH_PROPERTIES`

`CD2DBrushProperties`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget. h

## <a name="cd2dbrushpropertiescd2dbrushproperties"></a><a name="cd2dbrushproperties"></a> CD2DBrushProperties:: CD2DBrushProperties

Crea una struttura di CD2D_BRUSH_PROPERTIES

```
CD2DBrushProperties();
CD2DBrushProperties(FLOAT _opacity);

CD2DBrushProperties(
    D2D1_MATRIX_3X2_F _transform,
    FLOAT _opacity = 1.);
```

### <a name="parameters"></a>Parametri

*_opacity*<br/>
Opacità di base del pennello. Il valore predefinito è 1,0.

*_transform*<br/>
Trasformazione da applicare al pennello

## <a name="cd2dbrushpropertiescommoninit"></a><a name="commoninit"></a> CD2DBrushProperties:: CommonInit

Inizializza l'oggetto

```cpp
void CommonInit();
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
