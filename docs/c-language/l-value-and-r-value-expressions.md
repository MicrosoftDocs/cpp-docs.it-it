---
title: Espressioni L-value e R-value | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- L-values
- member-selection expressions
- R-value expressions
- subscript expressions
ms.assetid: b790303e-ec6f-4d0d-bc55-df42da267172
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 133a88494cfb318b39c5b16191ee8463037f1fac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055305"
---
# <a name="l-value-and-r-value-expressions"></a>Espressioni L-Value e R-Value

Le espressioni che fanno riferimento alle posizioni di memoria vengono chiamate "espressioni l-value". Con L-value si intende un valore del "localizzatore" dell'area di archiviazione o un valore "a sinistra", vale a dire che può essere visualizzato a sinistra del segno di uguale (**=**). Le espressioni L-value sono spesso identificatori.

Le espressioni che fanno riferimento alle posizioni modificabili vengono definite "l-value modificabili". Un'espressione L-value modificabile non può avere un tipo matrice, un tipo incompleto o un tipo con l'attributo **const**. Affinché le strutture e le unioni siano espressioni L-value modificabili, è necessario che non abbiano membri con l'attributo **const**. Il nome dell'identificatore indica un percorso di archiviazione, mentre il valore della variabile è il valore archiviato in quella posizione.

Un identificatore è un'espressione l-value modificabile se fa riferimento a una posizione di memoria e se il relativo tipo è aritmetico, struttura, unione o puntatore. Ad esempio, se `ptr` è un puntatore a un'area di archiviazione, `*ptr` sarà un'espressione l-value modificabile che definisce l'area di archiviazione a cui punta `ptr`.

Una qualsiasi delle seguenti espressioni del linguaggio C può essere un'espressione l-value:

- Un identificatore di tipo integrale, a virgola mobile, puntatore, struttura o tipo di unione

- Un'espressione di indice (**[ ]**) che non restituisce una matrice

- Un'espressione di selezione dei membri (**->** o **.**)

- Un'espressione unaria di riferimento indiretto (<strong>\*</strong>) che non si riferisce a una matrice

- Un'espressione l-value tra parentesi

- Un oggetto **const** (un'espressione L-value non modificabile)

Il termine "r-value" talvolta viene utilizzato per descrivere il valore di un'espressione e per distinguerlo da l-value. Tutti le espressioni l-value sono r-value ma non tutti le espressioni r-value sono I-value.

**Sezione specifica Microsoft**

Microsoft C include un'estensione allo standard ANSI C che consente di eseguire il cast delle espressioni l-value da utilizzare come l-value, purché la dimensione dell'oggetto venga non allungata tramite il cast. Per altre informazioni, vedere [Conversioni di cast di tipo](../c-language/type-cast-conversions.md). Nell'esempio seguente viene illustrata questa funzionalità:

```
char *p ;
short  i;
long l;

(long *) p = &l ;       /* Legal cast   */
(long) i = l ;          /* Illegal cast */
```

Per impostazione predefinita, in Microsoft C le estensioni Microsoft sono abilitate. Utilizzare l'opzione del compilatore /Za per disabilitare queste estensioni.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Operandi ed espressioni](../c-language/operands-and-expressions.md)