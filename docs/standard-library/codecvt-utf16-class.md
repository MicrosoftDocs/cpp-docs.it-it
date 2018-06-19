---
title: codecvt_utf16 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- codecvt/std::codecvt_utf16
dev_langs:
- C++
helpviewer_keywords:
- codecvt_utf16 class
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 93113e64e9b6a72f40557d063f83724c5ff8da62
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33841066"
---
# <a name="codecvtutf16"></a>codecvt_utf16

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

`Elem` Il tipo di elemento a caratteri "wide".
`Maxcode` Numero massimo di caratteri per il facet delle impostazioni locali.
`Mode` Informazioni di configurazione per il facet delle impostazioni locali.

## <a name="remarks"></a>Note

Questa classe modello esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE, se Mode & little_endian, altrimenti UTF-16BE.

Il flusso di byte deve essere scritto in un file binario, poiché si può danneggiare se viene scritto in un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt> Spazio dei nomi: std