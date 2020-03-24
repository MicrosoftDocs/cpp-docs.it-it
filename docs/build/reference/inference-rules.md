---
title: Regole di inferenza
ms.date: 11/04/2016
helpviewer_keywords:
- inference rules in NMAKE
- rules, inference
- NMAKE program, inference rules
ms.assetid: caff320f-fb07-4eea-80c3-a6a2133a8492
ms.openlocfilehash: d3d7ca41d96d3845237b445edefff05044dacdc2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80170514"
---
# <a name="inference-rules"></a>Regole di inferenza

Le regole di inferenza forniscono comandi per aggiornare le destinazioni e per dedurre dipendenti per le destinazioni. Le estensioni in una regola di inferenza corrispondono a una singola destinazione e a un dipendente con lo stesso nome di base. Le regole di inferenza sono definite dall'utente o predefinite; è possibile ridefinire le regole predefinite.

Se una dipendenza non aggiornata non dispone di comandi e se [. I SUFFISSi](dot-directives.md) contengono l'estensione del dipendente, mentre NMAKE usa una regola le cui estensioni corrispondono alla destinazione e a un file esistente nella directory corrente o specificata. Se più di una regola corrisponde ai file esistenti, il **. Elenco SUFFISSi** che determina quale usare; la priorità elenco scende da sinistra a destra. Se un file dipendente non esiste e non è elencato come destinazione in un altro blocco di descrizioni, una regola di inferenza può creare il dipendente mancante da un altro file con lo stesso nome di base. Se la destinazione di un blocco di descrizioni non ha dipendenti o comandi, una regola di inferenza può aggiornare la destinazione. Le regole di inferenza possono compilare una destinazione da riga di comando anche se non esiste alcun blocco di descrizione. NMAKE può richiamare una regola per una dipendenza dedotta anche se viene specificato un oggetto dipendente esplicito.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Definizione di una regola](defining-a-rule.md)

[Regole in modalità batch](batch-mode-rules.md)

[Regole predefinite](predefined-rules.md)

[Dipendenti dedotti e regole](inferred-dependents-and-rules.md)

[Precedenza nelle regole di inferenza](precedence-in-inference-rules.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](nmake-reference.md)
