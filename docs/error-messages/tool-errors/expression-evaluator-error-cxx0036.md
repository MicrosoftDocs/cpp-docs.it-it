---
title: Errore dell'analizzatore di espressioni CXX0036 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- CXX0036
dev_langs:
- C++
helpviewer_keywords:
- CXX0036
- CAN0036
ms.assetid: 383404be-df5b-4eec-b113-df21bb5d269d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fdf6ddf412786a53ec8da995c2824274da2da3b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="expression-evaluator-error-cxx0036"></a>Errore dell‘analizzatore di espressioni CXX0036
contesto non valido {...} specification  
  
 Questo messaggio può essere generato da uno di diversi errori nell'uso dell'operatore di contesto (**{}**).  
  
-   La sintassi dell'operatore di contesto (**{}**) è stata specificata correttamente.  
  
     La sintassi dell'operatore di contesto è:  
  
     {*funzione*,*modulo*,*dll*}*espressione*  
  
     Viene specificato il contesto di *espressione*. L'operatore di contesto è la stessa precedenza e l'utilizzo come un cast di tipo.  
  
     È possibile omettere le virgole finali. Se una qualsiasi delle *funzione*, *modulo*, o *dll* contiene una virgola letterale, è necessario racchiudere l'intero nome tra parentesi.  
  
-   Il nome della funzione sia stato digitato in modo non corretto o non esiste nel modulo specificato o libreria a collegamento dinamico.  
  
     Perché C è un linguaggio tra maiuscole e minuscole, *funzione* deve essere specificato esattamente del caso con è definito nell'origine.  
  
-   Impossibile trovare il modulo o DLL.  
  
     Controllare il nome e percorso completo del modulo specificato o DLL.  
  
 Questo errore è identico all'errore CAN0036.