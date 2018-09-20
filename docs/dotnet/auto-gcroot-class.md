---
title: Classe auto_gcroot | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::auto_gcroot
- msclr.auto_gcroot
- auto_gcroot
dev_langs:
- C++
helpviewer_keywords:
- auto_gcroot
ms.assetid: b5790912-265d-463e-a486-47302e91042a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 48412a932ff3752b0613f7045cd88992332b7917
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46423228"
---
# <a name="autogcroot-class"></a>Classe auto_gcroot

Gestione automatica delle risorse (ad esempio [classe auto_ptr](../standard-library/auto-ptr-class.md)) che può essere usato per incorporare un handle virtuale in un tipo nativo.

## <a name="syntax"></a>Sintassi

```cpp
template<typename _element_type>
class auto_gcroot;
```

#### <a name="parameters"></a>Parametri

*_element_type*<br/>
Tipo gestito da incorporare.

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\auto_gcroot.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[auto_gcroot](../dotnet/auto-gcroot.md)<br/>
[Membri auto_gcroot](../dotnet/auto-gcroot-members.md)<br/>
[Procedura: Dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)<br/>
[Classe auto_handle](../dotnet/auto-handle-class.md)