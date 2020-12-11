---
description: "Altre informazioni su: errore dell'analizzatore di espressioni CXX0033"
title: Errore dell‘analizzatore di espressioni CXX0033
ms.date: 11/04/2016
f1_keywords:
- CXX0033
helpviewer_keywords:
- CAN0033
- CXX0033
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
ms.openlocfilehash: 714499d8d1bc0812395576fe27be690997982065
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160324"
---
# <a name="expression-evaluator-error-cxx0033"></a>Errore dell‘analizzatore di espressioni CXX0033

errore nelle informazioni sul tipo OMF

Il file eseguibile non dispone di un formato di modulo oggetto (OMF) valido per il debug.

Questo errore è identico a CAN0033.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Il file eseguibile non è stato creato con il linker rilasciato con questa versione di Visual C++. Ricollegare il codice oggetto utilizzando la versione corrente di LINK.exe.

1. Il file con estensione exe potrebbe essere danneggiato. Ricompilare e ricollegare il programma.
