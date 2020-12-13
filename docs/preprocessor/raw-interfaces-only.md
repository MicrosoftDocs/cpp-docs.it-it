---
description: 'Altre informazioni su: raw_interfaces_only attributo Import'
title: raw_interfaces_only attributo Import
ms.date: 08/29/2019
f1_keywords:
- raw_interfaces_only
helpviewer_keywords:
- raw_interfaces_only attribute
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
ms.openlocfilehash: f043bef5cde0454ce9f08f45efb0417aa7fdbb2d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142740"
---
# <a name="raw_interfaces_only-import-attribute"></a>raw_interfaces_only attributo Import

**Sezione specifica C++**

Evita la generazione di funzioni wrapper di gestione degli errori e delle dichiarazioni di [Proprietà](../cpp/property-cpp.md) che utilizzano tali funzioni wrapper.

## <a name="syntax"></a>Sintassi

> **#import** **raw_interfaces_only** della *libreria di tipi*

## <a name="remarks"></a>Commenti

L'attributo **raw_interfaces_only** causa anche il prefisso predefinito utilizzato per la denominazione delle funzioni non di proprietà da rimuovere. Il prefisso è in genere `raw_` . Se viene specificato questo attributo, i nomi delle funzioni vengono presi direttamente dalla libreria dei tipi.

Questo attributo consente di esporre solo i contenuti di basso livello della libreria dei tipi.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
