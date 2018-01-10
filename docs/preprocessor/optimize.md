---
title: ottimizzare | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc-pragma.optimize
- optimize_CPP
dev_langs: C++
helpviewer_keywords:
- pragmas, optimize
- optimize pragma
ms.assetid: cb13c1cc-186a-45bc-bee7-95a8de7381cc
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 35b5147b3561df409906af9134ae4ec921a7d16b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="optimize"></a>optimize
Specifica le ottimizzazioni da eseguire in base a ogni singola funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma optimize( "[optimization-list]", {on | off} )  
```  
  
## <a name="remarks"></a>Note  
 Il **ottimizzare** pragma deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che è stato rilevato il pragma. Il **su** e **off** argomenti attivare le opzioni specificate nel *optimization-list* o disattivare.  
  
 Il *optimization-list* può essere zero o più parametri riportati nella tabella seguente.  
  
### <a name="parameters-of-the-optimize-pragma"></a>Parametri di Pragma optimize  
  
|Parametro/i|Tipo di ottimizzazione|  
|--------------------|--------------------------|  
|**g**|Abilita le ottimizzazioni globali.|  
|**s** o **t**|Specificare sequenze brevi o veloci di codice macchina.|  
|**y**|Generare i puntatori ai frame nello stack del programma.|  
  
 Si tratta delle stesse lettere utilizzate con la [/O](../build/reference/o-options-optimize-code.md) opzioni del compilatore. Ad esempio, il pragma seguente è equivalente al **/Os** l'opzione del compilatore:  
  
```  
#pragma optimize( "ts", on )  
```  
  
 Utilizzo di **ottimizzare** pragma con una stringa vuota (**""**) è un formato speciale della direttiva:  
  
 Quando si utilizza il **off** parametro, infatti, le ottimizzazioni, elencate nella tabella più indietro in questo argomento, off.  
  
 Quando si utilizza il **su** parametro, le ottimizzazioni vengono ripristinate a quelle che si sia specificato con il [/O](../build/reference/o-options-optimize-code.md) l'opzione del compilatore.  
  
```  
#pragma optimize( "", off )  
.  
.  
.  
#pragma optimize( "", on )   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)