---
title: "restrict (C++ AMP) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "cpu_CPP"
  - "amp_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "clausola restrict (C++ AMP)"
ms.assetid: 07d3291f-7edf-456b-8828-283ac8673661
caps.latest.revision: 22
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# restrict (C++ AMP)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'indicatore di restrizione può essere applicato a dichiarazioni lambda e di funzione.  Tale indicatore applica restrizioni sul codice della funzione e sul comportamento della funzione nelle applicazioni che utilizzano il runtime C\+\+ AMP \(Accelerated Massive Parallelism\) di C\+\+.  
  
> [!NOTE]
>  Per informazioni sulla parola chiave `restrict` che appartiene agli attributi della classe di archiviazione `__declspec`, vedere [restrict](../cpp/restrict.md).  
  
 La clausola `restrict` può assumere le forme seguenti:  
  
|Clausola|Descrizione|  
|--------------|-----------------|  
|`restrict(cpu)`|La funzione può utilizzare il linguaggio C\+\+ completo.  Solo altre funzioni dichiarate tramite le funzioni restrict\(cpu\) possono chiamare la funzione.|  
|`restrict(amp)`|La funzione può utilizzare solo un subset del linguaggio C\+\+ che C\+\+ AMP può accelerare.|  
|Sequenza di `restrict(cpu)` e `restrict(amp)`.|La funzione deve rispettare le limitazioni sia di `restrict(cpu)` che di `restrict(amp)`.  La funzione può essere chiamata dalle funzioni dichiarate tramite `restrict(cpu)`, `restrict(amp)`, `restrict(cpu, amp)` o `restrict(amp, cpu)`.<br /><br /> La forma `restrict(A) restrict(B)` può essere scritta come `restrict(A,B)`.|  
  
## Note  
 La parola chiave `restrict` è una parola chiave contestuale.  Gli indicatori di restrizione `cpu` e `amp` non sono parole chiave riservate.  L'elenco degli indicatori non è estensibile.  Una funzione che non contiene una clausola `restrict` è uguale a una funzione che contiene la clausola `restrict(cpu)`.  
  
 Una funzione con la clausola `restrict(amp)` è caratterizzata dalle limitazioni seguenti:  
  
-   La funzione può chiamare solo funzioni con la clausola `restrict(amp)`.  
  
-   È necessario che sia possibile rendere la funzione inline.  
  
-   La funzione può dichiarare solo variabili `int`, `unsigned int`, `float` e `double` nonché classi e strutture che contengono solo questi tipi.  Il tipo `bool` è consentito, ma deve essere a 4 byte se utilizzata in un tipo composto.  
  
-   Le funzioni lambda non possono essere acquisite per riferimento e non possono acquisire puntatori.  
  
-   I riferimenti e i puntatori con riferimento indiretto singolo sono supportati solo come variabili locali, argomenti di funzione e tipi restituiti.  
  
-   Gli elementi seguenti non sono consentiti:  
  
    -   Ricorsione.  
  
    -   Variabili dichiarate con la parola chiave [volatile](../cpp/volatile-cpp.md).  
  
    -   Funzioni virtuali.  
  
    -   Puntatori a funzioni.  
  
    -   Puntatori a funzioni membro.  
  
    -   Puntatori in strutture.  
  
    -   Puntatori a puntatori.  
  
    -   Istruzioni `goto`.  
  
    -   Istruzioni con etichetta.  
  
    -   Istruzioni `try`, `catch` o `throw`.  
  
    -   Variabili globali.  
  
    -   Variabili statiche.  In alternativa, utilizzare [Parola chiave tile\_static](../cpp/tile-static-keyword.md).  
  
    -   Cast `dynamic_cast`.  
  
    -   Operatore `typeid`.  
  
    -   Dichiarazioni asm.  
  
    -   Funzioni varargs.  
  
 Per una discussione sulle limitazioni di funzione, vedere [Restrizioni restrict\(amp\)](http://go.microsoft.com/fwlink/p/?LinkId=251089).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare la clausola `restrict(amp)`.  
  
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
  
## Vedere anche  
 [C\+\+ AMP \(C\+\+ Accelerated Massive Parallelism\)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)