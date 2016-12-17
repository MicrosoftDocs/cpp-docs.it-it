---
title: "Esportazione di funzioni C per l&#39;utilizzo in eseguibili in linguaggio C o C++ | Microsoft Docs"
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
  - "__cplusplus (macro)"
  - "esportazione di DLL [C++], funzioni C in file eseguibili C++"
  - "esportazione di funzioni [C++], funzioni C in file eseguibili C++"
  - "funzioni [C], funzioni C o C++ in file eseguibili"
  - "funzioni [C], esportazione"
ms.assetid: b51d6e5e-37cf-4c1c-b0bf-fcf188c82f00
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esportazione di funzioni C per l&#39;utilizzo in eseguibili in linguaggio C o C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se in una DLL scritta in C sono presenti funzioni a cui si desidera accedere da un modulo in linguaggio C o C\+\+, è necessario utilizzare la macro del preprocessore **\_\_cplusplus** per determinare il linguaggio di compilazione e quindi dichiarare queste funzioni con il collegamento C se devono essere utilizzate da un modulo in linguaggio C\+\+.  Se si utilizza questa tecnica e si forniscono i file di intestazione per la DLL, queste funzioni possono essere utilizzate dagli utenti di C e C\+\+ senza modifiche.  
  
 Nell'esempio di codice riportato di seguito viene illustrato un file di intestazione che può essere utilizzato da applicazioni client C e C\+\+:  
  
```  
// MyCFuncs.h  
#ifdef __cplusplus  
extern "C" {  // only need to export C interface if  
              // used by C++ source code  
#endif  
  
__declspec( dllimport ) void MyCFunc();  
__declspec( dllimport ) void AnotherCFunc();  
  
#ifdef __cplusplus  
}  
#endif  
```  
  
 Se è necessario collegare le funzioni C all'eseguibile C\+\+ e non è stata utilizzata la tecnica precedente per i file di intestazione della dichiarazione di funzione, nel file sorgente C\+\+ procedere come descritto di seguito per evitare che il compilatore effettui la decorazione dei nomi delle funzioni C:  
  
```  
extern "C" {  
#include "MyCHeader.h"  
}  
```  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL utilizzando i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Specifiche dei collegamenti](http://msdn.microsoft.com/it-it/d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)