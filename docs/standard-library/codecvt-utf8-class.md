---
title: codecvt_utf8 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- codecvt/std::codecvt_utf8
dev_langs:
- C++
helpviewer_keywords:
- codecvt_utf8 class
ms.assetid: 2a87478f-e2d4-4b8d-ad9c-00add01d1bb0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 58551874227bde5d158946c7df9c77bcc0ff3ef3
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108345"
---
# <a name="codecvtutf8"></a>codecvt_utf8

Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-8.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8 : public std::codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

*Elem*<br/>
Tipo di elemento a caratteri "wide".
*Maxcode*<br/>
Numero massimo di caratteri per il facet delle impostazioni locali.
*Modalità*<br/>
Informazioni di configurazione per il facet delle impostazioni locali.

## <a name="remarks"></a>Note

Il flusso di byte può essere scritto in un file binario o un file di testo.

## <a name="requirements"></a>Requisiti

Intestazione: \<codecvt > \
Namespace: std
