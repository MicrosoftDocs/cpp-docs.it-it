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
ms.openlocfilehash: 1fdea297bb45a06a08bde4f63f90eabef6ddb539
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857177"
---
# <a name="wildcard-expansion"></a>Espansione di caratteri jolly

**Sezione specifica Microsoft**

È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.

Gli argomenti della riga di comando vengono gestiti da una routine denominata `_setargv` (o `_wsetargv` nell'ambiente a caratteri wide), che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella matrice di `argv` stringa. Per ulteriori informazioni sull'abilitazione dell'espansione dei caratteri jolly, vedere l'argomento relativo all' [espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)