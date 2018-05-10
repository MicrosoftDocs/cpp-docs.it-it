---
title: Corpo della funzione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- functions [C], syntax
- variables, function syntax
- function definitions, function body
- function body
ms.assetid: f7e74822-fac8-4dc8-8f3a-2b1611da4640
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d6a566c1120f0a89a985895393fae5a79690bfa3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="function-body"></a>Corpo della funzione
Un "corpo di funzione" è un'istruzione composta che contiene le istruzioni che specificano ciò che svolge la funzione.  
  
## <a name="syntax"></a>Sintassi  
 *function-definition*:  
 *declaration-specifiers* opt*attribute-seq* opt*declarator declaration-list* opt*compound-statement*  
  
 /\* *attribute-seq* è specifico di Microsoft */  
  
 *compound-statement*: /\* Corpo della funzione \*/  
 **{**  *declaration-list* opt*statement-list* opt **}**  
  
 Se non diversamente specificato, le variabili dichiarate nel corpo di funzione, dette "variabili locali", hanno la classe di archiviazione **auto**. Quando la funzione viene chiamata, l'archiviazione viene creata per le variabili locali e le inizializzazioni locali vengono eseguite. Il controllo di esecuzione passa alla prima istruzione in *compound-statement* e continua fino a quando non viene eseguita un'istruzione `return` o non viene rilevata la fine del corpo di funzione. Il controllo ritorna quindi al punto in cui la funzione è stata chiamata.  
  
 Un'istruzione `return` contenente un'espressione deve essere eseguita se la funzione restituisce un valore. Il valore restituito di una funzione non è definito se nessuna istruzione `return` viene eseguita o se l'istruzione `return` non include un'espressione.  
  
## <a name="see-also"></a>Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)