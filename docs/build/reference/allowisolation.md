---
title: /ALLOWISOLATION
ms.date: 11/04/2016
f1_keywords:
- /ALLOWISOLATION_EDITBIN
helpviewer_keywords:
- -ALLOWISOLATION editbin option
- /ALLOWISOLATION editbin option
- ALLOWISOLATION editbin option
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
ms.openlocfilehash: 3dae8ee83e25492fab0ba2c6a55681728d5f3453
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440377"
---
# <a name="allowisolation"></a>/ALLOWISOLATION

Specifica il comportamento per la ricerca del manifesto.

## <a name="syntax"></a>Sintassi

```

/ALLOWISOLATION[:NO]
```

## <a name="remarks"></a>Osservazioni

**/ALLOWISOLATION** fa sì che il sistema operativo esegua ricerche e caricamenti del manifesto.

**/ALLOWISOLATION** è il valore predefinito.

**/ALLOWISOLATION: No** indica che i file eseguibili vengono caricati come se non fosse presente alcun manifesto e fa in modo che il [riferimento EDITBIN)](editbin-reference.md) imposti il bit `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` nel campo `DllCharacteristics` dell'intestazione facoltativa.

Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifesto nell'eseguibile stesso o se è presente un manifesto con il nome *executable-name*. exe. manifest.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)<br/>
[/ALLOWISOLATION (ricerca di manifesti)](allowisolation-manifest-lookup.md)<br/>
[Riferimento ai file manifesto](/windows/win32/SbsCs/manifest-files-reference)
