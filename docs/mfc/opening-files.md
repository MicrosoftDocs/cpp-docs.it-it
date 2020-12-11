---
description: 'Altre informazioni su: apertura di file'
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
ms.openlocfilehash: cad847dc74cd32f93cc8a4a13e4bbe1bd815d815
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112882"
---
# <a name="opening-files"></a>Apertura di file

In MFC, il modo più comune per aprire un file è un processo in due fasi.

#### <a name="to-open-a-file"></a>Per aprire un file

1. Creare l'oggetto file senza specificare un percorso o i flag di autorizzazione.

   In genere si crea un oggetto file dichiarando una variabile [CFile](reference/cfile-class.md) nel stack frame.

1. Chiamare la funzione membro [Open](reference/cfile-class.md#open) per l'oggetto file, specificando un percorso e i flag di autorizzazione.

   Il valore restituito per `Open` sarà diverso da zero se il file è stato aperto correttamente oppure 0 se non è stato possibile aprire il file specificato. Il `Open` prototipo della funzione membro è il seguente:

   `virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );`

   I flag aperti specificano le autorizzazioni, ad esempio di sola lettura, che si desidera per il file. I valori di flag possibili sono definiti come costanti enumerate all'interno della `CFile` classe, quindi vengono qualificati con " `CFile::` " come in `CFile::modeRead` . Utilizzare il `CFile::modeCreate` flag se si desidera creare il file.

Nell'esempio seguente viene illustrato come creare un nuovo file con autorizzazione di lettura/scrittura (sostituendo qualsiasi file precedente con lo stesso percorso):

[!code-cpp[NVC_MFCFiles#1](../atl-mfc-shared/reference/codesnippet/cpp/opening-files_1.cpp)]

> [!NOTE]
> Questo esempio crea e apre un file. Se si verificano problemi, la `Open` chiamata può restituire un `CFileException` oggetto nell'ultimo parametro, come illustrato di seguito. La macro TRACE stampa il nome file e un codice che indica il motivo dell'errore. È possibile chiamare la `AfxThrowFileException` funzione se è necessaria una segnalazione più dettagliata degli errori.

## <a name="see-also"></a>Vedi anche

[Classe CFile](reference/cfile-class.md)<br/>
[CFile:: Open](reference/cfile-class.md#open)<br/>
[File](files-in-mfc.md)
