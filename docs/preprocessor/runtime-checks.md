---
title: runtime_checks | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc-pragma.runtime_checks
- runtime_checks_CPP
dev_langs: C++
helpviewer_keywords:
- runtime_checks pragma
- pragmas, runtime_checks
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7bc333e539ba67b2a999bbeb5a08b9002da4e1fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="runtimechecks"></a>runtime_checks
Vengono disabilitate o ripristinate le impostazioni di [/RTC](../build/reference/rtc-run-time-error-checks.md) .  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma runtime_checks( "[runtime_checks]", {restore | off} )  
```  
  
## <a name="remarks"></a>Note  
 Non è possibile abilitare un controllo runtime che non era stato abilitato con un'opzione del compilatore. Ad esempio, se non si specifica /RTCs, specificando `#pragma runtime_checks( "s", restore)` non viene abilitata la verifica dello stack frame.  
  
 Il pragma **runtime_checks** deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene individuato il pragma. Gli argomenti **restore** e **off** attivano e disattivano le opzioni specificate in *runtime_checks* .  
  
 *runtime_checks* può essere nessuno o più parametri riportati nella tabella seguente.  
  
### <a name="parameters-of-the-runtimechecks-pragma"></a>Parametri del pragma runtime_checks  
  
|Parametro/i|Tipo del controllo runtime|  
|--------------------|-----------------------------|  
|**s**|Abilita la verifica dello stack (frame).|  
|**c**|Vengono segnalati i casi in cui un valore viene assegnato a un tipo di dati più piccolo, il che causa una perdita di dati.|  
|**u**|Vengono segnalati i casi in cui una variabile viene utilizzata prima di essere definita.|  
  
 Si tratta delle stesse lettere utilizzate con l'opzione del compilatore /RTC. Ad esempio:  
  
```  
#pragma runtime_checks( "sc", restore )  
```  
  
 L'utilizzo del pragma **runtime_checks** con una stringa vuota (**""**) è un formato speciale della direttiva:  
  
-   Quando si utilizza il parametro **off** , i controlli degli errori di runtime elencati nella tabella precedente vengono disattivati.  
  
-   Quando si utilizza il parametro **restore** , vengono ripristinati i controlli degli errori di runtime con i parametri specificati con l'opzione del compilatore /RTC.  
  
```  
#pragma runtime_checks( "", off )  
.  
.  
.  
#pragma runtime_checks( "", restore )   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
