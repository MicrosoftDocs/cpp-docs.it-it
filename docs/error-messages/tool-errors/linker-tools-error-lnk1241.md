---
title: Strumenti del linker LNK1241 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1241
dev_langs:
- C++
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bb256607f6babbba90fbd17ae89bfbdfcfb48138
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241
file di risorse 'file di risorse' già specificato  
  
 Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e si passa quindi il file risultante obj file al linker inoltre gli altri file res.  
  
 Per specificare più file res, passarli tutti al linker come file con estensione res, non dall'interno di file obj creato da **cvtres**.