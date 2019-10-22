---
title: '&lt;ostream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <ostream>
- ostream/std::<ostream>
- std::<ostream>
helpviewer_keywords:
- ostream header
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
ms.openlocfilehash: 3838e215ffac42ec6902ab6a9837f638153cf184
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689160"
---
# <a name="ltostreamgt"></a>&lt;ostream&gt;

Definisce il modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), che media gli inserimenti per il iostreams. L'intestazione definisce anche diversi manipolatori correlati. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.

## <a name="syntax"></a>Sintassi

```cpp
#include <ostream>
```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[ostream](../standard-library/ostream-typedefs.md#ostream)|Crea un tipo da `basic_ostream` specializzato su **char** e `char_traits` specializzato su **char**.|
|[wostream](../standard-library/ostream-typedefs.md#wostream)|Crea un tipo da `basic_ostream` specializzato in **wchar_t** e `char_traits` specializzato in **wchar_t**.|

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[endl](../standard-library/ostream-functions.md#endl)|Termina una riga e scarica il buffer.|
|[ends](../standard-library/ostream-functions.md#ends)|Termina una stringa.|
|[flush](../standard-library/ostream-functions.md#flush)|Scarica il buffer.|
|[swap](../standard-library/ostream-functions.md#swap)|Scambia il valori del parametro oggetto `basic_ostream` a sinistra con quelli del parametro oggetto `basic_ostream` a destra.|

### <a name="operators"></a>Operatori

|??|Descrizione|
|-|-|
|[operator<<](../standard-library/ostream-operators.md#op_lt_lt)|Scrive vari tipi nel flusso.|

### <a name="classes"></a>Classi

|Class|Descrizione|
|-|-|
|[basic_ostream](../standard-library/basic-ostream-class.md)|Il modello di classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
