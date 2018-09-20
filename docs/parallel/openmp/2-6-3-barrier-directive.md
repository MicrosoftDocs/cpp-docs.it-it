---
title: 2.6.3 direttiva barrier | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 4485a3d7-533f-4fec-8128-a131bec7fa16
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8654534143e6feed06e93406c8fe03983ee9c2fc
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46429149"
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