---
description: 'Altre informazioni su: no_sanitize_address'
title: no_sanitize_address
ms.date: 11/04/2016
f1_keywords:
- no_sanitize_address__cpp
helpviewer_keywords:
- __declspec keyword [C++], no_sanitize_address
- no_sanitize_address __declspec keyword
ms.openlocfilehash: a18b60f666bc53ef72db3a6d230dc7531cc6bc1f
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470477"
---
# `no_sanitize_address`

**Specifico di Microsoft**

L' **`__declspec(no_sanitize_address)`** identificatore indica al compilatore di disabilitare l'igienizzazione degli indirizzi su funzioni, variabili locali o variabili globali. Questo identificatore viene usato insieme a [AddressSanitizer](../sanitizers/asan.md).

> [!NOTE]
> **`__declspec(no_sanitize_address)`** Disabilita il comportamento _del compilatore_ , non il comportamento del *Runtime* .

## <a name="example"></a>Esempio

Per esempi, vedere il [riferimento alla build AddressSanitizer](../sanitizers/asan-building.md#__declspecno_sanitize_address) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`__declspec`](../cpp/declspec.md)\
[Parole](../cpp/keywords-cpp.md)\
[AddressSanitizer](../sanitizers/asan.md)
