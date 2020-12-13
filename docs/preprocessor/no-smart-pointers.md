---
description: 'Altre informazioni su: no_smart_pointers attributo Import'
title: no_smart_pointers attributo Import
ms.date: 08/29/2019
f1_keywords:
- no_smart_pointers
helpviewer_keywords:
- no_smart_pointers attribute
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
ms.openlocfilehash: cf2299668a2e1b24cdf45069766466f448ee9d66
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333275"
---
# <a name="no_smart_pointers-import-attribute"></a>no_smart_pointers attributo Import

**Sezione specifica C++**

Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.

## <a name="syntax"></a>Sintassi

> **#import** **no_smart_pointers** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Per impostazione predefinita, quando si utilizza `#import`, si ottiene una dichiarazione del puntatore intelligente per tutte le interfacce nella libreria dei tipi. Questi puntatori intelligenti sono di tipo [_com_ptr_t](../cpp/com-ptr-t-class.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
