---
title: Errore irreversibile C1026
ms.date: 11/04/2016
f1_keywords:
- C1026
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
ms.openlocfilehash: 9ea97bef16bebb8fc0e765ed708e54baee9a64de
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220340"
---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026

overflow dello stack del parser. Programma troppo complesso

Lo spazio necessario per l'analisi del programma ha causato un overflow dello stack del compilatore.

Ridurre la complessità delle espressioni per:

- Riduzione della nidificazione nelle **`for`** **`switch`** istruzioni e. Inserire istruzioni più approfondite annidate in funzioni separate.

- Suddivisione di espressioni Long che coinvolgono operatori virgola o chiamate di funzione.
