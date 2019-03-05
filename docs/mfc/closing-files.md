---
title: Chiusura dei file
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, file operations
- files [MFC], closing
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
ms.openlocfilehash: 69a0960c1edabab00cb71702acda526ee9ebd798
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267056"
---
# <a name="closing-files"></a>Chiusura dei file

Come di consueto in operazioni dei / o, dopo aver completato con un file, è necessario chiuderlo.

#### <a name="to-close-a-file"></a>Per chiudere un file

1. Usare la **Chiudi** funzione membro. Questa funzione consente di chiudere il file del file system e svuota i buffer, se necessario.

Se è stato allocato il [CFile](../mfc/reference/cfile-class.md) oggetto sul frame (come illustrato nell'esempio illustrato [apertura di file](../mfc/opening-files.md)), l'oggetto verrà automaticamente verrà chiuso e poi eliminati definitivamente quando esce dall'ambito. Si noti che l'eliminazione di `CFile` oggetto non comporta l'eliminazione del file fisico del file System.

## <a name="see-also"></a>Vedere anche

[File](../mfc/files-in-mfc.md)
