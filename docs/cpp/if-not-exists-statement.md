---
title: istruzione if_not_exists | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __if_not_exists
- __if_not_exists_cpp
dev_langs:
- C++
helpviewer_keywords:
- __if_not_exists keyword [C++]
ms.assetid: a2f322d4-e96f-4a32-954e-4323d20c6e32
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5eff74bd6405d7ec63b3cc8fbea968df984fddb8
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
