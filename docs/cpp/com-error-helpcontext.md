---
title: _com_error::HelpContext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::HelpContext
dev_langs:
- C++
helpviewer_keywords:
- HelpContext method [C++]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4c2a1810410194f1261da907199a3b6665e5be30
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46074370"
---
# <a name="comerrorhelpcontext"></a>_com_error::HelpContext

**Sezione specifica Microsoft**

Le chiamate `IErrorInfo::GetHelpContext` (funzione).

## <a name="syntax"></a>Sintassi

```
DWORD HelpContext( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato del `IErrorInfo::GetHelpContext` per il `IErrorInfo` registrato nel `_com_error` oggetto. Se nessun `IErrorInfo` è registrato, restituisce zero.

## <a name="remarks"></a>Note

Qualsiasi errore durante la chiamata di `IErrorInfo::GetHelpContext` metodo viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)