---
description: 'Altre informazioni su: __based grammatica'
title: Grammatica __based
ms.date: 11/04/2016
helpviewer_keywords:
- based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
ms.openlocfilehash: 9c449c45700c57d0c6f6018ca47e40d42c4b2ad0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97304519"
---
# <a name="__based-grammar"></a>Grammatica __based

**Specifico di Microsoft**

L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).

L'unica forma di indirizzamento basato su accettabile nelle compilazioni a 32 bit e a 64 bit è "basata su un puntatore" che definisce un tipo che contiene uno spostamento a 32 o a 64 bit a una base a 32 bit o a 64 bit oppure basato su **`void`** .

## <a name="grammar"></a>Grammatica

*modificatore-range-based*: **__based (**  *espressione di base*  **)**

*espressione base*: *based-variablebased-abstract-declaratorsegment-namesegment-cast*

*based-Variable*: *identificatore*

*based-abstract-declarator*: *abstract-declarator*

*tipo di base*: *nome-tipo*

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Puntatori basati](../cpp/based-pointers-cpp.md)
