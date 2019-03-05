---
title: Accesso allo stato del file
ms.date: 11/04/2016
helpviewer_keywords:
- files [MFC], status information
- examples [MFC], file status
- files [MFC], accessing
- file status [MFC]
- status of files [MFC]
ms.assetid: 1b8891d6-eb0f-4037-a837-4928fe595222
ms.openlocfilehash: 26c263b2d7e4e0243444925cb9416cb337dcd79d
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298893"
---
# <a name="accessing-file-status"></a>Accesso allo stato del file

`CFile` supporta inoltre la raccolta di informazioni sullo stato del file, tra cui l'esistenza o meno del file, le date e le ore di creazione e di modifica, la dimensione logica e il percorso.

### <a name="to-get-file-status"></a>Per ottenere lo stato del file

1. Usare la [CFile](../mfc/reference/cfile-class.md) classe per ottenere e impostare le informazioni relative a un file. Un'applicazione utile consiste nell'usare la `CFile` una funzione membro statica **GetStatus** per determinare se esiste un file. **GetStatus** restituisce 0 se il file specificato non esiste.

Di conseguenza, è possibile usare il risultato del **GetStatus** per determinare se utilizzare il **modeCreate** flag quando si apre un file, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCFiles#3](../atl-mfc-shared/reference/codesnippet/cpp/accessing-file-status_1.cpp)]

Per informazioni correlate, vedere [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[File](../mfc/files-in-mfc.md)
