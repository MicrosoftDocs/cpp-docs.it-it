---
title: Panoramica delle funzioni | Microsoft Docs
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
- functions [C++]
- control flow, function calls
ms.assetid: b6f4637f-02b9-49d8-8601-1f886bd2cfb9
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 16612a32a0e5cb2294f4b74f46c14c206c1cbcbc
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="overview-of-functions"></a>Cenni preliminari sulle funzioni
Le funzioni devono disporre di una definizione e devono disporre di una dichiarazione, sebbene una definizione possa servire come dichiarazione se questa viene riportata prima che venga chiamata la funzione. La definizione di una funzione include il corpo della funzione (il codice eseguito quando viene chiamata la funzione).  
  
 Una dichiarazione di funzione stabilisce il nome, il tipo restituito e gli attributi di una funzione definita altrove nel programma. Una dichiarazione di funzione deve precedere la chiamata alla funzione. Per questo motivo i file di intestazione contenenti le dichiarazioni per le funzioni di runtime vengono inclusi nel codice prima di una chiamata a una funzione di runtime. Se la dichiarazione dispone di informazioni sui tipi e sul numero di parametri, la dichiarazione è un prototipo. Per altre informazioni, vedere [Prototipi di funzioni](../c-language/function-prototypes.md).  
  
 Il compilatore utilizza il prototipo per confrontare i tipi di argomenti nelle successive chiamate alla funzione con parametri della funzione e per convertire i tipi degli argomenti nei tipi dei parametri ogni qualvolta è necessario.  
  
 Una chiamata di funzione passa il controllo di esecuzione dalla funzione chiamante alla funzione chiamata. Gli argomenti, se presenti, vengono passati in base al valore della funzione chiamata. L'esecuzione di un'istruzione `return` nella funzione chiamata restituisce il controllo ed eventualmente un valore alla funzione chiamante.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../c-language/functions-c.md)
