---
title: . STACK | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .STACK
dev_langs:
- C++
helpviewer_keywords:
- .STACK directive
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dab47677da8db2afca73a078b110300a017e7c8d
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32052300"
---
# <a name="stack"></a>.STACK
Se usato con [. MODELLO](../../assembler/masm/dot-model.md), definisce un segmento di stack (con nome segmento STACK). Facoltativo `size` specifica il numero di byte per lo stack (impostazione predefinita 1.024). Il `.STACK` direttiva chiude automaticamente l'istruzione dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
.STACK [[size]]  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)