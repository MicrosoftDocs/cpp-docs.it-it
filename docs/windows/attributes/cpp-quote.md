---
title: cpp_quote (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.cpp_quote
dev_langs:
- C++
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f3d6042866661659102090380c95e7d04e9bcd6c
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791325"
---
# <a name="cppquote"></a>cpp_quote

Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ cpp_quote("statement") ];
```

### <a name="parameters"></a>Parametri

*istruzione*<br/>
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
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)  