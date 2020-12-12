---
description: 'Altre informazioni su: codecvt_utf8_utf16'
title: codecvt_utf8_utf16
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::cvt_utf8_utf16
helpviewer_keywords:
- codecvt_utf8_utf16 class
ms.assetid: 4c12c881-5dba-4e39-b338-0b9caff5af29
ms.openlocfilehash: e80cdaa01ef77b9ce28a773eb4e05056220718a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325075"
---
# <a name="codecvt_utf8_utf16"></a>codecvt_utf8_utf16

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

## <a name="remarks"></a>Commenti

Il flusso di byte può essere scritto in un file binario o un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt>

Spazio dei nomi: std
