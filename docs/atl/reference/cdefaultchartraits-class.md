---
title: Classe CDefaultCharTraits
ms.date: 11/04/2016
f1_keywords:
- CDefaultCharTraits
- ATLCOLL/ATL::CDefaultCharTraits
- ATLCOLL/ATL::CDefaultCharTraits::CharToLower
- ATLCOLL/ATL::CDefaultCharTraits::CharToUpper
helpviewer_keywords:
- CDefaultCharTraits class
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
ms.openlocfilehash: fe599ee0e84c393bed656b7304fd13d55ce95a50
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62258741"
---
# <a name="cdefaultchartraits-class"></a>Classe CDefaultCharTraits

Questa classe fornisce due funzioni statiche per la conversione dei caratteri tra lettere maiuscole e minuscole.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CDefaultCharTraits
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDefaultCharTraits::CharToLower](#chartolower)|(Statico) Chiamare questa funzione per convertire un carattere in maiuscolo.|
|[CDefaultCharTraits::CharToUpper](#chartoupper)|(Statico) Chiamare questa funzione per convertire un carattere in minuscolo.|

## <a name="remarks"></a>Note

Questa classe fornisce funzioni che vengono utilizzate dalla classe [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="chartolower"></a>  CDefaultCharTraits::CharToLower

Chiamare questa funzione per convertire un carattere in minuscolo.

```
static wchar_t CharToLower(wchar_t x);
static char CharToLower(char x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Carattere da convertire in caratteri minuscoli.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#132](../../atl/codesnippet/cpp/cdefaultchartraits-class_1.cpp)]

##  <a name="chartoupper"></a>  CDefaultCharTraits::CharToUpper

Chiamare questa funzione per convertire un carattere in maiuscolo.

```
static wchar_t CharToUpper(wchar_t x);
static char CharToUpper(char x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Carattere da convertire in maiuscolo.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
