---
title: 'Metodo Module:: registerwinrtobject | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::RegisterWinRTObject
dev_langs:
- C++
helpviewer_keywords:
- RegisterWinRTObject method
ms.assetid: a2782c9c-b9c5-4e4b-9c8d-ef513aea20c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 496b1ccac5b998ba08f4e2eccfe31ffd18f2c37d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431788"
---
# <a name="moduleregisterwinrtobject-method"></a>Metodo Module::RegisterWinRTObject

Registra uno o più oggetti di Windows Runtime in modo che altre applicazioni possono connettersi a essi.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT RegisterWinRTObject(const wchar_t* serverName,
   wchar_t** activatableClassIds,
   WINRT_REGISTRATION_COOKIE* cookie,
   unsigned int count)  
```

### <a name="parameters"></a>Parametri

*ServerName*<br/>
Un nome che specifichi un sottoinsieme degli oggetti interessati da questa operazione.

*activatableClassIds*<br/>
Matrice di attivabile CLSID da registrare.

*Cookie*<br/>
Un valore che identifica gli oggetti della classe che sono stati registrati. Questo valore viene utilizzato in un secondo momento per revocare la registrazione.

*count*<br/>
Il numero di oggetti da registrare.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, un errore HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)