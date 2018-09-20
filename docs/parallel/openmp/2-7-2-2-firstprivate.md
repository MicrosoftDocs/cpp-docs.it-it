---
title: 2.7.2.2 firstprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: ece6ff12-2be1-4e4f-866c-d39345fd87b5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0d3e6ad966f4cf895da9374798f6c9a4079ccc2f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46400965"
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