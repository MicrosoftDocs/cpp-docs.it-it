---
title: Corpo della funzione o variabile mancante | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- function body
- variables, missing
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4bac7b2942f9d72674b8092dc7bf64174dd3c349
ms.openlocfilehash: c80a5626e7f674ddca7d44e94aa8ab64c735c81e
ms.contentlocale: it-it
ms.lasthandoff: 04/24/2017

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
