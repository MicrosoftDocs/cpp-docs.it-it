---
title: "Cenni preliminari sulle convenzioni di chiamata x64 | Microsoft Docs"
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
ms.assetid: a05db5eb-0844-4d9d-8b92-b1b2434be0ea
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Cenni preliminari sulle convenzioni di chiamata x64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Due importanti modifiche apportate in [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] rispetto a x86 sono la funzionalità di indirizzamento a 64 bit e un set semplice di 16 registri a 64 bit per un utilizzo generale.  Considerato il set ampliato dei registri, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] utilizza solo la convenzione di chiamata [\_\_fastcall](../cpp/fastcall.md) e un modello di gestione delle eccezioni basato su RISC.  Il modello `__fastcall` utilizza i registri per i primi quattro argomenti e lo stack frame per passare gli altri parametri.  
  
 La seguente opzione del compilatore consente di ottimizzare l'applicazione per [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]:  
  
-   [\/favor \(ottimizzato per le specifiche di architettura\)](../build/reference/favor-optimize-for-architecture-specifics.md)  
  
## Convenzione di chiamata  
 L'interfaccia applicativa binaria ABI \(Application Binary Interface\) di [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] è una convenzione di chiamata di tipo FastCall a 4 registri, per i quali è dotata di supporto stack.  Esiste una stretta corrispondenza uno\-a\-uno tra gli argomenti di una funzione e i registri relativi a tali argomenti.  Qualsiasi argomento che non rientra in 8 byte o che non equivale a 1, 2, 4 o 8 byte deve essere passato per riferimento.  Non viene effettuato alcun tentativo di diffondere un unico argomento in più registri.  Lo stack di registro x87 rimane inutilizzato.  Se lo si desidera, è tuttavia possibile utilizzarlo, ma deve essere considerato volatile tra le chiamate di funzione.  Tutte le operazioni in virgola mobile vengono eseguite tramite i 16 registri XMM.  Gli argomenti vengono passati nei registri RCX, RDX, R8 e R9.  Se gli argomenti sono di tipo float\/double, vengono passati in XMM0L, XMM1L, XMM2L e XMM3L.  Gli argomenti a 16 byte vengono passati per riferimento.  Per informazioni dettagliate sul passaggio dei parametri, vedere [Passaggio dei parametri](../build/parameter-passing.md).  Oltre a questi registri, sono volatili anche RAX, R10, R11, XMM4 e XMM5.  Tutti gli altri registri sono non volatili.  L'utilizzo dei registri è dettagliatamente documentato in [Utilizzo dei registri](../build/register-usage.md) e [Registri salvati dal chiamante o dal chiamato](../build/caller-callee-saved-registers.md).  
  
 Il chiamante è responsabile di allocare spazio per i parametri nel chiamato e deve sempre considerare uno spazio che sia sufficiente per 4 parametri di registro, anche quando il chiamato non possiede un tale numero di parametri.  Questo semplifica il supporto delle funzioni C senza prototipo e delle funzioni vararg di C\/C\+\+.  Nelle funzioni vararg o senza prototipo tutti i valori float devono essere duplicati nel corrispondente registro generale.  Qualsiasi parametro aggiuntivo rispetto ai primi 4 deve essere archiviato nello stack, sopra l'archivio di backup dei primi 4, prima della chiamata.  Per informazioni dettagliate sulle funzioni vararg, vedere [Varargs](../build/varargs.md).  Per informazioni dettagliate sulle funzioni senza prototipo, vedere [Funzioni senza prototipo](../build/unprototyped-functions.md).  
  
## Allineamento  
 La maggior parte delle strutture segue il proprio allineamento naturale.  Le principali eccezioni sono la memoria alloca o malloc e il puntatore dello stack, che sono allineati a 16 byte allo scopo di migliorare le prestazioni.  L'allineamento al di sopra dei 16 byte deve essere eseguito manualmente. Tuttavia, rappresentando una dimensione di allineamento comune per le operazioni XMM, 16 byte dovrebbero risultare sufficienti per la maggior parte del codice.  Per ulteriori informazioni sul layout e sull'allineamento della struttura, vedere [Tipi e archiviazione](../build/types-and-storage.md).  Per informazioni sul layout dello stack, vedere [Utilizzo dello stack](../build/stack-usage.md).  
  
## Modalità di rimozione  
 Tutte le funzioni foglia \(funzioni che non chiamano una funzione, né provvedono ad allocare spazio di stack\) devono essere contrassegnate con dati \(definiti xdata o ehdata, a cui si fa riferimento da pdata\) che indichino al sistema operativo come eseguirne correttamente la rimozione, al fine di recuperare i registri non volatili.  Prologhi ed epiloghi sono estremamente limitati, in modo da poter essere descritti correttamente in xdata.  Il puntatore dello stack deve essere allineato a 16 byte, fatta eccezione per le funzioni foglia, in tutte le aree di codice che non appartengono a un epilogo o a un prologo.  Per informazioni dettagliate sulla corretta struttura di prologo ed epilogo di una funzione, vedere [Prologo ed epilogo](../build/prolog-and-epilog.md).  Per ulteriori informazioni sulla gestione delle eccezioni e sulla gestione e rimozione di pdata e xdata, vedere [Gestione delle eccezioni \(x64\)](../build/exception-handling-x64.md).  
  
## Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)