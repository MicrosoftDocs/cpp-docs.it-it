---
title: Compilatore avviso (livello 1) C4788 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4788
dev_langs: C++
helpviewer_keywords: C4788
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e6f876dada851f46b7708ef1b34da4bae6f96dc0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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