---
title: cpp_quote (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.cpp_quote
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
ms.openlocfilehash: 451313b5bd1eb5011f1175de5c3bcfe6fb054299
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214916"
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

## <a name="remarks"></a>Osservazioni

L'attributo **cpp_quote** C++ è utile se si desidera inserire una direttiva per il preprocessore in un file con estensione IDL.

È anche possibile usare **cpp_quote** e generare un file con estensione h nell'ambito della compilazione MIDL. Se, ad esempio, si dispone C++ di un file di C++ intestazione che usa gli attributi IDL ma non è possibile usare questo file per alcune attività, è possibile compilarlo per creare un file con estensione h generato da MIDL, che dovrebbe essere in grado di usare.

L'attributo **cpp_quote** ha la stessa funzionalità dell'attributo [cpp_quote](/windows/win32/Midl/cpp-quote) MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio per [Dual](dual.md) per un esempio di utilizzo di **cpp_quote**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)
