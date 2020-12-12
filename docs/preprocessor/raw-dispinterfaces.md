---
description: 'Altre informazioni su: raw_dispinterfaces attributo Import'
title: raw_dispinterfaces attributo Import
ms.date: 08/29/2019
f1_keywords:
- raw_dispinterfaces
helpviewer_keywords:
- raw_dispinterfaces attribute
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
ms.openlocfilehash: 447f76bdee16d2719c02ad4a73883f8f176f2584
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202015"
---
# <a name="raw_dispinterfaces-import-attribute"></a>raw_dispinterfaces attributo Import

**Sezione specifica C++**

Indica al compilatore di generare funzioni wrapper di basso livello per i metodi di interfaccia dispatch e per le proprietà che chiamano `IDispatch::Invoke` e restituiscono il codice di errore HRESULT.

## <a name="syntax"></a>Sintassi

> **#import** **raw_dispinterfaces** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Se questo attributo non è specificato, vengono generati solo wrapper di alto livello che generano eccezioni C++ in caso di errore.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
