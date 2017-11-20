---
title: Tecnologia Active e DLL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- in-process server DLLs
- Automation [C++], DLLs
- DLLs [C++], Active Technology
- Active technology [C++]
- MFC DLLs [C++], Active Technology
ms.assetid: 3ed27f8d-164a-4562-ad61-9f2333404cc7
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fb97e43f589718f79f64483593cfea870258d9f8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="active-technology-and-dlls"></a>Tecnologia Active e DLL
Tecnologia Active consente ai server oggetto di essere implementate completamente all'interno di una DLL. Questo tipo di server è definito un server in-process. MFC non supporta i server in-process completamente per tutte le funzionalità di modifica visiva, soprattutto perché la tecnologia Active non fornisce un modo per un server da associare al ciclo di messaggi principale del contenitore. MFC richiede l'accesso al ciclo di messaggi dell'applicazione contenitore per gestire l'elaborazione di tempo di inattività e tasti di scelta rapida.  
  
 Se si sta scrivendo un server di automazione e il server non dispone di alcuna interfaccia utente, è possibile rendere il server di un server in-process e inserirlo completamente in una DLL.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Server di automazione](../mfc/automation-servers.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)