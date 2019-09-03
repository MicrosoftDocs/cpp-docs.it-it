---
title: raw_method_prefix
ms.date: 08/29/2019
f1_keywords:
- raw_method_prefix
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
ms.openlocfilehash: b1bc536507716e5c117718ec825bf7fe76c84b61
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216140"
---
# <a name="raw_method_prefix"></a>raw_method_prefix

**C++Specifico**

Specifica un prefisso diverso per evitare conflitti di nomi.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **raw_method_prefix (** "*Prefix*" **)**

### <a name="parameters"></a>Parametri

*Prefisso*\
Prefisso da utilizzare.

## <a name="remarks"></a>Note

Le proprietà e i metodi di basso livello vengono esposti dalle funzioni membro denominate utilizzando un prefisso predefinito **raw_** , per evitare conflitti di nomi con le funzioni membro di gestione degli errori di alto livello.

> [!NOTE]
> Gli effetti dell'attributo **raw_method_prefix** sono invariati dalla presenza dell'attributo [raw_interfaces_only](raw-interfaces-only.md) . **Raw_method_prefix** ha sempre la precedenza sulla `raw_interfaces_only` specifica di un prefisso. Se entrambi gli attributi vengono utilizzati nella stessa `#import` istruzione, viene utilizzato il prefisso specificato dall'attributo **raw_method_prefix** .

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
