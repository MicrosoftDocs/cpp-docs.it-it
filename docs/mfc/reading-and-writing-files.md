---
description: 'Altre informazioni su: lettura e scrittura di file'
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
ms.openlocfilehash: 169135f57eaecb52605eca88b7f19e333551f1ad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248619"
---
# <a name="reading-and-writing-files"></a>Lettura e scrittura di file

Se sono state usate le funzioni di gestione dei file della libreria di runtime C, le operazioni di lettura e scrittura MFC appariranno note. Questo articolo descrive come leggere direttamente da e scrivere direttamente in un `CFile` oggetto. È anche possibile eseguire l'I/O di file nel buffer con la classe [CArchive](../mfc/reference/carchive-class.md) .

#### <a name="to-read-from-and-write-to-the-file"></a>Per leggere e scrivere nel file

1. Usare le `Read` `Write` funzioni membro e per leggere e scrivere dati nel file.

     -oppure-

1. La `Seek` funzione membro è disponibile anche per lo spostamento in un offset specifico all'interno del file.

`Read` accetta un puntatore a un buffer e il numero di byte da leggere e restituisce il numero effettivo di byte letti. Se non è stato possibile leggere il numero di byte richiesto perché è stata raggiunta la fine del file (EOF), viene restituito il numero effettivo di byte letti. Se si verifica un errore di lettura, viene generata un'eccezione. `Write` è simile a `Read` , ma il numero di byte scritti non viene restituito. Se si verifica un errore di scrittura, inclusa la mancata scrittura di tutti i byte specificati, viene generata un'eccezione. Se si dispone di un `CFile` oggetto valido, è possibile leggerlo o scrivervi come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCFiles#2](../atl-mfc-shared/reference/codesnippet/cpp/reading-and-writing-files_1.cpp)]

> [!NOTE]
> In genere, è necessario eseguire operazioni di input/output all'interno di un **`try`** / **`catch`** blocco di gestione delle eccezioni. Per ulteriori informazioni, vedere [gestione delle eccezioni (MFC)](../mfc/exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedi anche

[File](../mfc/files-in-mfc.md)
