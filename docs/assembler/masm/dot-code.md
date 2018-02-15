---
title: .CODE | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- .CODE
dev_langs:
- C++
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: de0a9b8930c04929b05b02931a1f796d28a78099
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="code"></a>.CODE
Se usato con [. MODELLO](../../assembler/masm/dot-model.md), indica l'inizio di un segmento di codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
.CODE [[name]]  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`name`|Parametro facoltativo che specifica il nome del segmento di codice. Il nome predefinito è text per compact piccola, piccola e flat [modelli](../../assembler/masm/dot-model.md). Il nome predefinito è *modulename*Text per altri modelli.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)   
 [.DATA](../../assembler/masm/dot-data.md)