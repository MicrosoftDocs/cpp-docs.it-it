---
title: Esecuzione del programma come un Server locale
ms.date: 11/04/2016
helpviewer_keywords:
- debugging [ATL], running services as local server
- ATL services, running as local servers
ms.assetid: eb9701e6-e2a8-4666-897f-0c893aec8ac7
ms.openlocfilehash: a412814fc5f3900a248f779501e2720b72287e57
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62196522"
---
# <a name="running-the-program-as-a-local-server"></a>Esecuzione del programma come un Server locale

Se l'esecuzione del programma come un servizio non è pratico, è possibile modificare temporaneamente il Registro di sistema in modo che il programma viene eseguito come un normale server locale. È sufficiente rinominare il `LocalService` valore sotto l'AppID da `_LocalService` e verificare che il `LocalServer32` chiave con l'identificatore CLSID specificato sia impostata correttamente. (Si noti che usando DCOMCNFG per specificare che l'applicazione deve essere eseguito in un altro computer viene rinominato il `LocalServer32` chiave `_LocalServer32`.) Esecuzione del programma come un server locale richiede alcuni secondi all'avvio, perché la chiamata a `StartServiceCtrlDispatcher` in `CAtlServiceModuleT::Start` richiede pochi secondi prima che si verifica un errore.

## <a name="see-also"></a>Vedere anche

[Suggerimenti sul debug](../atl/debugging-tips.md)
