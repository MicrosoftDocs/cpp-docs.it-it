---
title: .DOSSEG | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .DOSSEG
dev_langs:
- C++
helpviewer_keywords:
- .DOSSEG directive
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3817cfe98758faf86ea87d74e02657598c3e806b
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32054886"
---
# <a name="dosseg"></a>.DOSSEG
Ordina i segmenti in base alla convenzione di segmento MS-DOS: codice prima di tutto, quindi segmenti non in DGROUP e quindi segmenti in DGROUP.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
.DOSSEG  
  
```  
  
## <a name="remarks"></a>Note  
 I segmenti DGROUP rispettare questo ordine: segmenti non BSS o STACK, quindi BSS segmenti e infine segmenti STACK. Utilizzato principalmente per garantire il supporto di CodeView in programmi autonomi di MASM. Uguale a [DOSSEG](../../assembler/masm/dosseg.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)