---
title: 'Conversione: diagnostica | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1c6a59abc48e5a6bc2aa727508b61abe120c8425
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32385153"
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