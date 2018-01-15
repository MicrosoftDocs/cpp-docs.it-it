---
title: 4.3 OMP_DYNAMIC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: a15edefb-1f85-4f06-a427-beb3cfc4434f
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 103067b28990854fb6522c19f4349a9607d65bab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="43-ompdynamic"></a>4.3 OMP_DYNAMIC
Il **OMP_DYNAMIC** variabile di ambiente attiva o disattiva la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele, a meno che la regolazione dinamica in modo esplicito è abilitata o disabilitata chiamando il **omp_set_dynamic** routine di libreria. Il valore deve essere **TRUE** o **FALSE**.  
  
 Se impostato su **TRUE**, è possibile modificare il numero di thread utilizzati per l'esecuzione parallele aree dall'ambiente di runtime per utilizzare al meglio le risorse di sistema.  Se impostato su **FALSE**, regolazione dinamica è disabilitata. La condizione predefinita è definito dall'implementazione.  
  
 Esempio:  
  
```  
setenv OMP_DYNAMIC TRUE  
```  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   Per ulteriori informazioni sulle aree parallele, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **omp_set_dynamic** funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.