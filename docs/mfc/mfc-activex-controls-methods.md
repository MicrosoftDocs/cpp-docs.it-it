---
title: 'Controlli ActiveX MFC: Metodi | Documenti Microsoft'
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
ms.openlocfilehash: 9b09de5382117b4444eb1bfd90bc0f9d447e537e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348309"
---
# <a name="mfc-activex-controls-methods"></a>Controlli ActiveX MFC: metodi
Un controllo ActiveX genera eventi per comunicare con il relativo contenitore del controllo. Un contenitore può anche comunicare con un controllo tramite metodi e proprietà. Metodi vengono chiamati anche funzioni.  
  
 Metodi e proprietà forniscono un'interfaccia di esportazione per l'uso da altre applicazioni, ad esempio i client di automazione e i contenitori dei controlli ActiveX. Per ulteriori informazioni sulle proprietà di controllo ActiveX, vedere l'articolo [controlli ActiveX MFC: proprietà](../mfc/mfc-activex-controls-properties.md).  
  
 Metodi sono simili in uso e di fine per le funzioni membro di una classe C++. Esistono due tipi di metodi che può implementare il controllo: predefinite e personalizzate. Simile a eventi predefiniti, i metodi predefiniti per il quale sono metodi [COleControl](../mfc/reference/colecontrol-class.md) fornisce un'implementazione. Per ulteriori informazioni sui metodi predefiniti, vedere l'articolo [controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md). Metodi personalizzati, definiti dallo sviluppatore, consentono un'ulteriore personalizzazione del controllo. Per ulteriori informazioni, vedere l'articolo [controlli ActiveX MFC: aggiunta di metodi personalizzati](../mfc/mfc-activex-controls-adding-custom-methods.md).  
  
 Microsoft Foundation classe libreria (MFC) implementa un meccanismo che consente al controllo per il supporto di metodi predefiniti e personalizzati. La prima parte è una classe `COleControl`. Derivata da `CWnd`, `COleControl` funzioni membro supportano metodi predefiniti che sono comuni a tutti i controlli ActiveX. La seconda parte di questo meccanismo è la mappa di invio. Una mappa di invio è simile a una mappa del messaggio; Tuttavia, anziché una funzione di mapping a un ID di messaggio di Windows, una mappa di invio esegue il mapping di funzioni membro virtuali a ID.  
  
 Per un controllo supportare i vari metodi in modo corretto, la classe deve dichiarare una mappa di invio. Questa operazione viene eseguita la seguente riga di codice si trova nell'intestazione della classe controllo (. H) file:  
  
 [!code-cpp[NVC_MFC_AxUI#13](../mfc/codesnippet/cpp/mfc-activex-controls-methods_1.h)]  
  
 Lo scopo principale della mappa di invio consiste nello stabilire la relazione tra i nomi dei metodi utilizzati da un chiamante esterno (ad esempio il contenitore) e le funzioni membro della classe del controllo che implementano i metodi. Dopo la mappa di invio è stata dichiarata, deve essere definito nell'implementazione del controllo (. File CPP). Le righe di codice seguenti definiscono la mappa di invio:  
  
 [!code-cpp[NVC_MFC_AxUI#14](../mfc/codesnippet/cpp/mfc-activex-controls-methods_2.cpp)]  
[!code-cpp[NVC_MFC_AxUI#15](../mfc/codesnippet/cpp/mfc-activex-controls-methods_3.cpp)]  
  
 Se è stata utilizzata la [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare il progetto, tali righe sono state aggiunte automaticamente. Se non è stata utilizzata la creazione guidata controllo ActiveX MFC, è necessario aggiungere manualmente queste righe.  
  
 Gli articoli seguenti illustrano in dettaglio i metodi:  
  
-   [Controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md)  
  
-   [Controlli ActiveX MFC: aggiunta di metodi personalizzati](../mfc/mfc-activex-controls-adding-custom-methods.md)  
  
-   [Controlli ActiveX MFC: restituzione di codici di errore da un metodo](../mfc/mfc-activex-controls-returning-error-codes-from-a-method.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

