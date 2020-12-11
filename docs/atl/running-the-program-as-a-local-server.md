---
description: 'Altre informazioni su: esecuzione del programma come server locale'
title: Esecuzione del programma come server locale
ms.date: 11/04/2016
helpviewer_keywords:
- debugging [ATL], running services as local server
- ATL services, running as local servers
ms.assetid: eb9701e6-e2a8-4666-897f-0c893aec8ac7
ms.openlocfilehash: 1cdf3cef0773769318d68964b28bb60ca66666d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157491"
---
# <a name="running-the-program-as-a-local-server"></a>Esecuzione del programma come server locale

Se l'esecuzione del programma come servizio non è praticabile, è possibile modificare temporaneamente il registro di sistema in modo che il programma venga eseguito come server locale normale. Rinominare semplicemente il `LocalService` valore nell'AppID in `_LocalService` e verificare che la `LocalServer32` chiave nel CLSID sia impostata correttamente. Si noti che l'utilizzo di DCOMCNFG per specificare che l'applicazione deve essere eseguita in un computer diverso Rinomina la `LocalServer32` chiave in `_LocalServer32` . L'esecuzione del programma come server locale richiede alcuni secondi all'avvio perché la chiamata a `StartServiceCtrlDispatcher` in `CAtlServiceModuleT::Start` richiede alcuni secondi prima che abbia esito negativo.

## <a name="see-also"></a>Vedi anche

[Suggerimenti per il debug](../atl/debugging-tips.md)
