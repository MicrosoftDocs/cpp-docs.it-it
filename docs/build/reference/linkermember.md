---
title: -LINKERMEMBER | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /linkermember
dev_langs:
- C++
helpviewer_keywords:
- /LINKERMEMBER dumpbin option
- LINKERMEMBER dumpbin option
- -LINKERMEMBER dumpbin option
ms.assetid: c96868c1-d70e-4651-ae36-c55b58b16406
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ac961f985de65bb7eea9a4ad0f5d10b75fbe60d3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371499"
---
# <a name="linkermember"></a>/LINKERMEMBER
```  
/LINKERMEMBER[:{1|2}]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione consente di visualizzare i simboli pubblici definiti in una libreria. Specificare l'1 argomento per visualizzare i simboli in base all'oggetto, insieme ai relativi offset. Specificare l'argomento 2 per visualizzare gli offset e numeri di indice di oggetti e quindi tutti i simboli in ordine alfabetico, insieme all'indice dell'oggetto per ogni. Per ottenere entrambi gli output, specificare /LINKERMEMBER senza l'argomento number.  
  
 Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)