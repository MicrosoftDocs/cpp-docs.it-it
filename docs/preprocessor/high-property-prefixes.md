---
description: 'Altre informazioni su: high_property_prefixes attributo Import'
title: high_property_prefixes attributo Import
ms.date: 08/29/2019
f1_keywords:
- high_property_prefixes
helpviewer_keywords:
- high_property_prefixes attribute
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
ms.openlocfilehash: af6835f5835c23dceadbb5152e36b0dabcbb8c98
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167474"
---
# <a name="high_property_prefixes-import-attribute"></a>high_property_prefixes attributo Import

**Sezione specifica C++**

Specifica i prefissi alternativi per tre metodi della proprietà.

## <a name="syntax"></a>Sintassi

> **#import** high_property_prefixes della *libreria di tipi* **(** "*getPrefix*" **,** "*PutPrefix*" **,** "*PutRefPrefix*" **)**

### <a name="parameters"></a>Parametri

*GetPrefix*\
Prefisso da utilizzare per i `propget` metodi.

*PutPrefix*\
Prefisso da utilizzare per i `propput` metodi.

*PutRefPrefix*\
Prefisso da utilizzare per i `propputref` metodi.

## <a name="remarks"></a>Commenti

Per impostazione predefinita, i metodi, e per la gestione degli errori di alto livello `propget` `propput` `propputref` vengono esposti dalle funzioni membro denominate rispettivamente con i prefissi `Get` , `Put` e `PutRef` .

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
