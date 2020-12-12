---
description: 'Altre informazioni su: espressioni L-value e R-value'
title: Espressioni L-Value e R-Value
ms.date: 11/04/2016
helpviewer_keywords:
- L-values
- member-selection expressions
- R-value expressions
- subscript expressions
ms.assetid: b790303e-ec6f-4d0d-bc55-df42da267172
ms.openlocfilehash: 84812e211ddd008226773436bc26e22f6150c852
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181813"
---
# <a name="l-value-and-r-value-expressions"></a>Espressioni L-Value e R-Value

Le espressioni che fanno riferimento alle posizioni di memoria vengono chiamate "espressioni l-value". Un l-value rappresenta un valore "Locator" dell'area di archiviazione o un valore "left", che implica che può essere visualizzato a sinistra del segno di uguale ( **=** ). Le espressioni L-value sono spesso identificatori.

Le espressioni che fanno riferimento alle posizioni modificabili vengono definite "l-value modificabili". Un l-value modificabile non può avere un tipo matrice, un tipo incompleto o un tipo con l' **`const`** attributo. Affinché le strutture e le unioni siano espressioni l-value modificabili, non devono avere membri con l' **`const`** attributo. Il nome dell'identificatore indica un percorso di archiviazione, mentre il valore della variabile è il valore archiviato in quella posizione.

Un identificatore è un'espressione l-value modificabile se fa riferimento a una posizione di memoria e se il relativo tipo è aritmetico, struttura, unione o puntatore. Ad esempio, se `ptr` è un puntatore a un'area di archiviazione, `*ptr` sarà un'espressione l-value modificabile che definisce l'area di archiviazione a cui punta `ptr`.

Una qualsiasi delle seguenti espressioni del linguaggio C può essere un'espressione l-value:

- Un identificatore di tipo integrale, a virgola mobile, puntatore, struttura o tipo di unione

- Un'espressione di indice (**[ ]**) che non restituisce una matrice

- Espressione di selezione di membri ( **->** o) **.**

- Espressione unaria indiretta ( <strong>\*</strong> ) che non fa riferimento a una matrice

- Un'espressione l-value tra parentesi

- Un **`const`** oggetto (un l-value non modificabile)

Il termine "r-value" talvolta viene utilizzato per descrivere il valore di un'espressione e per distinguerlo da l-value. Tutti le espressioni l-value sono r-value ma non tutti le espressioni r-value sono I-value.

**Specifico di Microsoft**

Microsoft C include un'estensione allo standard ANSI C che consente di eseguire il cast delle espressioni l-value da utilizzare come l-value, purché la dimensione dell'oggetto venga non allungata tramite il cast. Per ulteriori informazioni, vedere [conversioni di cast di tipo](../c-language/type-cast-conversions.md) . Questa funzionalità è illustrata nell'esempio seguente:

```
char *p ;
short  i;
long l;

(long *) p = &l ;       /* Legal cast   */
(long) i = l ;          /* Illegal cast */
```

Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Utilizzare l'opzione del compilatore /Za per disabilitare queste estensioni.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Operandi ed espressioni](../c-language/operands-and-expressions.md)
