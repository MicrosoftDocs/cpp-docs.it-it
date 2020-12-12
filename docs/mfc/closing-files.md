---
description: 'Altre informazioni su: chiusura di file'
title: Chiusura dei file
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, file operations
- files [MFC], closing
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
ms.openlocfilehash: e8d2f0792aeb889c40cb516af259fc2a40890a1a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338378"
---
# <a name="closing-files"></a>Chiusura dei file

Come di consueto nelle operazioni di I/O, una volta terminata la ricerca di un file, è necessario chiuderla.

#### <a name="to-close-a-file"></a>Per chiudere un file

1. Usare la funzione membro **Close** . Questa funzione chiude il file del file System e Scarica i buffer, se necessario.

Se l'oggetto [CFile](reference/cfile-class.md) è stato allocato nel frame, come nell'esempio illustrato in [apertura di file](opening-files.md), l'oggetto verrà automaticamente chiuso e quindi eliminato definitivamente quando esce dall'ambito. Si noti che l'eliminazione dell' `CFile` oggetto non comporta l'eliminazione del file fisico nel file System.

## <a name="see-also"></a>Vedi anche

[File](files-in-mfc.md)
