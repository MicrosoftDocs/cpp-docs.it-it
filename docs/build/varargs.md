---
title: Varargs | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: aac0c54b-0a2d-4a22-b1de-ee41381a3eb1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e7b71cd426bc89570f9d394f3e38dc7a002f6e8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32380508"
---
# <a name="varargs"></a>Varargs
Se i parametri vengono passati tramite varargs (ad esempio, gli argomenti sui puntini di sospensione), essenzialmente il normale passaggio dei parametri si applica tra cui la distribuzione di argomenti quinto e successive. È nuovamente responsabilità dump argomenti che è stato recuperato l'indirizzo del destinatario. Per i valori a virgola mobile, sia il valore integer e il registro a virgola mobile, conterrà il valore float nel caso in cui il chiamato prevede che il valore nei registri integer.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)