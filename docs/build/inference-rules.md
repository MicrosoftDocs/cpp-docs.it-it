---
title: Regole di inferenza | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- NMAKE program, inference rules
ms.assetid: caff320f-fb07-4eea-80c3-a6a2133a8492
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ed45e5ad61ea1cc50172cd86716b357baa64fa39
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45724386"
---
# <a name="inference-rules"></a>Regole di inferenza

Regole di inferenza forniscono comandi per aggiornare le destinazioni e dedurre dipendenti per le destinazioni. Estensioni in una regola di inferenza dei tipi corrispondono a una singola destinazione e dipendenti che hanno lo stesso nome di base. Regole di inferenza vengono definiti dall'utente o predefinite; regole predefinite possono essere ridefinite.

Se nessun comando dispone di una dipendenza non aggiornata e [. I SUFFISSI](../build/dot-directives.md) contiene l'estensione del dipendente, Usa NMAKE una regola con le estensioni corrispondono alla destinazione e un oggetto esistente del file nella directory correnti o specificate. Se più di una regola corrisponde a file esistenti, il **. I SUFFISSI** elenco determina quale usare, priorità elenco discende da sinistra a destra. Se un file dipendente non esiste e non è elencato come destinazione in un altro blocco di descrizione, una regola di inferenza può creare parametro mancante dipendente da un altro file con lo stesso nome di base. Se un blocco di descrizione non contiene oggetti dipendenti o comandi, una regola di inferenza possibile aggiornare la destinazione. Regole di inferenza possono compilare una destinazione della riga di comando anche se non esiste alcun blocco di descrizione. NMAKE può richiamare una regola per un dipendente dedotto, anche se viene specificato un dipendente esplicito.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Definizione di una regola](../build/defining-a-rule.md)

[Regole in modalità batch](../build/batch-mode-rules.md)

[Regole predefinite](../build/predefined-rules.md)

[Dipendenti dedotti e regole](../build/inferred-dependents-and-rules.md)

[Precedenza nelle regole di inferenza](../build/precedence-in-inference-rules.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](../build/nmake-reference.md)