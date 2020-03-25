---
title: ActivationFactoryCallback (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::ActivationFactoryCallback
helpviewer_keywords:
- ActivationFactoryCallback function
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
ms.openlocfilehash: 0be4bebcc561cdf1df3f2502c8cc1927bdc65564
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214214"
---
# <a name="activationfactorycallback-function"></a>ActivationFactoryCallback (funzione)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(
   HSTRING activationId,
   IActivationFactory **ppFactory
);
```

### <a name="parameters"></a>Parametri

*activationId*<br/>
Handle per una stringa che specifica un nome di classe di Runtime.

*ppFactory*<br/>
Al termine di questa operazione, una factory di attivazione che corrisponde al parametro *ActivationID*.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Gli HRESULT di errore probabili sono CLASS_E_CLASSNOTAVAILABLE e E_INVALIDARG.

## <a name="remarks"></a>Osservazioni

Ottiene la factory di attivazione per l'ID di attivazione specificato.

Il Windows Runtime chiama questa funzione di callback per richiedere un oggetto specificato in base al nome della classe di Runtime.

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
