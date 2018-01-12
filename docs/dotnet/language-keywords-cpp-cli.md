---
title: Parole chiave del linguaggio (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: keywords [C++]
ms.assetid: 021013b2-70ac-4df9-aa77-4af1c67a1a67
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e1107ad45feaae470ed2a7481f80bb17c389042d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="language-keywords-ccli"></a>Parole chiave del linguaggio (C++/CLI)
Diverse parole chiave del linguaggio modificate dalle estensioni gestite per C++ in Visual C++.  
  
 Nella nuova sintassi di Visual C++, il doppio carattere di sottolineatura viene rimosso come prefisso da tutte le parole chiave (con una sola eccezione: `__identifier` viene mantenuto). Ad esempio, una proprietà viene dichiarata come `property`, non `__property`.  
  
 Sono due motivi principali per l'utilizzo del prefisso doppio carattere di sottolineatura nelle estensioni gestite:  
  
-   È il metodo conforme per fornire estensioni locali per lo Standard ISO C++. È stato un obiettivo primario del progetto le estensioni gestite non introdurre incompatibilità con il linguaggio standard, ad esempio nuove parole chiave e i token. Questo motivo, è stato in larga misura la scelta della sintassi di puntatore per la dichiarazione di oggetti dei tipi di riferimento gestiti.  
  
-   L'utilizzo del doppio carattere di sottolineatura, oltre all'aspetto, è anche una ragionevole garanzia che non è invasivo con codebase esistente degli utenti. Si tratta di un secondo obiettivo principale della progettazione delle estensioni gestite.  
  
 Nonostante si rimuove i doppio carattere di sottolineatura, Microsoft si impegna alla conformità. Tuttavia, il supporto per il modello a oggetti dinamico CLR rappresenta un paradigma di programmazione di nuovo e potente. Il supporto di questo nuovo paradigma richiede il proprio token e parole chiave di alto livello. È stato richiesto di fornire un'espressione di prima classe di questo nuovo paradigma relativa integrazione e supporto del linguaggio standard. La nuova struttura di sintassi offre un'esperienza di programmazione prima classe dei due modelli a oggetti diversi.  
  
 Analogamente, siamo interessati a ottimizzare la natura non è invasivo queste nuove parole chiave del linguaggio. Completata questa operazione con l'utilizzo delle parole chiave contestuali e spaziatura. Prima di esaminare la nuova sintassi di linguaggio effettivo, si tenta di utilizzare al meglio questi due tipi di parole chiave speciali.  
  
 Una parola chiave contestuale ha un significato speciale all'interno dei contesti programma specifico. Nel programma generale, ad esempio, `sealed` viene considerato come un identificatore standard. Tuttavia, quando si verifica all'interno della parte della dichiarazione di un tipo di classe di riferimento gestito, viene considerato come una parola chiave all'interno del contesto di tale dichiarazione di classe. Questo riduce al minimo il potenziale impatto invasivo dell'introduzione di una nuova parola chiave nel linguaggio di qualcosa che abbiamo aspetto estremamente importante per gli utenti con una codebase esistente. Allo stesso tempo, consente agli utenti della nuova funzionalità di un'esperienza di prima classe della funzionalità di lingua aggiuntiva - qualcosa che non era possibile con le estensioni gestite. Per un esempio di come `sealed` utilizzato vedere [dichiarazione di un tipo di classe gestita](../dotnet/declaration-of-a-managed-class-type.md).  
  
 Una parola chiave con spaziatura, ad esempio `value class`, è un caso speciale di una parola chiave contestuale. Abbina una parola chiave esistente con un modificatore contestuale separato da uno spazio. La coppia viene considerata come una singola unità, anziché come due parole chiave separate.  
  
## <a name="see-also"></a>Vedere anche  
 [C + + CLI nozioni di base della migrazione](../dotnet/cpp-cli-migration-primer.md)   
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)