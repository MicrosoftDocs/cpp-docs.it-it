---
title: "Preprocessore | Microsoft Docs"
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
  - "preprocessore"
ms.assetid: e120eda3-b413-49f1-a07c-e9fb128cf500
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Preprocessore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il preprocessore è un processore di testo che modifica il testo di un file di origine durante la prima fase di traslazione.  Il preprocessore non analizza il testo di origine, ma lo suddivide in token allo scopo di individuare le chiamate della macro.  Sebbene il compilatore in genere richiami il preprocessore nel primo test superato, il preprocessore può essere anche richiamato separatamente per elaborare il testo senza compilazione.  
  
 Il materiale di riferimento sul preprocessore include le sezioni seguenti:  
  
-   [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)  
  
-   [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)  
  
-   [Macro predefinite](../preprocessor/predefined-macros.md)  
  
-   [Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)  
  
 **Sezione specifica Microsoft**  
  
 È possibile ottenere un elenco del codice sorgente dopo la pre\-elaborazione utilizzando l'opzione del compilatore [\/E](../build/reference/e-preprocess-to-stdout.md) o [\/EP](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md).  Entrambe le opzioni richiamano il preprocessore e restituiscono il testo risultante al dispositivo di output standard, che, nella maggior parte dei casi, è la console.  La differenza tra le due opzioni è che \/E include le direttive `#line` mentre \/EP rimuove tali direttive.  
  
 **Fine sezione specifica Microsoft**  
  
##  <a name="_predir_special_terminology"></a> Terminologia speciale  
 Nella documentazione del preprocessore, il termine "argomento" si riferisce all'entità che viene passata a una funzione.  In alcuni casi, è modificato da "effettivo" o "formale", che descrive l'espressione dell'argomento specificata nella chiamata di funzione e nella dichiarazione dell'argomento specificata nella definizione di funzione, rispettivamente.  
  
 Il termine "variabile" si riferisce a un oggetto dati di tipo C semplice.  Il termine "oggetto" si riferisce sia agli oggetti che alle variabili C\+\+; è un termine inclusivo.  
  
## Vedere anche  
 [Riferimenti al preprocessore C\/C\+\+](../preprocessor/c-cpp-preprocessor-reference.md)   
 [Fasi di conversione](../preprocessor/phases-of-translation.md)