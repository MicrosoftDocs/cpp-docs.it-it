---
title: Input e output | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.io
dev_langs:
- C++
helpviewer_keywords:
- input routines
- I/O [CRT]
- I/O routines
- I/O [CRT], routines
- output routines
ms.assetid: 1c177301-e341-4ca0-aedc-0a87fe1c75ae
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 79ede2f4d96f0dd985b5b68cf83e641cbba10f3e
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="input-and-output"></a>Input e output
Le funzioni di I/O leggono e scrivono dati in e da file e dispositivi. Le operazioni di I/O per i file si svolgono in modalità testo o modalità binaria. La libreria di runtime di Microsoft include tre tipi di funzioni I/O:  
  
-   Le funzioni [I/O di flusso](../c-runtime-library/stream-i-o.md) elaborano i dati come un flusso di caratteri singoli.  
  
-   Le funzioni [I/O di basso livello](../c-runtime-library/low-level-i-o.md) chiamano direttamente il sistema operativo per operazioni di livello inferiore rispetto a quelle specificate dal flusso di I/O.  
  
-   Le funzioni di [I/O su console e porta](../c-runtime-library/console-and-port-i-o.md) leggono o scrivono direttamente su una console (tastiera e schermo) o su una porta di I/O (ad esempio una porta per stampante).  
  
    > [!NOTE]
    >  Dato che le funzioni di flusso vengono memorizzate nel buffer e le funzioni di basso livello non vengono memorizzate, questi due tipi di funzione sono incompatibili a livello generale. Per elaborare un file specifico usare solo funzioni di flusso o solo funzioni di basso livello.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
