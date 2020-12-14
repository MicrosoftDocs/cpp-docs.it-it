---
description: 'Altre informazioni su: Cenni preliminari sulle dichiarazioni'
title: Cenni preliminari sulle dichiarazioni
ms.date: 11/04/2016
helpviewer_keywords:
- declarations, about declarations
- type qualifiers
ms.assetid: fcd2364c-c2a5-4fbf-9027-19dac4144cb5
ms.openlocfilehash: 53b8c808771aa3bb455655e6e0c5b06ff1fa9acd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97256848"
---
# <a name="overview-of-declarations"></a>Cenni preliminari sulle dichiarazioni

Una "dichiarazione" consente di specificare l'interpretazione e gli attributi di un set di identificatori. Una dichiarazione che causa anche la prenotazione delle risorse di archiviazione per l'oggetto o la funzione denominati dall'identificatore è chiamata "definizione". Le dichiarazioni C per variabili, funzioni e tipi hanno la sintassi seguente:

## <a name="syntax"></a>Sintassi

*`declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`**`attribute-seq`* <sub>opt</sub> *`init-declarator-list`* <sub>opt</sub>**`;`**

/\**`attribute-seq`* <sub>opt</sub> è specifico di Microsoft */

*`declaration-specifiers`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`storage-class-specifier`**`declaration-specifiers`* <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`**`declaration-specifiers`* <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`**`declaration-specifiers`* <sub>consenso esplicito</sub>

*`init-declarator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator-list`* **`,`** *`init-declarator`*

*`init-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`* **`=`** *`initializer`*

> [!NOTE]
> Questa sintassi per *`declaration`* non viene ripetuta nelle sezioni seguenti. La sintassi nelle sezioni seguenti inizia in genere con il non *`declarator`* terminale.

Le dichiarazioni nell'oggetto *`init-declarator-list`* contengono gli identificatori a cui viene assegnato il nome; *`init`* è un'abbreviazione per l'inizializzatore. *`init-declarator-list`* È una sequenza di dichiaratori separati da virgole, ciascuno dei quali può avere informazioni aggiuntive sul tipo o un inizializzatore o entrambi. *`declarator`* Contiene gli identificatori, se presenti, dichiarati. Il non *`declaration-specifiers`* terminale è costituito da una sequenza di identificatori di tipo e di classe di archiviazione che indicano il collegamento, la durata di archiviazione e almeno una parte del tipo delle entità denotate dai dichiaratori. Le dichiarazioni sono costituite da una combinazione di identificatori di classi di archiviazione, identificatori di tipi, qualificatori di tipo, dichiaratori e inizializzatori.

Le dichiarazioni possono contenere uno o più degli attributi facoltativi elencati in *`attribute-seq`* ; *`seq`* è un'abbreviazione di Sequence. Questi attributi specifici di Microsoft eseguono diverse funzioni, che vengono discusse in dettaglio in questo libro.

Nel formato generale di una dichiarazione di variabile, *`type-specifier`* fornisce il tipo di dati della variabile. *`type-specifier`* Può essere un composto, come quando il tipo viene modificato da **`const`** o **`volatile`** . `declarator` fornisce il nome della variabile, possibilmente modificato in modo da dichiarare un tipo di matrice o puntatore. ad esempio:

```C
int const *fp;
```

dichiara una variabile denominata `fp` come puntatore a un valore non modificabile ( **`const`** ) **`int`** . È possibile definire più variabili in una dichiarazione usando più dichiaratori, separati da virgole.

Una dichiarazione deve avere almeno un dichiaratore oppure il relativo identificatore di tipi deve dichiarare un tag della struttura, un tag di unione o i membri di un'enumerazione. I dichiaratori forniscono le eventuali informazioni rimanenti su un identificatore. Un dichiaratore è un identificatore che può essere modificato con parentesi quadre ( **`[ ]`** ), asterischi ( <strong>`*`</strong> ) o parentesi ( **`( )`** ) per dichiarare rispettivamente una matrice, un puntatore o un tipo di funzione. Quando si dichiarano variabili semplici (ad esempio caratteri, integri ed elementi a virgola mobile) o strutture e unioni di variabili semplici, `declarator` è solo un identificatore. Per altre informazioni sui dichiaratori, vedere [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md).

