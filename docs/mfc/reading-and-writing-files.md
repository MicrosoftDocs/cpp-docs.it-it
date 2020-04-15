---
title: Lettura e scrittura di file
ms.date: 11/04/2016
helpviewer_keywords:
- CFile class [MFC], objects
- examples [MFC], reading files
- files [MFC], writing to
- examples [MFC], writing to files
- files [MFC], reading
- MFC, file operations
- CFile class [MFC], reading and writing CFile objects
- reading files
- writing to files [MFC]
ms.assetid: cac0c826-ba56-495f-99b3-ce6336f65763
ms.openlocfilehash: 6c4b2b21bbfa19fb73997f8475cfa9a4047dc0ca
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371794"
---
# <a name="reading-and-writing-files"></a>Lettura e scrittura di file

Se sono state utilizzate le funzioni di gestione dei file della libreria di runtime del linguaggio C, le operazioni di lettura e scrittura MFC risulteranno familiari. In questo articolo viene descritta la `CFile` lettura e la scrittura direttamente da un oggetto. È anche possibile eseguire l'I/O di file memorizzato nel buffer con la classe [CArchive.You](../mfc/reference/carchive-class.md) can also do buffered file I/O with the CArchive class.

#### <a name="to-read-from-and-write-to-the-file"></a>Per leggere e scrivere nel file

1. Utilizzare `Read` le `Write` funzioni membro e per leggere e scrivere dati nel file.

     -oppure-

1. La `Seek` funzione membro è disponibile anche per lo spostamento a un offset specifico all'interno del file.

`Read`accetta un puntatore a un buffer e il numero di byte da leggere e restituisce il numero effettivo di byte letti. Se non è stato possibile leggere il numero di byte richiesto perché viene raggiunto il numero eh (End of File), viene restituito il numero effettivo di byte letti. Se si verifica un errore di lettura, viene generata un'eccezione. `Write`è simile `Read`a , ma il numero di byte scritti non viene restituito. Se si verifica un errore di scrittura, inclusa la non scrittura di tutti i byte specificati, viene generata un'eccezione. Se si dispone `CFile` di un oggetto valido, è possibile leggere da esso o scrivere in esso, come illustrato nell'esempio seguente:If you have a valid object, you can read from it or write to it as shown in the following example:

[!code-cpp[NVC_MFCFiles#2](../atl-mfc-shared/reference/codesnippet/cpp/reading-and-writing-files_1.cpp)]

> [!NOTE]
> In genere è necessario eseguire operazioni di input/output all'interno di un blocco di gestione delle eccezioni **try**/**catch.** Per ulteriori informazioni, vedere [Gestione delle eccezioni (MFC)](../mfc/exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[File](../mfc/files-in-mfc.md)
