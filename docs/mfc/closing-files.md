---
title: Chiusura di file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC, file operations
- files [MFC], closing
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 97bd910ae4cb514cda07dd319f37a05a32712909
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341026"
---
# <a name="closing-files"></a>Chiusura dei file
Come di consueto in operazioni dei / o, una volta terminata con un file, è necessario chiuderlo.  
  
#### <a name="to-close-a-file"></a>Per chiudere un file  
  
1.  Utilizzare il **Chiudi** funzione membro. Questa funzione chiude il file del file system e svuota i buffer, se necessario.  
  
 Se è stato assegnato il [CFile](../mfc/reference/cfile-class.md) oggetto nel frame (come illustrato nell'esempio illustrato [apertura di file](../mfc/opening-files.md)), l'oggetto verrà automaticamente verrà chiuso e poi distrutti quando esce dall'ambito. Si noti che l'eliminazione di `CFile` oggetto non comporta l'eliminazione del file fisico del file System.  
  
## <a name="see-also"></a>Vedere anche  
 [File](../mfc/files-in-mfc.md)

