---
title: Errore matematico M6108 | Documenti Microsoft
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
ms.openlocfilehash: 4dfeca48aa04ebfbc097649e5c25253166c50dad
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="math-error-m6108"></a>Errore matematico M6108
radice quadrata  
  
 L'operando in un'operazione di radice quadrata è negativo.  
  
 Il programma termina con il codice di uscita 136.  
  
> [!NOTE]
>  Il `sqrt` funzione nella libreria di runtime C e la funzione intrinseca FORTRAN **SQRT** non generano questo errore. C `sqrt` funzione Controlla l'argomento prima di eseguire l'operazione e restituisce un valore di errore se l'operando è negativo. La differenza di FORTRAN **SQRT** funzione genera l'errore di dominio [M6201](../../error-messages/tool-errors/math-error-m6201.md) anziché l'errore.