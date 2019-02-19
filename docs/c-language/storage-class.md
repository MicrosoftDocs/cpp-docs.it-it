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
ms.openlocfilehash: d5664634687c689316427c8652865ba9423e24f4
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147815"
---
# <a name="storage-class"></a>Classe di archiviazione

L'identificatore della classe di archiviazione in una definizione di funzione offre alla funzione una classe di archiviazione `extern` o **static**.

## <a name="syntax"></a>Sintassi

*function-definition*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\* *attribute-seq* è specifico di Microsoft \*/

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*storage-class-specifier*: /\* Per le definizioni di funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**extern**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**static**

Se una definizione non include *storage-class-specifier`extern`, la classe di archiviazione viene impostata automaticamente su* . È possibile dichiarare in modo esplicito una funzione come `extern`, ma non è obbligatorio.

Se la dichiarazione di una funzione contiene *storage-class-specifier*`extern`, l'identificatore avrà lo stesso collegamento di qualsiasi dichiarazione visibile dell'identificatore con ambito file. Se non è presente una dichiarazione visibile con ambito file, l'identificatore dispone di un collegamento esterno. Se un identificatore ha un ambito file e nessun *storage-class-specifier*, l'identificatore ha un collegamento esterno. Il collegamento esterno indica che ogni istanza dell'identificatore indica lo stesso oggetto o funzione. Per altre informazioni sul collegamento e l'ambito del file, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).

Le dichiarazioni di funzione dell'ambito blocco con un identificatore della classe di archiviazione diverso da `extern` generano errori.

Una funzione con la classe di archiviazione **static** è visibile solo nel file di origine in cui è definita. Tutte le altre funzioni, sia se viene loro fornita la classe di archiviazione `extern` in modo esplicito o implicito, sono visibili in tutti i file di origine nel programma. Se si vuole la classe di archiviazione **static**, è necessario dichiararla alla prima occorrenza di una dichiarazione (se presente) della funzione e al momento della definizione della funzione.

**Sezione specifica Microsoft**

Quando le estensioni Microsoft sono abilitate, a una funzione originariamente dichiarata senza una classe di archiviazione (o con la classe di archiviazione `extern`) viene assegnata la classe di archiviazione **static** se la definizione di funzione si trova nello stesso file di origine e se la definizione specifica in modo esplicito la classe di archiviazione **static**.

Durante la compilazione con l'opzione del compilatore /Ze, le funzioni dichiarate in un blocco che utilizzano la parola chiave `extern` dispongono di visibilità globale. Ciò non si verifica durante la compilazione con /Za. Questa funzionalità non è affidabile se la portabilità del codice sorgente è una considerazione.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
