---
title: Compilatore avviso (livello 1) C4788 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4788
dev_langs:
- C++
helpviewer_keywords:
- C4788
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 19a43fb9d79c63637b2bff9a27661a9f848ef6dc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4788"></a>Avviso del compilatore (livello 1) C4788
'identifier': identificatore troncato a 'number' caratteri  
  
 Il compilatore limita la lunghezza massima consentita per un nome di funzione. Quando il compilatore genera funclet per codice EH/SEH, costituisce il nome facendo precedere il nome della funzione con un testo, ad esempio catch","\__unwind ", o un'altra stringa.  
  
 Il nome risultante può essere troppo lungo e il compilatore verrà troncarlo e generare C4788.  
  
 Per risolvere il problema, abbreviare il nome della funzione originale. Se la funzione è un metodo o una funzione di modello di C++, è possibile utilizzare un typedef per parte del nome. Ad esempio:  
  
```  
C1<x, y, z<T>>::C2<a,b,c>::f  
```  
  
 può essere sostituito da:  
  
```  
typedef C1<x, y, z<T>>::C2<a,b,c> new_class ;  
new_class::f  
```  
  
 Questo avviso viene visualizzato solo nel compilatore [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].