---
title: auto_inline | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- auto_inline_CPP
- vc-pragma.auto_inline
dev_langs:
- C++
helpviewer_keywords:
- pragmas, auto_inline
- auto_inline pragma
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc1b8a3b8539fb4871e4a28f4635c8012b9f80a2
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42539998"
---
# <a name="autoinline"></a>auto_inline
Esclude tutte le funzioni definite all'interno dell'intervallo in cui **disattivata** è specificato da considerarsi come candidate per l'espansione inline automatica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma auto_inline( [{on | off}] )  
```  
  
## <a name="remarks"></a>Note  

Usare la **auto_inline** pragma, inserirlo prima e immediatamente dopo (non in) una definizione di funzione. Il pragma viene applicato alla prima definizione di funzione dopo che è stato rilevato il pragma.  
  
## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)