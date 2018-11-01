---
title: 2.6.3 Direttiva barrier
ms.date: 11/04/2016
ms.assetid: 4485a3d7-533f-4fec-8128-a131bec7fa16
ms.openlocfilehash: 9079dce4b2a27e91e349fd0df8414d38cd245d2e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637021"
---
# <a name="263-barrier-directive"></a>2.6.3 Direttiva barrier

Il **barriera** direttiva Sincronizza tutti i thread in un team. Quando si verifica, ogni thread del team attende che tutti gli altri hanno raggiunto questo punto. La sintassi del **barriera** direttiva è come segue:

```
#pragma omp barrier new-line
```

Dopo che tutti i thread del team hanno rilevato la barriera, ogni thread del team avvia l'esecuzione di istruzioni dopo la direttiva barrier in parallelo. Si noti che poiché il **barriera** direttiva non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni nella relativa posizione all'interno di un programma. Visualizzare [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) per la grammatica formale. L'esempio seguente illustra queste restrizioni.

```
/* ERROR - The barrier directive cannot be the immediate
*          substatement of an if statement
*/
if (x!=0)
   #pragma omp barrier
...

/* OK - The barrier directive is enclosed in a
*      compound statement.
*/
if (x!=0) {
   #pragma omp barrier
}
```