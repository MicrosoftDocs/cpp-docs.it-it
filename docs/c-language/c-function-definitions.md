---
description: 'Altre informazioni su: definizioni di funzioni C'
title: Definizioni di funzioni C
ms.date: 11/04/2016
helpviewer_keywords:
- function declarators
- function definitions
- declaring functions, about function declarations
- declaring functions, declarators
- functions [C], parameters
- declarators, functions
- function parameters, function definitions
- function body
- declaring functions, variables
ms.assetid: ebab23c8-6eb8-46f3-b21d-570cd8457a80
ms.openlocfilehash: 9e664224608a741897bf8ae6208a0d9011cdb3c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296927"
---
# <a name="c-function-definitions"></a>Definizioni di funzioni C

Una definizione di funzione specifica il nome della funzione, i tipi e il numero di parametri che prevede di ricevere e il relativo tipo restituito. Una definizione di funzione include inoltre un corpo della funzione con le dichiarazioni delle variabili locali e le istruzioni che determinano ciò che svolge la funzione.

## <a name="syntax"></a>Sintassi

*translation-unit*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*External-Declaration* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*translation-unit* *external-declaration*

*External-Declaration*:/ \* consentita solo in ambito esterno (file) \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*definizione di funzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*

*definizione di funzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\**attribute-seq* è specifico di Microsoft\*/

I parametri del prototipo sono:

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-list* *declaration*

*dichiaratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*puntatore*<sub>opz</sub> *Direct-declarator*

*Direct-declarator*:/ \* dichiaratore di funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator***(***Parameter-Type-list***)**  / \* dichiaratore nuovo stile      \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator***(***Identifier-list*<sub>opt</sub> **)**  / \* dichiaratore di stile obsoleto    \*/

L'elenco di parametri in una definizione utilizza questa sintassi:

*Parameter-Type-list*:/ \* elenco di parametri \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco di parametri* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco di parametri* **,...**

*elenco di parametri*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione di parametro*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* **,**  *parametro-Declaration*

*parameter-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *abstract-declarator*<sub>opt</sub>

L'elenco di parametri in una definizione di funzione obsoleta utilizza questa sintassi:

*Identifier-list*:/ \* usato nelle definizioni di funzione e nelle dichiarazioni in stile obsoleto \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier-list* **,**  *identificatore*

La sintassi per il corpo della funzione è:

*compound-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opz</sub> *Statement-list*<sub>opt</sub> **}**

Gli unici identificatori della classe di archiviazione che possono modificare una dichiarazione di funzione sono **`extern`** e **`static`** . L' **`extern`** identificatore indica che è possibile fare riferimento alla funzione da altri file, ovvero il nome della funzione viene esportato nel linker. L' **`static`** identificatore indica che non è possibile fare riferimento alla funzione da altri file, ovvero il nome non viene esportato dal linker. Se non viene visualizzata alcuna classe di archiviazione in una definizione di funzione, **`extern`** viene utilizzato. Tuttavia, la funzione è sempre visibile dal punto della definizione fino alla fine del file.

Gli elementi *declaration-specifiers* facoltativi e il *declarator* obbligatorio specificano insieme il tipo restituito e il nome della funzione. Il *declarator* è una combinazione dell'identificatore che denomina la funzione e le parentesi dopo il nome della funzione. L'elemento *attribute-seq* facoltativo e non terminale è una funzionalità specifica Microsoft definita in [Attributi di funzione](../c-language/function-attributes.md).

L'elemento *direct-declarator* (nella sintassi *declarator*) specifica il nome della funzione definita e gli identificatori dei relativi parametri. Se *direct-declarator* include *parameter-type-list*, l'elenco specifica i tipi di tutti i parametri. Tale dichiaratore funge anche da un prototipo di funzione per le successive chiamate alla funzione.

Una *dichiarazione* in *declaration-list* nelle definizioni di funzione non può contenere uno *Storage-Class-specifier* diverso da **`register`** . *Type-specifier* nella sintassi *declaration-specifiers* può essere omesso solo se la **`register`** classe di archiviazione è specificata per un valore di **`int`** tipo.

*compound-statement* è il corpo della funzione che contiene le dichiarazioni delle variabili locali, i riferimenti agli elementi dichiarati esternamente e le istruzioni.

Le sezioni [Attributi di funzioni](../c-language/function-attributes.md), [Classi di archiviazione](../c-language/storage-class.md), [Tipo restituito](../c-language/return-type.md), [Parametri](../c-language/parameters.md) e [Corpo della funzione](../c-language/function-body.md) descrivono in dettaglio i componenti della definizione della funzione.

## <a name="see-also"></a>Vedi anche

[Funzioni](../c-language/functions-c.md)
