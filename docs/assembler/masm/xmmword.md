---
title: XMMWORD | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- XMMWORD
dev_langs:
- C++
helpviewer_keywords:
- XMMWORD directive
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f8fd8e6c82a3275161e519eeead490473e8d64ab
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="xmmword"></a>XMMWORD
Utilizzato per gli operandi multimediali 128 bit con istruzioni MMX e SSE (XMM).  
  
## <a name="syntax"></a>Sintassi  
  
```  
XMMWORD  
```  
  
## <a name="remarks"></a>Note  
 `XMMWORD` rappresenta lo stesso tipo [m128](../../cpp/m128.md).  
  
## <a name="example"></a>Esempio  
  
```  
movdqa   xmm0, xmmword ptr [ebx]  
```