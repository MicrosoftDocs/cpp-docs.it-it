---
title: "runtime_checks | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.runtime_checks"
  - "runtime_checks_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "runtime_checks (pragma)"
  - "pragma, runtime_checks"
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# runtime_checks
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Vengono disabilitate o ripristinate le impostazioni di [\/RTC](../build/reference/rtc-run-time-error-checks.md).  
  
## Sintassi  
  
```  
  
#pragma runtime_checks(  
"[runtime_checks]", {restore | off} )  
```  
  
## Note  
 Non è possibile abilitare un controllo runtime che non era stato abilitato con un'opzione del compilatore. Ad esempio, se non si specifica \/RTCs, specificando `#pragma runtime_checks( "s", restore)` non viene abilitata la verifica dello stack frame.  
  
 Il pragma **runtime\_checks** deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene individuato il pragma. Gli argomenti **restore** e **off** attivano e disattivano le opzioni specificate in *runtime\_checks*.  
  
 *runtime\_checks* può essere nessuno o più parametri riportati nella tabella seguente.  
  
### Parametri del pragma runtime\_checks  
  
|Parametro\/i|Tipo del controllo runtime|  
|------------------|--------------------------------|  
|**s**|Abilita la verifica dello stack \(frame\).|  
|**c**|Vengono segnalati i casi in cui un valore viene assegnato a un tipo di dati più piccolo, il che causa una perdita di dati.|  
|**u**|Vengono segnalati i casi in cui una variabile viene utilizzata prima di essere definita.|  
  
 Si tratta delle stesse lettere utilizzate con l'opzione del compilatore \/RTC. Ad esempio:  
  
```  
#pragma runtime_checks( "sc", restore )  
```  
  
 L'utilizzo del pragma **runtime\_checks** con una stringa vuota \(**""**\) è un formato speciale della direttiva:  
  
-   Quando si utilizza il parametro **off**, i controlli degli errori di runtime elencati nella tabella precedente vengono disattivati.  
  
-   Quando si utilizza il parametro **restore**, vengono ripristinati i controlli degli errori di runtime con i parametri specificati con l'opzione del compilatore \/RTC.  
  
```  
#pragma runtime_checks( "", off )  
.  
.  
.  
#pragma runtime_checks( "", restore )   
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [RTC sample](http://msdn.microsoft.com/it-it/b3415b09-f6fd-43dc-8c02-9a910bc2574e)