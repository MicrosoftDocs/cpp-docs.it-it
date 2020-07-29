---
title: Dichiarazioni di puntatori
ms.date: 11/04/2016
helpviewer_keywords:
- pointer declarations
- declarations, pointers
- const keyword [C]
- pointers, declarations
ms.assetid: 8b3b7fc7-f44d-480d-b6f9-cebe4e5462a6
ms.openlocfilehash: 31d7e30859537fed1b18f6d30302d83248e17e74
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211762"
---
# <a name="pointer-declarations"></a>Dichiarazioni di puntatori

Una *dichiarazione di puntatore* denomina una variabile puntatore e specifica il tipo dell'oggetto a cui fa riferimento la variabile. Una variabile dichiarata come puntatore contiene un indirizzo di memoria.

## <a name="syntax"></a>Sintassi

*dichiaratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*puntatore*<sub>opz</sub> *Direct-declarator*

*Direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**(** *dichiaratore* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **[** *Constant-Expression*<sub>opz</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **(** *Parameter-Type-list* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator* **(** *Identifier-list*<sub>opt</sub> **)**

*puntatore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong>*Type-Qualifier-list*<sub>opz</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong>*Type-Qualifier-list*<sub>opz</sub> *pointer*

*type-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*qualificatore di tipo*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier-list* *type-qualifier*

*type-specifier* specifica il tipo dell'oggetto, che può essere qualsiasi tipo di base, struttura o unione. Le variabili puntatore possono inoltre fare riferimento a funzioni, matrici e altri puntatori. Per informazioni sulla dichiarazione e l'interpretazione di tipi di puntatore più complessi, vedere [Interpretazione di più dichiaratori complessi](../c-language/interpreting-more-complex-declarators.md).

Rendendo il *tipo-specifier* **`void`** , è possibile ritardare la specifica del tipo a cui fa riferimento il puntatore. Tale elemento viene definito "puntatore a **`void`** " e viene scritto come `void *` . Una variabile dichiarata come puntatore a *void* può essere usata per fare riferimento a un oggetto di qualsiasi tipo. Tuttavia, per eseguire la maggior parte delle operazioni sul puntatore o sull'oggetto ai quali fa riferimento, il tipo a cui fa riferimento deve essere specificato in modo esplicito per ogni operazione. (Variabili di tipo **`char`** <strong>\*</strong> e il tipo **`void`** <strong>\*</strong> sono compatibili con l'assegnazione senza un cast di tipo. Tale conversione può essere eseguita con un cast di tipo. per altre informazioni, vedere [conversioni di cast di tipo](../c-language/type-cast-conversions.md) .

Il *qualificatore di tipo* può essere **`const`** o o **`volatile`** entrambi. Questi specificano, rispettivamente, che il puntatore non può essere modificato dal programma stesso ( **`const`** ) o che il puntatore può essere modificato legittimamente da un processo che esula dal controllo del programma ( **`volatile`** ). Per ulteriori informazioni su e, vedere [qualificatori di tipo](../c-language/type-qualifiers.md) **`const`** **`volatile`** .

*declarator* assegna un nome alla variabile e può includere un modificatore di tipo. Ad esempio, se *declarator* rappresenta una matrice, il tipo del puntatore viene modificato per rappresentare un puntatore a una matrice.

È possibile dichiarare un puntatore a un tipo di struttura, unione o enumerazione prima di definire il tipo di struttura, unione o enumerazione. Il puntatore viene dichiarato tramite il tag di unione o della struttura come illustrato negli esempi riportati di seguito. Tali dichiarazioni sono consentite perché non è necessario che il compilatore conosca le dimensioni della struttura o dell'unione per allocare lo spazio per la variabile puntatore.

## <a name="examples"></a>Esempi

Negli esempi riportati di seguito vengono illustrate le dichiarazioni di puntatore:

```
char *message; /* Declares a pointer variable named message */
```

Il puntatore del *messaggio* punta a una variabile di **`char`** tipo.

```
int *pointers[10];  /* Declares an array of pointers */
```

La matrice di *puntatori* ha 10 elementi; ogni elemento è un puntatore a una variabile di **`int`** tipo.

```
int (*pointer)[10]; /* Declares a pointer to an array of 10 elements */
```

La variabile *pointer* fa riferimento a una matrice con 10 elementi. Ogni elemento in questa matrice è di **`int`** tipo.

```
int const *x;      /* Declares a pointer variable, x,
                      to a constant value */
```

Il puntatore *x* può essere modificato in modo da puntare a un **`int`** valore diverso, ma il valore a cui fa riferimento non può essere modificato.

```
const int some_object = 5 ;
int other_object = 37;
int *const y = &fixed_object;
int volatile *const z = &some_object;
int *const volatile w = &some_object;
```

La variabile *y* in queste dichiarazioni viene dichiarata come puntatore costante a un **`int`** valore. Il valore a cui fa riferimento può essere modificato, ma il puntatore deve sempre fare riferimento alla stessa posizione, vale a dire all'indirizzo di *fixed_object*. Analogamente, *z* è un puntatore costante, ma viene anche dichiarato per puntare a un oggetto il **`int`** cui valore non può essere modificato dal programma. L'identificatore aggiuntivo **`volatile`** indica che anche se il valore di **const int** a cui punta *z* non può essere modificato dal programma, potrebbe essere modificato in modo legittimo da un processo in esecuzione contemporaneamente al programma. La dichiarazione di *w* specifica che il programma non può modificare né il valore a cui viene fatto riferimento, né il puntatore.

```
struct list *next, *previous; /* Uses the tag for list */
```

In questo esempio vengono dichiarate due variabili puntatore, *next* e *previous*, che fanno riferimento al tipo di struttura *list*. Questa dichiarazione può essere visualizzata prima della definizione del tipo di struttura *list* (vedere l'esempio successivo), purché la definizione di tipo *list* abbia la stessa visibilità della dichiarazione.

```
struct list
{
    char *token;
    int count;
    struct list *next;
} line;
```

La variabile *line* ha il tipo di struttura denominato *list*. Il tipo di struttura *elenco* è costituito da tre membri: il primo membro è un puntatore a un **`char`** valore, il secondo è un **`int`** valore e il terzo è un puntatore a un'altra struttura *elenco* .

```
struct id
{
    unsigned int id_no;
    struct name *pname;
} record;
```

Il *record* della variabile ha l' *ID*del tipo di struttura. Si noti che *pname* è dichiarato come puntatore a un altro tipo di struttura denominato *Name*. Questa dichiarazione può essere visualizzata prima che venga definito il tipo *name*.

## <a name="see-also"></a>Vedere anche

[Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)
