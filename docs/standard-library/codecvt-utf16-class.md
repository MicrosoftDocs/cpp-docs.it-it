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
ms.openlocfilehash: cdfcf3c6a562f7aab0164e3d63d468ba39ec0023
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954099"
---
# <a name="codecvtutf16"></a>codecvt_utf16

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

*Elem* il tipo di elemento di caratteri "wide".
*Maxcode* il numero massimo di caratteri per il facet delle impostazioni locali.
*Modalità* informazioni di configurazione per il facet delle impostazioni locali.

## <a name="remarks"></a>Note

Questa classe modello esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE, se Mode & little_endian, altrimenti UTF-16BE.

Il flusso di byte deve essere scritto in un file binario, poiché si può danneggiare se viene scritto in un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt> Spazio dei nomi: std