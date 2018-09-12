---
title: Diagnostica stampata dalla funzione assert | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 78b64200-520d-40da-9a61-71553f411d4f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e824e94f79aa01ab3a82675fb3e8f76059c567d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43195552"
---
# <a name="diagnostic-printed-by-the-assert-function"></a>Diagnostica visualizzata dalla funzione di asserzione
**ANSI 4.2** Diagnostica stampata dalla funzione **assert** e relativo comportamento di terminazione  
  
La funzione **assert** stampa un messaggio di diagnostica e chiama la routine **abort** se l'espressione è false (0). Il messaggio di diagnostica presenta la forma seguente:  

> **Asserzione non riuscita**: <em>expression</em>**, file** <em>filename</em>**, line** *linenumber*  

in cui *filename* è il nome del file di origine e *linenumber* è il numero di riga dell'asserzione non riuscita nel file di origine. Se l'*espressione* è true (diversa da zero), non viene intrapresa alcuna azione.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)