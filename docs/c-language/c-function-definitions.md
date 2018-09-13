---
title: Definizioni di funzioni C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 265dfe599d4c3586b350787baab5977562326991
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43757682"
---
# <a name="c-function-definitions"></a>Definizioni di funzioni C
Una definizione di funzione specifica il nome della funzione, i tipi e il numero di parametri che prevede di ricevere e il relativo tipo restituito. Una definizione di funzione include inoltre un corpo della funzione con le dichiarazioni delle variabili locali e le istruzioni che determinano ciò che svolge la funzione.

## <a name="syntax"></a>Sintassi

*translation-unit*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*external-declaration* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*translation-unit* *external-declaration*

*external-declaration*: /\* Consentita solo in ambito esterno (file) \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*function-definition*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration*

*function-definition*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\* *attribute-seq* è specifico di Microsoft \*/

I parametri del prototipo sono:

*declaration-specifiers*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*storage-class-specifier* *declaration-specifiers*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *declaration-specifiers*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *declaration-specifiers*<sub>opt</sub>

*declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-list* *declaration*

*declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-declarator*

*direct-declarator*: /\* Dichiaratore di funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator*  **(**  *parameter-type-list*  **)** /\* Dichiaratore nuovo stile \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator*  **(**  *identifier-list*<sub>opt</sub> **)** /\* Dichiaratore stile obsoleto \*/

L'elenco di parametri in una definizione utilizza questa sintassi:

*parameter-type-list*: /\* Elenco parametri \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* **, ...**

*parameter-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parameter-list* **,**  *parameter-declaration*

*parameter-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers* *abstract-declarator*<sub>opt</sub>

L'elenco di parametri in una definizione di funzione obsoleta utilizza questa sintassi:

*identifier-list*: /\* Usato nelle definizioni di funzione e nelle dichiarazioni obsolete \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier-list* **,**  *identifier*

La sintassi per il corpo della funzione è:

*compound-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opt</sub> *statement-list*<sub>opt</sub> **}**

Gli unici identificatori della classe di archiviazione che consentono di modificare una dichiarazione di funzione sono **extern** e **static**. L'identificatore **extern** significa che è possibile far riferimento alla funzione da altri file; ovvero il nome della funzione viene esportato nel linker. L'identificatore **static** significa che non è possibile far riferimento alla funzione da altri file, ovvero che il nome non viene esportato dal linker. Se in una definizione di funzione non viene visualizzata alcuna classe di archiviazione, viene presupposto **extern**. Tuttavia, la funzione è sempre visibile dal punto della definizione fino alla fine del file.

Gli elementi *declaration-specifiers* facoltativi e il *declarator* obbligatorio specificano insieme il tipo restituito e il nome della funzione. Il *declarator* è una combinazione dell'identificatore che denomina la funzione e le parentesi dopo il nome della funzione. L'elemento *attribute-seq* facoltativo e non terminale è una funzionalità specifica Microsoft definita in [Attributi di funzione](../c-language/function-attributes.md).

L'elemento *direct-declarator* (nella sintassi *declarator*) specifica il nome della funzione definita e gli identificatori dei relativi parametri. Se *direct-declarator* include *parameter-type-list*, l'elenco specifica i tipi di tutti i parametri. Tale dichiaratore funge anche da un prototipo di funzione per le successive chiamate alla funzione.

Un elemento *declaration* in *declaration-list* nelle definizioni di funzione non può contenere un *storage-class-specifier* diverso da **register**. *type-specifier* nella sintassi *declaration-specifiers* può essere omesso solo se la classe di archiviazione **register** viene specificata per un valore di tipo **int**.

*compound-statement* è il corpo della funzione che contiene le dichiarazioni delle variabili locali, i riferimenti agli elementi dichiarati esternamente e le istruzioni.

Le sezioni [Attributi di funzioni](../c-language/function-attributes.md), [Classi di archiviazione](../c-language/storage-class.md), [Tipo restituito](../c-language/return-type.md), [Parametri](../c-language/parameters.md) e [Corpo della funzione](../c-language/function-body.md) descrivono in dettaglio i componenti della definizione della funzione.

## <a name="see-also"></a>Vedere anche
[Funzioni](../c-language/functions-c.md)