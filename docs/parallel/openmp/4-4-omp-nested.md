---
title: 4.4 OMP_NESTED | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: fd17b6f4-84e8-44c0-a96a-3a9e5ba33688
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 50b2b110f191252702da9a2b6eed99baa40b7814
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="44-ompnested"></a>4.4 OMP_NESTED
Il `OMP_NESTED` variabile di ambiente Abilita o disabilita il parallelismo nidificato a meno che non parallelismo annidato è abilitato o disabilitato chiamando il `o` **mp_set_nested** routine di libreria. Se impostato su **TRUE**, parallelismo annidato è abilitato; se è impostato su **FALSE**nidificato parallelismo è disabilitato. Il valore predefinito è **FALSE**.  
  
 Esempio:  
  
```  
setenv OMP_NESTED TRUE  
```  
  
## <a name="cross-reference"></a>Riferimento incrociato:  
  
-   `omp_set_nested`funzione, vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.