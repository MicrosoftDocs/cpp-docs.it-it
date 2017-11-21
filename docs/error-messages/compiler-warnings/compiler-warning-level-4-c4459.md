---
title: Compilatore (livello 4) Avviso C4459 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4459
dev_langs: C++
helpviewer_keywords: C4459
ms.assetid: ee9f6287-9c70-4b10-82a0-add82a13997f
caps.latest.revision: "0"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 11a4122bf58ac5645c4430f8c6a41de7ed19f430
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4459"></a>Compilatore (livello 4) Avviso C4459
  
> dichiarazione di '*identificatore*' nasconde una dichiarazione globale
  
La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione del medesimo nome *identificatore* nell'ambito globale. Questo avviso consente di sapere che i riferimenti a *identificatore* in questo ambito risolvono nella versione dichiarata localmente, non la versione globale, che potrebbe non essere lo scopo previsto. In genere, è consigliabile che ridurre l'utilizzo di variabili globali è buona norma engineering. Per ridurre al minimo inquinamento dello spazio dei nomi globali, è consigliabile l'utilizzo di uno spazio dei nomi denominato per le variabili globali.  
  
Questo avviso è stato introdotto in Visual Studio 2015, Visual c++ versione del compilatore 18.00 inizia. Per eliminare gli avvisi di tale versione del compilatore o in un secondo momento durante la migrazione del codice, usare il [/WV: 18](../../build/reference/compiler-option-warning-level.md) l'opzione del compilatore. 

## <a name="example"></a>Esempio
  
 L'esempio seguente genera l'errore C4459:  
  
```cpp  
// C4459_hide.cpp
// compile with: cl /W4 /EHsc C4459_hide.cpp
int global_or_local = 1;

int main() { 
    int global_or_local; // warning C4459 
    global_or_local = 2;
} 
```  
  
Un modo per risolvere questo problema è creare uno spazio dei nomi per le variabili globali, ma non utilizzare un `using` direttiva per portare lo spazio dei nomi nell'ambito, pertanto tutti i riferimenti devono utilizzare l'ambiguità di nomi completi:  
  
```cpp  
// C4459_namespace.cpp
// compile with: cl /W4 /EHsc C4459_namespace.cpp
namespace globals {
    int global_or_local = 1;
}

int main() { 
    int global_or_local; // OK 
    global_or_local = 2;
    globals::global_or_local = 3;
} 
```  
