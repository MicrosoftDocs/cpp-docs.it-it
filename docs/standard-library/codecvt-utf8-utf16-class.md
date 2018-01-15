---
title: codecvt_utf8_utf16 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: codecvt/std::cvt_utf8_utf16
dev_langs: C++
helpviewer_keywords: codecvt_utf8_utf16 class
ms.assetid: 4c12c881-5dba-4e39-b338-0b9caff5af29
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d16a5e316119470f96c115c4ba8cbe47fabd3831
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="codecvtutf8utf16"></a>codecvt_utf8_utf16
Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UTF-16 e un flusso di byte codificato come UTF-8.

```
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8_utf16 : public _STD codecvt<Elem, char, StateType>
```

## <a name="parameters"></a>Parametri

`Elem`  
Tipo di elemento a caratteri "wide".  
`Maxcode`  
Numero massimo di caratteri per il facet delle impostazioni locali.  
`Mode`  
Informazioni di configurazione per il facet delle impostazioni locali.  

## <a name="remarks"></a>Note

Il flusso di byte può essere scritto in un file binario o un file di testo.  

## <a name="requirements"></a>Requisiti

Intestazione: <codecvt> Spazio dei nomi: std
