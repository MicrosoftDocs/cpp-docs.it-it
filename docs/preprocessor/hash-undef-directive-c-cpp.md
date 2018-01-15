---
title: '#undef (direttiva) (C/C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: '#undef'
dev_langs: C++
helpviewer_keywords:
- '#undef directive'
- undef directive (#undef)
- preprocessor, directives
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aee7babf895b72a5ff4f5fb1485e4bb118e95889
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="undef-directive-cc"></a>Direttiva #undef (C/C++)
Rimuove (rimuove la definizione) un nome creato in precedenza con `#define`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#undef   
identifier  
  
```  
  
## <a name="remarks"></a>Note  
 Il `#undef` direttiva rimuove la definizione corrente di *identificatore*. Di conseguenza, le occorrenze successive dello *identificatore* vengono ignorate dal preprocessore. Per rimuovere una definizione di macro utilizzando `#undef`, assegnare solo alla macro *identificatore* ; non fornire un elenco di parametri.  
  
 È inoltre possibile applicare la direttiva `#undef` a un identificatore che non presenta una definizione precedente. Questo assicura che l'identificatore rimanga non definito. La sostituzione delle macro non viene eseguita all'interno delle istruzioni `#undef`.  
  
 La direttiva `#undef` viene in genere abbinata a una direttiva `#define` per creare un'area in un programma di origine in cui un identificatore ha un significato speciale. Ad esempio, una funzione specifica del programma di origine può utilizzare le costanti manifesto per definire valori specifici dell'ambiente che non influiscono sul resto del programma. La direttiva `#undef` funziona anche con la direttiva `#if` per controllare la compilazione condizionale del programma di origine. Vedere [#if, #elif, #else e # #endif](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md) per ulteriori informazioni.  
  
 Nell'esempio seguente, la direttiva `#undef` rimuove le definizioni di una costante simbolica e di una macro. Notare che viene specificato solo l'identificatore della macro.  
  
```  
#define WIDTH 80  
#define ADD( X, Y ) ((X) + (Y))  
.  
.  
.  
#undef WIDTH  
#undef ADD  
```  
  
 **Sezione specifica Microsoft**  
  
 Le macro possono essere definite dalla riga di comando utilizzando l'opzione /U seguita dai nomi delle macro di cui rimuovere la definizione. L'effetto dell'esecuzione di questo comando è equivalente a una sequenza di `#undef` *-nome della macro* istruzioni all'inizio del file.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)