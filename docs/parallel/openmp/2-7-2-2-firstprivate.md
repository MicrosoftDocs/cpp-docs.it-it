---
title: 2.7.2.2 firstprivate
ms.date: 11/04/2016
ms.assetid: ece6ff12-2be1-4e4f-866c-d39345fd87b5
ms.openlocfilehash: f981c66fd3e0a2f42dcf731954f5054f96ed2973
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605972"
---
# <a name="2722-firstprivate"></a>2.7.2.2 firstprivate

Il **firstprivate** clausola offre un soprainsieme delle funzionalità offerte dalle **privati** clausola. La sintassi del **firstprivate** clausola è il seguente:

```
firstprivate(variable-list)
```

Le variabili specificate nella *variabile-list* hanno **privato** semantica clausola, come descritto in [sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) a pagina 25. La costruzione o l'inizializzazione avviene come se sono state eseguita una sola volta per ogni thread, prima dell'esecuzione del thread del costrutto. Per un **firstprivate** clausola in un costrutto parallelo, il valore iniziale del nuovo oggetto privato è il valore dell'oggetto originale presente immediatamente prima del costrutto parallelo per il thread che lo rileva. Per un **firstprivate** clausola in un costrutto di condivisione del lavoro, il valore iniziale del nuovo oggetto privato per ogni thread che esegue il costrutto di condivisione del lavoro è il valore dell'oggetto originale che esiste prima del punto nel tempo che lo stesso thread rileva il costrutto di condivisione del lavoro. Inoltre, per gli oggetti C++, il nuovo oggetto privato per ogni thread è copia costruita dall'oggetto originale.

Le restrizioni per il **firstprivate** clausola sono i seguenti:

- Una variabile specificata una **firstprivate** clausola non deve avere un tipo incompleto o un tipo riferimento.

- Una variabile con un tipo di classe specificato come **firstprivate** devono avere un costruttore di copia accessibile e non ambigua.

- Le variabili che appartengono all'interno di un'area parallela o che vengono visualizzate nel **riduzione** clausola di un **parallele** direttiva non è possibile specificare un **firstprivate** clausola in un direttiva condivisione del lavoro associata a un costrutto parallelo.