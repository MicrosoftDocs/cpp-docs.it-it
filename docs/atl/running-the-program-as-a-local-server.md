---
title: Esecuzione del programma come un Server locale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- debugging [ATL], running services as local server
- ATL services, running as local servers
ms.assetid: eb9701e6-e2a8-4666-897f-0c893aec8ac7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c2b8a79978528493e02ac5a272dafe8da6fdc1d9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360443"
---
# <a name="running-the-program-as-a-local-server"></a>Esecuzione del programma come un Server locale
Se non è pratico eseguire il programma come servizio, è possibile modificare temporaneamente il Registro di sistema in modo che il programma viene eseguito come un normale server locale. Rinominare semplicemente il `LocalService` valore nell'ID applicazione per `_LocalService` e assicurarsi che il `LocalServer32` chiave del CLSID sia impostata correttamente. (Si noti che usando DCOMCNFG per specificare che l'applicazione deve essere eseguito in un computer diverso Rinomina il `LocalServer32` per `_LocalServer32`.) Esecuzione del programma, come un server locale accetta più di pochi secondi all'avvio, poiché la chiamata a **StartServiceCtrlDispatcher** in `CAtlServiceModuleT::Start` richiede alcuni secondi prima che si verifica un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sul debug](../atl/debugging-tips.md)

