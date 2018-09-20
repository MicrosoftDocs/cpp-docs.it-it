---
title: Chiusura di file | Microsoft Docs
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
ms.openlocfilehash: 9c392ef728e1d796a02cfa32edc2c3e8c74d083b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46426237"
---
# <a name="closing-files"></a>Chiusura dei file

Come di consueto in operazioni dei / o, dopo aver completato con un file, è necessario chiuderlo.

#### <a name="to-close-a-file"></a>Per chiudere un file

1. Usare la **Chiudi** funzione membro. Questa funzione consente di chiudere il file del file system e svuota i buffer, se necessario.

Se è stato allocato il [CFile](../mfc/reference/cfile-class.md) oggetto sul frame (come illustrato nell'esempio illustrato [apertura di file](../mfc/opening-files.md)), l'oggetto verrà automaticamente verrà chiuso e poi eliminati definitivamente quando esce dall'ambito. Si noti che l'eliminazione di `CFile` oggetto non comporta l'eliminazione del file fisico del file System.

## <a name="see-also"></a>Vedere anche

[File](../mfc/files-in-mfc.md)

