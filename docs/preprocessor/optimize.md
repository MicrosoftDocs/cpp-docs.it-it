---
title: "optimize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.optimize"
  - "optimize_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "optimize (pragma)"
  - "pragma, optimize"
ms.assetid: cb13c1cc-186a-45bc-bee7-95a8de7381cc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# optimize
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica le ottimizzazioni da eseguire in base a ogni singola funzione.  
  
## Sintassi  
  
```  
  
#pragma optimize( "[optimization-list]", {on | off} )  
```  
  
## Note  
 Il pragma **optimize** deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene individuato il pragma.  Gli argomenti **on** e **off** attivano e disattivano le opzioni specificate in *optimization\-list*.  
  
 L'elemento *optimization\-list* può essere zero o più parametri riportati nella tabella seguente.  
  
### Parametri di Pragma optimize  
  
|Parametro\/i|Tipo di ottimizzazione|  
|------------------|----------------------------|  
|**g**|Abilita le ottimizzazioni globali.|  
|**s** o **t**|Specificare sequenze brevi o veloci di codice macchina.|  
|**y**|Generare i puntatori ai frame nello stack del programma.|  
  
 Si tratta delle stesse lettere utilizzate con le opzioni del compilatore [\/O](../build/reference/o-options-optimize-code.md).  Ad esempio, il pragma seguente rappresenta l'equivalente dell'opzione del compilatore **\/Os**:  
  
```  
#pragma optimize( "ts", on )  
```  
  
 L'utilizzo del pragma **optimize** con una stringa vuota \(**""**\) è un formato speciale della direttiva:  
  
 Quando si utilizza il parametro **off**, le ottimizzazioni, elencate nella tabella riportata in precedenza, vengono disattivate.  
  
 Quando si utilizza il parametro **on**, le ottimizzazioni vengono ripristinate a quelle specificate con l'opzione del compilatore [\/O](../build/reference/o-options-optimize-code.md).  
  
```  
#pragma optimize( "", off )  
.  
.  
.  
#pragma optimize( "", on )   
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)