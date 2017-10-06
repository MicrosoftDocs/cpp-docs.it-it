---
title: Diagnostica stampata dalla funzione assert | Microsoft Docs
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
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 50a41f3b25a616718cffd4dcd8bce0a1ca4e0932
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="diagnostic-printed-by-the-assert-function"></a>Diagnostica visualizzata dalla funzione di asserzione
**ANSI 4.2** Diagnostica stampata dalla funzione **assert** e relativo comportamento di terminazione  
  
 La funzione **assert** stampa un messaggio di diagnostica e chiama la routine **abort** se l'espressione è false (0). Il messaggio di diagnostica presenta la forma seguente:  
  
 **Asserzione non riuscita**: *expression***, file** *filename***, line** *linenumber*  
  
 in cui filename è il nome del file di origine e linenumber è il numero di riga dell'asserzione non riuscita nel file di origine. Se l'espressione è true (diversa da zero), non viene intrapresa alcuna azione.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)
