---
title: Dipendenti dedotti e regole
ms.date: 11/04/2016
helpviewer_keywords:
- rules, inferred
- inferred dependents in NMAKE
- inferred rules in NMAKE
- dependents, inferred
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
ms.openlocfilehash: b9c3055db0cc173999e1737986166eb334dcf96c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827049"
---
# <a name="inferred-dependents-and-rules"></a>Dipendenti dedotti e regole

Se esiste una regola di inferenza applicabile, si presuppone un dipendente dedotto per una destinazione. Se viene applicata una regola:

- *toext* corrisponde all'estensione della destinazione.

- *fromext* corrispondenze l'estensione di un file con nome di base di destinazione e che esiste nella directory correnti o specificate.

- *fromext* è in [. I SUFFISSI](dot-directives.md); nessun altro *fromext* in una regola di corrispondenza ha un livello più elevato **. I SUFFISSI** priorità.

- Nessun dipendente esplicito ha un livello più elevato **. I SUFFISSI** priorità.

Dipendenti dedotti possono causare effetti collaterali imprevisti. Se i blocchi di descrizione della destinazione contiene i comandi, vengono eseguiti tali comandi invece i comandi NMAKE nella regola.

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](inference-rules.md)
