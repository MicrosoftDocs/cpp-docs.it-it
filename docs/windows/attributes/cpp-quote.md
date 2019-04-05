---
title: cpp_quote (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.cpp_quote
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
ms.openlocfilehash: 378435ced5a541785b7b32bc9d2f408034d5a2d8
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59024682"
---
# <a name="cppquote"></a>cpp_quote

Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ cpp_quote("statement") ];
```

### <a name="parameters"></a>Parametri

*statement*<br/>
Un'istruzione di C.

## <a name="remarks"></a>Note

Il **cpp_quote** C++ attributo è utile se si desidera inserire una direttiva del preprocessore in un file con estensione idl.

È anche possibile usare **cpp_quote** e generare un file con estensione h come parte della compilazione MIDL. Ad esempio, se si dispone di un file di intestazione C++ che utilizza attributi IDL C++, ma non è possibile usare questo file per alcune attività, quindi è possibile compilarlo per creare un file generati da MIDL. h, che dovrebbe essere possibile usare.

Il **cpp_quote** attributo ha la stessa funzionalità come la [cpp_quote](/windows/desktop/Midl/cpp-quote) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [duale](dual.md) per un esempio di come usare usare **cpp_quote**.

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