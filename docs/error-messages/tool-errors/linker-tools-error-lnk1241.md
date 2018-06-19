---
title: Strumenti del linker LNK1241 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1241
dev_langs:
- C++
helpviewer_keywords:
- LNK1241
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b02b1d9d06706c70478d958dd3c2af8dbc9c2c03
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299175"
---
# <a name="linker-tools-error-lnk1241"></a>Errore degli strumenti del linker LNK1241
file di risorse 'file di risorse' già specificato  
  
 Questo errore viene generato se si esegue **cvtres** manualmente dalla riga di comando e si passa quindi il file risultante obj file al linker inoltre gli altri file res.  
  
 Per specificare più file res, passarli tutti al linker come file con estensione res, non dall'interno di file obj creato da **cvtres**.