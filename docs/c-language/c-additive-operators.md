---
title: Operatori additivi C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- usual arithmetic conversions
- operators [C], addition
- + operator, additive operators
- additive operators
- arithmetic operators [C++], additive operators
ms.assetid: bb8ac205-b061-41fc-8dd4-dab87c8b900c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7be460ace4e407a328c0cf23c9e6c9af09d17ca0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46101476"
---
# <a name="c-additive-operators"></a>Operatori di addizione C

Gli operatori additivi eseguono l'addizione (**+**) e la sottrazione (**-**).

## <a name="syntax"></a>Sintassi

*additive-expression*: *multiplicative-expression*

*additive-expression*  **+**  *multiplicative-expression*

*additive-expression*  **-**  *multiplicative-expression*

> [!NOTE]
>  Sebbene la sintassi per *additive-expression* includa *multiplicative-expression*, ciò non implica che siano richieste le espressioni che usano la moltiplicazione. Vedere la sintassi in [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md) per *multiplicative-expression*, *cast-expression* e *unary-expression*.

Gli operandi possono essere valori integrali o a virgola mobile. Alcune operazioni additive possono essere eseguite sui valori di puntatore, come descritto nella discussione di ciascun operatore.

Gli operatori additivi eseguono conversioni aritmetiche consuete su operandi di tipo integrale e a virgola mobile. Il tipo del risultato è il tipo degli operandi in seguito alla conversione. Poiché le conversioni eseguite dagli operatori additivi non consentono condizioni di overflow o di underflow, è possibile che le informazioni vengano perse se il risultato di un'operazione additiva non può essere rappresentato nel tipo degli operandi dopo la conversione.

## <a name="see-also"></a>Vedere anche

[Operatori di addizione: + e -](../cpp/additive-operators-plus-and.md)