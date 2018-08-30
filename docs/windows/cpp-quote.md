---
title: cpp_quote | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: da9e378ff75ec67660b0c29a5765be88a2c06496
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205666"
---
# <a name="cppquote"></a>cpp_quote

Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ cpp_quote(
   "statement"
) ];
```

### <a name="parameters"></a>Parametri

*istruzione*  
Un'istruzione di C.

## <a name="remarks"></a>Note

Il **cpp_quote** C++ attributo è utile se si desidera inserire una direttiva del preprocessore in un file con estensione idl.

È anche possibile usare **cpp_quote** e generare un file con estensione h come parte della compilazione MIDL. Ad esempio, se si dispone di un file di intestazione C++ che utilizza attributi IDL C++, ma non è possibile usare questo file per alcune attività, quindi è possibile compilarlo per creare un file generati da MIDL. h, che dovrebbe essere possibile usare.

Il **cpp_quote** attributo ha la stessa funzionalità come la [cpp_quote](/windows/desktop/Midl/cpp-quote) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [duale](../windows/dual.md) per un esempio di come usare usare **cpp_quote**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi autonomi](../windows/stand-alone-attributes.md)  