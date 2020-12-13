---
description: 'Altre informazioni su: classe CDefaultCharTraits'
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
ms.openlocfilehash: 6d98c6b6ffb527fef1e5b2320b46eda61ec3f670
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141960"
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

|Nome|Description|
|----------|-----------------|
|[CDefaultCharTraits::CharToLower](#chartolower)|Statico Chiamare questa funzione per convertire un carattere in maiuscolo.|
|[CDefaultCharTraits::CharToUpper](#chartoupper)|Statico Chiamare questa funzione per convertire un carattere in minuscolo.|

## <a name="remarks"></a>Commenti

Questa classe fornisce funzioni utilizzate dalla classe [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

## <a name="cdefaultchartraitschartolower"></a><a name="chartolower"></a> CDefaultCharTraits::CharToLower

Chiamare questa funzione per convertire un carattere in minuscolo.

```
static wchar_t CharToLower(wchar_t x);
static char CharToLower(char x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Carattere da convertire in minuscolo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#132](../../atl/codesnippet/cpp/cdefaultchartraits-class_1.cpp)]

## <a name="cdefaultchartraitschartoupper"></a><a name="chartoupper"></a> CDefaultCharTraits::CharToUpper

Chiamare questa funzione per convertire un carattere in maiuscolo.

```
static wchar_t CharToUpper(wchar_t x);
static char CharToUpper(char x);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Carattere da convertire in maiuscolo.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
