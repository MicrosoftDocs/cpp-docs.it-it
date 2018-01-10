---
title: . CODICE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: .CODE
dev_langs: C++
helpviewer_keywords: .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 150b5a0c26be3c3c4d0412157179ebfcbec128e7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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