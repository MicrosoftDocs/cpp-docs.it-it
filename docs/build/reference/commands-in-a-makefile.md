---
description: 'Altre informazioni su: comandi in un makefile'
title: Comandi di un makefile
ms.date: 11/04/2016
helpviewer_keywords:
- commands, makefiles
ms.assetid: 8085517e-42f4-493b-b8f8-44311fc08c64
ms.openlocfilehash: a4f3c6d3cc9b5d567548d7b3f2bd7679d492ebf0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179083"
---
# <a name="commands-in-a-makefile"></a>Comandi di un makefile

Un blocco di descrizione o una regola di inferenza specifica un blocco di comandi da eseguire se la dipendenza non è aggiornata. NMAKE Visualizza ogni comando prima di eseguirlo, a meno che non/S **. Invisibile all'utente** **** \@ Viene usato CMDSWITCHES o. NMAKE cerca una regola di inferenza corrispondente se un blocco di descrizione non è seguito da un blocco di comandi.

Un blocco Commands contiene uno o più comandi, ognuno su una riga a parte. Nessuna riga vuota può apparire tra la dipendenza o la regola e il blocco di comandi. Tuttavia, è possibile che venga visualizzata una riga contenente solo spazi o schede; Questa riga viene interpretata come un comando null e non si verifica alcun errore. Tra le righe di comando sono consentite righe vuote.

Una riga di comando inizia con uno o più spazi o tabulazioni. Una barra rovesciata (\) seguita da un carattere di nuova riga viene interpretata come uno spazio nel comando; utilizzare una barra rovesciata alla fine di una riga per continuare un comando nella riga successiva. NMAKE interpreta la barra rovesciata letteralmente se qualsiasi altro carattere, incluso uno spazio o una tabulazione, segue la barra rovesciata.

Comando preceduto da un punto e virgola (;) può essere visualizzato in una riga di dipendenza o in una regola di inferenza, indipendentemente dal fatto che un blocco di comandi segua:

```
project.obj : project.c project.h ; cl /c project.c
```

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Modificatori dei comandi](command-modifiers.md)

[Sintassi relativa ai nomi file](filename-parts-syntax.md)

[File inline in un makefile](inline-files-in-a-makefile.md)

## <a name="see-also"></a>Vedi anche

[Riferimento a NMAKE](nmake-reference.md)
