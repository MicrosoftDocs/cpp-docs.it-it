---
title: Classe system_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- system_error/std::system_error
dev_langs:
- C++
helpviewer_keywords:
- system_error class
ms.assetid: 2eeaacbb-8a4a-4ad7-943a-997901a77f32
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bde8e448d54be41516e65969f60b0651cacc8ef1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33854558"
---
# <a name="systemerror-class"></a>Classe system_error

Rappresenta la classe di base per tutte le eccezioni generate per segnalare un errore di sistema di basso livello.

## <a name="syntax"></a>Sintassi

```cpp
class system_error : public runtime_error {
public:
    explicit system_error(error_code _Errcode,
    const string& _Message = "");

    system_error(error_code _Errcode,
    const char *_Message);

    system_error(error_code::value_type _Errval,
    const error_category& _Errcat,
    const string& _Message);

    system_error(error_code::value_type _Errval,
    const error_category& _Errcat,
    const char *_Message);
const error_code& code() const throw();
const error_code& code() const throw();

};
```

## <a name="remarks"></a>Note

Il valore restituito da `what` nella classe [exception](../standard-library/exception-class.md) è costruito da `_Message` e dall'oggetto archiviato di tipo [error_code](../standard-library/error-code-class.md) (`code` o `error_code(_Errval, _Errcat)`).

La funzione membro `code` restituisce l'oggetto [error_code](../standard-library/error-code-class.md) archiviato.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<system_error>](../standard-library/system-error.md)<br/>
