---
title: attributo di importazione raw_property_prefixes
ms.date: 08/29/2019
f1_keywords:
- raw_property_prefixes
helpviewer_keywords:
- raw_property_prefixes attribute
ms.assetid: 03a0f48c-c460-4175-a762-9f7f8d84b12f
ms.openlocfilehash: d4d91470781e7c5f673fd228c24904322d1db8b3
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216046"
---
# <a name="raw_property_prefixes-import-attribute"></a>attributo di importazione raw_property_prefixes

**C++Specifico**

Specifica i prefissi alternativi per tre metodi della proprietà.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **raw_property_prefixes (** "*getPrefix*" **,** "*PutPrefix*" **,** "*PutRefPrefix*" **)**

### <a name="parameters"></a>Parametri

*GetPrefix*\
Prefisso da utilizzare per i `propget` metodi.

*PutPrefix*\
Prefisso da utilizzare per i `propput` metodi.

*PutRefPrefix*\
Prefisso da utilizzare per i `propputref` metodi.

## <a name="remarks"></a>Note

Per impostazione predefinita, i metodi `propget`, `propput`e `propputref` di basso livello vengono esposti dalle funzioni membro denominate rispettivamente `get_`con `put_`i prefissi di, e `putref_`. I prefissi sono compatibili con i nomi utilizzati nei file di intestazione generati da MIDL.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
