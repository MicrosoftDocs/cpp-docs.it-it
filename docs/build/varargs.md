---
title: Varargs | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: aac0c54b-0a2d-4a22-b1de-ee41381a3eb1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f3d22a5c3f20480d1e904ec8e087114385ba7ee9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="varargs"></a>Varargs
Se i parametri vengono passati tramite varargs (ad esempio, gli argomenti sui puntini di sospensione), essenzialmente il normale passaggio dei parametri si applica tra cui la distribuzione di argomenti quinto e successive. È nuovamente responsabilità dump argomenti che è stato recuperato l'indirizzo del destinatario. Per i valori a virgola mobile, sia il valore integer e il registro a virgola mobile, conterrà il valore float nel caso in cui il chiamato prevede che il valore nei registri integer.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)