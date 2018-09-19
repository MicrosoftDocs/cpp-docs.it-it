---
title: _com_error::Error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::Error
- Error
dev_langs:
- C++
helpviewer_keywords:
- Error method [C++]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9d56fcf7faaee9d3b0e02964163aa62372a30a78
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109295"
---
# <a name="comerrorerror"></a>_com_error::Error

**Sezione specifica Microsoft**

Recupera il valore HRESULT passato al costruttore.

## <a name="syntax"></a>Sintassi

```
HRESULT Error( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Elemento HRESULT non elaborato passato al costruttore.

## <a name="remarks"></a>Note

Recupera l'elemento HRESULT incapsulato in un `_com_error` oggetto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)