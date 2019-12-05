---
title: Grammatica __based
ms.date: 11/04/2016
helpviewer_keywords:
- based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
ms.openlocfilehash: a8c923b5a111144c539b5bea1b2f47eb58dd1fbd
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857645"
---
# <a name="__based-grammar"></a>Grammatica __based

**Sezione specifica Microsoft**

L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).

L'unica forma di indirizzamento basato su accettabile nelle compilazioni a 32 bit e a 64 bit è "basata su un puntatore" che definisce un tipo che contiene uno spostamento a 32 o a 64 bit a una base a 32 bit o a 64 bit oppure basato su **void**.

## <a name="grammar"></a>Grammatica

*modificatore-range-based*: **__based (**  *espressione di base*  **)**

*base-expression*: *based-variablebased-abstract-declaratorsegment-namesegment-cast*

*based-Variable*: *identificatore*

*based-abstract-declarator*: *abstract-declarator*

*tipo di base*: *nome-tipo*

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Puntatori based](../cpp/based-pointers-cpp.md)