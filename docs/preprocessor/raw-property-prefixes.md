---
description: 'Altre informazioni su: raw_property_prefixes attributo Import'
title: raw_property_prefixes attributo Import
ms.date: 08/29/2019
f1_keywords:
- raw_property_prefixes
helpviewer_keywords:
- raw_property_prefixes attribute
ms.assetid: 03a0f48c-c460-4175-a762-9f7f8d84b12f
ms.openlocfilehash: 7289f9aeba249249ecf78ffb3ad3b32669ac9fe3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142714"
---
# <a name="raw_property_prefixes-import-attribute"></a>raw_property_prefixes attributo Import

**Sezione specifica C++**

Specifica i prefissi alternativi per tre metodi della proprietà.

## <a name="syntax"></a>Sintassi

> **#import** raw_property_prefixes della *libreria di tipi* **(** "*getPrefix*" **,** "*PutPrefix*" **,** "*PutRefPrefix*" **)**

### <a name="parameters"></a>Parametri

*GetPrefix*\
Prefisso da utilizzare per i `propget` metodi.

*PutPrefix*\
Prefisso da utilizzare per i `propput` metodi.

*PutRefPrefix*\
Prefisso da utilizzare per i `propputref` metodi.

## <a name="remarks"></a>Commenti

Per impostazione predefinita, i metodi, e di basso livello `propget` `propput` `propputref` vengono esposti dalle funzioni membro denominate rispettivamente con i prefissi di `get_` , `put_` e `putref_` . I prefissi sono compatibili con i nomi utilizzati nei file di intestazione generati da MIDL.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
