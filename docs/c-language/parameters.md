---
description: 'Altre informazioni su: parametri'
title: Parametri
ms.date: 11/04/2016
helpviewer_keywords:
- arguments [C++], function
- function parameters
- parameters [C++]
- function arguments, vs. parameters
- parameters [C++], function
- functions [C], parameters
- function parameters, syntax
- ellipsis (...), parameters
- '... ellipsis'
ms.assetid: 8f2b8026-78b5-4e21-86a3-bf0f91f05689
ms.openlocfilehash: b68cd5934e597e486b00f2772e913f627e584ecb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97256822"
---
# <a name="parameters"></a>Parametri

Gli argomenti sono nomi dei valori passati a una funzione da una chiamata di funzione. I parametri sono i valori che la funzione prevede di ricevere. In un prototipo di funzione, le parentesi dopo il nome della funzione contengono un elenco completo dei parametri della funzione e dei relativi tipi. Le dichiarazioni di parametro specificano i tipi, le dimensioni e gli identificatori dei valori archiviati nei parametri.

## <a name="syntax"></a>Sintassi

*`function-definition`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`*<sub>consenso esplicito</sub> *`attribute-seq`* <sub>consenso esplicito</sub> *`declarator`* *`declaration-list`* <sub>consenso esplicito</sub>*`compound-statement`*

/\**`attribute-seq`* è specifico di Microsoft\*/

*`declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`pointer`*<sub>consenso esplicito</sub>*`direct-declarator`*

*`direct-declarator`*:/ \* Dichiaratore di funzione \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-declarator`*  **`(`**  *`parameter-type-list`*  **`)`** /\* Dichiaratore nuovo stile \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`direct-declarator`*  **`(`**  *`identifier-list`*<sub>consenso esplicito</sub> **`)`**  / \* Dichiaratore di stile obsoleto\*/

*`parameter-type-list`*:/ \* Elenco di parametri \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-list`* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-list`* **`, ...`**

*`parameter-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-declaration`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`parameter-list`* **`,`**  *`parameter-declaration`*

*`parameter-declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`* *`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`**`abstract-declarator`* <sub>consenso esplicito</sub>

*`parameter-type-list`* È una sequenza di dichiarazioni di parametro separate da virgole. Il formato di ogni parametro in un elenco di parametri è il seguente:

> **`register`**<sub>consenso esplicito</sub> *`type-specifier`* *`declarator`* <sub>consenso esplicito</sub>

I parametri di funzione dichiarati con l' **`auto`** attributo generano errori. Gli identificatori dei parametri vengono utilizzati nel corpo della funzione per fare riferimento ai valori passati alla funzione. È possibile assegnare un nome ai parametri in un prototipo, ma i nomi diventano esterni all'ambito alla fine della dichiarazione. Ciò significa che i nomi dei parametri possono essere assegnati nello stesso modo o in modo diverso nella definizione della funzione. Questi identificatori non possono essere ridefiniti nel blocco più esterno del corpo della funzione, ma possono essere ridefiniti nei blocchi interni e annidati come se l'elenco di parametri fosse un blocco di inclusione.

Ogni identificatore in *`parameter-type-list`* deve essere preceduto dall'identificatore di tipo appropriato, come illustrato nell'esempio seguente:

```C
void new( double x, double y, double z )
{
    /* Function body here */
}
```

Se nell'elenco di parametri è presente almeno un parametro, l'elenco può terminare con una virgola seguita da tre punti ( **`, ...`** ). Questa costruzione, denominata "notazione con i puntini di sospensione", indica un numero variabile di argomenti passati alla funzione. Per ulteriori informazioni, vedere [chiamate con un numero variabile di argomenti](../c-language/calls-with-a-variable-number-of-arguments.md). Tuttavia, una chiamata alla funzione deve avere almeno un numero di argomenti uguale al numero di parametri prima dell'ultima virgola.

Se non è necessario passare argomenti alla funzione, l'elenco di parametri viene sostituito dalla parola chiave **`void`** . Questo utilizzo di **`void`** è diverso dal relativo utilizzo come identificatore di tipo.

L'ordine e il tipo di parametri, incluso qualsiasi utilizzo della notazione con i puntini di sospensione, devono essere identici in tutte le dichiarazioni di funzione, se presenti, e nella definizione di funzione. I tipi degli argomenti dopo le conversioni aritmetiche consuete devono essere compatibili con l'assegnazione dei tipi dei parametri corrispondenti. Per informazioni sulle conversioni aritmetiche, vedere [conversioni aritmetiche consuete](../c-language/usual-arithmetic-conversions.md) . Gli argomenti dopo i puntini di sospensione non vengono controllati. Un parametro può avere qualsiasi tipo fondamentale, di struttura, unione, puntatore o matrice.

Il compilatore, se necessario, esegue le conversioni aritmetiche consuete in modo indipendente su ogni parametro e ogni argomento. Dopo la conversione, nessun parametro è più breve di un **`int`** e nessun parametro è di tipo, a **`float`** meno che il tipo di parametro non venga specificato in modo esplicito come **`float`** nel prototipo. Ciò significa, ad esempio, che la dichiarazione di un parametro come **`char`** ha lo stesso effetto della dichiarazione di come **`int`** .

## <a name="see-also"></a>Vedi anche

[Definizioni di funzioni C](../c-language/c-function-definitions.md)
