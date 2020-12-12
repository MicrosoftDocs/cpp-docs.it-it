---
description: 'Ulteriori informazioni su: Appunti: utilizzo del meccanismo degli Appunti OLE'
title: 'Appunti: utilizzo del meccanismo degli Appunti OLE'
ms.date: 11/04/2016
helpviewer_keywords:
- applications [OLE], Clipboard
- OLE Clipboard
- Clipboard [MFC], OLE formats
- OLE Clipboard, formats
- formats [MFC], Clipboard for OLE
ms.assetid: 229cc610-5bb1-435e-bd20-2c8b9964d1af
ms.openlocfilehash: f7005bd3e99ebb658b6aa38952a6689d4a9ba30c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338430"
---
# <a name="clipboard-using-the-ole-clipboard-mechanism"></a>Appunti: utilizzo del meccanismo degli Appunti OLE

Per trasferire dati dagli Appunti, la tecnologia OLE fa uso di formati standard e di alcuni formati OLE specifici.

Quando si tagliano o si copiano i dato da un'applicazione, questi vengono archiviati negli Appunti per essere utilizzati in un secondo momento attraverso il comando Incolla. Questi dati sono in diversi formati. Quando un utente sceglie di incollare i dati dagli Appunti, l'applicazione può scegliere quali di questi formati utilizzare. Nell'applicazione deve essere scritto del codice che le consenta di scegliere il formato che fornisce il maggior numero di informazioni, a meno che l'utente non richieda specificamente un determinato formato, utilizzando il comando Incolla speciale. Prima di continuare, è consigliabile leggere gli argomenti [relativi a oggetti dati e origini dati (OLE)](data-objects-and-data-sources-ole.md) . In questi argomenti vengono descritti i concetti fondamentali sul funzionamento dei trasferimenti di dati e su come implementarli nelle applicazioni.

In Windows sono definiti numerosi formati standard che possono essere utilizzati per trasferire i dati dagli Appunti. Questi includono metafile, testo, bitmap e altri. Anche in OLE sono definiti vari formati specifici OLE. Per le applicazioni che necessitano di maggiori dettagli rispetto a quelli forniti da questi formati standard, si consiglia di registrare dei formati degli Appunti personalizzati. Per eseguire questa operazione, usare la funzione API Win32 [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) .

Ad esempio, in Microsoft Excel è registrato un formato personalizzato per i fogli di calcolo. Questo formato racchiude molte più informazioni rispetto, ad esempio, a una bitmap. Quando questi dati vengono incollati in un'applicazione che supporta il formato di foglio di calcolo, tutte le formule e valori presenti nel foglio di calcolo vengono mantenuti e, se necessario, possono essere aggiornati. In Microsoft Excel è inoltre possibile inserire i dati negli Appunti utilizzando formati che possono essere incollati come elementi OLE. Qualsiasi contenitore di documenti OLE può incollare queste informazioni come un elemento incorporato. Questo elemento incorporato può essere modificato utilizzando Microsoft Excel. Gli Appunti contengono inoltre una semplice bitmap dell'immagine dell'intervallo selezionato nel foglio di calcolo. Questa bitmap può essere incollata anche nei contenitori di documenti OLE o negli editor di immagini bitmap, come Paint. Nel caso di una bitmap, tuttavia, non è possibile modificare i dati come in un foglio di calcolo.

Per recuperare più informazioni possibili dagli Appunti, le applicazioni devono controllare questi formati personalizzati prima di incollare i dati dagli Appunti.

Ad esempio, per attivare il comando Taglia, è possibile scrivere un gestore simile al seguente:

[!code-cpp[NVC_MFCListView#3](../atl/reference/codesnippet/cpp/clipboard-using-the-ole-clipboard-mechanism_1.cpp)]

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [copiare e incollare dati](clipboard-copying-and-pasting-data.md)

- [Aggiunta di altri formati](clipboard-adding-other-formats.md)

- [Utilizzo degli Appunti di Windows](clipboard-using-the-windows-clipboard.md)

- [OLE](ole-background.md)

- [Oggetti dati OLE, origini dati OLE e Uniform Data Transfer](data-objects-and-data-sources-ole.md)

## <a name="see-also"></a>Vedi anche

[Appunti](clipboard.md)
