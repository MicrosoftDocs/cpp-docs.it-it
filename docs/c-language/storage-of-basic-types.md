---
title: Archiviazione di tipi di base
ms.date: 10/02/2019
helpviewer_keywords:
- specifiers [C++], type
- integral types, storage
- storage [C++], types
- floating-point numbers, storage
- type specifiers [C++], sizes
- arithmetic operations [C++], types
- int data type
- short data type
- signed types [C++], storage
- long double keyword [C], storage
- long keyword [C]
- double data type, storage
- types [C], arithmetic
- integral types
- data types [C], specifiers
- storing types [C++]
- unsigned types [C++], storage
- data types [C], storage
ms.assetid: bd1f33c1-c6b9-4558-8a72-afb21aef3318
ms.openlocfilehash: 973866a912b694510d587df765ac8dd54176638e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211671"
---
# <a name="storage-of-basic-types"></a>Archiviazione dei tipi di base

Nella tabella seguente viene riepilogata l'archiviazione associata a ogni tipo di base.

## <a name="sizes-of-fundamental-types"></a>Dimensioni dei tipi fondamentali

|Type|Archiviazione|
|----------|-------------|
|**`char`**, **`unsigned char`**, **`signed char`**|1 byte|
|**`short`**, **`unsigned short`**|2 byte|
|**`int`**, **`unsigned int`**|4 byte|
|**`long`**, **`unsigned long`**|4 byte|
|**`long long`**, **`unsigned long long`**|8 byte|
|**`float`**|4 byte|
|**`double`**|8 byte|
|**`long double`**|8 byte|

I tipi di dati C possono essere suddivisi in categorie generali. I *tipi integrali* includono **`int`** ,,, **`char`** **`short`** **`long`** e **`long long`** . Questi tipi possono essere qualificati con **`signed`** o **`unsigned`** e **`unsigned`** possono essere usati come sintassi abbreviata per **`unsigned int`** . I tipi di enumerazione ( **`enum`** ) vengono considerati anche come tipi integrali per la maggior parte degli scopi. I *tipi a virgola mobile* sono **`float`** , **`double`** e **`long double`** . I *tipi aritmetici* includono tutti i tipi a virgola mobile e integrali.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
