---
title: 'Appunti: Utilizzo del meccanismo degli Appunti OLE'
ms.date: 11/04/2016
helpviewer_keywords:
- applications [OLE], Clipboard
- OLE Clipboard
- Clipboard [MFC], OLE formats
- OLE Clipboard, formats
- formats [MFC], Clipboard for OLE
ms.assetid: 229cc610-5bb1-435e-bd20-2c8b9964d1af
ms.openlocfilehash: d8ef93b306c0968adf2c23c841c792d2f7af5de3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62327043"
---
# <a name="clipboard-using-the-ole-clipboard-mechanism"></a>Appunti: Utilizzo del meccanismo degli Appunti OLE

Per trasferire dati dagli Appunti, la tecnologia OLE fa uso di formati standard e di alcuni formati OLE specifici.

Quando si tagliano o si copiano i dato da un'applicazione, questi vengono archiviati negli Appunti per essere utilizzati in un secondo momento attraverso il comando Incolla. Questi dati sono in diversi formati. Quando un utente sceglie di incollare i dati dagli Appunti, l'applicazione può scegliere quali di questi formati utilizzare. Nell'applicazione deve essere scritto del codice che le consenta di scegliere il formato che fornisce il maggior numero di informazioni, a meno che l'utente non richieda specificamente un determinato formato, utilizzando il comando Incolla speciale. Prima di continuare, è possibile leggere il [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md) argomenti. In questi argomenti vengono descritti i concetti fondamentali sul funzionamento dei trasferimenti di dati e su come implementarli nelle applicazioni.

In Windows sono definiti numerosi formati standard che possono essere utilizzati per trasferire i dati dagli Appunti. Questi includono metafile, testo, bitmap e altri. Anche in OLE sono definiti vari formati specifici OLE. Per le applicazioni che necessitano di maggiori dettagli rispetto a quelli forniti da questi formati standard, si consiglia di registrare dei formati degli Appunti personalizzati. Utilizzare la funzione API Win32 [RegisterClipboardFormat](/windows/desktop/api/winuser/nf-winuser-registerclipboardformata) per eseguire questa operazione.

Ad esempio, in Microsoft Excel è registrato un formato personalizzato per i fogli di calcolo. Questo formato racchiude molte più informazioni rispetto, ad esempio, a una bitmap. Quando questi dati vengono incollati in un'applicazione che supporta il formato di foglio di calcolo, tutte le formule e valori presenti nel foglio di calcolo vengono mantenuti e, se necessario, possono essere aggiornati. In Microsoft Excel è inoltre possibile inserire i dati negli Appunti utilizzando formati che possono essere incollati come elementi OLE. Qualsiasi contenitore di documenti OLE può incollare queste informazioni come un elemento incorporato. Questo elemento incorporato può essere modificato utilizzando Microsoft Excel. Gli Appunti contengono inoltre una semplice bitmap dell'immagine dell'intervallo selezionato nel foglio di calcolo. Questa bitmap può essere incollata anche nei contenitori di documenti OLE o negli editor di immagini bitmap, come Paint. Nel caso di una bitmap, tuttavia, non è possibile modificare i dati come in un foglio di calcolo.

Per recuperare più informazioni possibili dagli Appunti, le applicazioni devono controllare questi formati personalizzati prima di incollare i dati dagli Appunti.

Ad esempio, per attivare il comando Taglia, è possibile scrivere un gestore simile al seguente:

[!code-cpp[NVC_MFCListView#3](../atl/reference/codesnippet/cpp/clipboard-using-the-ole-clipboard-mechanism_1.cpp)]

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Copiare e incollare dati](../mfc/clipboard-copying-and-pasting-data.md)

- [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)

- [Utilizzo degli Appunti di Windows](../mfc/clipboard-using-the-windows-clipboard.md)

- [OLE](../mfc/ole-background.md)

- [Origini dati e oggetti dati OLE e uniform data transfer](../mfc/data-objects-and-data-sources-ole.md)

## <a name="see-also"></a>Vedere anche

[Appunti](../mfc/clipboard.md)
