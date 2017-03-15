---
title: "Esportazione da una DLL | Microsoft Docs"
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
  - "esportazioni di DLL [C++]"
  - "DLL [C++], esportazione da"
  - "esportazione di DLL [C++]"
  - "esportazione di DLL [C++], informazioni sull’esportazione da DLL"
  - "esportazione di funzioni [C++], DLL (esportazione da)"
  - "tabella di esportazioni [C++]"
  - "funzioni [C++], esportazione"
ms.assetid: a08f86c4-5996-460b-ae54-da2b764045f0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Esportazione da una DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il layout di un file dll è simile a quello di un file exe, tranne per il fatto che contiene una tabella di esportazione.  Questa tabella include il nome di ogni funzione che la DLL esporta in altri eseguibili.  Queste funzioni sono i punti di ingresso alla DLL. Solo le funzioni nella tabella di esportazione sono accessibili dagli altri eseguibili.  Qualsiasi altra funzione nella DLL è privata.  La tabella di esportazione di una DLL può essere visualizzata tramite lo strumento [DUMPBIN](../build/reference/dumpbin-reference.md) con l'opzione \/EXPORTS.  
  
 È possibile esportare funzioni da una DLL con i due metodi descritti di seguito.  
  
-   Creare un file di definizione di modulo \(def\) e utilizzarlo quando si compila la DLL.  Utilizzare questo metodo se si intende [esportare le funzioni dalla DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
-   Utilizzare la parola chiave **\_\_declspec\(dllexport\)** nella definizione della funzione.  
  
 Quando si esportano le funzioni con uno di questi metodi, accertarsi di utilizzare la convenzione di chiamata [\_\_stdcall](../cpp/stdcall.md).  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL utilizzando i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C\+\+](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Importazione in un'applicazione](../build/importing-into-an-application.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)