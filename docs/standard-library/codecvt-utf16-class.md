---
description: 'Altre informazioni su: codecvt_utf16'
title: codecvt_utf16
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_utf16
helpviewer_keywords:
- codecvt_utf16 class
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
ms.openlocfilehash: 264324d0f827e8999b065205010874ebf62ca501
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325088"
---
# <a name="codecvt_utf16"></a>codecvt_utf16

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

*Elem*\
Tipo di elemento a caratteri "wide".

*Maxcode*\
Numero massimo di caratteri per il facet delle impostazioni locali.

*Modalità*\
Informazioni di configurazione per il facet delle impostazioni locali.

## <a name="remarks"></a>Commenti

Questo modello di classe esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE, se Mode & little_endian o UTF-16BE in caso contrario.

Il flusso di byte deve essere scritto in un file binario, poiché si può danneggiare se viene scritto in un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt>

Spazio dei nomi: std
