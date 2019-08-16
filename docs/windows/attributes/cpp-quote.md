---
title: cpp_quote (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.cpp_quote
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
ms.openlocfilehash: 905c9fc41b1b42dffe9c7b39fae0b096cdc24950
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501758"
---
# <a name="cpp_quote"></a>cpp_quote

Genera la stringa specificata, senza virgolette, nel file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ cpp_quote("statement") ];
```

### <a name="parameters"></a>Parametri

*istruzione*<br/>
Istruzione C.

## <a name="remarks"></a>Note

L'attributo **cpp_quote** C++ è utile se si desidera inserire una direttiva per il preprocessore in un file con estensione IDL.

È anche possibile usare **cpp_quote** e generare un file con estensione h come parte della compilazione MIDL. Se, ad esempio, si dispone C++ di un file di C++ intestazione che usa gli attributi IDL ma non è possibile usare questo file per alcune attività, è possibile compilarlo per creare un file con estensione h generato da MIDL, che dovrebbe essere in grado di usare.

L'attributo **cpp_quote** ha la stessa funzionalità dell'attributo MIDL di [cpp_quote](/windows/win32/Midl/cpp-quote) .

## <a name="example"></a>Esempio

Vedere l'esempio per [Dual](dual.md) per un esempio di uso di **cpp_quote**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)