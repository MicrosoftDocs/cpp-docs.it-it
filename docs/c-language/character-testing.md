---
title: Test del carattere | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aeea6573b49e3bb093c3eb343ac3c89c27f0466b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="character-testing"></a>Test del carattere
**ANSI 4.3.1** Set di caratteri per cui è stato eseguito il test dalle funzioni `isalnum`, `isalpha`, `iscntrl`, `islower`, `isprint` e `isupper`  
  
 Nell'elenco seguente vengono descritte queste funzioni implementate dal compilatore Microsoft C.  
  
|Funzione|Test per|  
|--------------|---------------|  
|`isalnum`|Caratteri 0-9, A-Z, a-z ASCII 48-57, 65-90, 97-122|  
|`isalpha`|Caratteri A-Z, a-z ASCII 65-90, 97-122|  
|`iscntrl`|ASCII 0 -31, 127|  
|`islower`|Caratteri a-z ASCII 97-122|  
|`isprint`|Caratteri A-Z, a-z, 0-9, punteggiatura, spazio ASCII 32-126|  
|`isupper`|Caratteri A-Z ASCII 65-90|  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)