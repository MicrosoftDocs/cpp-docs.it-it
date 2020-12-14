---
description: 'Altre informazioni su: regole per Module-Definition istruzioni'
title: Regole relative alle istruzioni di definizione dei moduli
ms.date: 11/04/2016
f1_keywords:
- .def
helpviewer_keywords:
- module definition files, statement syntax
- module definition files
ms.assetid: f65cd3a7-65d7-4d06-939f-a8b1ecd50f2d
ms.openlocfilehash: bca1f279a9a93690edeaabc2264d1cfe869b3e80
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224998"
---
# <a name="rules-for-module-definition-statements"></a>Regole relative alle istruzioni di definizione dei moduli

Le regole di sintassi seguenti si applicano a tutte le istruzioni in un file def. Altre regole che si applicano a istruzioni specifiche sono descritte in ogni istruzione.

- Istruzioni, parole chiave degli attributi e identificatori specificati dall'utente fanno distinzione tra maiuscole e minuscole.

- Nomi di file lunghi contenenti spazi o punti e virgola (;) deve essere racchiuso tra virgolette doppie (").

- Usare uno o più spazi, tabulazioni o caratteri di nuova riga per separare una parola chiave di istruzione dagli argomenti e per separare le istruzioni l'una dall'altra. I due punti (:) o segno di uguale (=) che designa un argomento è racchiuso da zero o più spazi, tabulazioni o caratteri di nuova riga.

- Un'istruzione **Name** o **Library** , se utilizzata, deve precedere tutte le altre istruzioni.

- Le istruzioni **sections** ed **exports** possono essere visualizzate più volte nel file def. Ogni istruzione può assumere più specifiche, che devono essere separate da uno o più spazi, tabulazioni o caratteri di nuova riga. La parola chiave statement deve essere presente una volta prima della prima specifica e può essere ripetuta prima di ogni specifica aggiuntiva.

- Molte istruzioni hanno un'opzione della riga di comando di collegamento equivalente. Per ulteriori informazioni, vedere la descrizione dell'opzione di collegamento corrispondente.

- I commenti nel file def sono designati da un punto e virgola (;) all'inizio di ogni riga di commento. Un commento non può condividere una riga con un'istruzione, ma può comparire tra le specifiche in un'istruzione su più righe. (Le **sezioni** e le **esportazioni** sono istruzioni su più righe).

- Gli argomenti numerici sono specificati in base 10 o esadecimale.

- Se un argomento di stringa corrisponde a una [parola riservata](reserved-words.md), deve essere racchiuso tra virgolette doppie (").

## <a name="see-also"></a>Vedi anche

[Module-Definition (. File def)](module-definition-dot-def-files.md)
