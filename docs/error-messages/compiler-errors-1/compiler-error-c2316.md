---
title: Errore del compilatore C2316 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2316
dev_langs:
- C++
helpviewer_keywords:
- C2316
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 895db6535299a077bc32b6485a360ae450e6c87e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196844"
---
# <a name="compiler-error-c2316"></a>Errore del compilatore C2316

> '*eccezione*': non può essere intercettato come distruttore e/o costruttore di copia è inaccessibile  
  
È stata rilevata un'eccezione per valore o riferimento, ma il costruttore di copia e/o l'operatore di assegnazione erano inaccessibili.  
  
Questo codice è stato accettato da versioni di Visual C++ prima di Visual Studio 2003, ma attualmente causa un errore.  
  
Le modifiche di conformità in Visual Studio 2015 apportate questo errore si applicano alle istruzioni catch errata delle eccezioni MFC derivate da `CException`. Poiché `CException` dispone di un costruttore di copia privato ereditato, la classe e i relativi derivati sono non copiabile e non possono essere passati per valore, che significa anche che non può essere intercettati dal valore. Genera le istruzioni che intercettate eccezioni MFC da valore in precedenza ha portato a eccezioni non rilevate in fase di esecuzione, ma ora il compilatore identifica correttamente questa situazione e i rapporti errore C2316. Per risolvere questo problema, è consigliabile che utilizzare le macro MFC TRY/CATCH anziché scrivono i propri gestori di eccezioni, ma se non è appropriato per il codice, intercettare eccezioni MFC invece per riferimento.   
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2316:  
  
```  
// C2316.cpp  
// compile with: /EHsc  
#include <stdio.h>  
  
extern "C" int printf_s(const char*, ...);  
  
struct B   
{  
public:  
    B() {}  
    // Delete the following line to resolve.  
private:  
    // copy constructor  
    B(const B&)   
    {  
    }  
};  
  
void f(const B&)   
{  
}  
  
int main()   
{  
    try   
    {  
        B aB;  
        f(aB);  
    }  
    catch (B b) {   // C2316  
        printf_s("Caught an exception!\n");     
    }  
}  
```