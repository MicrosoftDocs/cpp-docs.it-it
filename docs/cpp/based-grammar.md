---
title: Grammatica __based
ms.date: 11/04/2016
helpviewer_keywords:
- based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
ms.openlocfilehash: 8dec9b0bcc7db25e2ec4c39b9d907922691bfc05
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393948"
---
# <a name="based-grammar"></a>Grammatica __based

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).

L'unica forma di indirizzamento di base accettabile nelle compilazioni a 32 bit e a 64 bit è "basata su un puntatore" che definisce un tipo che contiene uno spostamento a 32 o 64 bit a una base 32 bit o 64 bit o basati sul **void**.

## <a name="grammar"></a>Grammatica

*based-range-modifier*: **__based(**  *base-expression*  **)**

*base-expression*: *based-variablebased-abstract-declaratorsegment-namesegment-cast*

*based-variable*: *identifier*

*base-abstract-declarator*: *abstract-declarator*

*base-type*: *type-name*

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Puntatori based](../cpp/based-pointers-cpp.md)