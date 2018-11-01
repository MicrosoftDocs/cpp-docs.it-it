---
title: Chiusura dei file
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, file operations
- files [MFC], closing
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
ms.openlocfilehash: 04e5084615b1f1cf85d9f41e2c4dcc84910b9d05
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636263"
---
# <a name="closing-files"></a>Chiusura dei file

Come di consueto in operazioni dei / o, dopo aver completato con un file, è necessario chiuderlo.

#### <a name="to-close-a-file"></a>Per chiudere un file

1. Usare la **Chiudi** funzione membro. Questa funzione consente di chiudere il file del file system e svuota i buffer, se necessario.

Se è stato allocato il [CFile](../mfc/reference/cfile-class.md) oggetto sul frame (come illustrato nell'esempio illustrato [apertura di file](../mfc/opening-files.md)), l'oggetto verrà automaticamente verrà chiuso e poi eliminati definitivamente quando esce dall'ambito. Si noti che l'eliminazione di `CFile` oggetto non comporta l'eliminazione del file fisico del file System.

## <a name="see-also"></a>Vedere anche

[File](../mfc/files-in-mfc.md)

