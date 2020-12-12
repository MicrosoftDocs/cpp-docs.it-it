---
description: 'Altre informazioni su: bad_exception Class'
title: bad_exception Class
ms.date: 11/04/2016
f1_keywords:
- exception/std::bad_exception
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
ms.openlocfilehash: 6b47facc751e1f16e033f26be284db1287e79ea8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321612"
---
# <a name="bad_exception-class"></a>bad_exception Class

La classe descrive un'eccezione che può essere generata da un gestore imprevisto.

## <a name="syntax"></a>Sintassi

```cpp
class bad_exception : public exception {};

bad_exception();
bad_exception(const bad_exception&);
bad_exception& operator=(const bad_exception&);
const char* what() const override;
```

## <a name="remarks"></a>Osservazioni

[unexpected](../standard-library/exception-functions.md#unexpected) genererà `bad_exception` anziché terminare o chiamare un'altra funzione specificata con [set_unexpected](../standard-library/exception-functions.md#set_unexpected) se `bad_exception` è incluso nell'elenco di generazione di una funzione.

Il valore restituito da `what` è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

Per un elenco dei membri ereditati dalla classe `bad_exception`, vedere [Classe exception](../standard-library/exception-class.md).

## <a name="example"></a>Esempio

Vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected) per un esempio dell'utilizzo di [unexpected](../standard-library/exception-functions.md#unexpected) che genera `bad_exception`.
