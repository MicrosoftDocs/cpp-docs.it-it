---
title: Collegamento interno | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- internal linkage
- linkage [C++], internal
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e6ca8a9e9804aa6c14077b023d0014062067f324
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="internal-linkage"></a>Collegamento interno
Se la dichiarazione di un identificatore di ambito file per un oggetto o una funzione contiene *storage-class-specifier* **static**, l'identificatore dispone di collegamento interno. In caso contrario, l'identificatore disporrà di collegamento esterno. Per la descrizione di [storage-class-specifier](../c-language/c-storage-classes.md) non terminale, vedere *Classi di archiviazione*.  
  
 Nell'unità di conversione, ogni istanza di un identificatore con collegamento interno indica lo stesso identificatore o la stessa funzione. Gli identificatori collegati internamente sono specifici di un'unità di conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)