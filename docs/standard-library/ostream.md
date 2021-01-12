---
description: 'Altre informazioni su: &lt; ostream&gt;'
title: '&lt;ostream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <ostream>
helpviewer_keywords:
- ostream header
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
ms.openlocfilehash: a31ffe801fca16e3b7fc1037c59613150e383933
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126429"
---
# <a name="ltostreamgt"></a>&lt;ostream&gt;

Definisce il modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), che media gli inserimenti per l'iostreams. L'intestazione definisce anche diversi manipolatori correlati. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.

## <a name="syntax"></a>Sintassi

```cpp
#include <ostream>
```

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[ostream](../standard-library/ostream-typedefs.md#ostream)|Crea un tipo da `basic_ostream` specializzato su **`char`** e `char_traits` specializzato su **`char`** .|
|[wostream](../standard-library/ostream-typedefs.md#wostream)|Crea un tipo da `basic_ostream` specializzato su **`wchar_t`** e `char_traits` specializzato su **`wchar_t`** .|

### <a name="manipulators"></a>Manipolatori

|Nome|Descrizione|
|-|-|
|[endl](../standard-library/ostream-functions.md#endl)|Termina una riga e scarica il buffer.|
|[finisce](../standard-library/ostream-functions.md#ends)|Termina una stringa.|
|[filo](../standard-library/ostream-functions.md#flush)|Scarica il buffer.|
|[scambio](../standard-library/ostream-functions.md#swap)|Scambia il valori del parametro oggetto `basic_ostream` a sinistra con quelli del parametro oggetto `basic_ostream` a destra.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore<<](../standard-library/ostream-operators.md#op_lt_lt)|Scrive vari tipi nel flusso.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_ostream](../standard-library/basic-ostream-class.md)|Il modello di classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
