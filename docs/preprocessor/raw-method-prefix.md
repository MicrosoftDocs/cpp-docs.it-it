---
description: 'Altre informazioni su: raw_method_prefix'
title: raw_method_prefix
ms.date: 08/29/2019
f1_keywords:
- raw_method_prefix
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
ms.openlocfilehash: 9e05f70814e48a4460287e96905b543f7d76dde6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201989"
---
# <a name="raw_method_prefix"></a>raw_method_prefix

**Sezione specifica C++**

Specifica un prefisso diverso per evitare conflitti di nomi.

## <a name="syntax"></a>Sintassi

> **#import** raw_method_prefix della *libreria di tipi* **(** "*Prefix*" **)**

### <a name="parameters"></a>Parametri

*Prefisso*\
Prefisso da utilizzare.

## <a name="remarks"></a>Commenti

Le proprietà e i metodi di basso livello vengono esposti dalle funzioni membro denominate utilizzando un prefisso predefinito di **raw_**, per evitare conflitti di nomi con le funzioni membro di gestione degli errori di alto livello.

> [!NOTE]
> Gli effetti dell'attributo **raw_method_prefix** sono invariati dalla presenza dell'attributo [raw_interfaces_only](raw-interfaces-only.md) . Il **raw_method_prefix** ha sempre la precedenza sulla `raw_interfaces_only` specifica di un prefisso. Se nella stessa istruzione vengono utilizzati entrambi gli attributi `#import` , viene utilizzato il prefisso specificato dall'attributo **raw_method_prefix** .

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
