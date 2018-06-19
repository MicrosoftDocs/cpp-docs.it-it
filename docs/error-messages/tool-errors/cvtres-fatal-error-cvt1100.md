---
title: Errore irreversibile CVT1100 di CVTRES | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CVT1100
dev_langs:
- C++
helpviewer_keywords:
- CVT1100
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 32085c4c37c82567eb78f46b52bcc4a6c41daae5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302659"
---
# <a name="cvtres-fatal-error-cvt1100"></a>Errore irreversibile CVT1100 di CVTRES
risorsa duplicata, tipo: tipo, nome: nome, lingua:, flag: flag, dimensioni: dimensioni  
  
 La risorsa è stata specificata più volte.  
  
 Questo errore può verificarsi se il linker sta creando una libreria dei tipi e non è stato specificato [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e 1 è già utilizzato da una risorsa nel progetto. In questo caso, specificare /TLBID e specificare un altro numero fino a 65535.