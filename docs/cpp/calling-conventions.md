---
title: "Convenzioni di chiamata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "convenzioni di chiamata"
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Convenzioni di chiamata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore Visual C\/C\+\+ fornisce numerose convenzioni per chiamare funzioni interne ed esterne.  La comprensione di questi diversi approcci può facilitare il debug del programma e il collegamento del codice con le routine del linguaggio assembly.  
  
 In questo argomento vengono illustrate le differenze tra le convenzioni di chiamata, il modo in cui gli argomenti vengono passati e il modo in cui i valori vengono restituiti dalle funzioni.  Vengono inoltre illustrate le chiamate di funzione naked, una funzionalità avanzata che consente di scrivere codice di epilogo e di prologo personalizzato.  
  
 Per informazioni sulle convenzioni di chiamata per i processori x64, vedere [Convenzione di chiamata](../build/calling-convention.md).  
  
## Argomenti contenuti in questa sezione  
  
-   [Convenzioni di denominazione e di passaggio degli argomenti](../cpp/argument-passing-and-naming-conventions.md) \(\_\_`cdecl`, \_\_**stdcall**, \_\_**fastcall** e altri\)  
  
-   [Esempio di chiamata \- Prototipo e chiamata di funzione](../cpp/calling-example-function-prototype-and-call.md)  
  
-   [Utilizzo di chiamate di funzione naked per scrivere codice di epilogo o di prologo personalizzato](../cpp/naked-function-calls.md)  
  
-   [Coprocessore a virgola mobile e convenzioni di chiamata](../cpp/floating-point-coprocessor-and-calling-conventions.md)  
  
-   [Convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md)  
  
## Vedere anche  
 [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)