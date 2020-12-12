---
title: Identificatori ed equivalenti di tipi di dati
description: Vengono descritti gli identificatori del tipo di dati Microsoft Visual C e i relativi equivalenti.
ms.date: 11/04/2016
helpviewer_keywords:
- type specifiers [C++], list
- widening integers
- data types [C++], equivalents
- sign-extending integral types
- zero-extending
- identifiers, data type
- data types [C++], specifiers
- simple types, names
- type names [C++], simple
ms.openlocfilehash: 6a1231bc19617dddf1cc01d4c5e7db2863f1055f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207046"
---
# <a name="data-type-specifiers-and-equivalents"></a>Identificatori ed equivalenti di tipi di dati

In questa documentazione vengono in genere utilizzati i moduli degli identificatori di tipo elencati nella tabella seguente anziché i form lunghi. Si presuppone inoltre che il **`char`** tipo sia firmato per impostazione predefinita. In questa documentazione, **`char`** equivale a **`signed char`** .

## <a name="type-specifiers-and-equivalents"></a>Identificatori di tipo e equivalenti

| Identificatore di tipo | Elemento o elementi equivalenti |
|--|--|
| **`signed char`**<sup>1</sup> | **`char`** |
| **`signed int`** | **`signed`**, **`int`** |
| **`signed short int`** | **`short`**, **`signed short`** |
| **`signed long int`** | **`long`**, **`signed long`** |
| **`unsigned char`** | — |
| **`unsigned int`** | **`unsigned`** |
| **`unsigned short int`** | **`unsigned short`** |
| **`unsigned long int`** | **`unsigned long`** |
| **`float`** | — |
| **`long double`**<sup>2</sup> | — |

<sup>1</sup> quando si imposta il **`char`** tipo come senza segno per impostazione predefinita (specificando l' **`/J`** opzione del compilatore), non è possibile abbreviare **`signed char`** come **`char`** .

<sup>2</sup> nei sistemi operativi a 32 bit e a 64 bit il compilatore C Microsoft esegue il mapping **`long double`** al tipo **`double`** .

**Sezione specifica Microsoft**

È possibile specificare l' **`/J`** opzione del compilatore per modificare il **`char`** tipo predefinito da **`signed char`** a **`unsigned char`** . Quando questa opzione è attiva, **`char`** equivale **`unsigned char`** a ed è necessario usare la **`signed`** parola chiave per dichiarare un valore di carattere con segno. Se un **`char`** valore viene dichiarato in modo esplicito **`signed`** , l' **`/J`** opzione non ha effetto e il valore viene esteso con segno quando viene ampliato a un **`int`** tipo. Il **`char`** tipo viene esteso a zero quando viene ampliato al **`int`** tipo.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Identificatori di tipi C](../c-language/c-type-specifiers.md)
