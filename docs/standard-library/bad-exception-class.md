---
title: bad_exception Class
ms.date: 11/04/2016
f1_keywords:
- exception/std::bad_exception
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
ms.openlocfilehash: 94d1104b66fc6bd84e209caa23ce309cffd9fa85
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50457460"
---
# <a name="badexception-class"></a>bad_exception Class

La classe descrive un'eccezione che può essere generata da un gestore imprevisto.

## <a name="syntax"></a>Sintassi

```cpp
class bad_exception    : public exception {};
```

## <a name="remarks"></a>Note

[unexpected](../standard-library/exception-functions.md#unexpected) genererà `bad_exception` anziché terminare o chiamare un'altra funzione specificata con [set_unexpected](../standard-library/exception-functions.md#set_unexpected) se `bad_exception` è incluso nell'elenco di generazione di una funzione.

Il valore restituito da `what` è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

Per un elenco dei membri ereditati dalla classe `bad_exception`, vedere [Classe exception](../standard-library/exception-class.md).

## <a name="example"></a>Esempio

Vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected) per un esempio dell'utilizzo di [unexpected](../standard-library/exception-functions.md#unexpected) che genera `bad_exception`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe exception](../standard-library/exception-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
