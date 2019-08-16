---
title: /ALLOWISOLATION
ms.date: 11/04/2016
f1_keywords:
- /ALLOWISOLATION
helpviewer_keywords:
- -ALLOWISOLATION editbin option
- /ALLOWISOLATION editbin option
- ALLOWISOLATION editbin option
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
ms.openlocfilehash: 359a68d5ec0a8c7390b5f0343530864e880a057c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493123"
---
# <a name="allowisolation"></a>/ALLOWISOLATION

Specifica il comportamento per la ricerca del manifesto.

## <a name="syntax"></a>Sintassi

```

/ALLOWISOLATION[:NO]
```

## <a name="remarks"></a>Note

**/ALLOWISOLATION** fa sì che il sistema operativo esegua ricerche e caricamenti del manifesto.

**/ALLOWISOLATION** è il valore predefinito.

**/ALLOWISOLATION: No** indica che i file eseguibili vengono caricati come se non fosse presente alcun manifesto e fa in modo che `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` il [riferimento EDITBIN)](editbin-reference.md) imposti il `DllCharacteristics` bit nel campo dell'intestazione facoltativa.

Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifesto nell'eseguibile stesso o se è presente un manifesto con il nome *executable-name*. exe. manifest.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)<br/>
[/ALLOWISOLATION (ricerca di manifesti)](allowisolation-manifest-lookup.md)<br/>
[Riferimento ai file manifesto](/windows/win32/SbsCs/manifest-files-reference)
