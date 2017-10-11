---
title: codecvt_utf8 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- codecvt/std::codecvt_utf8
dev_langs:
- C++
helpviewer_keywords:
- codecvt_utf8 class
ms.assetid: 2a87478f-e2d4-4b8d-ad9c-00add01d1bb0
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 873a4e1834b13ac69370223339dd395b650eb679
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="codecvtutf8"></a>codecvt_utf8
Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-8.

```
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8 : public std::codecvt<Elem, char, StateType>
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

