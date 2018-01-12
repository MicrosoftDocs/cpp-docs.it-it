---
title: Corpo della funzione o variabile mancante | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
dev_langs: C++
helpviewer_keywords:
- function body
- variables, missing
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 356d0f0a71feccee953a0b1bd7dc54bc64a0e233
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="missing-function-body-or-variable"></a>Codice di funzione o variabile mancante
Con solo un prototipo di funzione, il compilatore può continuare senza errori, ma il linker non è possibile risolvere una chiamata a un indirizzo poiché non esiste alcun codice di funzione o variabile spazio riservato. Questo errore non verrà visualizzato solo dopo la creazione di una chiamata alla funzione che il linker deve essere risolto.  
  
## <a name="example"></a>Esempio  
 La chiamata di funzione Main genererà l'errore LNK2019 perché il prototipo consente al compilatore di considerare che la funzione esiste.  Il linker rileva che non.  
  
```  
// LNK2019_MFBV.cpp  
// LNK2019 expected  
void DoSomething(void);  
int main() {  
   DoSomething();  
}  
```  
  
## <a name="example"></a>Esempio  
 In C++, assicurarsi di includere l'implementazione di una funzione specifica per una classe e non solo un prototipo nella definizione della classe. Se si definisce la classe all'esterno del file di intestazione, assicurarsi di includere il nome della classe prima della funzione (`Classname::memberfunction`).  
  
```  
// LNK2019_MFBV_2.cpp  
// LNK2019 expected  
struct A {  
   static void Test();  
};  
  
// Should be void A::Test() {}  
void Test() {}  
  
int main() {  
   A AObject;  
   AObject.Test();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)