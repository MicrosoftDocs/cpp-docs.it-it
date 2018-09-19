---
title: grammatica based | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 43e9074de25d8cb914432123478f5f338ff4ba1e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103767"
---
# <a name="based-grammar"></a>Grammatica __based

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).

L'unica forma di indirizzamento di base accettabile nelle compilazioni a 32 bit e a 64 bit è "basata su un puntatore" che definisce un tipo che contiene uno spostamento a 32 o 64 bit a una base 32 bit o 64 bit o basati sul **void**.

## <a name="grammar"></a>Grammatica

*base-intervallo-modifier*: **based (***espressione di base***)** 

*base-expression*: *based-variablebased-abstract-declaratorsegment-namesegment-cast*

*base-variable*: *identificatore*

*base-abstract-declarator*: *abstract-declarator*

*tipo di base*: *-nome del tipo*

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Puntatori based](../cpp/based-pointers-cpp.md)