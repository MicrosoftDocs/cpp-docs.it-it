---
title: Avviso del compilatore C4335 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4335
dev_langs:
- C++
helpviewer_keywords:
- C4335
ms.assetid: e66467ad-a10b-4438-8c7c-e8e8d11d39bb
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ab7406a9c161d47e431cb0af8183d99eac7bfe86
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-c4335"></a>Avviso del compilatore C4335
Rilevato formato di file Mac: convertire il file di origine in formato DOS o UNIX  
  
 Il carattere di terminazione della riga prima di un file di origine è in formato Macintosh ('\r') anziché UNIX ('\n') o DOS ('\r\n').  
  
 Questo avviso viene sempre generato come errore.  Vedere [avviso](../../preprocessor/warning.md) pragma per informazioni su come disabilitare questo avviso.  Inoltre, questo avviso viene generato solo una volta per ogni modulo. Pertanto, se sono presenti più `#include` direttive che specificano i file in formato Macintosh, C4335 sarà pubblicato solo una volta.  
  
 Un modo per generare file in formato Macintosh è tramite il **opzioni di salvataggio avanzate** (sul **File** menu) in Visual Studio.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4335.  
  
```  
// C4335 expected  
#include "c4335.h"   // assume both include files are in Macintosh format  
#include "c4335_2.h"  
```
