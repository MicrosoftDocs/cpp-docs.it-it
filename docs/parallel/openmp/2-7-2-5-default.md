---
title: 2.7.2.5 predefinito | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: c856df07-705c-4ad3-9105-a268dd33e939
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1ee328be7f9f0c4876738f8179c26e700c57702c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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