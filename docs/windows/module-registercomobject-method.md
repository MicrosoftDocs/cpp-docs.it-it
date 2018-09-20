---
title: 'Metodo Module:: registercomobject | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::RegisterCOMObject
dev_langs:
- C++
helpviewer_keywords:
- RegisterCOMObject method
ms.assetid: 59f223dc-03c6-429d-95da-b74b3f73b702
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7cccebf6e1c6004a2416f4fdeb254369f9aa7b72
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410312"
---
# <a name="moduleregistercomobject-method"></a>Metodo Module::RegisterCOMObject

Registra uno o più oggetti COM in modo che altre applicazioni possono connettersi a essi.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW virtual HRESULT RegisterCOMObject(
   const wchar_t* serverName,
   IID* clsids,
   IClassFactory** factories,
   DWORD* cookies,
   unsigned int count);

```

### <a name="parameters"></a>Parametri

*ServerName*<br/>
Nome completo di un server.

*CLSID*<br/>
Matrice di CLSID da registrare.

*factory*<br/>
Matrice di interfacce IUnknown degli oggetti classe cui disponibilità è in corso di pubblicazione.

*Cookie*<br/>
Al termine dell'operazione, una matrice di puntatori ai valori che identificano la classe di oggetti che sono stati registrati. Questi valori vengono usati in un secondo momento revocare la registrazione.

*count*<br/>
Il numero di CLSID da registrare.

## <a name="return-value"></a>Valore restituito

S_OK se zioni riuscite; in caso contrario, HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.

## <a name="remarks"></a>Note

Gli oggetti COM vengono registrati con l'enumeratore CLSCTX_LOCAL_SERVER dell'enumerazione CLSCTX.

Il tipo di connessione per gli oggetti registrati viene specificato tramite la combinazione dell'oggetto corrente *comflag* parametro di modello e l'enumeratore REGCLS_SUSPENDED dell'enumerazione REGCLS.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)