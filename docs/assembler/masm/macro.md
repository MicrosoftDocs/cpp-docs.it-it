---
title: MACRO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- MACRO
dev_langs:
- C++
helpviewer_keywords:
- MACRO directive
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c2b7469314bc1b65f960df1ca582acb6dbb4624e
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32054445"
---
# <a name="macro"></a>MACRO
Contrassegna un blocco di macro chiamato *nome* e stabilisce *parametro* segnaposto per gli argomenti passati quando viene chiamata la macro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
   name MACRO [[parameter [[:REQ | :=default | :VARARG]]]]...  
statements  
ENDM [[value]]  
```  
  
## <a name="remarks"></a>Note  
 Restituisce una funzione macro *valore* all'istruzione chiamante.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)