---
title: .CODE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .CODE
dev_langs:
- C++
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 59e376fc9c10ab8891b02e4da334341ae0534b73
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32051234"
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