---
title: Corpo della funzione | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- functions [C], syntax
- variables, function syntax
- function definitions, function body
- function body
ms.assetid: f7e74822-fac8-4dc8-8f3a-2b1611da4640
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a0c85ecf0752ff34bf5b61e42309360f2bc4d448
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="function-body"></a>Corpo della funzione
Un "corpo di funzione" è un'istruzione composta che contiene le istruzioni che specificano ciò che svolge la funzione.  
  
## <a name="syntax"></a>Sintassi  
 *function-definition*:  
 *declaration-specifiers* opt*attribute-seq* opt*declarator declaration-list* opt*compound-statement*  
  
 /\* *attribute-seq* è specifico di Microsoft */  
  
 *compound-statement*: /\* Corpo della funzione \*/  
 **{**  *declaration-list* opt*statement-list* opt**}**  
  
 Se non diversamente specificato, le variabili dichiarate nel corpo di funzione, dette "variabili locali", hanno la classe di archiviazione **auto**. Quando la funzione viene chiamata, l'archiviazione viene creata per le variabili locali e le inizializzazioni locali vengono eseguite. Il controllo di esecuzione passa alla prima istruzione in *compound-statement* e continua fino a quando non viene eseguita un'istruzione `return` o non viene rilevata la fine del corpo di funzione. Il controllo ritorna quindi al punto in cui la funzione è stata chiamata.  
  
 Un'istruzione `return` contenente un'espressione deve essere eseguita se la funzione restituisce un valore. Il valore restituito di una funzione non è definito se nessuna istruzione `return` viene eseguita o se l'istruzione `return` non include un'espressione.  
  
## <a name="see-also"></a>Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)