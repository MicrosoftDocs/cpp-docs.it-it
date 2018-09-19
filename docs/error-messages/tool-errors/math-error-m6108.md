---
title: Errore matematico M6108 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- M6108
dev_langs:
- C++
helpviewer_keywords:
- M6108
ms.assetid: 054893b4-49bc-45d9-882f-7cb50ba387c0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e1624a89b472733b4adb5563c8ba52e0b03dcaa2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46048617"
---
# <a name="math-error-m6108"></a>Errore matematico M6108

radice quadrata

L'operando in un'operazione radice quadrata è negativo.

Il programma termina con il codice di uscita 136.

> [!NOTE]
>  Il `sqrt` funzione nella libreria run-time C e la funzione intrinseca FORTRAN **SQRT** non generano questo errore. C `sqrt` funzione Controlla l'argomento prima di eseguire l'operazione e restituisce un errore se l'operando è negativo. Il FORTRAN **SQRT** funzione genera l'errore di dominio [M6201](../../error-messages/tool-errors/math-error-m6201.md) invece di questo errore.