---
title: codecvt_utf16 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- codecvt/std::codecvt_utf16
dev_langs:
- C++
helpviewer_keywords:
- codecvt_utf16 class
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 68b6b058d6962758a3b3e42fcde943699820fa12
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="codecvtutf16"></a>codecvt_utf16
Rappresenta un facet di [impostazioni locali](../standard-library/locale-class.md) che esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE o UTF-16BE.

```
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>
```
## <a name="parameters"></a>Parametri
`Elem`  
Tipo di elemento a caratteri "wide".  
`Maxcode`  
Numero massimo di caratteri per il facet delle impostazioni locali.  
`Mode`  
Informazioni di configurazione per il facet delle impostazioni locali.  

## <a name="remarks"></a>Note
Questa classe modello esegue la conversione tra caratteri wide codificati come UCS-2 o UCS-4 e un flusso di byte codificato come UTF-16LE, se Mode & little_endian, altrimenti UTF-16BE.

Il flusso di byte deve essere scritto in un file binario, poiché si può danneggiare se viene scritto in un file di testo.

## <a name="requirements"></a>Requisiti
Intestazione: \<codecvt> Spazio dei nomi: std
