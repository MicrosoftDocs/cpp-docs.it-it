---
description: 'Altre informazioni su: direttive #ifdef e #ifndef (C/C++)'
title: '#Direttive ifdef e #ifndef (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#ifndef'
- '#ifdef'
helpviewer_keywords:
- '#ifdef directive'
- preprocessor, directives
- ifdef directive (#ifdef)
- ifndef directive (#ifndef)
- '#ifndef directive'
ms.assetid: 2b0be69d-9e72-45d8-8e24-e4130fb2455b
ms.openlocfilehash: 4888e4516b57465974d99b1c9e8e6393e02f68c6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269289"
---
# <a name="ifdef-and-ifndef-directives-cc"></a>direttive #ifdef e #ifndef (C/C++)

Le direttive **#ifdef** e **#ifndef** hanno lo stesso effetto della direttiva [#if](hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md) quando viene usata con l'operatore **definito** .

## <a name="syntax"></a>Sintassi

>  *identificatore* #ifdef\
>  *identificatore* #ifndef

Queste direttive sono equivalenti a:

> *identificatore* **definito #if**\
> *identificatore* **#if! defined**

## <a name="remarks"></a>Commenti

È possibile usare le direttive **#ifdef** e **#ifndef** ovunque `#if` sia possibile usare. L'istruzione **#ifdef** *Identifier* è equivalente a `#if 1` quando è stato definito *identificatore* . Equivale a `#if 0` quando l' *identificatore* non è stato definito o non è stato definito dalla `#undef` direttiva. Queste direttive controllano solo la presenza o l'assenza di identificatori definiti con `#define`, non di identificatori dichiarati nel codice sorgente in C o C++.

Queste direttive sono fornite solo per compatibilità con le versioni precedenti del linguaggio. È preferibile l'espressione costante **definita (** *identificatore* **)** utilizzata con la `#if` direttiva.

La direttiva **#ifndef** controlla l'opposto della condizione controllata da **#ifdef**. Se l'identificatore non è stato definito o se la relativa definizione è stata rimossa con `#undef` , la condizione è true (diverso da zero). In caso contrario, la condizione è false (0).

**Specifico di Microsoft**

L' *identificatore* può essere passato dalla riga di comando usando l'opzione [/d](../build/reference/d-preprocessor-definitions.md) . Con è possibile specificare fino a 30 macro `/D` .

La direttiva **#ifdef** è utile per verificare se esiste una definizione, perché una definizione può essere passata dalla riga di comando. Ad esempio:

```cpp
// ifdef_ifndef.CPP
// compile with: /Dtest /c
#ifndef test
#define final
#endif
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
