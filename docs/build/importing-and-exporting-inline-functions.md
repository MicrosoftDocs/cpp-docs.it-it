---
title: "Importazione ed esportazione di funzioni inline | Microsoft Docs"
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
  - "DLL [C++], esportazione da"
  - "DLL [C++], importazione"
  - "esportazione di funzioni [C++], funzioni inline"
  - "funzioni [C++], esportazione"
  - "funzioni [C++], importazione"
  - "importazione di funzioni [C++]"
  - "importazione di funzioni inline [C++]"
  - "funzioni inline [C++], esportazione"
  - "funzioni inline [C++], importazione"
ms.assetid: 89f488f8-b078-40fe-afd7-80bd7840057b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Importazione ed esportazione di funzioni inline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni importate possono essere definite come inline.  Si ottiene un effetto simile alla definizione di una funzione inline standard, in quanto le chiamate alla funzione vengono espanse nel codice inline, analogamente a una macro.  Questa funzionalità è particolarmente utile per il supporto delle classi C\+\+ in una DLL che può rendere inline alcune delle funzioni membro per maggiore efficienza.  
  
 Una funzione inline importata consente di utilizzare il relativo indirizzo in C\+\+.  Il compilatore restituisce l'indirizzo della copia della funzione inline residente nella DLL.  Le funzioni inline importate, inoltre, consentono di inizializzare i dati locali statici della funzione importata, a differenza dei dati importati globali.  
  
> [!CAUTION]
>  Fare attenzione quando si forniscono funzioni inline importate, poiché possono creare conflitti di versione.  Dato che una funzione inline viene espansa nel codice dell'applicazione, se viene successivamente riscritta non viene aggiornata nell'applicazione, a meno che non si ricompili l'applicazione stessa. Le funzioni DLL possono in genere essere aggiornate senza ricompilare le applicazioni che le utilizzano.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportare da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
## Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)