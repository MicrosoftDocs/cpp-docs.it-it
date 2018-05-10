---
title: Portabilità dei Set vantaggi del carattere | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- character sets [C++], benefits
- portability [C++], character sets
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4d1b78048baebfd89aed0ccc898c2bb9e3612525
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="benefits-of-character-set-portability"></a>Vantaggi della portabilità dei set di caratteri
È possibile trarre vantaggio dall'utilizzo delle funzionalità di portabilità di runtime C e MFC anche se non si intende attualmente da internazionalizzare l'applicazione:  
  
-   La portabilità della codifica la codebase più flessibile. È possibile in un secondo momento spostarla facilmente Unicode e MBCS.  
  
-   Utilizzo di Unicode rende più efficiente delle applicazioni per Windows. Poiché Windows utilizza Unicode, le stringhe non Unicode passate da e verso il sistema operativo devono essere convertite, che comporta un sovraccarico.  

  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Supporto per Unicode](../text/support-for-unicode.md)