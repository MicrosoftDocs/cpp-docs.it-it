---
title: attributo di importazione high_property_prefixes
ms.date: 08/29/2019
f1_keywords:
- high_property_prefixes
helpviewer_keywords:
- high_property_prefixes attribute
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
ms.openlocfilehash: 9e44f6f1afae479f803f4c6d866ef3ee38744561
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219010"
---
# <a name="high_property_prefixes-import-attribute"></a>attributo di importazione high_property_prefixes

**C++Specifico**

Specifica i prefissi alternativi per tre metodi della proprietà.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **high_property_prefixes (** "*getPrefix*" **,** "*PutPrefix*" **,** "*PutRefPrefix*" **)**

### <a name="parameters"></a>Parametri

*GetPrefix*\
Prefisso da utilizzare per i `propget` metodi.

*PutPrefix*\
Prefisso da utilizzare per i `propput` metodi.

*PutRefPrefix*\
Prefisso da utilizzare per i `propputref` metodi.

## <a name="remarks"></a>Note

Per impostazione predefinita, i metodi, e `propget` `propputref` per la `propput`gestione degli errori di alto livello vengono esposti dalle funzioni membro denominate rispettivamente `PutRef`con i prefissi `Get`, `Put`e.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
