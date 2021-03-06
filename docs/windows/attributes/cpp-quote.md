---
description: 'Altre informazioni su: cpp_quote'
title: cpp_quote (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.cpp_quote
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
ms.openlocfilehash: fe8424fd16cb75e320f8c1a1f8e3e444cf2185ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333176"
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

## <a name="remarks"></a>Commenti

L'attributo **cpp_quote** C++ è utile se si desidera inserire una direttiva per il preprocessore in un file con estensione IDL.

È anche possibile usare **cpp_quote** e generare un file con estensione h nell'ambito della compilazione MIDL. Se, ad esempio, si dispone di un file di intestazione C++ che usa gli attributi IDL di C++, ma non è possibile usare questo file per alcune attività, è possibile compilarlo per creare un file con estensione h generato da MIDL, che dovrebbe essere possibile usare.

L'attributo **cpp_quote** ha la stessa funzionalità dell'attributo [cpp_quote](/windows/win32/Midl/cpp-quote) MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio per [Dual](dual.md) per un esempio di utilizzo di **cpp_quote**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)
