---
title: setjmp longjump | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 55cf6a2503367777464f09f92e3e3614c3d9f11b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379835"
---
# <a name="setjmplongjump"></a>setjmp/longjump
Quando si include setjmpex o setjmp, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) o [longjmp](../c-runtime-library/reference/longjmp.md) comporterà un'operazione di rimozione che richiama i distruttori e infine chiama.  Questo comportamento è diverso da x86, in cui l'inclusione di risultati setjmp clausole finally e i distruttori non viene richiamati.  
  
 Una chiamata a `setjmp` mantiene il puntatore dello stack corrente, registri non volatili e i registri MxCsr.  Le chiamate a `longjmp` restituito per la più recente `setjmp` chiamare sito e reimposta il puntatore dello stack, i registri non volatili e MxCsr deve registrare, lo stato mantenuto dal più recente `setjmp` chiamare.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)