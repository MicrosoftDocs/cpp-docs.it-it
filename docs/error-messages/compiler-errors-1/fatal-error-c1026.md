---
title: Errore irreversibile C1026
ms.date: 11/04/2016
f1_keywords:
- C1026
helpviewer_keywords:
- C1026
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
ms.openlocfilehash: a7c7a5da01c8b4a44c307a00f53530acb12a8009
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80204653"
---
# <a name="fatal-error-c1026"></a>Errore irreversibile C1026

overflow dello stack del parser. Programma troppo complesso

Lo spazio necessario per l'analisi del programma ha causato un overflow dello stack del compilatore.

Ridurre la complessità delle espressioni per:

- Riduzione della nidificazione nelle istruzioni `for` e `switch`. Inserire istruzioni più approfondite annidate in funzioni separate.

- Suddivisione di espressioni Long che coinvolgono operatori virgola o chiamate di funzione.
