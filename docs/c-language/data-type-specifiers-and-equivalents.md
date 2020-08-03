---
title: Identificatori ed equivalenti di tipi di dati
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
ms.assetid: 0d4b515a-4f68-4786-83cf-a5d43c7cb6f3
ms.openlocfilehash: cc8ba746bea7f6ea885beb625de414d83367b53f
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520681"
---
# <a name="data-type-specifiers-and-equivalents"></a>Identificatori ed equivalenti di tipi di dati

In questo libro vengono in genere utilizzati i moduli degli identificatori di tipo elencati nella tabella seguente anziché i form lunghi e si presuppone che il **`char`** tipo sia firmato per impostazione predefinita. Pertanto, in questo libro, **`char`** equivale a **`signed char`** .

## <a name="type-specifiers-and-equivalents"></a>Identificatori di tipo ed elementi equivalenti

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

**Specifico di Microsoft**

È possibile specificare l' **`/J`** opzione del compilatore per modificare il **`char`** tipo predefinito da **`signed char`** a **`unsigned char`** . Quando questa opzione è attiva, **`char`** equivale **`unsigned char`** a ed è necessario usare la **`signed`** parola chiave per dichiarare un valore di carattere con segno. Se un **`char`** valore viene dichiarato in modo esplicito **`signed`** , l' **`/J`** opzione non ha effetto e il valore viene esteso con segno quando viene ampliato a un **`int`** tipo. Il **`char`** tipo viene esteso a zero quando viene ampliato al **`int`** tipo.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Identificatori di tipi C](../c-language/c-type-specifiers.md)
