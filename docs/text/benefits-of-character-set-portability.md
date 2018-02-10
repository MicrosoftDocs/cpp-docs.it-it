---
title: "Portabilità dei Set vantaggi del carattere | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- character sets [C++], benefits
- portability [C++], character sets
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7ce02fa834c39f629990d4f3c9785de94bd02196
ms.sourcegitcommit: a5916b48541f804a79891ff04e246628b5f9a24a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/09/2018
---
# <a name="benefits-of-character-set-portability"></a>Vantaggi della portabilità dei set di caratteri
È possibile trarre vantaggio dall'utilizzo delle funzionalità di portabilità di runtime C e MFC anche se non si intende attualmente da internazionalizzare l'applicazione:  
  
-   La portabilità della codifica la codebase più flessibile. È possibile in un secondo momento spostarla facilmente Unicode e MBCS.  
  
-   Utilizzo di Unicode rende più efficiente delle applicazioni per Windows. Poiché Windows utilizza Unicode, le stringhe non Unicode passate da e verso il sistema operativo devono essere convertite, che comporta un sovraccarico.  

  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Supporto per Unicode](../text/support-for-unicode.md)