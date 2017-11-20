---
title: Esecuzione del programma come un Server locale | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- debugging [ATL], running services as local server
- ATL services, running as local servers
ms.assetid: eb9701e6-e2a8-4666-897f-0c893aec8ac7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 131bfefb35164b2d1e53f5671016235e5426c096
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="running-the-program-as-a-local-server"></a>Esecuzione del programma come un Server locale
Se non è pratico eseguire il programma come servizio, è possibile modificare temporaneamente il Registro di sistema in modo che il programma viene eseguito come un normale server locale. Rinominare semplicemente il `LocalService` valore nell'ID applicazione per `_LocalService` e assicurarsi che il `LocalServer32` chiave del CLSID sia impostata correttamente. (Si noti che usando DCOMCNFG per specificare che l'applicazione deve essere eseguito in un computer diverso Rinomina il `LocalServer32` per `_LocalServer32`.) Esecuzione del programma, come un server locale accetta più di pochi secondi all'avvio, poiché la chiamata a **StartServiceCtrlDispatcher** in `CAtlServiceModuleT::Start` richiede alcuni secondi prima che si verifica un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sul debug](../atl/debugging-tips.md)

