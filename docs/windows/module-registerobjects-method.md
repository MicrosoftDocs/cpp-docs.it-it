---
title: 'Metodo Module:: registerobjects | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::RegisterObjects
dev_langs:
- C++
helpviewer_keywords:
- RegisterObjects method
ms.assetid: db4077b7-068d-4534-aaa5-41b5444ccb49
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8c9a44fed853fe2f4dcd3196e926b3848566ab4e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42597026"
---
# <a name="moduleregisterobjects-method"></a>Metodo Module::RegisterObjects

Registra gli oggetti COM o Windows Runtime in modo che altre applicazioni possono connettersi a essi.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT RegisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### <a name="parameters"></a>Parametri

*modulo*  
Una matrice di oggetti COM o Windows Runtime.

*ServerName*  
Nome del server che ha creato gli oggetti.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica il motivo per l'operazione non riuscita.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)