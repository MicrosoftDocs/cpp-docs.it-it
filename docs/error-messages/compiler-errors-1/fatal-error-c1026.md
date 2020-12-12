---
description: 'Altre informazioni su: errore irreversibile C1026'
title: Errore irreversibile C1026
ms.date: 11/04/2016
f1_keywords:
- C1026
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
ms.openlocfilehash: 08816f21879cf6dfbeb0389700d9a8ffdc7a40d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345511"
---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026

overflow dello stack del parser. Programma troppo complesso

Lo spazio necessario per l'analisi del programma ha causato un overflow dello stack del compilatore.

Ridurre la complessità delle espressioni per:

- Riduzione della nidificazione nelle **`for`** **`switch`** istruzioni e. Inserire istruzioni più approfondite annidate in funzioni separate.

- Suddivisione di espressioni Long che coinvolgono operatori virgola o chiamate di funzione.
