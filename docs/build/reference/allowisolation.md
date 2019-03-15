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
ms.openlocfilehash: 02012e7561fe8462f5f25ae13d961c35561666ec
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57819672"
---
# <a name="allowisolation"></a>/ALLOWISOLATION

Specifica il comportamento per la ricerca del manifesto.

## <a name="syntax"></a>Sintassi

```

/ALLOWISOLATION[:NO]
```

## <a name="remarks"></a>Note

**/ALLOWISOLATION** fa sì che il sistema operativo per le ricerche e caricamenti del manifesto.

**/ALLOWISOLATION** è il valore predefinito.

**/ALLOWISOLATION:No** indica che gli eseguibili vengono caricati come se non esistesse alcun manifest e cause [riferimenti a EDITBIN](editbin-reference.md) per impostare il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit dell'intestazione facoltativa `DllCharacteristics` campo.

Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifest nell'eseguibile stesso o se esiste un manifesto con il nome *nome-eseguibile*. manifest.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)<br/>
[/ALLOWISOLATION (ricerca di manifesti)](allowisolation-manifest-lookup.md)<br/>
[Riferimento a file manifesto](/windows/desktop/SbsCs/manifest-files-reference)
