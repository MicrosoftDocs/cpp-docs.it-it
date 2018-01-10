---
title: 'Conversione: diagnostica | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 10349357fa0411357b702ff48ff9407c1f5b91e7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="translation-diagnostics"></a>Conversione: diagnostica
**ANSI 2.1.1.3** Come viene identificato un elemento di diagnostica  
  
 Microsoft C produce messaggi di errore nel form:  
  
```  
  
filename( line-number ) : diagnostic Cnumbermessage  
```  
  
 dove *filename* è il nome del file di origine in cui l'errore è stato rilevato; *line-number* è il numero di riga in cui è stato rilevato l'errore da parte del compilatore; `diagnostic` è "error" o "warning"; `number` è un numero a quattro cifre univoco (preceduto da **C**, come indicato nella sintassi) che identifica l'errore o l'avviso; `message` è un messaggio esplicativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Comportamento definito dall'implementazione](../c-language/implementation-defined-behavior.md)