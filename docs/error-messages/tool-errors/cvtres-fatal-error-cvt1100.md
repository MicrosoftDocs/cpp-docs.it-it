---
title: Errore irreversibile CVT1100 di CVTRES | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CVT1100
dev_langs: C++
helpviewer_keywords: CVT1100
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 906e03b778276196d36a04e6b9e2f02a2d5944bc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cvtres-fatal-error-cvt1100"></a>Errore irreversibile CVT1100 di CVTRES
risorsa duplicata, tipo: tipo, nome: nome, lingua:, flag: flag, dimensioni: dimensioni  
  
 La risorsa è stata specificata più volte.  
  
 Questo errore può verificarsi se il linker sta creando una libreria dei tipi e non è stato specificato [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e 1 è già utilizzato da una risorsa nel progetto. In questo caso, specificare /TLBID e specificare un altro numero fino a 65535.