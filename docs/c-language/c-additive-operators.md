---
description: 'Altre informazioni su: operatori di addizione C'
title: Operatori di addizione C
ms.date: 10/18/2018
helpviewer_keywords:
- usual arithmetic conversions
- operators [C], addition
- + operator, additive operators
- additive operators
- arithmetic operators [C++], additive operators
ms.assetid: bb8ac205-b061-41fc-8dd4-dab87c8b900c
ms.openlocfilehash: b77c3e9716cba716f625fa142129f5c1ce095907
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211596"
---
# <a name="c-additive-operators"></a>Operatori di addizione C

Gli operatori additivi eseguono addizione ( **+** ) e sottrazione ( **-** ).

## <a name="syntax"></a>Sintassi

*additive-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-espressione* **+** *espressione moltiplicativa*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-espressione* **-** *espressione moltiplicativa*

> [!NOTE]
> Sebbene la sintassi per *additive-expression* includa *multiplicative-expression*, ciò non implica che siano richieste le espressioni che usano la moltiplicazione. Vedere la sintassi in [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md) per *multiplicative-expression*, *cast-expression* e *unary-expression*.

Gli operandi possono essere valori integrali o a virgola mobile. Alcune operazioni additive possono essere eseguite sui valori di puntatore, come descritto nella discussione di ciascun operatore.

Gli operatori additivi eseguono conversioni aritmetiche consuete su operandi di tipo integrale e a virgola mobile. Il tipo del risultato è il tipo degli operandi in seguito alla conversione. Poiché le conversioni eseguite dagli operatori additivi non consentono condizioni di overflow o di underflow, è possibile che le informazioni vengano perse se il risultato di un'operazione additiva non può essere rappresentato nel tipo degli operandi dopo la conversione.

## <a name="see-also"></a>Vedi anche

[Operatori di addizione: + e-](../cpp/additive-operators-plus-and.md)
