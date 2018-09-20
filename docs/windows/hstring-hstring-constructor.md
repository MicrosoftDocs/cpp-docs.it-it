---
title: 'Costruttore hstring:: Hstring | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::HString
dev_langs:
- C++
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 59ec7c1635b825cc300e28e5c02e2a3864a6c123
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442253"
---
# <a name="hstringhstring-constructor"></a>Costruttore HString::HString

Inizializza una nuova istanza di **HString** classe.

## <a name="syntax"></a>Sintassi

```cpp
HString(HSTRING hstr = nullptr) throw();
HString(HString&& other) throw();
```

#### <a name="parameters"></a>Parametri

*HSTR*<br/>
Un handle HSTRING.

*other*<br/>
Un oggetto esistente **HString** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un nuovo **HString** oggetto che è vuota.

Il secondo costruttore inizializza un nuovo **HString** oggetto sul valore dell'oggetto esistente *altri* parametro e quindi distrugge il *altri* parametro.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HString](../windows/hstring-class.md)