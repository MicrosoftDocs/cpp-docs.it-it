---
title: "Esportazione di funzioni C++ per l&#39;utilizzo in eseguibili in linguaggio C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "esportazione di DLL [C++], funzioni C++ in file eseguibili C"
  - "esportazione di funzioni [C++], funzioni C++ in file eseguibili C"
  - "funzioni [C++], funzioni C++ in file eseguibili C"
  - "funzioni [C++], esportazione"
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esportazione di funzioni C++ per l&#39;utilizzo in eseguibili in linguaggio C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si desidera accedere alle funzioni di una DLL in C\+\+ da un modulo in linguaggio C, è necessario dichiararle con il collegamento C anziché con il collegamento C\+\+.  Se non viene specificato diversamente, il compilatore C\+\+ utilizza la denominazione indipendente dai tipi C\+\+, anche detta decorazione dei nomi, e le convenzioni di chiamata C\+\+ che può essere difficile chiamare da C.  
  
 Per specificare il collegamento C, specificare **extern** "**C**" per le dichiarazioni di funzione.  Di seguito è riportato un esempio.  
  
```  
extern "C" __declspec( dllexport ) int MyFunc(long parm1);  
```  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL utilizzando i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C\+\+](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Specifiche dei collegamenti](http://msdn.microsoft.com/it-it/d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)