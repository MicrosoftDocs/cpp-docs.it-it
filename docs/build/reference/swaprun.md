---
title: -SWAPRUN | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /swaprun
dev_langs: C++
helpviewer_keywords:
- /SWAPRUN editbin option
- -SWAPRUN editbin option
- SWAPRUN editbin option
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fde871c2e10f1b2bebafef6e668aadfc8fad5c47
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="swaprun"></a>/SWAPRUN
```  
/SWAPRUN:{[!]NET|[!]CD}  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione consente di modificare l'immagine per indicare al sistema operativo di copiare l'immagine in un file di scambio ed eseguirlo da tale posizione. Utilizzare questa opzione per le immagini che si trovano su un supporto rimovibile o reti.  
  
 È possibile aggiungere o rimuovere i qualificatori NET o CD:  
  
-   NET indica che l'immagine si trova in una rete.  
  
-   CD indica che si trova l'immagine in un CD-ROM o un supporto rimovibile simile.  
  
-   Utilizzare! NET e! CD per invertire gli effetti del CD e NET.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)