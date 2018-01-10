---
title: Chiamata di funzioni DLL dalle applicazioni Visual Basic | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- functions [C++], calling DLL functions from Visual Basic
- DLL functions [C++]
- function calls [C++], DLL functions
- DLLs [C++], calling
- calling DLL functions from VB applications [C++]
- __stdcall keyword [C++]
- DLL functions [C++], calling
ms.assetid: 282f7fbf-a0f2-4b9f-b277-1982710be56c
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ed99b0ebe41a8f1bc9684638fa74e18556dd51f5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="calling-dll-functions-from-visual-basic-applications"></a>Chiamata di funzioni DLL da applicazioni Visual Basic
Per le applicazioni Visual Basic (o le applicazioni in altri linguaggi come Pascal o Fortran) chiamare le funzioni in una DLL di C/C++, le funzioni devono essere esportate utilizzando la convenzione di chiamata corretta senza alcun decorazione dei nomi eseguita dal compilatore.  
  
 `__stdcall`Crea la convenzione di chiamata corretta per la funzione (la funzione chiamata pulisce lo stack e i parametri vengono passati da destra a sinistra), ma decora il nome della funzione in modo diverso. In questo caso, quando **dllexport** viene utilizzato in una funzione esportata in una DLL, il nome decorato viene esportato.  
  
 Il `__stdcall` decorazione dei nomi al nome del simbolo con un carattere di sottolineatura (_) e aggiunge il simbolo con un simbolo di chiocciola (@) seguito dal numero di byte nell'elenco di argomenti (lo spazio dello stack richiesto). Di conseguenza, la funzione dichiarata come:  
  
```  
int __stdcall func (int a, double b)  
```  
  
 è decorata come:  
  
```  
_func@12  
```  
  
 La convenzione di chiamata C (`__cdecl`) decora il nome come `_func`.  
  
 Per ottenere il nome decorato, utilizzare [/Map](../build/reference/map-generate-mapfile.md). Utilizzo di **dllexport** esegue le operazioni seguenti:  
  
-   Se la funzione viene esportata con la convenzione di chiamata C (**cdecl**), e rimuove il segno di sottolineatura (_) quando il nome viene esportato.  
  
-   Se la funzione esportata non utilizza la convenzione di chiamata C (ad esempio, `__stdcall`), verrà esportato il nome decorato.  
  
 Poiché non è possibile eseguire l'override in cui si verifica la pulizia dello stack, è necessario utilizzare `__stdcall`. Rimuovere la decorazione nomi con `__stdcall`, è necessario specificarli mediante alias nella sezione EXPORTS del file. def. Viene visualizzata come segue per la dichiarazione di funzione seguente:  
  
```  
int  __stdcall MyFunc (int a, double b);  
void __stdcall InitCode (void);  
```  
  
 Nel. File DEF:  
  
```  
EXPORTS  
   MYFUNC=_MyFunc@12  
   INITCODE=_InitCode@0  
```  
  
 Per le DLL da chiamare da programmi scritti in Visual Basic, è necessaria la tecnica di alias illustrata in questo argomento nel file def. Se l'alias viene eseguito nel programma Visual Basic, non è necessario utilizzare gli alias nel file. def. Può essere eseguita nel programma Visual Basic aggiungendo una clausola di alias per il [Declare](/dotnet/visual-basic/language-reference/statements/declare-statement) istruzione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Esportazione da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Esportazione da una DLL tramite. DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)