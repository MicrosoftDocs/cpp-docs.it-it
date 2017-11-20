---
title: Compilatore avviso (livello 1) C4383 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4383
dev_langs: C++
helpviewer_keywords: C4383
ms.assetid: 96c0e52d-874e-4b57-a154-0e49b6a00fae
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2dacaa9b621a4578aafced38fa38d1b82a687d07
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4383"></a>Avviso del compilatore (livello 1) C4383
'operatore_dereferenziazione_istanza': il significato della dereferenziazione di un handle può variare quando esiste un operatore definito dall'utente 'operator'; scrivere l'operatore come funzione statica per essere esplicito dell'operando  
  
 Quando si aggiunge un override di istanza definiti dall'utente dell'operatore di dereferenziazione in un tipo gestito, si potrebbe eseguire l'override il possibilità dell'operatore di dereferenziazione del tipo per restituire l'oggetto dell'handle. Prendere in considerazione la scrittura di un valore statico, definiti dall'utente operatore di dereferenziazione.  
  
 Per ulteriori informazioni, vedere [operatore Handle a oggetto (^)](../../windows/handle-to-object-operator-hat-cpp-component-extensions.md) e [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
 Inoltre, un operatore di istanza non è disponibile in altri compilatori di linguaggio tramite i metadati di riferimento. Per ulteriori informazioni, vedere [operatori definiti dall'utente (C + + CLI)](../../dotnet/user-defined-operators-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4383.  
  
```  
// C4383.cpp  
// compile with: /clr /W1  
  
ref struct S {  
   int operator*() { return 0; }   // C4383  
};  
  
ref struct T {  
   static int operator*(T%) { return 0; }  
};   
  
int main() {  
   S s;  
   S^ pS = %s;  
  
   T t;  
   T^ pT = %t;  
   T% rT = *pT;  
}  
```