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
ms.openlocfilehash: 37399bb50f195c683b52eea4c8fadf8679d62852
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233093"
---
# <a name="ltistreamgt"></a>&lt;istream&gt;

Definisce il modello di classe basic_istream, che media le estrazioni per iostreams, e il modello di classe basic_iostream, che media sia di inserimenti che di estrazioni. L'intestazione definisce anche un manipolatore correlato. Questo file di intestazione viene in genere incluso automaticamente per l'utente da un'altra intestazione iostream. Raramente è necessario includerli direttamente.

## <a name="syntax"></a>Sintassi

```cpp
#include <istream>
```

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[iostream](../standard-library/istream-typedefs.md#iostream)|Tipo `basic_iostream` specializzato in **`char`** .|
|[IStream](../standard-library/istream-typedefs.md#istream)|Tipo `basic_istream` specializzato in **`char`** .|
|[wiostream](../standard-library/istream-typedefs.md#wiostream)|Tipo `basic_iostream` specializzato in **wchar**.|
|[wistream](../standard-library/istream-typedefs.md#wistream)|Tipo `basic_istream` specializzato in **wchar**.|

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[WS](../standard-library/istream-functions.md#ws)|Ignora gli spazi nel flusso.|
|[scambio](../standard-library/istream-functions.md#istream_swap)|Scambia due oggetti flusso.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore>>](../standard-library/istream-operators.md#op_gt_gt)|Estrae caratteri e stringhe dal flusso.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_iostream](../standard-library/basic-iostream-class.md)|Classe di flusso che può eseguire operazioni sia di input sia di output.|
|[basic_istream](../standard-library/basic-istream-class.md)|Il modello di classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso con elementi di tipo `Elem` , noti anche come [char_type](../standard-library/basic-ios-class.md#char_type), i cui tratti di carattere sono determinati dalla classe `Tr` , nota anche come [traits_type](../standard-library/basic-ios-class.md#traits_type).|

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
