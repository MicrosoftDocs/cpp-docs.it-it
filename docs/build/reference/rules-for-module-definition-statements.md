---
title: Regole per le istruzioni di definizione moduli | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- .def
dev_langs:
- C++
helpviewer_keywords:
- module definition files, statement syntax
- module definition files
ms.assetid: f65cd3a7-65d7-4d06-939f-a8b1ecd50f2d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3f8de42480dae9be203a132561d722c18d6952c1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376390"
---
# <a name="rules-for-module-definition-statements"></a>Regole relative alle istruzioni di definizione dei moduli
Le regole di sintassi seguenti si applicano a tutte le istruzioni in un file def. Altre regole che si applicano a istruzioni specifiche sono descritti con ogni istruzione.  
  
-   Istruzioni, parole chiave di attributo e gli identificatori specificati dall'utente sono tra maiuscole e minuscole.  
  
-   Nomi file lunghi contenenti spazi o punti e virgola (;) deve essere racchiuso tra virgolette (").  
  
-   Utilizzare uno o più spazi, tabulazioni o caratteri di nuova riga per separare una parola chiave dell'istruzione dai relativi argomenti e per separare le istruzioni da altra. I due punti (:) o il segno di uguale (=) che definisce un argomento è circondato da zero o più spazi, tabulazioni o caratteri di nuova riga.  
  
-   Oggetto **nome** o **libreria** istruzione, se utilizzati, deve precedere tutte le altre istruzioni.  
  
-   Il **sezioni** e **esportazioni** istruzioni possono essere visualizzate più volte nel file def. Ogni istruzione può richiedere più specifiche, che devono essere separate da uno o più spazi, tabulazioni o caratteri di nuova riga. La parola chiave istruzione deve essere presente una sola volta prima della prima specifica e può essere ripetuta prima di ogni specifica aggiuntiva.  
  
-   Molte istruzioni hanno un'opzione della riga di comando di collegamento equivalente. Vedere la descrizione dell'opzione di collegamento corrispondente per altri dettagli.  
  
-   I commenti nel file con estensione def sono contraddistinte da un punto e virgola (;) all'inizio di ogni riga di commento. Un commento non può condividere una riga con un'istruzione, ma può essere visualizzato tra le specifiche di un'istruzione su più righe. (**Sezioni** e **esportazioni** sono istruzioni su più righe.)  
  
-   Gli argomenti numerici sono specificati in base 10 o esadecimale.  
  
-   Se un argomento di stringa corrisponde un [parola riservata](../../build/reference/reserved-words.md), deve essere racchiuso tra virgolette doppie (").  
  
## <a name="see-also"></a>Vedere anche  
 [File Module-Definition (.Def)](../../build/reference/module-definition-dot-def-files.md)  