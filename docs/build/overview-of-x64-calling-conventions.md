---
title: Panoramica di x64 convenzioni di chiamata | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a05db5eb-0844-4d9d-8b92-b1b2434be0ea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 850ab9f4d3656391ac744f42a9f7d4b962762724
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42572845"
---
# <a name="overview-of-x64-calling-conventions"></a>Cenni preliminari sulle convenzioni di chiamata x64
Due importanti differenze tra x86 e x64 sono le funzionalità di indirizzamento a 64 bit e un set semplice pari a 16 bit 64 registri per uso generale. Dato il set di registri espanso, x64 Usa la [fastcall](../cpp/fastcall.md) convenzione di chiamata e un modello di gestione delle eccezioni basato su RISC. Il `__fastcall` convenzione utilizza i registri per i primi quattro argomenti e lo stack frame per passare argomenti aggiuntivi.  
  
 L'opzione del compilatore seguente consente di ottimizzare l'applicazione per x64:  
  
-   [/favor (ottimizza per le specifiche di architettura)](../build/reference/favor-optimize-for-architecture-specifics.md)  
  
## <a name="calling-convention"></a>Convenzione di chiamata  
 X64 interfaccia applicativa binaria (ABI) usa una convenzione di chiamata di fast-chiamata quattro register per impostazione predefinita. Lo spazio viene allocato nello stack di chiamate come archivio di ombreggiatura per chiamati salvare i registri. È presente una corrispondenza uno a uno di tipo strict tra gli argomenti da una chiamata di funzione e i registri usati per tali argomenti. Qualsiasi argomento che non si adatta a 8 byte o non è 1, 2, 4 o 8 byte, deve essere passato per riferimento. Non viene eseguito alcun tentativo di distribuire un singolo argomento tra più registri. X87 registro dello stack non viene utilizzato. Può essere utilizzato dal computer chiamato, ma deve essere considerato volatile durante le chiamate di funzione. Virgola mobile a tutte le operazioni vengono eseguite usando il 16 registri XMM. Gli argomenti interi vengono passati nei registri, ovvero RCX, RDX, R8 e R9. Gli argomenti vengono passati in XMM0L, XMM1L, XMM2L e XMM3L virgola mobile. gli argomenti di 16 byte vengono passati per riferimento. Passaggio dei parametri sono descritto dettagliatamente [passaggio dei parametri](../build/parameter-passing.md). Oltre a questi registri, RAX, R10, R11, XMM4 e XMM5 sono considerati volatile. Tutti gli altri registri vengono non volatili. Uso dei registri è documentata in dettaglio nelle [registrare l'utilizzo](../build/register-usage.md) e [chiamante/chiamato salvato registra](../build/caller-callee-saved-registers.md).  
  
 Il chiamante è responsabile dell'allocazione dello spazio per i parametri per il destinatario della chiamata e deve sempre allocare spazio sufficiente per archiviare i parametri del registro quattro, anche se il chiamato non accetta questo numero di parametri. Ciò semplifica il supporto per le funzioni senza prototipo C-language e funzioni C/C++ vararg. Per le funzioni vararg o senza prototipo, qualsiasi a virgola mobile, i valori devono essere duplicati nel registro per utilizzo generico corrispondente. I parametri oltre i primi quattro devono essere archiviati nello stack, sopra l'archivio di ombreggiatura per i primi quattro, prima della chiamata. Dettagli funzione vararg sono reperibile nel [Varargs](../build/varargs.md). Per informazioni dettagliate, vedere [funzioni senza prototipo](../build/unprototyped-functions.md).  
  
## <a name="alignment"></a>Allineamento  
 La maggior parte delle strutture sono allineate a proprio allineamento naturale. Le principali eccezioni sono il puntatore dello stack e `malloc` o `alloca` memoria, che sono allineati a 16 byte per agevolare le prestazioni. Allineamento di sopra di 16 byte deve essere eseguito manualmente, ma poiché 16 byte è una dimensione di allineamento comuni per le operazioni di registri XMM, dovrebbe funzionare per gran parte del codice. Per altre informazioni sul layout della struttura e sull'allineamento, vedere [tipi e archiviazione](../build/types-and-storage.md). Per informazioni sul layout dello stack, vedere [utilizzo dello Stack](../build/stack-usage.md).  
  
## <a name="unwindability"></a>Modalità di rimozione  
 Le funzioni foglia sono funzioni che non cambiano qualsiasi registri non volatili. Una funzione non foglia potrà modificare RSP non volatili, ad esempio, si chiama una funzione o l'allocazione di spazio dello stack aggiuntive per le variabili locali. Per ripristinare registri non volatili quando un'eccezione gestita, le funzioni foglia devono essere annotate con dati statici che descrive come rimuovere correttamente la funzione in un'istruzione arbitraria. Questi dati vengono archiviati come *pdata*, o dati di routine, che a sua volta fa riferimento a *xdata*, i dati di gestione delle eccezioni. Il xdata contiene le informazioni di rimozione e può puntare a pdata aggiuntivo o una funzione del gestore eccezioni. Prologhi ed epiloghi sono altamente limitata, in modo che possano essere correttamente descritti in xdata. Il puntatore dello stack deve essere allineato a 16 byte in qualsiasi area di codice che non fa parte di un epilogo o di prologo, tranne all'interno delle funzioni foglia. Le funzioni foglia possono essere svuotate semplicemente simulando un ritorno, in modo che non sono richiesti pdata e xdata. Per informazioni dettagliate sulla struttura corretta della funzione prologhi ed epiloghi, vedere [prologo ed epilogo](../build/prolog-and-epilog.md). Per altre informazioni sulla gestione delle eccezioni e l'eccezione, la gestione e la rimozione di pdata e xdata, vedere [Exception Handling (x64)](../build/exception-handling-x64.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)