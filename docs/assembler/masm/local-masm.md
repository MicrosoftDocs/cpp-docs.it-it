---
title: LOCALE (MASM) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- Local
dev_langs:
- C++
helpviewer_keywords:
- LOCAL directive
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ed9926d23f2e1e8636f31a6f586609ae22d38acd
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32053571"
---
# <a name="local-masm"></a>LOCAL (MASM)
Nella direttiva prima, all'interno di una macro, **locale** definisce le etichette che sono univoche per ogni istanza della macro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      LOCAL localname [[, localname]]...  
LOCAL label [[ [count ] ]] [[:type]] [[, label [[ [count] ]] [[type]]]]...  
```  
  
## <a name="remarks"></a>Note  
 Nella seconda direttiva, all'interno di una definizione della stored procedure (**PROC**), **locale** crea variabili basata su stack che esistono per la durata della procedura. Il *etichetta* può essere una variabile semplice o una matrice contenente *conteggio* elementi.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)