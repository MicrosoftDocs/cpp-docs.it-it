---
title: Errore matematico M6108
ms.date: 11/04/2016
f1_keywords:
- M6108
helpviewer_keywords:
- M6108
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
ms.openlocfilehash: d60e9b6284c79828fda1f7af542fcf197f189ad0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393272"
---
# <a name="math-error-m6108"></a>Errore matematico M6108

radice quadrata

L'operando in un'operazione radice quadrata è negativo.

Il programma termina con il codice di uscita 136.

> [!NOTE]
>  Il `sqrt` funzione nella libreria run-time C e la funzione intrinseca FORTRAN **SQRT** non generano questo errore. C `sqrt` funzione Controlla l'argomento prima di eseguire l'operazione e restituisce un errore se l'operando è negativo. Il FORTRAN **SQRT** funzione genera l'errore di dominio [M6201](../../error-messages/tool-errors/math-error-m6201.md) invece di questo errore.