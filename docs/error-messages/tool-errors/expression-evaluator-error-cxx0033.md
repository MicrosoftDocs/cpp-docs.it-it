---
title: Errore dell'analizzatore di espressioni CXX0033 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0033
dev_langs:
- C++
helpviewer_keywords:
- CAN0033
- CXX0033
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 04f37b53c30d36a43d339132bfd9baca3e5ec70c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057198"
---
# <a name="expression-evaluator-error-cxx0033"></a>Errore dell‘analizzatore di espressioni CXX0033

Errore nelle informazioni sul tipo OMF

Il file eseguibile non aveva un formato di modulo di oggetto valido (OMF) per il debug.

Questo errore è identico all'errore CAN0033.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il file eseguibile non è stato creato con il linker rilasciato con questa versione di Visual C++. Ricollegare il codice di oggetti utilizzando la versione corrente di LINK.exe.

1. Il file .exe sia danneggiato. Ricompilare e il ricollegamento automatico.