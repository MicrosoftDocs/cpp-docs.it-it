---
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
ms.openlocfilehash: bf6399d2a245addb7e2e65100d33643fcd54e893
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369295"
---
# <a name="cd2dbrushproperties-class"></a>Classe CD2DBrushProperties

Wrapper per `D2D1_BRUSH_PROPERTIES`.

## <a name="syntax"></a>Sintassi

```
class CD2DBrushProperties : public D2D1_BRUSH_PROPERTIES;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Proprietà Pennello CD2D::CD2DBrushProperties](#cd2dbrushproperties)|Di overload. Crea `CD2D_BRUSH_PROPERTIES` una struttura|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Proprietà Pennello CD2D::CommonInit](#commoninit)|Inizializza l'oggetto|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`D2D1_BRUSH_PROPERTIES`

`CD2DBrushProperties`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrendertarget.h

## <a name="cd2dbrushpropertiescd2dbrushproperties"></a><a name="cd2dbrushproperties"></a>Proprietà Pennello CD2D::CD2DBrushProperties

Crea una struttura CD2D_BRUSH_PROPERTIES

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

## <a name="cd2dbrushpropertiescommoninit"></a><a name="commoninit"></a>Proprietà Pennello CD2D::CommonInit

Inizializza l'oggetto

```
void CommonInit();
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
