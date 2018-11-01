---
title: Errore dell‘analizzatore di espressioni CXX0033
ms.date: 11/04/2016
f1_keywords:
- CXX0033
helpviewer_keywords:
- CAN0033
- CXX0033
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
ms.openlocfilehash: 8563eb2fbc24c6ad8db639d2e227802412a16090
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642785"
---
# <a name="expression-evaluator-error-cxx0033"></a>Errore dell‘analizzatore di espressioni CXX0033

Errore nelle informazioni sul tipo OMF

Il file eseguibile non aveva un formato di modulo di oggetto valido (OMF) per il debug.

Questo errore è identico all'errore CAN0033.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il file eseguibile non è stato creato con il linker rilasciato con questa versione di Visual C++. Ricollegare il codice di oggetti utilizzando la versione corrente di LINK.exe.

1. Il file .exe sia danneggiato. Ricompilare e il ricollegamento automatico.