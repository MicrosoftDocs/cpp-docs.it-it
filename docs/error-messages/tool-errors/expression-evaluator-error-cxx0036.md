---
title: Errore dell‘analizzatore di espressioni CXX0036
ms.date: 11/04/2016
f1_keywords:
- CXX0036
helpviewer_keywords:
- CXX0036
- CAN0036
ms.assetid: 383404be-df5b-4eec-b113-df21bb5d269d
ms.openlocfilehash: d7961d92760cc5ac325b4bc9f187d4ee2298479a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62397029"
---
# <a name="expression-evaluator-error-cxx0036"></a>Errore dell‘analizzatore di espressioni CXX0036

contesto non valido {...} specification

Questo messaggio può essere generato da uno qualsiasi dei numerosi errori nell'uso dell'operatore di contesto (**{}**).

- La sintassi dell'operatore di contesto (**{}**) è stato specificato in modo errato.

   La sintassi dell'operatore di contesto è:

     {*function*,*module*,*dll*}*expression*

   Specifica il contesto di *espressione*. L'operatore di contesto è la stessa precedenza e l'utilizzo come un cast di tipo.

   È possibile omettere le virgole finali. Se una qualsiasi delle *funzione*, *modulo*, o *dll* contiene una virgola letterale, è necessario racchiudere l'intero nome tra parentesi.

- Il nome della funzione sia stato digitato in modo non corretto o non esiste nel modulo o libreria a collegamento dinamico.

   Perché C è un linguaggio di distinzione maiuscole/minuscole *funzione* deve essere specificato esattamente del caso con è definito nell'origine.

- Modulo o della DLL non è stata trovata.

   Controllare il nome e percorso completo del modulo specificato o della DLL.

Questo errore è identico all'errore CAN0036.