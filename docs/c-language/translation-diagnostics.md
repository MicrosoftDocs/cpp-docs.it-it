---
title: 'Conversione: diagnostica | Microsoft Docs'
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
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: bb7f826be88ebec640a6f3b40b38478eea91ed36
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
