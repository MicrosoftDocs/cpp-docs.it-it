---
title: attributo di importazione raw_dispinterfaces
ms.date: 08/29/2019
f1_keywords:
- raw_dispinterfaces
helpviewer_keywords:
- raw_dispinterfaces attribute
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
ms.openlocfilehash: 73c58b72b27de8dcf96e8ab9464d0fb6bce12b66
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216221"
---
# <a name="raw_dispinterfaces-import-attribute"></a>attributo di importazione raw_dispinterfaces

**C++Specifico**

Indica al compilatore di generare funzioni wrapper di basso livello per i metodi di interfaccia dispatch e per le `IDispatch::Invoke` proprietà che chiamano e restituiscono il codice di errore HRESULT.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **raw_dispinterfaces**

## <a name="remarks"></a>Note

Se questo attributo non è specificato, vengono generati solo wrapper di alto livello che generano C++ eccezioni in caso di errore.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
