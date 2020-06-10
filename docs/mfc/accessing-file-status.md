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
ms.openlocfilehash: 23c626940e700d3e9827ef6a7cf849d970e40d5d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619782"
---
# <a name="accessing-file-status"></a>Accesso allo stato del file

`CFile` supporta inoltre la raccolta di informazioni sullo stato del file, tra cui l'esistenza o meno del file, le date e le ore di creazione e di modifica, la dimensione logica e il percorso.

### <a name="to-get-file-status"></a>Per ottenere lo stato del file

1. Usare la classe [CFile](reference/cfile-class.md) per ottenere e impostare le informazioni su un file. Un'applicazione utile consiste nell'usare la `CFile` funzione membro statica **GetStatus** per determinare se un file esiste. **GetStatus** restituisce 0 se il file specificato non esiste.

Quindi, è possibile usare il risultato di **GetStatus** per determinare se usare il flag **CFile:: modeCreate** quando si apre un file, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCFiles#3](../atl-mfc-shared/reference/codesnippet/cpp/accessing-file-status_1.cpp)]

Per informazioni correlate, vedere [serializzazione](serialization-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[File](files-in-mfc.md)
