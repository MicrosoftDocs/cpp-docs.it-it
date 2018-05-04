---
title: istruzione if_not_exists | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __if_not_exists_cpp
dev_langs:
- C++
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bd4e586a211d7c4e2ead1ce3f225e2d92d2bd5a7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ifnotexists-statement"></a>Istruzione __if_not_exists
L'istruzione `__if_not_exists` verifica l'esistenza dell'identificatore specificato. Se l'identificatore non è presente, il blocco di istruzioni specificato viene eseguito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__if_not_exists ( identifier ) {   
statements  
};  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`identifier`|Identificatore del quale si desidera verificare l'esistenza.|  
|`statements`|Uno o più istruzioni da eseguire se `identifier` non esiste.|  
  
## <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Per ottenere risultati più affidabili, utilizzare l'istruzione `__if_not_exists` con i seguenti vincoli.  
  
-   Applicare l'istruzione `__if_not_exists` solo a tipi semplici, non a modelli.  
  
-   Applicare l'istruzione `__if_not_exists` agli identificatori sia interni che esterni alla classe. Non applicare l'istruzione `__if_not_exists` a variabili locali.  
  
-   Utilizzare l'istruzione `__if_not_exists` solo nel corpo di una funzione. All'esterno del corpo di una funzione, l'istruzione `__if_not_exists` può testare solo tipi completamente definiti.  
  
-   Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.  
  
 Il complemento al `__if_not_exists` istruzione è la [if_exists](../cpp/if-exists-statement.md) istruzione.  
  
## <a name="example"></a>Esempio  
 Per un esempio su come usare `__if_not_exists`, vedere [if_exists istruzione](../cpp/if-exists-statement.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [__if_exists Statement](../cpp/if-exists-statement.md)