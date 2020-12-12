---
description: 'Altre informazioni su: funzioni inline'
title: Funzioni inline
ms.date: 10/16/2017
helpviewer_keywords:
- fast code
- inline functions, __inline keyword
- functions [C++], inline functions
ms.assetid: 00f4b2ff-8ad0-4165-9f4c-2ef157d03f31
ms.openlocfilehash: 616e85f2ac298420b3de174551ea2f6f879f24f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137554"
---
# <a name="inline-functions"></a>Funzioni inline

**Specifico di Microsoft**

La **`__inline`** parola chiave indica al compilatore di sostituire il codice all'interno della definizione di funzione per ogni istanza di una chiamata di funzione. La sostituzione, tuttavia, viene eseguita solo a discrezione del compilatore. Il compilatore ad esempio non rende inline una funzione se ne viene acquisito l'indirizzo o se la funzione è di dimensioni troppo elevate.

Affinché una funzione venga considerata candidata per essere resa inline, è necessario utilizzare la definizione di funzione in nuovo stile.

Utilizzare questo formato per specificare una funzione inline:

> **`__inline`***digitare*<sub>opt</sub> *-funzione-definizione*

L'utilizzo delle funzioni inline genera codice più veloce e può talvolta generare codice minore rispetto a quello generato dalla chiamata di funzione equivalente per i seguenti motivi:

- Risparmio del tempo necessario per eseguire chiamate di funzione.

- Le funzioni inline di dimensioni minori, costituite da tre righe o meno, creano meno codice rispetto alla chiamata di funzione equivalente in quanto il compilatore non genera codice per gestire gli argomenti e un valore restituito.

- Le funzioni generate come funzioni inline sono soggette alle ottimizzazioni di codice non disponibili per le funzioni normali perché il compilatore non esegue ottimizzazioni tra procedure.

Le funzioni che utilizzano **`__inline`** non devono essere confuse con il codice assembler inline. Per altre informazioni, vedere [Assembler inline](../c-language/inline-assembler-c.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[inline, __inline, \_ _forceinline](../cpp/inline-functions-cpp.md)
