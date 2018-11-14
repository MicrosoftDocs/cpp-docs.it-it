---
title: 2.7.2.7 copyin
ms.date: 11/04/2016
ms.assetid: 76cfb9f8-bf65-4585-adbf-fd933f5606b4
ms.openlocfilehash: 20db32530ee60967245497cdfb12a0fce103f7b7
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51519529"
---
# <a name="2727-copyin"></a>2.7.2.7 copyin

Il **copyin** clausola fornisce un meccanismo per assegnare lo stesso valore per **threadprivate** variabili per ogni thread del team l'esecuzione di tale area. Per ogni variabile specificata una **copyin** clausola, il valore della variabile nel thread master del team a cui viene copiato, come se fosse assegnazione, per le copie di thread privato all'inizio dell'area parallela. La sintassi del **copyin** clausola è il seguente:

```

copyin(
variable-list
)
```

Le restrizioni per il **copyin** clausola sono i seguenti:

- Una variabile specificata nella **copyin** clausola deve avere un operatore di assegnazione copia accessibile e non ambigua.

- Una variabile specificata nella **copyin** clausola deve essere un **threadprivate** variabile.