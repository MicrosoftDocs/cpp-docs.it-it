---
title: setjmp longjump | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a3617f70e7c62e1845d8d24e11cebdd7738c507f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="setjmplongjump"></a>setjmp/longjump
Quando si include setjmpex o setjmp, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) o [longjmp](../c-runtime-library/reference/longjmp.md) comporterà un'operazione di rimozione che richiama i distruttori e infine chiama.  Questo comportamento è diverso da x86, in cui l'inclusione di risultati setjmp clausole finally e i distruttori non viene richiamati.  
  
 Una chiamata a `setjmp` mantiene il puntatore dello stack corrente, registri non volatili e i registri MxCsr.  Le chiamate a `longjmp` restituito per la più recente `setjmp` chiamare sito e reimposta il puntatore dello stack, i registri non volatili e MxCsr deve registrare, lo stato mantenuto dal più recente `setjmp` chiamare.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)