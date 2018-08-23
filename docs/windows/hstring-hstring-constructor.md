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
ms.openlocfilehash: 80af8f463d6cd1af631c6cb37c0239e7a9e85c3f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595885"
---
# <a name="hstringhstring-constructor"></a>Costruttore HString::HString

Inizializza una nuova istanza di **HString** classe.

## <a name="syntax"></a>Sintassi

```cpp
HString(HSTRING hstr = nullptr) throw();
HString(HString&& other) throw();
```

#### <a name="parameters"></a>Parametri

*HSTR*  
Un handle HSTRING.

*other*  
Un oggetto esistente **HString** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un nuovo **HString** oggetto che è vuota.

Il secondo costruttore inizializza un nuovo **HString** oggetto sul valore dell'oggetto esistente *altri* parametro e quindi distrugge il *altri* parametro.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HString](../windows/hstring-class.md)