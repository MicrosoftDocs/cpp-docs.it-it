---
description: Altre informazioni su:/ALLOWISOLATION
title: /ALLOWISOLATION
ms.date: 11/04/2016
f1_keywords:
- /ALLOWISOLATION_EDITBIN
helpviewer_keywords:
- -ALLOWISOLATION editbin option
- /ALLOWISOLATION editbin option
- ALLOWISOLATION editbin option
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
ms.openlocfilehash: 7d935bc122b5f32bb8f1193feae58b5fc61e7faa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179590"
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

**/ALLOWISOLATION: No** indica che i file eseguibili vengono caricati come se non fosse presente alcun manifesto e fa in modo che il [riferimento EDITBIN)](editbin-reference.md) imposti il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit nel campo dell'intestazione facoltativa `DllCharacteristics` .

Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifesto nell'eseguibile stesso o se è presente un manifesto con il nome *executable-name*. exe. manifest.

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)<br/>
[/ALLOWISOLATION (ricerca di manifesti)](allowisolation-manifest-lookup.md)<br/>
[Riferimento ai file manifesto](/windows/win32/SbsCs/manifest-files-reference)
