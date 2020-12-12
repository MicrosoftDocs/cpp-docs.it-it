---
description: 'Altre informazioni su: dichiaratori e dichiarazioni di variabili'
title: Dichiaratori e dichiarazioni di variabili
ms.date: 11/04/2016
helpviewer_keywords:
- declaring variables, declarators
- declarators, definition
- declaring variables, declaration statements
ms.assetid: 5fd67a6a-3a6a-4ec9-b257-3f7390a48d40
ms.openlocfilehash: 920c44e3345c6143489815de55ea81470e46d279
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306417"
---
# <a name="declarators-and-variable-declarations"></a>Dichiaratori e dichiarazioni di variabili

Nel resto di questa sezione viene descritto il formato e il significato delle dichiarazioni dei tipi di variabile contenuti in questo elenco. In particolare, nelle sezioni rimanenti viene illustrato come dichiarare i seguenti elementi:

|Il tipo di variabile|Description|
|----------------------|-----------------|
|[Variabili semplici](../c-language/simple-variable-declarations.md)|Le variabili contenenti un singolo valore con tipo integrale o a virgola mobile|
|[Matrici](../c-language/array-declarations.md)|Le variabili composte di una raccolta di elementi con lo stesso tipo|
|[Pointers](../c-language/pointer-declarations.md)|Le variabili che puntano ad altre variabili e che contengono le posizioni delle variabili (sotto forma di indirizzi) invece dei valori|
|[Variabili di enumerazione](../c-language/c-enumeration-declarations.md)|Le variabili semplici con tipo integrale che contengono un valore derivante da un set di costanti Integer denominate|
|[Strutture](../c-language/structure-declarations.md)|Le variabili composte di una raccolta di valori che può contenere tipi differenti|
|[Unioni](../c-language/union-declarations.md)|Le variabili composte di diversi valori di tipi differenti che occupano lo stesso spazio di archiviazione|

Un dichiaratore è la parte di una dichiarazione che specifica il nome che deve essere introdotto nel programma. Può includere modificatori come <strong>\*</strong> (puntatore-a) e qualsiasi parola chiave della convenzione di chiamata Microsoft.

**Specifico di Microsoft**

Nel dichiaratore

```C
__declspec(thread) char *var;
```

**`char`** è l'identificatore di tipo, `__declspec(thread)` e `*` sono i modificatori e `var` è il nome dell'identificatore.

**TERMINA specifica Microsoft**

È possibile utilizzare i dichiaratori per dichiarare le matrici di valori, i puntatori a valori e le funzioni che restituiscono i valori di un tipo specificato. I dichiaratori sono presenti nella matrice e nelle dichiarazioni del puntatore descritte più avanti in questa sezione.

## <a name="syntax"></a>Sintassi

*dichiaratore*:<br/>
&nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-declarator*

*Direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**(**  *dichiaratore*  **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator*  **[**  *Constant-Expression*<sub>opz</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator*  **(**  *Parameter-Type-list*  **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Direct-declarator*  **(**  *Identifier-list*<sub>opt</sub> **)**

*puntatore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong>*Type-Qualifier-list*<sub>opz</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong>*Type-Qualifier-list*<sub>opz</sub> *pointer*

*type-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*qualificatore di tipo*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier-list type-qualifier*

> [!NOTE]
> Vedere la sintassi per *declaration* in [Cenni preliminari sulle dichiarazioni](../c-language/overview-of-declarations.md) o [Riepilogo di sintassi del linguaggio C](../c-language/c-language-syntax-summary.md) per informazioni sulla sintassi che fa riferimento a *declarator*.

Quando un dichiaratore è costituito da un identificatore non modificato, l'elemento dichiarato è un tipo di base. Se <strong>\*</strong> a sinistra di un identificatore viene visualizzato un asterisco (), il tipo viene modificato in un tipo di puntatore. Se l'identificatore è seguito da parentesi quadre (**[ ]**), il tipo viene modificato in un tipo di matrice. Se l'identificatore è seguito da parentesi tonde, il tipo viene modificato in un tipo di funzione. Per altre informazioni sull'interpretazione della precedenza all'interno delle dichiarazioni, vedere [Interpretazione di più dichiaratori complessi](../c-language/interpreting-more-complex-declarators.md).

Ogni dichiaratore dichiara almeno un identificatore. Per essere una dichiarazione completa, il dichiaratore deve includere un identificatore di tipo. L'identificatore di tipo fornisce il tipo di elementi di un tipo di matrice, il tipo di oggetto indirizzato da un tipo puntatore o il tipo restituito di una funzione.

Le dichiarazioni delle [matrici](../c-language/array-declarations.md) e dei [puntatori](../c-language/pointer-declarations.md) sono descritte in modo più dettagliato più avanti in questa sezione. Negli esempi seguenti sono illustrati alcuni semplici formati di dichiaratori:

```C
int list[20]; // Declares an array of 20 int values named list
char *cp;     // Declares a pointer to a char value
double func( void ); // Declares a function named func, with no
                     // arguments, that returns a double value
int *aptr[10] // Declares an array of 10 pointers
```

**Specifico di Microsoft**

Il compilatore C Microsoft non limita il numero di dichiaratori che possono modificare un'operazione aritmetica, una struttura o un tipo di unione. Il loro numero è limitato solo dalla memoria disponibile.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)
