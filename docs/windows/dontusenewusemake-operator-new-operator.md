---
title: 'Nuovo operatore dontusenewusemake:: operator | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new
dev_langs:
- C++
helpviewer_keywords:
- operator new operator
ms.assetid: 6af07a0d-2271-430c-9d9b-5a4223fed049
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 99e82de06f64816521c47c78648108a9ae815279
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46443228"
---
# <a name="dontusenewusemakeoperator-new-operator"></a>Operatore DontUseNewUseMake::operator new

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
void* operator new(
   size_t,
   _In_ void* placement
);
```

### <a name="parameters"></a>Parametri

*__unnamed0*<br/>
Un parametro non denominato che specifica il numero di byte di memoria da allocare.

*selezione host*<br/>
Il tipo da allocare.

## <a name="return-value"></a>Valore restituito

Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di operatore **nuovo**.

## <a name="remarks"></a>Note

Operatore di overload **nuove** e impedisce l'utilizzo `RuntimeClass`.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe DontUseNewUseMake](../windows/dontusenewusemake-class.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)