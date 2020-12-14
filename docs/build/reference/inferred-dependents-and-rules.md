---
description: 'Altre informazioni su: dipendenti dedotti e regole'
title: Dipendenti dedotti e regole
ms.date: 11/04/2016
helpviewer_keywords:
- rules, inferred
- inferred dependents in NMAKE
- inferred rules in NMAKE
- dependents, inferred
ms.assetid: 9381e74a-53d9-445c-836d-0ff7ef6112d9
ms.openlocfilehash: 9f4c1d14d18c9c693a7bd71f9207ff36aede8e22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191277"
---
# <a name="inferred-dependents-and-rules"></a>Dipendenti dedotti e regole

In NMAKE si presuppone una dipendenza dedotta per una destinazione se esiste una regola di inferenza applicabile. Una regola si applica se:

- *toext* corrisponde all'estensione della destinazione.

- *fromext* corrisponde all'estensione di un file con il nome di base della destinazione e presente nella directory corrente o specificata.

- *fromext* è in [. SUFFISSi](dot-directives.md); nessun altro *fromext* in una regola di corrispondenza ha un valore superiore **. Priorità SUFFISSi** .

- Nessun dipendente esplicito ha un valore superiore **. Priorità SUFFISSi** .

I dipendenti dedotti possono causare effetti collaterali imprevisti. Se il blocco di descrizione della destinazione contiene comandi, NMAKE li esegue anziché i comandi nella regola.

## <a name="see-also"></a>Vedi anche

[Regole di inferenza](inference-rules.md)
