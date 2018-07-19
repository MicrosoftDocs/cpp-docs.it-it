---
title: Esecuzione del programma come un Server locale | Microsoft Docs
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
ms.openlocfilehash: 5ae2e44ba51a878d293ad5b497a1638cc9d7dc76
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848483"
---
# <a name="running-the-program-as-a-local-server"></a>Esecuzione del programma come un Server locale
Se l'esecuzione del programma come un servizio non è pratico, è possibile modificare temporaneamente il Registro di sistema in modo che il programma viene eseguito come un normale server locale. È sufficiente rinominare il `LocalService` valore sotto l'AppID da `_LocalService` e verificare che il `LocalServer32` chiave con l'identificatore CLSID specificato sia impostata correttamente. (Si noti che usando DCOMCNFG per specificare che l'applicazione deve essere eseguito in un altro computer viene rinominato il `LocalServer32` chiave `_LocalServer32`.) Esecuzione del programma come un server locale richiede alcuni secondi all'avvio, perché la chiamata a `StartServiceCtrlDispatcher` in `CAtlServiceModuleT::Start` richiede pochi secondi prima che si verifica un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sul debug](../atl/debugging-tips.md)

