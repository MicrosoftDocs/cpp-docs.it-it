---
title: codecvt_utf8
ms.date: 11/04/2016
f1_keywords:
- codecvt/std::codecvt_utf8
helpviewer_keywords:
- codecvt_utf8 class
ms.assetid: 2a87478f-e2d4-4b8d-ad9c-00add01d1bb0
ms.openlocfilehash: dcbb34c300d7c15f89c4a882275be0efd68359dc
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68458707"
---
# <a name="codecvtutf8"></a>codecvt_utf8

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

## <a name="remarks"></a>Note

Il flusso di byte può essere scritto in un file binario o un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt >

Spazio dei nomi: STD
