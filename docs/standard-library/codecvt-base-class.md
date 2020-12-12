---
description: 'Altre informazioni su: codecvt_base Class'
title: Classe codecvt_base
ms.date: 11/04/2016
f1_keywords:
- xlocale/std::codecvt_base
helpviewer_keywords:
- codecvt_base class
ms.assetid: 7e95c083-91b4-4b3f-8918-0d4ea244a040
ms.openlocfilehash: d0fb5a56a163ba80cee89eb6f37200243e6c08e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325101"
---
# <a name="codecvt_base-class"></a>Classe codecvt_base

Classe base per la classe Codecvt utilizzata per definire un tipo di enumerazione indicato come `result` , utilizzato come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.

## <a name="syntax"></a>Sintassi

```cpp
class codecvt_base : public locale::facet {
public:
    enum result {ok, partial, error, noconv};
    codecvt_base( size_t _Refs = 0);
    bool always_noconv() const;
    int max_length() const;
    int encoding() const;
    ~codecvt_base()

protected:
    virtual bool do_always_noconv() const;
    virtual int do_max_length() const;
    virtual int do_encoding() const;
};
```

## <a name="remarks"></a>Osservazioni

La classe descrive un'enumerazione comune a tutte le specializzazioni del modello di classe [codecvt](../standard-library/codecvt-class.md). Il risultato dell'enumerazione descrive i possibili valori restituiti da [do_in](../standard-library/codecvt-class.md#do_in) o [do_out](../standard-library/codecvt-class.md#do_out):

- `ok` Se la conversione tra codifiche di caratteri interne ed esterne ha esito positivo.

- `partial` Se la destinazione non è sufficientemente grande da consentire la conversione.

- `error` Se la sequenza di origine non è in formato corretto.

- `noconv` se la funzione non esegue alcuna conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
