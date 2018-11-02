---
title: Espansione di caratteri jolly
ms.date: 11/04/2016
f1_keywords:
- _setargv
helpviewer_keywords:
- asterisk wildcard
- _setargv function
- command line [C++], processing arguments
- command line [C++], wildcards
- command-line wildcards
- question mark, wildcard
ms.assetid: 1a543398-607b-4404-93d1-45d290bde638
ms.openlocfilehash: 2d495f94f2e3fb7b88d235edc7b98f8e90775393
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50507433"
---
# <a name="wildcard-expansion"></a>Espansione di caratteri jolly

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Gli argomenti della riga di comando vengono gestiti da una routine denominata `_setargv` (o `_wsetargv` nell'ambiente di caratteri "wide"), che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella `argv` matrice di stringhe. Per altre informazioni sull'abilitazione dell'espansione di caratteri jolly, consultare [espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)