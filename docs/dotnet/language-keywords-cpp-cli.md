---
title: Parole chiave del linguaggio (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keywords [C++]
ms.assetid: 021013b2-70ac-4df9-aa77-4af1c67a1a67
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0b9deb25e203ea805b1430b2ec8e56f17a50123b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46445438"
---
# <a name="language-keywords-ccli"></a>Parole chiave del linguaggio (C++/CLI)

Diverse parole chiave del linguaggio modificate dalle estensioni gestite per C++ in Visual C++.

Nella nuova sintassi Visual C++, è stato rimosso il doppio carattere di sottolineatura come un prefisso da tutte le parole chiave (con una sola eccezione: `__identifier` viene mantenuto). Ad esempio, una proprietà ora è dichiarata come `property`, non `__property`.

Si sono verificati due motivi principali per l'utilizzo del prefisso doppio carattere di sottolineatura nelle estensioni gestite:

- È il metodo conforme per fornire le estensioni locali allo Standard ISO C++. È stato un obiettivo principale della progettazione delle estensioni gestite di non introdurre problemi di incompatibilità con il linguaggio standard, ad esempio nuove parole chiave e token. Questo motivo, era in gran parte, che hanno motivato la scelta della sintassi di puntatore per la dichiarazione di oggetti dei tipi di riferimento gestito.

- L'utilizzo del doppio carattere di sottolineatura, oltre all'aspetto, è anche una ragionevole garanzia di essere non invasiva con la codebase esistenti degli utenti. Si tratta di un secondo obiettivo principale della progettazione delle estensioni gestite.

Nonostante rimuovendo i caratteri di sottolineatura doppio, Microsoft continua a impegnarsi per la conformità. Tuttavia, il supporto per il modello a oggetti dinamici CLR rappresenta un paradigma di programmazione di nuovo e potente. Il supporto di questo nuovo paradigma richiede un proprio token e parole chiave di alto livello. Abbiamo sempre cercato di fornire un'espressione di questo nuovo paradigma di prima classe durante l'integrazione e supporto del linguaggio standard. La nuova progettazione di sintassi offre un'eccellente esperienza di programmazione dei due modelli a oggetti diversi.

Analogamente, siamo interessati a ottimizzare la natura non invasiva di queste nuove parole chiave del linguaggio. Questo è stato eseguito con l'utilizzo delle parole chiave contestuali e con spaziatura. Prima di esaminare la nuova sintassi di linguaggio effettivo, proviamo a senso di questi due tipi speciali (parola chiave).

Una parola chiave contestuale ha un significato speciale all'interno di contesti di programmazione specifico. All'interno del programma generale, ad esempio, `sealed` viene considerato come un identificatore comune. Tuttavia, quando si verifica nella parte della dichiarazione di un tipo di classe di riferimento gestita, viene considerato come una parola chiave all'interno del contesto di tale dichiarazione di classe. Ciò contribuisce a ridurre il potenziale impatto invasivo di introdurre una nuova parola chiave nella lingua, qualcosa che siamo è molto importante per gli utenti con una codebase esistente. Allo stesso tempo, consente agli utenti della nuova funzionalità avere un'esperienza all'avanguardia della funzionalità di linguaggio aggiuntivo - qualcosa che non era possibile con le estensioni gestite. Per un esempio di come `sealed` viene usato vedere [dichiarazione di un tipo di classe gestita](../dotnet/declaration-of-a-managed-class-type.md).

Una parola chiave con spaziatura, ad esempio `value class`, è un caso speciale di una parola chiave contestuale. Abbina una parola chiave esistente con un modificatore contesto separato da uno spazio. La coppia viene considerata come una singola unità anziché come due parole chiave separate.

## <a name="see-also"></a>Vedere anche

[Nozioni di base della migrazione in C++/CLI](../dotnet/cpp-cli-migration-primer.md)<br/>
[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)