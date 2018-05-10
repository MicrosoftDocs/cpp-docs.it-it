---
title: Classe bad_exception | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- exception/std::bad_exception
dev_langs:
- C++
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 41b30763f1382b7a12f68cd6a45b87960f623649
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="badexception-class"></a>bad_exception Class

La classe descrive un'eccezione che può essere generata da un gestore imprevisto.

## <a name="syntax"></a>Sintassi

```cpp
class bad_exception    : public exception {};
```

## <a name="remarks"></a>Note

[unexpected](../standard-library/exception-functions.md#unexpected) genererà `bad_exception` anziché terminare o chiamare un'altra funzione specificata con [set_unexpected](../standard-library/exception-functions.md#set_unexpected) se `bad_exception` è incluso nell'elenco di generazione di una funzione.

Il valore restituito da **what** è una stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

Per un elenco dei membri ereditati dalla classe `bad_exception`, vedere [Classe exception](../standard-library/exception-class.md).

## <a name="example"></a>Esempio

Vedere [set_unexpected](../standard-library/exception-functions.md#set_unexpected) per un esempio dell'utilizzo di [unexpected](../standard-library/exception-functions.md#unexpected) che genera `bad_exception`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe exception](../standard-library/exception-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
