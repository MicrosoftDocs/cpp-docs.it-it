---
title: locale (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.local
dev_langs:
- C++
helpviewer_keywords:
- local attribute
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b910ce2416dc345e2a36c9858f260ef5b42c2cc8
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203322"
---
# <a name="local-c"></a>local (C++)

Quando usato nell'intestazione dell'interfaccia, consente di usare il compilatore MIDL come generatore di intestazione. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.

## <a name="syntax"></a>Sintassi

```cpp
[local]
```

## <a name="remarks"></a>Note

Il **locale** attributi di C++ ha la stessa funzionalità come la [locale](/windows/desktop/Midl/local) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [call_as](../windows/call-as.md) per un esempio di come usare **locale**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`dispinterface`|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di interfaccia](../windows/interface-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[call_as](../windows/call-as.md)  