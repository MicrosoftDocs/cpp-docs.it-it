---
title: Corpo della funzione o variabile mancante | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- function body
- variables, missing
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 54e2b8c5831eb6d487cf530df1b733b73580cbb8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33316725"
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