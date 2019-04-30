---
title: Classe system_error
ms.date: 11/04/2016
f1_keywords:
- system_error/std::system_error
helpviewer_keywords:
- system_error class
ms.assetid: 2eeaacbb-8a4a-4ad7-943a-997901a77f32
ms.openlocfilehash: bad260e5372965c35517986da8feb2cfa3c0e1d2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62412228"
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
