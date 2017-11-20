---
title: limitare (C++ AMP) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- cpu_CPP
- amp_CPP
dev_langs: C++
helpviewer_keywords: restrict clause (C++ AMP)
ms.assetid: 07d3291f-7edf-456b-8828-283ac8673661
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5011b379108b30b4d6711b99e1b991be7bd6c8ec
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="restrict-c-amp"></a>restrict (C++ AMP)
L'indicatore di restrizione può essere applicato a dichiarazioni lambda e di funzione. Tale indicatore applica restrizioni sul codice della funzione e sul comportamento della funzione nelle applicazioni che utilizzano il runtime C++ AMP (Accelerated Massive Parallelism) di C++.  
  
> [!NOTE]
>  Per informazioni sul `restrict` (parola chiave) che fa parte di `__declspec` attributi di classe di archiviazione, vedere [limitare](../cpp/restrict.md).  
  
 La clausola `restrict` può assumere le forme seguenti:  
  
|Clausola|Descrizione|  
|------------|-----------------|  
|`restrict(cpu)`|La funzione può utilizzare il linguaggio C++ completo. Solo altre funzioni dichiarate tramite le funzioni restrict(cpu) possono chiamare la funzione.|  
|`restrict(amp)`|La funzione può utilizzare solo un subset del linguaggio C++ che C++ AMP può accelerare.|  
|Sequenza di `restrict(cpu)` e `restrict(amp)`.|La funzione deve rispettare le limitazioni sia di `restrict(cpu)` che di `restrict(amp)`. La funzione può essere chiamata dalle funzioni dichiarate tramite `restrict(cpu)`, `restrict(amp)`, `restrict(cpu, amp)` o `restrict(amp, cpu)`.<br /><br /> La forma `restrict(A) restrict(B)` può essere scritta come `restrict(A,B)`.|  
  
## <a name="remarks"></a>Note  
 La parola chiave `restrict` è una parola chiave contestuale. Gli indicatori di restrizione `cpu` e `amp` non sono parole chiave riservate. L'elenco degli indicatori non è estensibile. Una funzione che non contiene una clausola `restrict` è uguale a una funzione che contiene la clausola `restrict(cpu)`.  
  
 Una funzione con la clausola `restrict(amp)` è caratterizzata dalle limitazioni seguenti:  
  
-   La funzione può chiamare solo funzioni con la clausola `restrict(amp)`.  
  
-   È necessario che sia possibile rendere la funzione inline.  
  
-   La funzione può dichiarare solo variabili `int`, `unsigned int`, `float` e `double` nonché classi e strutture che contengono solo questi tipi. Il tipo `bool` è consentito, ma deve essere a 4 byte se utilizzata in un tipo composto.  
  
-   Le funzioni lambda non possono essere acquisite per riferimento e non possono acquisire puntatori.  
  
-   I riferimenti e i puntatori con riferimento indiretto singolo sono supportati solo come variabili locali, argomenti di funzione e tipi restituiti.  
  
-   Gli elementi seguenti non sono consentiti:  
  
    -   Ricorsione.  
  
    -   Le variabili dichiarate con la [volatile](../cpp/volatile-cpp.md) (parola chiave).  
  
    -   Funzioni virtuali.  
  
    -   Puntatori a funzioni.  
  
    -   Puntatori a funzioni membro.  
  
    -   Puntatori in strutture.  
  
    -   Puntatori a puntatori.  
  
    -   Istruzioni `goto`.  
  
    -   Istruzioni con etichetta.  
  
    -   Istruzioni `try`, `catch` o `throw`.  
  
    -   Variabili globali.  
  
    -   Variabili statiche. Utilizzare [tile_static (parola chiave)](../cpp/tile-static-keyword.md) invece.  
  
    -   Cast `dynamic_cast`.  
  
    -   Operatore `typeid`.  
  
    -   Dichiarazioni asm.  
  
    -   Funzioni varargs.  
  
 Per una descrizione delle limitazioni di funzione, vedere [Restrict (amp) restrizioni](http://go.microsoft.com/fwlink/p/?LinkId=251089).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `restrict(amp)`clausola.  
  
```  
  
void functionAmp() restrict(amp) {}   
void functionNonAmp() {}   
  
void callFunctions() restrict(amp)   
{   
    // int is allowed.  
    int x;  
    // long long int is not allowed in an amp-restricted function. This generates a compiler error.  
    // long long int y;   
  
    // Calling an amp-restricted function is allowed.  
    functionAmp();   
  
    // Calling a non-amp-restricted function is not allowed.  
    // functionNonAmp();   
  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)