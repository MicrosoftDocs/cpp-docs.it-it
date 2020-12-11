---
description: 'Altre informazioni su: file in MFC'
title: File in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- serialization [MFC], MFC files
- I/O [MFC], MFC classes
- files [MFC], MFC
- files [MFC], serialization
- binary access, binary file operations in MFC
- file I/O classes [MFC]
- I/O [MFC]
- persistence [MFC]
- MFC, file operations
- files [MFC], manipulating
- binary access [MFC]
ms.assetid: ae25e2c5-2859-4679-ab97-438824e93ce1
ms.openlocfilehash: 47fab5876efd7d06ec4364721a09b7ed09da9744
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155046"
---
# <a name="files-in-mfc"></a>File in MFC

Nella libreria Microsoft Foundation Class (MFC) la classe [CFile](reference/cfile-class.md) gestisce le normali operazioni di I/O dei file. Questa famiglia di articoli spiega come aprire e chiudere i file, nonché leggere e scrivere dati in tali file. Vengono inoltre descritte le operazioni sullo stato del file. Per una descrizione di come usare le funzionalità di serializzazione basate su oggetti di MFC come metodo alternativo per la lettura e la scrittura di dati nei file, vedere l'articolo [serializzazione](serialization-in-mfc.md).

> [!NOTE]
> Quando si utilizzano `CDocument` oggetti MFC, il Framework esegue gran parte del lavoro di serializzazione. In particolare, il Framework crea e usa l' `CFile` oggetto. È necessario scrivere il codice solo nell'override della `Serialize` funzione membro della classe `CDocument` .

La `CFile` classe fornisce un'interfaccia per operazioni di file binari per utilizzo generico. Le `CStdioFile` `CMemFile` classi e derivate da `CFile` e la `CSharedFile` classe derivata da `CMemFile` forniscono servizi file più specializzati.

Per ulteriori informazioni sulle alternative alla gestione dei file MFC, vedere [gestione dei file](../c-runtime-library/file-handling.md) in riferimenti alla libreria di *Runtime*.

Per informazioni sulle classi derivate `CFile` , vedere il [grafico delle gerarchie MFC](hierarchy-chart.md).

## <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

*Usare CFile*

- [Aprire un file con CFile](opening-files.md)

- [Lettura e scrittura di un file con CFile](reading-and-writing-files.md)

- [Chiudere un file con CFile](closing-files.md)

- [Accedere allo stato del file con CFile](accessing-file-status.md)

*USA serializzazione MFC (persistenza oggetti)*

- [Creazione di una classe serializzabile](serialization-making-a-serializable-class.md)

- [Serializzare un oggetto tramite un oggetto CArchive](serialization-serializing-an-object.md)

- [Creare un oggetto CArchive](two-ways-to-create-a-carchive-object.md)

- [Usare \< and > gli operatori di> carchive <](using-the-carchive-output-and-input-operators.md)

- [Archiviare e caricare CObject e oggetti derivati da CObject tramite un archivio](storing-and-loading-cobjects-via-an-archive.md)

## <a name="see-also"></a>Vedi anche

[Concetti](mfc-concepts.md)<br/>
[Argomenti MFC generali](general-mfc-topics.md)<br/>
[CArchive (classe)](reference/carchive-class.md)<br/>
[Classe CObject](reference/cobject-class.md)
