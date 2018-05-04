---
title: -ALLOWISOLATION | Documenti Microsoft
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
ms.openlocfilehash: 5cb92a7f31d48dad4a7fb608703c71ccc661e176
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="allowisolation"></a>/ALLOWISOLATION
Specifica il comportamento per la ricerca del manifesto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
/ALLOWISOLATION[:NO]  
```  
  
## <a name="remarks"></a>Note  
 **/ALLOWISOLATION** fa sì che il sistema operativo per le ricerche e caricamenti di manifesti.  
  
 **/ALLOWISOLATION** è l'impostazione predefinita.  
  
 **/ALLOWISOLATION:No** indica che i file eseguibili vengono caricati come se non vi fosse alcun manifesto e vengono illustrate le cause [riferimenti a EDITBIN](../../build/reference/editbin-reference.md) per impostare il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit nell'intestazione facoltativa `DllCharacteristics` campo.  
  
 Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifesto nell'eseguibile stesso o se non esiste un manifesto con il nome *nome eseguibile*. manifest.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [/ALLOWISOLATION (ricerca di manifesti)](../../build/reference/allowisolation-manifest-lookup.md)   
 [Riferimento a file manifesto](http://msdn.microsoft.com/library/aa375632.aspx)