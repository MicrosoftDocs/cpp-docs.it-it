---
title: "Passaggio di argomenti e convenzioni di denominazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "passaggio di argomenti [C++], convenzioni"
  - "argomenti [C++], denominazione"
  - "argomenti [C++], passaggio"
  - "argomenti [C++], verso un tipo di dati più grande"
  - "convenzioni di codifica, argomenti"
  - "convenzioni [C++], nomi di argomenti"
  - "convenzioni di denominazione [C++], argomenti"
  - "passaggio di argomenti, convenzioni"
  - "registri, valori restituiti"
  - "thiscall (parola chiave) [C++]"
ms.assetid: de468979-eab8-4158-90c5-c198932f93b9
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Passaggio di argomenti e convenzioni di denominazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 I compilatori di Visual C\+\+ consentono di specificare le convenzioni per passare argomenti e valori restituiti tra funzioni e chiamanti.  Non tutte le convenzioni sono disponibili in tutte le piattaforme supportate e alcune convenzioni utilizzano implementazioni specifiche della piattaforma.  Nella maggior parte dei casi, le parole chiave o le opzioni del compilatore che specificano una convenzione non supportata su una determinata piattaforma vengono ignorate e viene utilizzata la convenzione predefinita della piattaforma.  
  
 Nelle piattaforme x86, tutti gli argomenti vengono estesi a 32 bit quando vengono passati.  I valori restituiti vengono estesi anche a 32 bit e vengono restituiti nel registro EAX, eccetto le strutture a 8 byte, che vengono restituite nella coppia di registri EDX:EAX.  Le strutture di dimensioni maggiori vengono restituite nel registro EAX come puntatori alle strutture di ritorno nascoste.  I parametri vengono inseriti nello stack da destra a sinistra.  Le strutture che non sono POD non verranno restituite nei registri.  
  
 Il compilatore genera un codice di epilogo e di prologo per salvare e ripristinare i registri ESI, EDI, EBX e EBP, se sono utilizzati nella funzione.  
  
> [!NOTE]
>  Quando uno struct, un'unione o una classe vengono restituiti da una funzione per valore, tutte le definizioni del tipo devono essere uguali, altrimenti il programma può avere esito negativo in fase di esecuzione.  
  
 Per informazioni su come definire il codice di prologo e di epilogo della funzione, vedere le [chiamate alle funzioni naked](../cpp/naked-function-calls.md).  
  
 Per informazioni sulle convenzioni di chiamata predefinite nel codice destinato alle piattaforme x64, vedere [Cenni preliminari sulle convenzioni di chiamata x64](../build/overview-of-x64-calling-conventions.md).  Per informazioni sui problemi relativi alle convenzioni di chiamata nel codice destinato alle piattaforme ARM, vedere [Problemi comuni relativi alla migrazione di Visual C\+\+ ARM](../build/common-visual-cpp-arm-migration-issues.md).  
  
 Le seguenti convenzioni di chiamata sono supportate dal compilatore Visual C\/C\+\+.  
  
|Parola chiave|Pulizia dello stack|Passaggio dei parametri|  
|-------------------|-------------------------|-----------------------------|  
|[\_\_cdecl](../cpp/cdecl.md)|Chiamante|Inserisce i parametri nello stack in ordine inverso \(da destra a sinistra\)|  
|[\_\_clrcall](../cpp/clrcall.md)|n\/d|Carica in ordine i parametri nello stack dell'espressione CLR \(da sinistra a destra\).|  
|[\_\_stdcall](../cpp/stdcall.md)|Chiamato|Inserisce i parametri nello stack in ordine inverso \(da destra a sinistra\)|  
|[\_\_fastcall](../cpp/fastcall.md)|Chiamato|Archiviati nei registri, quindi inseriti nello stack|  
|[\_\_thiscall](../cpp/thiscall.md)|Chiamato|Inserito nello stack; **questo** puntatore è stato archiviato in ECX|  
|[\_\_vectorcall](../cpp/vectorcall.md)|Chiamato|Archiviato nei registri, quindi sottoposto a push nello stack in ordine inverso \(da destra a sinistra\)|  
  
 Per informazioni correlate, vedere le [convenzioni di chiamata obsolete](../cpp/obsolete-calling-conventions.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)