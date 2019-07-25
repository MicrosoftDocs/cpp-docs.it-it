---
title: codecvt_utf8_utf16
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::cvt_utf8_utf16
helpviewer_keywords:
- codecvt_utf8_utf16 class
ms.assetid: 4c12c881-5dba-4e39-b338-0b9caff5af29
ms.openlocfilehash: 879ebe6a75d76a84ef4250b95c41e02eccba5517
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68458650"
---
# <a name="codecvtutf8utf16"></a>codecvt_utf8_utf16

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UTF-16 e un flusso di byte codificato come UTF-8.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8_utf16 : public _STD codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

*Elem*\
Tipo di elemento a caratteri "wide".

*Maxcode*\
Numero massimo di caratteri per il facet delle impostazioni locali.

*Modalità*\
Informazioni di configurazione per il facet delle impostazioni locali.

## <a name="remarks"></a>Note

Il flusso di byte può essere scritto in un file binario o un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt >

Spazio dei nomi: STD
