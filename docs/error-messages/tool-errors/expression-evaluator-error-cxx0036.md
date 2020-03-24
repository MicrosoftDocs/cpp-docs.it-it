---
title: Errore dell‘analizzatore di espressioni CXX0036
ms.date: 11/04/2016
f1_keywords:
- CXX0036
helpviewer_keywords:
- CXX0036
- CAN0036
ms.assetid: 383404be-df5b-4eec-b113-df21bb5d269d
ms.openlocfilehash: 164fd9ee00071e218e5bb4f3ab00febc618725a7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195500"
---
# <a name="expression-evaluator-error-cxx0036"></a>Errore dell‘analizzatore di espressioni CXX0036

contesto non valido {...} specifica

Questo messaggio può essere generato da diversi errori nell'utilizzo dell'operatore di contesto ( **{}** ).

- La sintassi dell'operatore di contesto ( **{}** ) è stata assegnata in modo errato.

   La sintassi dell'operatore di contesto è la seguente:

     {*Function*,*Module*,*dll*} *espressione*

   Specifica il contesto dell' *espressione*. L'operatore di contesto ha la stessa precedenza e l'utilizzo di un cast di tipo.

   Le virgole finali possono essere omesse. Se una *funzione*, un *modulo*o una *dll* contiene una virgola letterale, è necessario racchiudere l'intero nome tra parentesi.

- Il nome della funzione è stato digitato in modo errato o non esiste nel modulo specificato o nella libreria a collegamento dinamico.

   Poiché C è un linguaggio con distinzione tra maiuscole e minuscole, la *funzione* deve essere specificata nel caso esatto in cui è definita nell'origine.

- Impossibile trovare il modulo o la DLL.

   Verificare il nome percorso completo del modulo o della DLL specificata.

Questo errore è identico a CAN0036.
