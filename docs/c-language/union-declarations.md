---
title: Dichiarazioni di unione
ms.date: 11/04/2016
helpviewer_keywords:
- unions
- union keyword [C], declarations
- variant records
ms.assetid: 978c6165-e0ae-4196-afa7-6d94e24f62f7
ms.openlocfilehash: 3414a478ec741351f1e1540a214cca38c029749f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213697"
---
# <a name="union-declarations"></a>Dichiarazioni di unione

Una "Dichiarazione di unione" specifica un set di valori variabili e, facoltativamente, un tag per assegnare un nome all'unione. I valori variabili sono denominati "membri" dell'unione e possono includere diversi tipi. Le unioni sono simili ai "record variabili" presenti in altri linguaggi.

## <a name="syntax"></a>Sintassi

*struct-or-Union-specifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;identificatore *struct-or-Union* *identifier*<sub>opz</sub> **{** *struct-declaration-list* **}**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-or-union* *identifier*

*struct-or-union*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`struct`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`union`**

*struct-declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declaration-list* *struct-declaration*

Il contenuto dell'unione viene definito come

*struct-Declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-qualifier-list* *struct-declarator-list*  **;**

*specifier-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-specifier* *specifier-qualifier-list*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier* *specifier-qualifier-list*<sub>opt</sub>

*struct-declarator-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declarator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struct-declarator-list*  **,**  *struct-dichiaratore*

Una variabile con **`union`** tipo archivia uno dei valori definiti da quel tipo. Le stesse regole si applicano alla struttura e alle dichiarazioni di unione. Le unioni possono inoltre contenere campi di bit.

I membri delle unioni non possono avere un tipo incompleto, un tipo **`void`** o un tipo di funzione. Di conseguenza, i membri non possono essere un'istanza dell'unione ma possono essere puntatori al tipo di unione dichiarato.

Una dichiarazione del tipo di unione è solo un modello. La memoria non viene riservata fino a che la variabile non viene dichiarata.

> [!NOTE]
> Se viene dichiarata un'unione di due tipi e viene archiviato un valore, ma l'accesso all'unione viene eseguito con l'altro tipo, i risultati sono inaffidabili. Ad esempio, **`float`** **`int`** viene dichiarata un'Unione di e. **`float`** Viene archiviato un valore, ma in seguito il programma accede al valore come **`int`** . In una situazione di questo tipo, il valore dipende dall'archiviazione interna dei **`float`** valori. L'Integer non sarebbe affidabile.

## <a name="examples"></a>Esempi

Di seguito sono riportati alcuni esempi di unioni:

```C
union sign   /* A definition and a declaration */
{
    int svar;
    unsigned uvar;
} number;
```

In questo esempio viene definita una variabile di unione con il tipo `sign` e viene dichiarata una variabile denominata `number` che contiene due membri: `svar`, un Signed Integer, e `uvar`, un Unsigned Integer. Questa dichiarazione consente di archiviare il valore corrente di `number` come valore con segno o senza. Il tag associato a questo tipo di unione è `sign`.

```C
union               /* Defines a two-dimensional */
{                   /*  array named screen */
    struct
    {
      unsigned int icon : 8;
      unsigned color : 4;
    } window1;
    int screenval;
} screen[25][80];
```

La matrice di `screen` contiene 2.000 elementi. Ogni elemento della matrice rappresenta una singola unione con due membri: `window1` e `screenval`. Il membro `window1` è una struttura con due membri del campo di bit, `icon` e `color`. Il `screenval` membro è un oggetto **`int`** . In un determinato momento ogni elemento Union include l'oggetto **`int`** rappresentato da `screenval` o la struttura rappresentata da `window1` .

**Specifico di Microsoft**

Le unioni annidate possono essere dichiarate anonimamente quando sono membri di un'altra struttura o unione. Quello riportato di seguito è un esempio di unione senza nome:

```C
struct str
{
    int a, b;
    union            / * Unnamed union */
    {
      char c[4];
      long l;
      float f;
   };
   char c_array[10];
} my_str;
.
.
.
my_str.l == 0L;  /* A reference to a field in the my_str union */
```

Spesso le unioni sono annidate all'interno di una struttura, nella quale è presente un campo che fornisce il tipo di dati contenuti nell'unione in un qualsiasi momento. Quello riportato di seguito è un esempio di dichiarazione per questo tipo di unione:

```C
struct x
{
    int type_tag;
    union
    {
      int x;
      float y;
    }
}
```

Per informazioni sui riferimenti alle unioni, vedere [Membri di struttura e di unione](../c-language/structure-and-union-members.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)
