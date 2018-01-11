---
title: Chiusura di file | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC, file operations
- files [MFC], closing
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 27b1c59c952b022c7382db7d6b2dcb660cca2e9a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="closing-files"></a>Chiusura dei file
Come di consueto in operazioni dei / o, una volta terminata con un file, è necessario chiuderlo.  
  
#### <a name="to-close-a-file"></a>Per chiudere un file  
  
1.  Utilizzare il **Chiudi** funzione membro. Questa funzione chiude il file del file system e svuota i buffer, se necessario.  
  
 Se è stato assegnato il [CFile](../mfc/reference/cfile-class.md) oggetto nel frame (come illustrato nell'esempio illustrato [apertura di file](../mfc/opening-files.md)), l'oggetto verrà automaticamente verrà chiuso e poi distrutti quando esce dall'ambito. Si noti che l'eliminazione di `CFile` oggetto non comporta l'eliminazione del file fisico del file System.  
  
## <a name="see-also"></a>Vedere anche  
 [File](../mfc/files-in-mfc.md)

