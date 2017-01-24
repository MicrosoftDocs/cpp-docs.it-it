---
title: "threadprivate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "threadprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threadprivate OpenMP directive"
ms.assetid: 3515aaed-6f9d-4d59-85eb-342378bea2d3
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# threadprivate
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che una variabile è privata a un thread.  
  
## Sintassi  
  
```  
#pragma omp threadprivate(var)  
```  
  
## Note  
 dove:  
  
 `var`  
 Un elenco delimitato da virgole delle variabili che si desidera rendere private di un thread.  `var` deve essere una variabile dello spazio dei nomi\-scoped o globale o una variabile locale statica.  
  
## Note  
 `threadprivate` la direttiva non supporta clausole di OpenMP.  
  
 Per ulteriori informazioni, vedere [una direttiva di 2.7.1 threadprivate](../../../parallel/openmp/2-7-1-threadprivate-directive.md).  
  
 `threadprivate` la direttiva è basata su  [thread](../../../cpp/thread.md)`__declspec` attributo; limiti su  **\_\_declspec \(thread\)** si applica a  `threadprivate`.  
  
 Non è possibile utilizzare `threadprivate` in qualsiasi DLL che verrà caricato tramite  [LoadLibrary](http://msdn.microsoft.com/library/windows/desktop/ms684175).  Sono incluse le DLL caricati con [\/DELAYLOAD \(Importazione a caricamento ritardato\)](../../../build/reference/delayload-delay-load-import.md), che utilizza inoltre  **LoadLibrary**.  
  
 È possibile utilizzare `threadprivate` in una DLL che viene caricato in modo statico all'avvio del processo.  
  
 Poiché `threadprivate` è basato su  **\_\_declspec \(thread\)**, a  `threadprivate` la variabile continuerà a esistere in qualsiasi thread avviato nel processo, non solo quelli di cui fa parte di un team di thread generato da un'area parallela.  Si tratta di un dettaglio di implementazione di cui può essere opportuno tenere presente, poiché si può notare, ad esempio, i costruttori per la classe `threadprivate` il tipo definito dall'utente ha chiamato più spesso quindi previsto.  
  
 In `threadprivate` la variabile di un tipo destructable non è garantito desidera che il distruttore chiamato.  Di seguito è riportato un esempio:  
  
```  
struct MyType   
{  
    ~MyType();  
};  
  
MyType threaded_var;  
#pragma omp threadprivate(threaded_var)  
int main()   
{  
    #pragma omp parallel  
    {}  
}  
```  
  
 Gli utenti non dispongono di controllo quanto a quando i thread che costituiscono area parallela termineranno.  Se tali thread esistenti al termine del processo, i thread non verranno passate sull'uscita del processo e il distruttore non verranno chiamati per `threaded_var` in qualsiasi thread escludere che l'uscita da \(in questo caso, il thread primario\).  Pertanto il codice non necessario contare sulla distruzione corretta di `threadprivate` variabili.  
  
## Esempio  
 Per un esempio di utilizzo `threadprivate`, vedere  [privato](../../../parallel/openmp/reference/private-openmp.md).  
  
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)