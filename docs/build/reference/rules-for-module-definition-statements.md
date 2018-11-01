---
title: Regole relative alle istruzioni di definizione dei moduli
ms.date: 11/04/2016
f1_keywords:
- .def
helpviewer_keywords:
- module definition files, statement syntax
- module definition files
ms.assetid: f65cd3a7-65d7-4d06-939f-a8b1ecd50f2d
ms.openlocfilehash: 6921043bd4618692be788ec5a61978f1178c64ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442770"
---
# <a name="rules-for-module-definition-statements"></a>Regole relative alle istruzioni di definizione dei moduli

Le regole di sintassi seguenti si applicano a tutte le istruzioni in un file def. Altre regole che si applicano a istruzioni specifiche vengono descritte con ogni istruzione.

- Le istruzioni, parole chiave di attributo e gli identificatori specificati dall'utente sono tra maiuscole e minuscole.

- Nomi file lunghi contenenti spazi o punti e virgola (;) deve essere racchiuso tra virgolette (").

- Usare uno o più spazi, tabulazioni o caratteri di nuova riga per separare una parola chiave istruzione dai relativi argomenti e per separare le istruzioni da altra. I due punti (:) o il segno di uguale (=) che definisce un argomento è delimitato da zero o più spazi, tabulazioni o caratteri di nuova riga.

- Oggetto **NAME** oppure **libreria** istruzione, se usati, deve precedere tutte le altre istruzioni.

- Il **sezioni** e **esportazioni** istruzioni possono essere visualizzate più volte nel file def. Ogni istruzione può richiedere più specifiche, che devono essere separate da uno o più spazi, tabulazioni o caratteri di nuova riga. La parola chiave istruzione deve essere visualizzato una volta prima la prima specifica e può essere ripetuta prima di ogni specifica aggiuntiva.

- Molte istruzioni hanno un'opzione della riga di comando di collegamento equivalente. Vedere la descrizione dell'opzione di collegamento corrispondente per altri dettagli.

- I commenti nel file DEF sono contraddistinte da un punto e virgola (;) all'inizio di ogni riga di commento. Un commento non può condividere una riga con un'istruzione, ma può essere visualizzato tra le specifiche in un'istruzione su più righe. (**Sezioni** e **esportazioni** sono istruzioni su più righe.)

- Argomenti numerici vengono specificati in base 10 o esadecimale.

- Se un argomento di stringa corrisponde a un [parola riservata](../../build/reference/reserved-words.md), deve essere racchiuso tra virgolette doppie (").

## <a name="see-also"></a>Vedere anche

[File Module-Definition (.Def)](../../build/reference/module-definition-dot-def-files.md)