Tutte le definizioni sono implicitamente dichiarazioni, ma non tutte le dichiarazioni sono definizioni. Ad esempio, le dichiarazioni di variabili che iniziano con l' **`extern`** identificatore di classi di archiviazione sono "riferimento", anziché le dichiarazioni di "definizione". Se è necessario fare riferimento a una variabile esterna prima che sia definita o se è definita in un altro file di origine da quello in cui viene usata, **`extern`** è necessaria una dichiarazione. Le risorse di archiviazione non vengono allocate "facendo riferimento" alle dichiarazioni, né è possibile inizializzare le variabili nelle dichiarazioni.

Una classe o un tipo di archiviazione (o entrambi) è necessaria nelle dichiarazioni delle variabili. Ad eccezione di **`__declspec`** , in una dichiarazione è consentito un solo identificatore di classi di archiviazione e non tutti gli identificatori della classe di archiviazione sono consentiti in ogni contesto. La **`__declspec`** classe di archiviazione è consentita con altri identificatori di classi di archiviazione ed è consentita più di una volta. L'identificatore di classi di archiviazione di una dichiarazione incide sulla modalità di archiviazione e inizializzazione dell'elemento dichiarato e su quali parti di un programma possono fare riferimento all'elemento.

I *`storage-class-specifier`* terminali definiti in C includono **`auto`** ,,, **`extern`** **`register`** **`static`** e **`typedef`** . Microsoft C include anche il *`storage-class-specifier`* terminale **`__declspec`** . Tutti i *`storage-class-specifier`* terminali eccetto **`typedef`** e **`__declspec`** sono descritti in classi di [archiviazione](../c-language/c-storage-classes.md). Per informazioni su **`typedef`** , vedere [ `typedef` dichiarazioni](../c-language/typedef-declarations.md). Per informazioni su **`__declspec`** , vedere [attributi di Storage-Class estese](../c-language/c-extended-storage-class-attributes.md).

La posizione della dichiarazione all'interno del programma di origine e la presenza o l'assenza di altre dichiarazioni della variabile sono fattori importanti nel determinare la durata delle variabili. Possono esserci più ridichiarazioni, ma una sola definizione. Tuttavia, una definizione può apparire in più unità di conversione. Per oggetti con collegamento interno, questa regola di applica separatamente a ogni unità di conversione, perché gli oggetti collegati internamente sono univoci di un'unità di conversione. Per gli oggetti con collegamenti esterni, questa regola si applica all'intero programma. Per ulteriori informazioni sulla visibilità, vedere [durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).

Gli identificatori di tipi forniscono alcune informazioni sui tipi di dati degli identificatori. L'identificatore di tipo predefinito è **`int`** . Per altre informazioni, vedere [Identificatori di tipi](../c-language/c-type-specifiers.md). Gli identificatori di tipi possono anche definire i tag del tipo, i nomi di componenti di struttura e unione e le costanti di enumerazione. Per altre informazioni, vedere [dichiarazioni di enumerazione](../c-language/c-enumeration-declarations.md), [dichiarazioni di struttura](../c-language/structure-declarations.md)e [dichiarazioni di Unione](../c-language/union-declarations.md).

Sono disponibili due *`type-qualifier`* terminali: **`const`** e **`volatile`** . Questi qualificatori specificano le proprietà aggiuntive dei tipi pertinenti solo durante l'accesso agli oggetti di tale tipo attraverso le espressioni l-value. Per ulteriori informazioni su **`const`** e **`volatile`** , vedere [qualificatori di tipo](../c-language/type-qualifiers.md). Per una definizione di l-value, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).

## <a name="see-also"></a>Vedi anche

[Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md)<br/>
[Dichiarazioni e tipi](../c-language/declarations-and-types.md)<br/>
[Riepilogo delle dichiarazioni](../c-language/summary-of-declarations.md)
