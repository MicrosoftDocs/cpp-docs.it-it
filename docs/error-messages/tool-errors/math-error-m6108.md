---
description: 'Altre informazioni su: errore matematico matematico M6108'
title: Errore matematico M6108
ms.date: 11/04/2016
f1_keywords:
- M6108
helpviewer_keywords:
- M6108
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
ms.openlocfilehash: 1a0acf13bd166e499334cb13de33093c2c804f5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143884"
---
# <a name="math-error-m6108"></a>Errore matematico M6108

radice quadrata

L'operando in un'operazione radice quadrata è negativo.

Il programma termina con il codice di uscita 136.

> [!NOTE]
> La `sqrt` funzione nella libreria di runtime del linguaggio C e la funzione intrinseca FORTRAN **Sqrt** non generano questo errore. La `sqrt` funzione C controlla l'argomento prima di eseguire l'operazione e restituisce un valore di errore se l'operando è negativo. La funzione **Sqrt sqrt** genera l'errore di dominio [matematico M6201](../../error-messages/tool-errors/math-error-m6201.md) invece di questo errore.
