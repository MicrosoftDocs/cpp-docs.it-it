---
title: ottimizzare | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.optimize
- optimize_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, optimize
- optimize pragma
ms.assetid: cb13c1cc-186a-45bc-bee7-95a8de7381cc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8222d909ad23157b4e3ed32a6920abadd77709b6
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540999"
---
# <a name="optimize"></a>optimize
Specifica le ottimizzazioni da eseguire in base a ogni singola funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma optimize( "[optimization-list]", {on | off} )  
```  
  
## <a name="remarks"></a>Note  

Il **ottimizzare** pragma deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene individuato il pragma. Il *sul* e *off* argomenti attivare le opzioni specificate nel *optimization-list* attiva o disattiva.  
  
Il *optimization-list* può essere zero o più parametri riportati nella tabella seguente.  
  
### <a name="parameters-of-the-optimize-pragma"></a>Parametri di Pragma optimize  
  
|Parametro/i|Tipo di ottimizzazione|  
|--------------------|--------------------------|  
|*g*|Abilita le ottimizzazioni globali.|  
|*s* o *t*|Specificare sequenze brevi o veloci di codice macchina.|  
|*y*|Generare i puntatori ai frame nello stack del programma.|  
  
Queste sono le stesse lettere utilizzate con il [/O](../build/reference/o-options-optimize-code.md) opzioni del compilatore. Ad esempio, il pragma seguente rappresenta l'equivalente dell'opzione del compilatore `/Os`:  
  
```  
#pragma optimize( "ts", on )  
```  
  
Usando il **ottimizzare** pragma con una stringa vuota (**""**) è un formato speciale della direttiva:  
  
Quando si usa la *disattivata* parametro, si trasforma le ottimizzazioni, elencate nella tabella precedente in questo argomento, disattivato.  
  
Quando si usa la *sul* parametro, vengono ripristinati le ottimizzazioni che è stato specificato con il [/O](../build/reference/o-options-optimize-code.md) opzione del compilatore.  
  
```  
#pragma optimize( "", off )  
.  
.  
.  
#pragma optimize( "", on )   
```  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)