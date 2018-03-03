---
title: Panoramica di x64 convenzioni di chiamata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: a05db5eb-0844-4d9d-8b92-b1b2434be0ea
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8ac42eb934692fb9eaecf345b75e7544e7078f07
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overview-of-x64-calling-conventions"></a>Cenni preliminari sulle convenzioni di chiamata x64
Due differenze importanti tra x86 e [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] sono le funzionalità di indirizzamento a 64 bit e un set semplice di 16 bit 64 registri per uso generale. Considerato espanso registri set, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] utilizza il [fastcall](../cpp/fastcall.md) convenzione di chiamata e un modello di gestione delle eccezioni basato su RISC. Il `__fastcall` convenzione utilizza i registri per i primi quattro argomenti e lo stack frame per passare argomenti aggiuntivi.  
  
 L'opzione del compilatore seguente consente di ottimizzare l'applicazione per [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]:  
  
-   [/favor (ottimizza per le specifiche di architettura)](../build/reference/favor-optimize-for-architecture-specifics.md)  
  
## <a name="calling-convention"></a>Convenzione di chiamata  
 Il [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] interfaccia applicativa binaria (ABI) utilizza una convenzione di chiamata di fast quattro register per impostazione predefinita. Lo spazio viene allocato nello stack di chiamate come archivio shadow per chiamati salvare i registri. È una rigida corrispondenza univoca tra gli argomenti per una chiamata di funzione e i registri usati per gli argomenti. Qualsiasi argomento che non si adatta a 8 byte o non è 1, 2, 4 o 8 byte, deve essere passato per riferimento. Non viene eseguito alcun tentativo per distribuire un singolo argomento in più registri. Il x87 stack di registro è inutilizzato. Possono essere utilizzata dall'oggetto chiamato, ma deve essere considerato volatile tra chiamate di funzione. A virgola mobile a tutte le operazioni vengono eseguite utilizzando il 16 registri XMM. Gli argomenti interi vengono passati nei registri, ovvero RCX, RDX, R8 e R9. A virgola mobile vengono passati argomenti XMM0L, XMM1L, XMM2L e XMM3L. 16 byte argomenti vengono passati per riferimento. Passaggio dei parametri sono descritto dettagliatamente in [passaggio dei parametri](../build/parameter-passing.md). Oltre a questi registri, RAX, R10, R11, XMM4 e XMM5 sono considerati volatili. Tutti gli altri registri sono non volatili. Utilizzo dei registri è documentato in dettaglio in [registrare l'utilizzo](../build/register-usage.md) e [salvato registra chiamante/chiamato](../build/caller-callee-saved-registers.md).  
  
 Il chiamante è responsabile dell'allocazione dello spazio per i parametri per il destinatario della chiamata e deve sempre allocare spazio sufficiente per memorizzare i quattro parametri, anche se il chiamato non accetta parametri che molte. Questa operazione semplifica il supporto per le funzioni del linguaggio C senza prototipo e le funzioni vararg C/C++. Per le funzioni vararg o senza prototipo, qualsiasi a virgola mobile, i valori devono essere duplicato in corrispondente registro generale. I parametri oltre i primi quattro devono essere archiviati nello stack, sopra l'archivio shadow per i primi quattro prima della chiamata. Dettagli funzione vararg sono reperibile [Varargs](../build/varargs.md). Per informazioni dettagliate [funzioni senza prototipo](../build/unprototyped-functions.md).  
  
## <a name="alignment"></a>Allineamento  
 La maggior parte delle strutture sono allineate per l'allineamento naturale. Le principali eccezioni sono il puntatore dello stack e `malloc` o `alloca` memoria, che sono allineati a 16 byte per migliorare le prestazioni. Allineamento di sopra di 16 byte deve essere eseguita manualmente, ma poiché una dimensione di allineamento comuni per le operazioni XMM a 16 byte, questo dovrebbe funzionare per gran parte del codice. Per ulteriori informazioni sul layout della struttura e sull'allineamento vedere [tipi e archiviazione](../build/types-and-storage.md). Per informazioni sul layout dello stack, vedere [utilizzo dello Stack](../build/stack-usage.md).  
  
## <a name="unwindability"></a>Modalità di rimozione  
 Le funzioni foglia sono funzioni che non cambiano qualsiasi registri non volatili. Una funzione non foglia può modificare RSP non volatili, ad esempio, si chiama una funzione o l'allocazione di spazio dello stack aggiuntiva per le variabili locali. Per recuperare i registri non volatili quando un'eccezione gestita, le funzioni non foglia devono essere annotate con i dati statici che viene descritto come rimuovere correttamente la funzione un'istruzione arbitrario. Questi dati vengono archiviati come *pdata*, o dati di routine, che a sua volta fa riferimento a *xdata*, dati di gestione delle eccezioni. Contiene le informazioni di rimozione di xdata e può puntare a pdata aggiuntiva o una funzione del gestore eccezioni. Prologhi ed epiloghi sono estremamente limitate in modo che possano essere descritti correttamente in xdata. Il puntatore dello stack deve essere allineato a 16 byte in qualsiasi area di codice che non fa parte di un epilogo o di prologo, ad eccezione all'interno di funzioni foglia. Le funzioni foglia possono essere svuotate semplicemente simulando un ritorno, pertanto non sono richiesti pdata e xdata. Per informazioni dettagliate sulla struttura corretta della funzione prologhi ed epiloghi, vedere [di prologo ed epilogo](../build/prolog-and-epilog.md). Per ulteriori informazioni sulla gestione delle eccezioni e l'eccezione, la gestione e rimozione di pdata e xdata, vedere [eccezioni (x64)](../build/exception-handling-x64.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)