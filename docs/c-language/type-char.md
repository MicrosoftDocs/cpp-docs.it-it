---
title: Tipo char | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- type char
- unsigned char keyword [C]
- char keyword [C]
ms.assetid: a5da0866-e780-4793-be87-15a8426e7ea0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eec964d9b81ee93f888bbd4152f06f6bdf51b6d0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053830"
---
# <a name="type-char"></a>Tipo char

Il tipo `char` viene utilizzato per archiviare l'Integer di un membro del set di caratteri rappresentabile. L'Integer è il valore in codice ASCII corrispondente al carattere specificato.

**Sezione specifica Microsoft**

I valori di carattere di tipo `unsigned char` dispongono di un intervallo che va da 0 a esadecimale 0xFF. L'intervallo di un **signed char** è incluso tra 0x80 e 0x7F. Questi intervalli corrispondono, rispettivamente, ai valori decimali da 0 a 255 e da -128 a +127. L'opzione del compilatore /J modifica l'impostazione predefinita da **signed** a `unsigned`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)