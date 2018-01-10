---
title: Accesso allo stato del File | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- files [MFC], status information
- examples [MFC], file status
- files [MFC], accessing
- file status [MFC]
- status of files [MFC]
ms.assetid: 1b8891d6-eb0f-4037-a837-4928fe595222
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9ff93028c192a735ec75721d3dfdb9929a35edad
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="accessing-file-status"></a>Accesso allo stato del file
`CFile` supporta inoltre la raccolta di informazioni sullo stato del file, tra cui l'esistenza o meno del file, le date e le ore di creazione e di modifica, la dimensione logica e il percorso.  
  
### <a name="to-get-file-status"></a>Per ottenere lo stato del file  
  
1.  Utilizzare il [CFile](../mfc/reference/cfile-class.md) classe per ottenere e impostare le informazioni relative a un file. Un'applicazione utile consiste nell'utilizzare il `CFile` funzione membro statica **GetStatus** per determinare se esiste un file. **GetStatus** restituisce 0 se il file specificato non esiste.  
  
 Di conseguenza, è possibile utilizzare il risultato di **GetStatus** per determinare se utilizzare il **CFile:: modeCreate** flag quando si apre un file, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCFiles#3](../atl-mfc-shared/reference/codesnippet/cpp/accessing-file-status_1.cpp)]  
  
 Per informazioni correlate, vedere [serializzazione](../mfc/serialization-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [File](../mfc/files-in-mfc.md)

