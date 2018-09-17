---
title: Definizione di una regola | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, inference rules
- defining inference rules
ms.assetid: 071cd092-3f2e-4065-b0fb-36a9d393cfa8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8a5cb7a0285f7abf8bcf476141451eae1b10f85
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705575"
---
# <a name="defining-a-rule"></a>Definizione di una regola

Il *fromext* rappresenta l'estensione di un file dipendente, e *toext* rappresenta l'estensione di un file di destinazione.

```
.fromext.toext:
   commands
```

## <a name="remarks"></a>Note

Le estensioni non sono tra maiuscole e minuscole. Macro possono essere richiamate per rappresentare *fromext* e *toext*; le macro vengono espanse durante la preelaborazione. Il punto (.) precedente *fromext* devono essere visualizzati all'inizio della riga. I due punti (:) sono preceduto da zero o più spazi o tabulazioni. Può essere seguito solo da spazi o tabulazioni, un punto e virgola (;) per specificare un comando, un simbolo di cancelletto (#) per specificare un commento o un carattere di nuova riga. Gli altri spazi non sono consentiti. I comandi vengono specificati come blocchi di descrizione.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Percorsi di ricerca nelle regole](../build/search-paths-in-rules.md)

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)