---
title: 2.7.2.5 predefinito | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c856df07-705c-4ad3-9105-a268dd33e939
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c054c7f0ac7d1d73768d84613524afc979fecaa5
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33695876"
---
# <a name="2725-default"></a>2.7.2.5 default
Il **predefinito** clausola consente all'utente interessano gli attributi di condivisione dei dati delle variabili. La sintassi del **predefinito** clausola è il seguente:  
  
```  
default(shared | none)  
```  
  
 Specificando **default(shared)** equivale a elencare in modo esplicito ogni variabile attualmente visibile in un **condivisa** clausola, a meno che non è **threadprivate** o **svantaggi**`t`-completo. In assenza di esplicita **predefinito** clausola, il comportamento predefinito è lo stesso come se **default(shared)** sono state specificate.  
  
 Specifica di **default (None)** richiede che almeno uno dei seguenti deve essere true per ogni riferimento a una variabile dell'extent lessicale di un costrutto parallelo:  
  
-   La variabile è elencata in modo esplicito in una clausola di attributo la condivisione dei dati di un costrutto che contiene il riferimento.  
  
-   La variabile è dichiarata all'interno di un costrutto parallelo.  
  
-   La variabile è **threadprivate**.  
  
-   La variabile ha un **const**-tipo completo.  
  
-   La variabile è la variabile di controllo per un **per** ciclo che segue immediatamente un **per** o **parallela per** direttiva e il riferimento alla variabile viene visualizzato all'interno del ciclo .  
  
 Specifica una variabile in un **firstprivate**, **lastprivate**, o **riduzione** clausola di una direttiva racchiusa provoca un riferimento implicito alla variabile nel tipo di inclusione contesto. Tali riferimenti impliciti sono inoltre soggetti a requisiti elencati in precedenza.  
  
 Una sola **predefinito** clausola può essere specificata in un **parallela** direttiva.  
  
 Valore predefinito di una variabile possono eseguire l'override di attributi per la condivisione di dati usando il **privata**, **firstprivate**, **lastprivate**, **riduzione**, e **condivisa** clausole, come illustrato nell'esempio seguente:  
  
```  
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\  
   private(x)  private(r)  lastprivate(i)  
```