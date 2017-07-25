---
title: _CIsin | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CIsin
apilocation:
- msvcr80.dll
- msvcr100.dll
- msvcrt.dll
- msvcr110.dll
- msvcr120.dll
- msvcr90.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- CIsin
- _CIsin
dev_langs:
- C++
helpviewer_keywords:
- _CIsin intrinsic
- CIsin intrinsic
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 589252c41b8acef0555322dcb1f006863a86f113
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="cisin"></a>_CIsin
Calcola il seno del primo valore dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _CIsin();  
```  
  
## <a name="remarks"></a>Note  
 Questa versione della funzione `sin` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.  
  
 Il valore risultante viene inserito all'inizio dello stack.  
  
## <a name="requirements"></a>Requisiti  
 **Piattaforma:** x86  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)
