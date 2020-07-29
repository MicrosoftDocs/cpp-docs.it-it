---
title: Durata
ms.date: 11/04/2016
helpviewer_keywords:
- local variables, lifetime
- variables, automatic
- storage classes, lifetime
- variables, lifetime
- automatic storage class
- automatic storage class, duration
- storage class specifiers, storage duration
- memory allocation, dynamic allocation
- functions [C++], lifetime
- storage duration
- dynamic memory allocation
- memory allocation, dynamic
- lifetime
- global variables, lifetime
ms.assetid: ff0b42cb-3f0f-49a3-a94f-d1d825d8ddfe
ms.openlocfilehash: 752230db54727516e0c48c0621eaadc59486e2e4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218845"
---
# <a name="lifetime"></a>Durata

"Durata" è il periodo di tempo durante l'esecuzione di un programma in cui esiste una variabile o una funzione. La durata di archiviazione dell'identificatore determina la sua durata.

Un identificatore dichiarato con *Storage-Class-specifier* **`static`** ha una durata di archiviazione statica. Gli identificatori con durata di archiviazione statica (anche detta "globale") dispongono di archiviazione e di un valore definito per la durata di un programma. L'archiviazione è riservata e il valore archiviato dell'identificatore viene inizializzato solo una volta, prima dell'avvio del programma. Anche un identificatore dichiarato con collegamento esterno o interno ha una durata di archiviazione statica (vedere [Collegamento](../c-language/linkage.md)).

Un identificatore dichiarato senza l' **`static`** identificatore di classe di archiviazione ha una durata di archiviazione automatica se è dichiarato all'interno di una funzione. Un identificatore con durata di archiviazione automatica (un "identificatore locale") dispone di archiviazione e di un valore definito solo all'interno del blocco in cui l'identificatore viene definito o dichiarato. Un identificatore automatico è una nuova archiviazione allocata ogni volta che il programma accede a tale blocco e perde la relativa archiviazione (e il relativo valore) quando il programma esce dal blocco. Anche gli identificatori dichiarati in una funzione senza collegamento hanno una durata di archiviazione automatica.

Le regole seguenti specificano se un identificatore ha durata globale (statica) o locale (automatica):

- Tutte le funzioni hanno una durata statica. Pertanto sono sempre presenti durante l'esecuzione del programma. Gli identificatori dichiarati a livello esterno (ovvero all'esterno di tutti i blocchi nel programma allo stesso livello delle definizioni di funzione) hanno sempre durate globali (statiche).

- Se una variabile locale dispone di un inizializzatore, la variabile viene inizializzata ogni volta che viene creata (a meno che non sia dichiarata come **`static`** ). Anche i parametri di funzione dispongono di durata locale. È possibile specificare la durata globale per un identificatore all'interno di un blocco includendo l' **`static`** identificatore della classe di archiviazione nella relativa dichiarazione. Una volta dichiarata **`static`** , la variabile mantiene il valore da una voce del blocco alla successiva.

Sebbene un identificatore con una durata globale esista durante l'esecuzione del programma di origine (ad esempio, una variabile dichiarata esternamente o una variabile locale dichiarata con la **`static`** parola chiave), potrebbe non essere visibile in tutte le parti del programma. Vedere [Ambito e visibilità](../c-language/scope-and-visibility.md) per informazioni sulla visibilità e [Classi di archiviazione](../c-language/c-storage-classes.md) per informazioni sull'identificatore *storage-class-specifier* non terminale.

La memoria può essere allocata in base alle esigenze (dinamica) se creata tramite l'utilizzo delle routine di libreria speciali come `malloc`. Poiché l'allocazione di memoria dinamica utilizza routine di libreria, non viene considerata parte del linguaggio. Vedere la funzione [malloc](../c-runtime-library/reference/malloc.md) in *Riferimenti alla libreria di runtime*.

## <a name="see-also"></a>Vedere anche

[Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md)
