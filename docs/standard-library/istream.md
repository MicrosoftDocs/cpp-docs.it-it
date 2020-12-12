---
description: 'Altre informazioni su: &lt; IStream&gt;'
title: '&lt;istream&gt;'
ms.date: 11/04/2016
f1_keywords:
- istream/std::<istream>
- <istream>
- std::<istream>
helpviewer_keywords:
- istream header
ms.assetid: efcf24e4-05d1-4719-ab0b-9e7ebe845d89
ms.openlocfilehash: c897441eef935cd6ef5a8b4e9f4676d06a57e1af
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277817"
---
# <a name="ltistreamgt"></a>&lt;istream&gt;

Definisce il modello di classe basic_istream, che media le estrazioni per iostreams, e il modello di classe basic_iostream, che media sia di inserimenti che di estrazioni. L'intestazione definisce anche un manipolatore correlato. Questo file di intestazione viene in genere incluso automaticamente per l'utente da un'altra intestazione iostream. Raramente è necessario includerli direttamente.

## <a name="syntax"></a>Sintassi

```cpp
#include <istream>
```

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[iostream](../standard-library/istream-typedefs.md#iostream)|Tipo `basic_iostream` specializzato in **`char`** .|
|[IStream](../standard-library/istream-typedefs.md#istream)|Tipo `basic_istream` specializzato in **`char`** .|
|[wiostream](../standard-library/istream-typedefs.md#wiostream)|Tipo `basic_iostream` specializzato in **wchar**.|
|[wistream](../standard-library/istream-typedefs.md#wistream)|Tipo `basic_istream` specializzato in **wchar**.|

### <a name="manipulators"></a>Manipolatori

|Nome|Descrizione|
|-|-|
|[ws](../standard-library/istream-functions.md#ws)|Ignora gli spazi nel flusso.|
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

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
