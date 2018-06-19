---
title: Collegamento interno | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- internal linkage
- linkage [C++], internal
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0b5703ca23a30cdb1d080e1dc379dabfc6c0df1f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32383995"
---
# <a name="internal-linkage"></a>Collegamento interno
Se la dichiarazione di un identificatore di ambito file per un oggetto o una funzione contiene *storage-class-specifier* **static**, l'identificatore dispone di collegamento interno. In caso contrario, l'identificatore disporrà di collegamento esterno. Per la descrizione di [storage-class-specifier](../c-language/c-storage-classes.md) non terminale, vedere *Classi di archiviazione*.  
  
 Nell'unità di conversione, ogni istanza di un identificatore con collegamento interno indica lo stesso identificatore o la stessa funzione. Gli identificatori collegati internamente sono specifici di un'unità di conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)