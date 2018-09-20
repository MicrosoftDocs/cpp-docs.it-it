---
title: 'Controlli ActiveX MFC: Metodi | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], methods
ms.assetid: e20271de-6ffa-4ba0-848b-bafe6c9e510c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93a8d3f9840afd88a9ce0ae7cbaf661babc13647
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46406048"
---
# <a name="mfc-activex-controls-methods"></a>Controlli ActiveX MFC: metodi

Un controllo ActiveX genera eventi per la comunicazione tra se stesso e il relativo contenitore del controllo. Un contenitore può anche comunicare con un controllo tramite metodi e proprietà. I metodi vengono chiamati anche le funzioni.

Metodi e proprietà forniscono un'interfaccia esportata per l'uso da altre applicazioni, ad esempio i client di automazione e i contenitori di controlli ActiveX. Per ulteriori informazioni sulla proprietà del controllo ActiveX, vedere l'articolo [controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md).

I metodi sono simili in uso e utilizzo generico per le funzioni membro di una classe C++. Esistono due tipi di metodi può implementare il controllo: predefinite e personalizzate. Simili a eventi predefiniti, i metodi predefiniti sono i metodi per il quale [COleControl](../mfc/reference/colecontrol-class.md) fornisce un'implementazione. Per altre informazioni sui metodi predefiniti, vedere l'articolo [controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md). Metodi personalizzati, definiti dallo sviluppatore, consentono un'ulteriore personalizzazione del controllo. Per altre informazioni, vedere l'articolo [controlli ActiveX MFC: aggiunta di metodi personalizzati](../mfc/mfc-activex-controls-adding-custom-methods.md).

Il Microsoft della libreria MFC (Foundation Class) implementa un meccanismo che consente il controllo supporti i metodi predefiniti e personalizzati. La prima parte è una classe `COleControl`. Derivata da `CWnd`, `COleControl` funzioni membro supportano metodi predefiniti che sono comuni a tutti i controlli ActiveX. La seconda parte di questo meccanismo è la mappa di invio. Una mappa di invio è simile a una mappa dei messaggi; Tuttavia, anziché una funzione di mapping a un ID di messaggio di Windows, una dispatch map esegue il mapping di funzioni membro virtuali agli ID IDispatch.

Per un controllo supportare i vari metodi in modo corretto, la classe deve dichiarare una dispatch map. Questa operazione viene eseguita la seguente riga di codice che si trova nell'intestazione della classe controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#13](../mfc/codesnippet/cpp/mfc-activex-controls-methods_1.h)]

Lo scopo principale della mappa di invio è per stabilire la relazione tra i nomi dei metodi usati da un chiamante esterno (ad esempio, il contenitore) e le funzioni membro della classe del controllo che implementano i metodi. Dopo aver dichiarata la mappa di invio, deve essere definito nell'implementazione del controllo (. File CPP). Le righe di codice seguenti definiscono la mappa di invio:

[!code-cpp[NVC_MFC_AxUI#14](../mfc/codesnippet/cpp/mfc-activex-controls-methods_2.cpp)]
[!code-cpp[NVC_MFC_AxUI#15](../mfc/codesnippet/cpp/mfc-activex-controls-methods_3.cpp)]

Se è stata usata la [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare il progetto, queste righe sono state aggiunte automaticamente. Se non è stata utilizzata la creazione guidata controllo ActiveX MFC, è necessario aggiungere manualmente queste righe.

Gli articoli seguenti illustrano i metodi in dettaglio:

- [Controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md)

- [Controlli ActiveX MFC: aggiunta di metodi personalizzati](../mfc/mfc-activex-controls-adding-custom-methods.md)

- [Controlli ActiveX MFC: restituzione di codici di errore da un metodo](../mfc/mfc-activex-controls-returning-error-codes-from-a-method.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

