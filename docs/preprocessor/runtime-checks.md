---
title: runtime_checks | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.runtime_checks
- runtime_checks_CPP
dev_langs:
- C++
helpviewer_keywords:
- runtime_checks pragma
- pragmas, runtime_checks
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b20ea9dd12bfe4daff8e2e440c96a41c220aa742
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42543130"
---
# <a name="runtimechecks"></a>runtime_checks
Vengono disabilitate o ripristinate le impostazioni di [/RTC](../build/reference/rtc-run-time-error-checks.md) .  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma runtime_checks( "[runtime_checks]", {restore | off} )  
```  
  
## <a name="remarks"></a>Note  
 
Non è possibile abilitare un controllo runtime che non era stato abilitato con un'opzione del compilatore. Ad esempio, se non si specifica `/RTCs`, specificando `#pragma runtime_checks( "s", restore)` non abilita verifica dello stack frame.  
  
Il pragma **runtime_checks** deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene individuato il pragma. Il *ripristinare* e *off* argomenti attivare le opzioni specificate nel **runtime_checks** attiva o disattiva.  
  
Il **runtime_checks** può essere zero o più parametri riportati nella tabella seguente.  
  
### <a name="parameters-of-the-runtimechecks-pragma"></a>Parametri del pragma runtime_checks  
  
|Parametro/i|Tipo del controllo runtime|  
|--------------------|-----------------------------|  
|*s*|Abilita la verifica dello stack (frame).|  
|*c*|Vengono segnalati i casi in cui un valore viene assegnato a un tipo di dati più piccolo, il che causa una perdita di dati.|  
|*u*|Vengono segnalati i casi in cui una variabile viene utilizzata prima di essere definita.|  
  
Queste sono le stesse lettere utilizzate con la `/RTC` opzione del compilatore. Ad esempio:  
  
```  
#pragma runtime_checks( "sc", restore )  
```  
  
L'utilizzo del pragma **runtime_checks** con una stringa vuota (**""**) è un formato speciale della direttiva:  
  
- Quando si usa la *disattivata* parametro, infatti, tra i controlli degli errori di runtime, elencati nella tabella precedente vengono disattivati.  
  
- Quando si usa la *ripristinare* parametro, vengono ripristinati i controlli degli errori di run-time che è stato specificato con il `/RTC` opzione del compilatore.  
  
```  
#pragma runtime_checks( "", off )  
.  
.  
.  
#pragma runtime_checks( "", restore )   
```  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   