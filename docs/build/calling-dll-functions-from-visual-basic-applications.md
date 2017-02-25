---
title: "Chiamata di funzioni DLL da applicazioni Visual Basic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__stdcall (parola chiave) [C++]"
  - "chiamata di funzioni DLL da applicazioni VB [C++]"
  - "funzioni DLL [C++]"
  - "funzioni DLL [C++], chiamata"
  - "DLL [C++], chiamata"
  - "chiamate di funzione [C++], funzioni DLL"
  - "funzioni [C++], chiamata di funzioni DLL da Visual Basic"
ms.assetid: 282f7fbf-a0f2-4b9f-b277-1982710be56c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Chiamata di funzioni DLL da applicazioni Visual Basic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Affinché le applicazioni Visual Basic, o quelle scritte in altri linguaggi quali Pascal o Fortran, possano chiamare le funzioni contenute in una DLL C\/C\+\+, è necessario che le funzioni vengano esportate con la convenzione di chiamata corretta, senza le decorazioni dei nomi effettuate dal compilatore.  
  
 `__stdcall` crea la convenzione di chiamata corretta per la funzione \(la funzione chiamata pulisce lo stack e i parametri sono passati da destra a sinistra\), ma decora il nome della funzione in modo diverso.  Pertanto, quando si utilizza **\_\_declspec\(dllexport\)** su una funzione esportata in una DLL, viene esportato il nome decorato.  
  
 La decorazione del nome di `__stdcall` applica un segno di sottolineatura \(\_\) prima del nome del simbolo e aggiunge al simbolo il segno @ seguito dal numero di byte nell'elenco di argomenti \(lo spazio dello stack richiesto\).  Di conseguenza, la funzione dichiarata come:  
  
```  
int __stdcall func (int a, double b)  
```  
  
 verrà decorata come:  
  
```  
_func@12  
```  
  
 La convenzione di chiamata C \(`__cdecl`\) decora il nome come `_func`.  
  
 Per ottenere il nome decorato, utilizzare [\/MAP](../build/reference/map-generate-mapfile.md).  Se si utilizza **\_\_declspec\(dllexport\)**, avviene quanto riportato di seguito.  
  
-   Se la funzione viene esportata con la convenzione di chiamata C \(**\_cdecl**\), il segno di sottolineatura \(\_\) iniziale verrà rimosso al momento dell'esportazione del nome.  
  
-   Se la funzione esportata non utilizza la convenzione di chiamata C, ad esempio `__stdcall`, verrà esportato il nome decorato.  
  
 Poiché non è possibile eseguire l'override dove avviene la pulizia dello stack, è necessario utilizzare `__stdcall`.  Per rimuovere la decorazione dei nomi con `__stdcall`, è necessario specificarli mediante alias nella sezione EXPORTS del file def,  come illustrato per la seguente dichiarazione di funzione:  
  
```  
int  __stdcall MyFunc (int a, double b);  
void __stdcall InitCode (void);  
```  
  
 Nel file def:  
  
```  
EXPORTS  
   MYFUNC=_MyFunc@12  
   INITCODE=_InitCode@0  
```  
  
 Affinché le DLL vengano chiamate da programmi scritti in Visual Basic, è necessario utilizzare nel file def la tecnica degli alias illustrata in questo argomento.  Se l'alias viene creato nel programma Visual Basic, non è occorre utilizzare gli alias nel file def.  Nel programma Visual Basic, è possibile aggiungere una clausola di alias all'istruzione [Declare](../Topic/Declare%20Statement.md).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Esportazione da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)