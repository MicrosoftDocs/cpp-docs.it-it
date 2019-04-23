---
title: optimize
ms.date: 11/04/2016
f1_keywords:
- vc-pragma.optimize
- optimize_CPP
helpviewer_keywords:
- pragmas, optimize
- optimize pragma
ms.assetid: cb13c1cc-186a-45bc-bee7-95a8de7381cc
ms.openlocfilehash: 9f5240fc59f59a71ddb3d18b67fadf3463a0d1ea
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59035400"
---
# <a name="optimize"></a>optimize

Specifica le ottimizzazioni da eseguire in base a ogni singola funzione.

## <a name="syntax"></a>Sintassi

```
#pragma optimize( "[optimization-list]", {on | off} )
```

## <a name="remarks"></a>Note

Il **ottimizzare** pragma deve trovarsi all'esterno di una funzione e viene applicato alla prima funzione definita dopo che viene individuato il pragma. Il *sul* e *off* argomenti attivare le opzioni specificate nel *optimization-list* attiva o disattiva.

Il *optimization-list* può essere zero o più parametri riportati nella tabella seguente.

### <a name="parameters-of-the-optimize-pragma"></a>Parametri di Pragma optimize

|Parametro/i|Tipo di ottimizzazione|
|--------------------|--------------------------|
|*g*|Abilita le ottimizzazioni globali.|
|*s* o *t*|Specificare sequenze brevi o veloci di codice macchina.|
|*y*|Generare i puntatori ai frame nello stack del programma.|

Queste sono le stesse lettere utilizzate con il [/O](../build/reference/o-options-optimize-code.md) opzioni del compilatore. Ad esempio, il pragma seguente rappresenta l'equivalente dell'opzione del compilatore `/Os`:

```
#pragma optimize( "ts", on )
```

Usando il **ottimizzare** pragma con una stringa vuota (**""**) è un formato speciale della direttiva:

Quando si usa la *off* parametro, viene trasformato tutte le ottimizzazioni *g*, *s*, *t*, e *y*, impostata su off.

Quando si usa la *sul* parametro, vengono ripristinati le ottimizzazioni che è stato specificato con il [/O](../build/reference/o-options-optimize-code.md) opzione del compilatore.

```
#pragma optimize( "", off )
.
.
.
#pragma optimize( "", on )
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)