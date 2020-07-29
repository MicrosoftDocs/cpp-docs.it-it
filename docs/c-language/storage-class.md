---
title: Classe di archiviazione
ms.date: 11/04/2016
helpviewer_keywords:
- linkage [C++], external
- function storage class
- function specifiers, storage class
- storage classes
- Microsoft-specific storage classes
- external linkage, storage-class specifiers
- static storage class specifiers
ms.assetid: 39a79ba6-edf5-42b6-8e45-f94227603dd6
ms.openlocfilehash: 872a014dfc7c21b46f9af810f1cb3463016c7e09
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211684"
---
# <a name="storage-class"></a>Classe di archiviazione

L'identificatore della classe di archiviazione in una definizione di funzione assegna la funzione **`extern`** o la **`static`** classe di archiviazione.

## <a name="syntax"></a>Sintassi

*definizione di funzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\**attribute-seq* è specifico di Microsoft\*/

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*Storage-Class-specifier*:/ \* per le definizioni di funzione\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`extern`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`static`**

Se una definizione di funzione non include un oggetto *Storage-Class-specifier*, la classe di archiviazione viene impostata per impostazione predefinita su **`extern`** . È possibile dichiarare in modo esplicito una funzione come **`extern`** , ma non è obbligatoria.

Se la dichiarazione di una funzione contiene *Storage-Class-specifier* **`extern`** , l'identificatore avrà lo stesso collegamento di qualsiasi dichiarazione visibile dell'identificatore con ambito file. Se non è presente una dichiarazione visibile con ambito file, l'identificatore dispone di un collegamento esterno. Se un identificatore ha un ambito file e nessun *storage-class-specifier*, l'identificatore ha un collegamento esterno. Il collegamento esterno indica che ogni istanza dell'identificatore indica lo stesso oggetto o funzione. Per altre informazioni sul collegamento e l'ambito del file, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).

Le dichiarazioni di funzione con ambito blocco con un identificatore di classe di archiviazione diverso da **`extern`** generano errori.

Una funzione con **`static`** classe di archiviazione è visibile solo nel file di origine in cui è definita. Tutte le altre funzioni, che vengono assegnate **`extern`** in modo esplicito o implicito, sono visibili in tutti i file di origine del programma. Se **`static`** si vuole usare la classe di archiviazione, è necessario dichiararla alla prima occorrenza di una dichiarazione (se presente) della funzione e nella definizione della funzione.

**Specifico di Microsoft**

Quando le estensioni Microsoft sono abilitate, una funzione dichiarata originariamente senza una classe di archiviazione (o con la **`extern`** classe di archiviazione) viene assegnata alla **`static`** classe di archiviazione se la definizione di funzione si trova nello stesso file di origine e se la definizione specifica in modo esplicito la **`static`** classe di archiviazione.

Quando si esegue la compilazione con l'opzione del compilatore/Ze, le funzioni dichiarate all'interno di un blocco che utilizzano la **`extern`** parola chiave hanno visibilità globale. Ciò non si verifica durante la compilazione con /Za. Questa funzionalità non è affidabile se la portabilità del codice sorgente è una considerazione.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
