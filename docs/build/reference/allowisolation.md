---
title: -ALLOWISOLATION | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /ALLOWISOLATION
dev_langs:
- C++
helpviewer_keywords:
- -ALLOWISOLATION editbin option
- /ALLOWISOLATION editbin option
- ALLOWISOLATION editbin option
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 12ee07a0ea6dbe2c3bea21aaa6b394b4c3e6f156
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704093"
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

**/ALLOWISOLATION:No** indica che gli eseguibili vengono caricati come se non esistesse alcun manifest e cause [riferimenti a EDITBIN](../../build/reference/editbin-reference.md) per impostare il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit dell'intestazione facoltativa `DllCharacteristics` campo.

Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifest nell'eseguibile stesso o se esiste un manifesto con il nome *nome-eseguibile*. manifest.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)<br/>
[/ALLOWISOLATION (ricerca di manifesti)](../../build/reference/allowisolation-manifest-lookup.md)
[riferimento file Manifest](/windows/desktop/SbsCs/manifest-files-reference)