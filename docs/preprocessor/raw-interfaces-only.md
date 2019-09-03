---
title: attributo di importazione raw_interfaces_only
ms.date: 08/29/2019
f1_keywords:
- raw_interfaces_only
helpviewer_keywords:
- raw_interfaces_only attribute
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
ms.openlocfilehash: 4b79aa4dbafa204d84f4d6ed7ec78fdec1b81fa7
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216214"
---
# <a name="raw_interfaces_only-import-attribute"></a>attributo di importazione raw_interfaces_only

**C++Specifico**

Evita la generazione di funzioni wrapper di gestione degli errori e delle dichiarazioni di [Proprietà](../cpp/property-cpp.md) che utilizzano tali funzioni wrapper.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **raw_interfaces_only**

## <a name="remarks"></a>Note

L'attributo **raw_interfaces_only** causa inoltre il prefisso predefinito utilizzato per la denominazione delle funzioni non di proprietà da rimuovere. Il prefisso è `raw_`in genere. Se viene specificato questo attributo, i nomi delle funzioni vengono presi direttamente dalla libreria dei tipi.

Questo attributo consente di esporre solo i contenuti di basso livello della libreria dei tipi.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
