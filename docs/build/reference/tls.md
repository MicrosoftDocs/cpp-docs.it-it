---
title: -TLS | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /TLS
dev_langs:
- C++
helpviewer_keywords:
- /TLS dumpbin option
- -TLS dumpbin option
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b5e510f406ceae7508f9b84f99e7ab397d22f114
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="tls"></a>/TLS
Visualizza la struttura IMAGE_TLS_DIRECTORY da un file eseguibile.  
  
## <a name="remarks"></a>Note  
 / TLS Visualizza i campi della struttura di TLS e gli indirizzi delle funzioni di callback TLS.  
  
 Se un programma non utilizza l'archiviazione locale di thread, l'immagine non conterrà una struttura TLS.  Vedere [thread](../../cpp/thread.md) per ulteriori informazioni.  
  
 IMAGE_TLS_DIRECTORY è definito in Winnt. h.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)