---
title: Intervallo di valori interi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 0e9c6161-8f3f-4bfb-9fcc-a6c8dc97d702
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d940824e6bb1dc728cb999c1e820cb7adcedf8ce
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092648"
---
# <a name="range-of-integer-values"></a>Intervallo di valori interi

**ANSI 3.1.2.5**   Rappresentazioni e set di valori di vari tipi di interi

I tipi Integer contengono 32 bit (quattro byte). I valori Signed Integer sono rappresentati in complemento a due. Il bit più significativo rappresenta il segno, ovvero 1 per il segno negativo, 0 per il segno positivo e zero. I valori vengono elencati di seguito:

|Tipo|Minimo e massimo|
|----------|-------------------------|
|**unsigned short**|Da 0 a 65535|
|`signed short`|-32768 to 32767|
|`unsigned long`|Da 0 a 4294967295|
|**signed long**|da -2147483648 a 2147483647|

## <a name="see-also"></a>Vedere anche

[Valori Integer](../c-language/integers.md)