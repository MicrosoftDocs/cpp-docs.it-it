---
title: codecvt_utf16
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_utf16
helpviewer_keywords:
- codecvt_utf16 class
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
ms.openlocfilehash: 18b95884bb673305398739968ef2530e8c4778d1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50649137"
---
# <a name="codecvtutf16"></a>codecvt_utf16

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

*Elem*<br/>
Tipo di elemento a caratteri "wide".

*Maxcode*<br/>
Numero massimo di caratteri per il facet delle impostazioni locali.

*Modalità*<br/>
Informazioni di configurazione per il facet delle impostazioni locali.

## <a name="remarks"></a>Note

Questa classe modello esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE, se Mode & little_endian, altrimenti UTF-16BE.

Il flusso di byte deve essere scritto in un file binario, poiché si può danneggiare se viene scritto in un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt >

Namespace: std