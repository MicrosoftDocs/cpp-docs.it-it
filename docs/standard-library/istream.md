---
title: '&lt;istream&gt;'
ms.date: 11/04/2016
f1_keywords:
- istream/std::<istream>
- <istream>
- std::<istream>
helpviewer_keywords:
- istream header
ms.assetid: efcf24e4-05d1-4719-ab0b-9e7ebe845d89
ms.openlocfilehash: 0ad27bf849e8d4b9188868b9a29bf423b4cafafa
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68458738"
---
# <a name="ltistreamgt"></a>&lt;istream&gt;

Definisce la classe modello basic_istream, che media le estrazioni per intestazioni iostream, e la classe modello basic_iostream, che media gli inserimenti e le estrazioni. L'intestazione definisce anche un manipolatore correlato. Questo file di intestazione viene in genere incluso automaticamente per l'utente da un'altra intestazione iostream. Raramente è necessario includerli direttamente.

## <a name="syntax"></a>Sintassi

```cpp
#include <istream>
```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[iostream](../standard-library/istream-typedefs.md#iostream)|Tipo `basic_iostream` specializzato in **char**.|
|[istream](../standard-library/istream-typedefs.md#istream)|Tipo `basic_istream` specializzato in **char**.|
|[wiostream](../standard-library/istream-typedefs.md#wiostream)|Tipo `basic_iostream` specializzato in **wchar**.|
|[wistream](../standard-library/istream-typedefs.md#wistream)|Tipo `basic_istream` specializzato in **wchar**.|

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[ws](../standard-library/istream-functions.md#ws)|Ignora gli spazi nel flusso.|
|[swap](../standard-library/istream-functions.md#istream_swap)|Scambia due oggetti flusso.|

### <a name="operators"></a>Operatori

|Operator|Descrizione|
|-|-|
|[operator>> ](../standard-library/istream-operators.md#op_gt_gt)|Estrae caratteri e stringhe dal flusso.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_iostream](../standard-library/basic-iostream-class.md)|Classe di flusso che può eseguire operazioni sia di input sia di output.|
|[basic_istream](../standard-library/basic-istream-class.md)|La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso con elementi di `Elem`tipo, noti anche come [char_type](../standard-library/basic-ios-class.md#char_type), i cui tratti di carattere sono determinati dalla `Tr`classe. noto come [traits_type](../standard-library/basic-ios-class.md#traits_type).|

## <a name="see-also"></a>Vedere anche

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
