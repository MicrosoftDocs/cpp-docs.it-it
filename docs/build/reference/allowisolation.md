---
title: -ALLOWISOLATION | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /ALLOWISOLATION
dev_langs: C++
helpviewer_keywords:
- -ALLOWISOLATION editbin option
- /ALLOWISOLATION editbin option
- ALLOWISOLATION editbin option
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0ba0295d73e51e28fbdd953d7d9a3a2ae5131c27
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="allowisolation"></a>/ALLOWISOLATION
Specifica il comportamento per la ricerca del manifesto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
/ALLOWISOLATION[:NO]  
```  
  
## <a name="remarks"></a>Note  
 **/ALLOWISOLATION** fa sì che il sistema operativo al manifesto ricerche e caricamenti.  
  
 **/ALLOWISOLATION** è l'impostazione predefinita.  
  
 **/ALLOWISOLATION:No** indica che i file eseguibili vengono caricati come se non vi fosse alcun manifesto e cause [riferimenti a EDITBIN](../../build/reference/editbin-reference.md) per impostare il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit dell'intestazione facoltativa `DllCharacteristics` campo.  
  
 Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifest di applicazione per i processi creati più di recente. Il nuovo processo non dispone di un contesto di attivazione predefinito, anche se è presente un manifesto nell'eseguibile stesso o se non esiste un manifesto con il nome *nome eseguibile*. manifest.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [/ALLOWISOLATION (ricerca di manifesti)](../../build/reference/allowisolation-manifest-lookup.md)   
 [Riferimento a file manifesto](http://msdn.microsoft.com/library/aa375632.aspx)