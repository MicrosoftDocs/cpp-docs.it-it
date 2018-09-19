---
title: Errore dell'analizzatore di espressioni CXX0036 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0036
dev_langs:
- C++
helpviewer_keywords:
- CXX0036
- CAN0036
ms.assetid: 383404be-df5b-4eec-b113-df21bb5d269d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e2d82a1254a11dbda3164ea1c350dc14e2b1a122
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050112"
---
# <a name="expression-evaluator-error-cxx0036"></a>Errore dell‘analizzatore di espressioni CXX0036

contesto non valido {...} specification

Questo messaggio può essere generato da uno qualsiasi dei numerosi errori nell'uso dell'operatore di contesto (**{}**).

- La sintassi dell'operatore di contesto (**{}**) è stato specificato in modo errato.

     La sintassi dell'operatore di contesto è:

     {*funzione*,*modulo*,*dll*}*espressione*

     Specifica il contesto di *espressione*. L'operatore di contesto è la stessa precedenza e l'utilizzo come un cast di tipo.

     È possibile omettere le virgole finali. Se una qualsiasi delle *funzione*, *modulo*, o *dll* contiene una virgola letterale, è necessario racchiudere l'intero nome tra parentesi.

- Il nome della funzione sia stato digitato in modo non corretto o non esiste nel modulo o libreria a collegamento dinamico.

     Perché C è un linguaggio di distinzione maiuscole/minuscole *funzione* deve essere specificato esattamente del caso con è definito nell'origine.

- Modulo o della DLL non è stata trovata.

     Controllare il nome e percorso completo del modulo specificato o della DLL.

Questo errore è identico all'errore CAN0036.