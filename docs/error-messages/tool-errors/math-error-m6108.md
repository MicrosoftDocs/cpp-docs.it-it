---
title: Errore matematico M6108
ms.date: 11/04/2016
f1_keywords:
- M6108
helpviewer_keywords:
- M6108
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
ms.openlocfilehash: 68e6ae823613d87eb01c443b564b46746259cd7b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173725"
---
# <a name="math-error-m6108"></a>Errore matematico M6108

radice quadrata

L'operando in un'operazione radice quadrata è negativo.

Il programma termina con il codice di uscita 136.

> [!NOTE]
>  La funzione `sqrt` nella libreria di runtime del linguaggio C e la funzione intrinseca FORTRAN **Sqrt** non generano questo errore. La funzione C `sqrt` controlla l'argomento prima di eseguire l'operazione e restituisce un valore di errore se l'operando è negativo. La funzione **Sqrt sqrt** genera l'errore di dominio [matematico M6201](../../error-messages/tool-errors/math-error-m6201.md) invece di questo errore.
