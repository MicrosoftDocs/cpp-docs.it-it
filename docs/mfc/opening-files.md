---
title: Apertura di file | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f74c0fdcdb8d6dfe1aced33a1c7087ecde6c89ff
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50080923"
---
# <a name="opening-files"></a>Apertura di file

In MFC, il modo più comune per aprire un file è un processo in due fasi.

#### <a name="to-open-a-file"></a>Per aprire un file

1. Creare l'oggetto file senza specificare un percorso o flag di autorizzazione.

   È in genere creare un oggetto file dichiarando una [CFile](../mfc/reference/cfile-class.md) variabile nello stack frame.

1. Chiamare il [aperto](../mfc/reference/cfile-class.md#open) funzione membro per l'oggetto file, specificando un percorso e l'autorizzazione per i flag.

   Il valore restituito per `Open` sarà diverso da zero se il file è stato aperto correttamente oppure 0 se non è stato possibile aprire il file specificato. Il `Open` funzione membro è il seguente prototipo:

   `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`

   I flag open specificano le autorizzazioni, ad esempio sola lettura, desidera che per il file. I valori possibili flag sono definiti come costanti enumerate all'interno di `CFile` classe, in modo che siano qualificati con "`CFile::`" come in `CFile::modeRead`. Usare il `CFile::modeCreate` flag se si desidera creare il file.

Nell'esempio seguente viene illustrato come creare un nuovo file con l'autorizzazione di lettura/scrittura (sostituendo eventuali file precedente con lo stesso percorso):

[!code-cpp[NVC_MFCFiles#1](../atl-mfc-shared/reference/codesnippet/cpp/opening-files_1.cpp)]

> [!NOTE]
>  In questo esempio crea e apre un file. Se si verificano problemi, il `Open` chiamata può restituire un `CFileException` oggetto nell'ultimo parametro, come illustrato di seguito. Utilizzo della macro TRACE viene stampato il nome del file e un codice che indica il motivo dell'errore. È possibile chiamare il `AfxThrowFileException` funzionare se sono necessarie più dettagliate segnalazione errori.

## <a name="see-also"></a>Vedere anche

[Classe CFile](../mfc/reference/cfile-class.md)<br/>
[CFile::Open](../mfc/reference/cfile-class.md#open)<br/>
[File](../mfc/files-in-mfc.md)

