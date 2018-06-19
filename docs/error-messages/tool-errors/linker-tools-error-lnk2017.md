---
title: Strumenti del linker LNK2017 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2017
dev_langs:
- C++
helpviewer_keywords:
- LNK2017
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 095423b5f2d86cef309ed4316ff72d195b11eb26
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33313072"
---
# <a name="linker-tools-error-lnk2017"></a>Errore degli strumenti del linker LNK2017
rilocazione 'simbolo' in 'segment' non è valida senza /LARGEADDRESSAWARE: No  
  
 Si sta tentando di creare un'immagine a 64 bit con indirizzi a 32 bit. A tale scopo, è necessario:  
  
-   Usare un indirizzo di carico predefinito.  
  
-   Limitare l'immagine a 3 GB.  
  
-   Specificare [: No](../../build/reference/largeaddressaware-handle-large-addresses.md).