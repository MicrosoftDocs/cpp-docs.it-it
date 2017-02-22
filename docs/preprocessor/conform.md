---
title: "conform | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "conform_CPP"
  - "vc-pragma.conform"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conform (pragma)"
  - "forScope conform (pragma)"
  - "pragma, conform"
ms.assetid: 71b3e174-c53c-4bfc-adf3-af39b1554191
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# conform
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Specifica il comportamento in fase di esecuzione dell'opzione del compilatore [\/Zc:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  
  
## Sintassi  
  
```  
#pragma conform(name [, show ] [, on | off ] [ [, push | pop ] [, identifier ] ] )  
```  
  
#### Parametri  
 *name*  
 Specifica il nome dell'opzione del compilatore da modificare.  L'unico *name* valido è `forScope`.  
  
 **show** \(facoltativo\)  
 Determina l'impostazione corrente di *name* \(true o false\) da visualizzare mediante un messaggio di avviso durante la compilazione.  Ad esempio `#pragma conform(forScope, show)`.  
  
 **on, off**\(facoltativo\)  
 L'impostazione di *name* su **on** abilita l'opzione del compilatore [\/Zc:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md).  Il valore predefinito è **off**.  
  
 **push** \(facoltativo\)  
 Inserisce il valore corrente di *name* nello stack interno del compilatore.  Se si specifica *identifier*, è possibile specificare i valori **on** o **off** per *name* da inserire nello stack.  Ad esempio `#pragma conform(forScope, push, myname, on)`.  
  
 **pop** \(facoltativo\)  
 Imposta il valore di *name* sul valore all'inizio dello stack interno del compilatore, quindi estrae lo stack.  Se l'identificatore viene specificato con **pop**, lo stack verrà nuovamente estratto fino a quando non individua il record con *identifier*, che verrà anch'esso estratto; il valore corrente di *name* nel record successivo dello stack diventerà il nuovo valore di *name*.  Se si specifica pop con *identifier* che non si trova in un record dello stack, **pop** viene ignorato.  
  
 *identifier*\(facoltativo\)  
 Può essere incluso in un comando **pop** o **push**.  Se viene utilizzato *identifier*, può essere utilizzato anche l'identificatore **on** o **off**.  
  
## Esempio  
  
```  
// pragma_directive_conform.cpp  
// compile with: /W1  
// C4811 expected  
#pragma conform(forScope, show)  
#pragma conform(forScope, push, x, on)  
#pragma conform(forScope, push, x1, off)  
#pragma conform(forScope, push, x2, off)  
#pragma conform(forScope, push, x3, off)  
#pragma conform(forScope, show)  
#pragma conform(forScope, pop, x1)  
#pragma conform(forScope, show)  
  
int main() {}  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)