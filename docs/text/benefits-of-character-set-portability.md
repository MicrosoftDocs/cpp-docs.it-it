---
title: "Portabilità dei Set vantaggi del carattere | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- character sets [C++], benefits
- portability [C++], character sets
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
caps.latest.revision: "8"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 554137352c0a8f7275a051e4026020fce25edbb8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="benefits-of-character-set-portability"></a>Vantaggi della portabilità dei set di caratteri
È possibile trarre vantaggio dall'utilizzo delle funzionalità di portabilità di runtime C e MFC anche se non si intende attualmente da internazionalizzare l'applicazione:  
  
-   La portabilità della codifica la codebase più flessibile. È possibile in un secondo momento spostarla facilmente Unicode e MBCS.  
  
-   Utilizzo di Unicode rende più efficiente delle applicazioni per Windows 2000. Poiché Windows 2000 utilizza Unicode, le stringhe non Unicode passate da e verso il sistema operativo devono essere convertite, che comporta un sovraccarico.  
  
-   Il formato MBCS consente di supportare i mercati internazionali su piattaforme Win32 diversi da Windows 2000, ad esempio Windows 95 o Windows 98.  
  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Supporto per Unicode](../text/support-for-unicode.md)