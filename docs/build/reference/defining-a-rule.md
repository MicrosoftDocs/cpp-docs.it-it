---
description: 'Altre informazioni su: definizione di una regola'
title: Definizione di una regola
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, inference rules
- defining inference rules
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
ms.openlocfilehash: 89a5db90162ede02743aa469ac4f9e3d75c5e147
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201677"
---
# <a name="defining-a-rule"></a>Definizione di una regola

*Fromext* rappresenta l'estensione di un file dipendente e *toext* rappresenta l'estensione di un file di destinazione.

```
.fromext.toext:
   commands
```

## <a name="remarks"></a>Commenti

Le estensioni non fanno distinzione tra maiuscole e minuscole. Le macro possono essere richiamate per rappresentare *fromext* e *toext*; le macro vengono espanse durante la pre-elaborazione. Il punto (.) che precede *fromext* deve essere visualizzato all'inizio della riga. I due punti (:) è preceduto da zero o più spazi o tabulazioni. Può essere seguito solo da spazi o tabulazioni, un punto e virgola (;) per specificare un comando, un simbolo di cancelletto (#) per specificare un commento o un carattere di nuova riga. Non sono consentiti altri spazi. I comandi vengono specificati come nei blocchi di descrizione.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Percorsi di ricerca nelle regole](search-paths-in-rules.md)

## <a name="see-also"></a>Vedi anche

[Regole di inferenza](inference-rules.md)
