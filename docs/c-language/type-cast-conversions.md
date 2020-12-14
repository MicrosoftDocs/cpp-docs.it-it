---
description: 'Altre informazioni su: conversioni di Type-Cast'
title: Conversioni di cast di tipo
ms.date: 11/04/2016
helpviewer_keywords:
- data type conversion [C++], type-cast conversions
- conversions [C++], type-cast
- type casts
- explicit type conversions
- type casts [C++], about type-cast conversion
- type-cast conversions [C++]
ms.assetid: 57ab5902-f12f-4326-a2f6-6282f1d4025a
ms.openlocfilehash: dfa3e54320c416e4bd69cca06d2677def6244247
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242912"
---
# <a name="type-cast-conversions"></a>Conversioni di cast di tipo

È possibile utilizzare i cast di tipo per convertire i tipi in modo esplicito.

**Sintassi**

*espressione cast*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione unaria*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cast-expression* **(***Type-Name***)**      

*nome-tipo*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specifier-qualifier-list* *abstract-declarator*<sub>opt</sub>

*type-name* è un tipo e *cast-expression* è un valore da convertire in tale tipo. Un'espressione con un cast di tipo non è un l-value. *cast-expression* viene convertito come se fosse stato assegnato a una variabile di tipo *type-name*. Le regole di conversione per le assegnazioni (descritte in [Conversioni di assegnazione](../c-language/assignment-conversions.md)) si applicano anche ai cast di tipo. Nella tabella seguente sono illustrati i tipi per cui è possibile eseguire il cast in qualsiasi tipo specificato.

### <a name="legal-type-casts"></a>Cast di tipo validi

|Tipi di destinazione|Potenziali origini|
|-----------------------|-----------------------|
|Tipi integrali|Qualsiasi tipo di Integer o di tipo a virgola mobile o un puntatore a un oggetto|
|A virgola mobile|Qualsiasi tipo aritmetico|
|Puntatore a un oggetto o ( **`void`** <strong>\*</strong> )|Qualsiasi tipo Integer, ( **`void`** <strong>\*</strong> ), un puntatore a un oggetto o un puntatore a funzione|
|Puntatore a funzione|Qualsiasi tipo di integrale, un puntatore a un oggetto o un puntatore a funzione|
|Una struttura, un'unione o una matrice|Nessuno|
|Tipo void|Qualsiasi tipo|

È possibile eseguire il cast di qualsiasi identificatore al **`void`** tipo. Tuttavia, se il tipo specificato in un'espressione di cast di tipo non è **`void`** , l'identificatore di cui viene eseguito il cast a tale tipo non può essere un' **`void`** espressione. È possibile eseguire il cast di qualsiasi espressione a **`void`** , ma non è possibile eseguire il cast di un'espressione di tipo **`void`** a un altro tipo. Ad esempio, una funzione con **`void`** tipo restituito non può avere il cast restituito a un altro tipo.

Si noti che un' **`void`** <strong>\*</strong> espressione ha un puntatore di tipo a **`void`** , non di tipo **`void`** . Se viene eseguito il cast di un oggetto al **`void`** tipo, l'espressione risultante non può essere assegnata ad alcun elemento. Analogamente, un oggetto cast-tipo non è un l-value valido, pertanto nessuna assegnazione può essere eseguita in tale oggetto.

**Specifico di Microsoft**

Un cast di tipo può essere un'espressione l-value se la dimensione dell'identificatore non cambia. Per informazioni sulle espressioni l-value, vedere [Espressioni L-Value e R-Value](../c-language/l-value-and-r-value-expressions.md).

**TERMINA specifica Microsoft**

È possibile convertire un'espressione nel tipo **`void`** con un cast, ma l'espressione risultante può essere utilizzata solo se non è necessario un valore. Un puntatore a oggetto convertito in **`void`** <strong>\*</strong> e di nuovo nel tipo originale restituirà il valore originale.

## <a name="see-also"></a>Vedi anche

[Conversione di tipi](../c-language/type-conversions-c.md)
