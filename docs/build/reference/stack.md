---
title: -STACK | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /stack
dev_langs:
- C++
helpviewer_keywords:
- -STACK editbin option
- STACK editbin option
- stack, setting size
- /STACK editbin option
ms.assetid: a39bcff0-c945-4355-80cc-8e4f24a5f142
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a82111ce950d14bc6b3e270ee9a658d806b28b62
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374076"
---
# <a name="stack"></a>/STACK
```  
/STACK:reserve[,commit]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione imposta la dimensione dello stack in byte e accetta gli argomenti in notazione decimale o in linguaggio C. Essa è applicabile solo a un file eseguibile.  
  
 Il *riservare* argomento specifica l'allocazione totale per lo stack nella memoria virtuale. Viene arrotondato al valore specificato di 4 byte più vicini.  
  
 Facoltativo `commit` argomento viene interpretato dal sistema operativo. In Windows NT, Windows 95 e Windows 98, `commit` specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata consente lo spazio da riservare nel file di paging. Un valore più alto `commit` valore consente di risparmiare tempo quando l'applicazione richiede più spazio di stack ma incrementa i requisiti di memoria ed eventualmente il tempo di avvio.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)