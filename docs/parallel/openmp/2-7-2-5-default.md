---
title: 2.7.2.5 default
ms.date: 11/04/2016
ms.assetid: c856df07-705c-4ad3-9105-a268dd33e939
ms.openlocfilehash: efb10913b74ebfae37c95d057955c87bdcfca9a7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50580229"
---
# <a name="2725-default"></a>2.7.2.5 default

Il **predefinito** clausola consente all'utente interessano gli attributi di condivisione dei dati delle variabili. La sintassi del **predefinito** clausola è il seguente:

```
default(shared | none)
```

Che specifica **default(shared)** equivale a elencare in modo esplicito ogni variabile attualmente visibile in un **condiviso** clausola, a meno che non è **threadprivate** o **svantaggi**`t`-completo. In assenza di esplicita **predefinite** clausola, il comportamento predefinito è quello utilizzato if **default(shared)** sono state specificate.

Che specifica **default (None)** richiede che almeno uno dei seguenti deve essere true per ogni riferimento a una variabile nell'ambito lessicale di costrutto parallelo:

- La variabile è elencata in modo esplicito in una clausola di attributi di condivisione dei dati di un costrutto che contiene il riferimento.

- La variabile è dichiarata all'interno di un costrutto parallelo.

- La variabile viene **threadprivate**.

- La variabile ha una **const**-tipo completo.

- La variabile è la variabile di controllo per un **per** ciclo che seguirà immediatamente un **per** oppure **parallele per** direttiva e il riferimento alla variabile viene visualizzata all'interno del ciclo .

Specifica una variabile in un **firstprivate**, **lastprivate**, o **riduzione** clausola di una direttiva racchiusa provoca un riferimento implicito alla variabile di inclusione contesto. Tali riferimenti impliciti sono inoltre soggetti a requisiti elencati in precedenza.

Una sola **predefinite** clausola può essere specificata su un **parallele** direttiva.

Predefinito della variabile possono essere sottoposto a override di attributi per la condivisione dei dati usando il **privati**, **firstprivate**, **lastprivate**, **riduzione**, e **condivisa** clausole, come illustrato nell'esempio seguente:

```
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\
   private(x)  private(r)  lastprivate(i)
```