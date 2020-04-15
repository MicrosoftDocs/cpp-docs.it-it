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
ms.openlocfilehash: 40c4d107d05e6d7b610e7c46be920d91d8fe6086
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327099"
---
# <a name="cdefaultchartraits-class"></a>Classe CDefaultCharTraits

Questa classe fornisce due funzioni statiche per la conversione di caratteri tra lettere maiuscole e minuscole.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CDefaultCharTraits
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDefaultCharTraits::CharToLower](#chartolower)|(Statico) Chiamare questa funzione per convertire un carattere in maiuscolo.|
|[Caratteristiche Di CDefaultCharTraits::CharToUpper](#chartoupper)|(Statico) Chiamare questa funzione per convertire un carattere in minuscolo.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce funzioni utilizzate dalla classe [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll.h

## <a name="cdefaultchartraitschartolower"></a><a name="chartolower"></a>CDefaultCharTraits::CharToLower

Chiamare questa funzione per convertire un carattere in minuscolo.

```
static wchar_t CharToLower(wchar_t x);
static char CharToLower(char x);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Carattere da convertire in minuscolo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#132](../../atl/codesnippet/cpp/cdefaultchartraits-class_1.cpp)]

## <a name="cdefaultchartraitschartoupper"></a><a name="chartoupper"></a>Caratteristiche Di CDefaultCharTraits::CharToUpper

Chiamare questa funzione per convertire un carattere in maiuscolo.

```
static wchar_t CharToUpper(wchar_t x);
static char CharToUpper(char x);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Carattere da convertire in maiuscolo.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
