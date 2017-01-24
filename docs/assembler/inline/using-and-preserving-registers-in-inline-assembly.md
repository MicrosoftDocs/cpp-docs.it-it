---
title: "Utilizzo e conservazione di registri nell&#39;assembly inline | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], valori del registro"
  - "assembly inline, registri"
  - "conservazione di registri"
  - "registri, assembly inline"
ms.assetid: dbcd7360-6f3e-4b22-9ee2-9f65ca6f2543
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo e conservazione di registri nell&#39;assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Specifici di Microsoft  
 In generale, non deve presupporre che un registro avrà un valore specificato quando un  `__asm`blocco inizi.  Valori di registro potrebbero non essere mantenuto tra le diverse entità  `__asm`blocchi.  Se si termina un blocco di codice inline e iniziarne un'altra, è possibile fare affidamento su registratori di cassa nel secondo blocco per mantenere i valori dal primo blocco.  Un  `__asm`blocco eredita qualsiasi registrare il risultato di valori dal normale flusso di controllo.  
  
 Se si utilizza il  `__fastcall`convenzione di chiamata, il compilatore passa gli argomenti della funzione nei registri anziché sullo stack.  Ciò può creare problemi nelle funzioni con  `__asm`bloccato poiché una funzione non è possibile indicare a quale parametro in quale registro.  Se la funzione accade per la ricezione di un parametro in EAX e memorizza immediatamente un'altra in EAX, il parametro originale viene perso.  Inoltre, è necessario conservare il registro ECX in qualsiasi funzione dichiarata con  `__fastcall`.  
  
 Per evitare tali conflitti di registro, non utilizzare il  `__fastcall`convenzione per le funzioni che contengono un  `__asm`blocco.  Se si specifica il  `__fastcall`convenzione globalmente con l'opzione del compilatore \/Gr, dichiarare ogni funzione che contiene un  `__asm`blocco con  `__cdecl`o   `__stdcall`.  \(Il  `__cdecl`attributo indica al compilatore di utilizzare la convenzione di chiamata C per tale funzione.\) Se non si esegue la compilazione con \/Gr, evitare di dichiarare la funzione con la  `__fastcall`attributo.  
  
 Quando si utilizza  `__asm`per scrivere il linguaggio assembly nelle funzioni di C\/C\+\+, non è necessario conservare i registri EAX, EBX, ECX, EDX, ESI o EDI.  Ad esempio, nel POWER2.Esempio di C in  [Scrittura funzioni con Inline Assembly](../../assembler/inline/writing-functions-with-inline-assembly.md), il  `power2`funzione non è possibile mantenere il valore nel registro EAX.  Tuttavia, utilizzando i registri influirà sulle qualità del codice perché l'allocatore di registro non è possibile utilizzare per memorizzare i valori in  `__asm`blocchi.  Inoltre, utilizzando EBX, ESI o EDI nel codice assembly inline, è possibile forzare il compilatore per salvare e ripristinare i registri nel prologo di funzione ed epilogue.  
  
 Potete mantenere per l'ambito di altri registri utilizzare \(ad esempio DS, SS, SP, BP e registri di flag\) la  `__asm`blocco.  Conservare i registri di ESP ed EBP a meno che non esista un motivo per modificarli \(per passare gli stack, ad esempio\).  Vedere anche  [Ottimizzazione Inline Assembly](../../assembler/inline/optimizing-inline-assembly.md).  
  
 Alcuni tipi di SSE richiedono un allineamento dello stack a 8 byte, imponendo al compilatore di generare codice dinamico allineamento dello stack.  Per poter accedere alle variabili locali e parametri di funzione dopo l'allineamento, il compilatore gestisce due puntatori ai frame.  Se il compilatore esegue omissione dei puntatori ai frame \(FPO\), utilizzerà EBP ed ESP.  Se il compilatore non esegue FPO, utilizzerà EBX ed EBP.  Per garantire il codice viene eseguito correttamente, non modifica EBX nel codice asm se la funzione richiede l'allineamento dello stack dinamico come è possibile modificare il puntatore ai frame.  Spostare i tipi allineati a 8 byte la funzione oppure evitare di utilizzare EBX.  
  
> [!NOTE]
>  Se il codice assembly inline viene modificato il flag di direzione utilizzando le istruzioni STD o CLD, è necessario ripristinare il flag al valore originale.  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)