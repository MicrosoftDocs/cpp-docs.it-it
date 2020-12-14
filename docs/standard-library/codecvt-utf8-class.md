---
description: 'Altre informazioni su: codecvt_utf8'
title: codecvt_utf8
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_utf8
helpviewer_keywords:
- codecvt_utf8 class
ms.assetid: 2a87478f-e2d4-4b8d-ad9c-00add01d1bb0
ms.openlocfilehash: b0da37607d563786285564d17b2c8a49e9e064bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234033"
---
# <a name="codecvt_utf8"></a>codecvt_utf8

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-8.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8 : public std::codecvt<Elem, char, StateType>
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
