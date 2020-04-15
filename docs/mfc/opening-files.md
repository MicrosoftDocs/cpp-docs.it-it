---
title: Apertura di file
ms.date: 11/04/2016
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
ms.openlocfilehash: 6119bf922b05c30a14d8421800e3931c4a038779
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375952"
---
# <a name="opening-files"></a>Apertura di file

In MFC, il modo più comune per aprire un file è un processo in due fasi.

#### <a name="to-open-a-file"></a>Per aprire un file

1. Creare l'oggetto file senza specificare un percorso o flag di autorizzazione.

   In genere si crea un oggetto file dichiarando una variabile [CFile](../mfc/reference/cfile-class.md) nello stack frame.

1. Chiamare la funzione membro [Open](../mfc/reference/cfile-class.md#open) per l'oggetto file, fornendo un percorso e flag di autorizzazione.

   Il valore `Open` restituito per sarà diverso da zero se il file è stato aperto correttamente o 0 se non è stato possibile aprire il file specificato. La `Open` funzione membro viene prototipo come segue:The member function is prototyped as follows:

   `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`

   I flag di apertura specificano le autorizzazioni desiderate per il file. I possibili valori di flag sono definiti `CFile` come costanti enumerate all'interno della classe, pertanto sono qualificati con "`CFile::`" come in `CFile::modeRead`. Utilizzare `CFile::modeCreate` il flag se si desidera creare il file.

L'esempio seguente mostra come creare un nuovo file con autorizzazione di lettura/scrittura (sostituendo qualsiasi file precedente con lo stesso percorso):The following example shows how to create a new file with read/write permission (placing any previous file with the same path):

[!code-cpp[NVC_MFCFiles#1](../atl-mfc-shared/reference/codesnippet/cpp/opening-files_1.cpp)]

> [!NOTE]
> In questo esempio viene creato e aperto un file. In caso di `Open` problemi, la `CFileException` chiamata può restituire un oggetto nel relativo ultimo parametro, come illustrato di seguito. La macro TRACE stampa sia il nome del file che un codice che indica il motivo dell'errore. È possibile `AfxThrowFileException` chiamare la funzione se è necessaria una segnalazione degli errori più dettagliata.

## <a name="see-also"></a>Vedere anche

[Classe CFile](../mfc/reference/cfile-class.md)<br/>
[FileC::Aperto](../mfc/reference/cfile-class.md#open)<br/>
[File](../mfc/files-in-mfc.md)
