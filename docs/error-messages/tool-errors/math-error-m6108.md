---
title: Errore matematico M6108
ms.date: 11/04/2016
f1_keywords:
- M6108
helpviewer_keywords:
- M6108
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
ms.openlocfilehash: c6bd403437ee5e55eaf4add288995d0e4aa76c3b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361967"
---
# <a name="math-error-m6108"></a>Errore matematico M6108

radice quadrata

L'operando in un'operazione di radice quadrata era negativo.

Il programma termina con il codice di uscita 136.

> [!NOTE]
> La `sqrt` funzione nella libreria di runtime del linguaggio C e la funzione intrinseca FORTRAN **SQRT** non generano questo errore. La `sqrt` funzione C controlla l'argomento prima di eseguire l'operazione e restituisce un valore di errore se l'operando è negativo. La funzione **SQRT** FORTRAN genera l'errore DOMAIN [M6201](../../error-messages/tool-errors/math-error-m6201.md) anziché questo errore.
