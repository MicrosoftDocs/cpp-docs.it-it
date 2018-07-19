---
title: Classe codecvt_base | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xlocale/std::codecvt_base
dev_langs:
- C++
helpviewer_keywords:
- codecvt_base class
ms.assetid: 7e95c083-91b4-4b3f-8918-0d4ea244a040
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a471cdd63ed46e15c9ec41968ed341eefaf36963
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38965392"
---
# <a name="codecvtbase-class"></a>Classe codecvt_base

Una classe base per la classe codecvt utilizzata per definire un tipo di enumerazione definito come `result`, usato come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.

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

## <a name="remarks"></a>Note

La classe descrive un'enumerazione comune a tutte le specializzazioni della classe modello [codecvt](../standard-library/codecvt-class.md). Il risultato dell'enumerazione descrive i possibili valori restituiti da [do_in](../standard-library/codecvt-class.md#do_in) o [do_out](../standard-library/codecvt-class.md#do_out):

- `ok` Se la conversione tra codifiche di caratteri interni ed esterni ha esito positivo.

- `partial` Se la destinazione non è sufficientemente grande per consentire la conversione.

- `error` Se la sequenza di origine non è nel formato corretto.

- `noconv` se la funzione non esegue alcuna conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
