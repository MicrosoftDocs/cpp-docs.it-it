---
title: Funzioni inline
ms.date: 10/16/2017
helpviewer_keywords:
- fast code
- inline functions, __inline keyword
- functions [C++], inline functions
ms.assetid: 00f4b2ff-8ad0-4165-9f4c-2ef157d03f31
ms.openlocfilehash: ebe0fd3d785903c149999bd4ec8de9eabeabdb05
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62325546"
---
# <a name="inline-functions"></a>Funzioni inline

**Specifico di Microsoft**

La parola chiave `__inline` indica al compilatore di sostituire il codice nella definizione di funzione per ogni istanza di una chiamata di funzione. La sostituzione, tuttavia, viene eseguita solo a discrezione del compilatore. Il compilatore ad esempio non rende inline una funzione se ne viene acquisito l'indirizzo o se la funzione è di dimensioni troppo elevate.

Affinché una funzione venga considerata candidata per essere resa inline, è necessario utilizzare la definizione di funzione in nuovo stile.

Utilizzare questo formato per specificare una funzione inline:

> **__inline** *type*<sub>opt</sub> *function-definition*

L'utilizzo delle funzioni inline genera codice più veloce e può talvolta generare codice minore rispetto a quello generato dalla chiamata di funzione equivalente per i seguenti motivi:

- Risparmio del tempo necessario per eseguire chiamate di funzione.

- Le funzioni inline di dimensioni minori, costituite da tre righe o meno, creano meno codice rispetto alla chiamata di funzione equivalente in quanto il compilatore non genera codice per gestire gli argomenti e un valore restituito.

- Le funzioni generate come funzioni inline sono soggette alle ottimizzazioni di codice non disponibili per le funzioni normali perché il compilatore non esegue ottimizzazioni tra procedure.

Le funzioni che utilizzano `__inline` non devono essere confuse con il codice assembler inline. Per altre informazioni, vedere [Assembler inline](../c-language/inline-assembler-c.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[inline, __inline, \__forceinline](../cpp/inline-functions-cpp.md)
