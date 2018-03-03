---
title: Apertura di file | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Open member functions [MFC]
- CFile class [MFC], variable
- opening files, in MFC
- Open calls [MFC]
- Open method, CFile class [MFC]
- examples [MFC], opening files
- opening files, handling exceptions
- exception handling [MFC], when opening files
- files [MFC], opening
- file objects [MFC]
- MFC, file operations
- opening files [MFC]
- exception handling [MFC], opening files
ms.assetid: a991b8ec-b04a-4766-b47e-7485b5dd0b01
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ebc650aa4a3f13a0cbc9d9b0026d948d64ae8b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="opening-files"></a>Apertura di file
In MFC, il modo più comune per aprire un file è un processo in due fasi.  
  
#### <a name="to-open-a-file"></a>Per aprire un file  
  
1.  Creare l'oggetto file senza specificare un percorso o flag di autorizzazione.  
  
     È in genere creare un oggetto file dichiarando un [CFile](../mfc/reference/cfile-class.md) variabile sullo stack frame.  
  
2.  Chiamare il [aprire](../mfc/reference/cfile-class.md#open) funzione membro per l'oggetto file, fornendo un flag di percorso e l'autorizzazione.  
  
     Il valore restituito per `Open` sarà diverso da zero se il file è stato aperto correttamente oppure 0 se non è stato possibile aprire il file specificato. Il `Open` funzione membro è un prototipo indicato di seguito:  
  
     `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`  
  
     I flag aperti specificano le autorizzazioni, ad esempio sola lettura, si desidera per il file. I valori possibili flag sono definiti come costanti enumerate all'interno di `CFile` classe, in modo che vengano qualificati con "`CFile::`" come in `CFile::modeRead`. Utilizzare il `CFile::modeCreate` flag se si desidera creare il file.  
  
 Nell'esempio seguente viene illustrato come creare un nuovo file con autorizzazioni di lettura/scrittura (sostituendo eventuali file precedente con lo stesso percorso):  
  
 [!code-cpp[NVC_MFCFiles#1](../atl-mfc-shared/reference/codesnippet/cpp/opening-files_1.cpp)]  
  
> [!NOTE]
>  In questo esempio crea e apre un file. Se si verificano problemi, il `Open` chiamata può restituire un `CFileException` dell'oggetto nell'ultimo parametro, come illustrato di seguito. Il `TRACE` macro viene stampato il nome del file e un codice che indica il motivo dell'errore. È possibile chiamare il `AfxThrowFileException` funzione se sono necessarie ulteriori segnalazione errori.  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../mfc/reference/cfile-class.md)   
 [CFile::Open](../mfc/reference/cfile-class.md#open)   
 [File](../mfc/files-in-mfc.md)

