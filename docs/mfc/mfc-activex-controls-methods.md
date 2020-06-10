---
title: 'Controlli ActiveX MFC: metodi'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], methods
ms.assetid: e20271de-6ffa-4ba0-848b-bafe6c9e510c
ms.openlocfilehash: 9f9ec06852ed0376583363df7649331a0be02105
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621230"
---
# <a name="mfc-activex-controls-methods"></a>Controlli ActiveX MFC: metodi

Un controllo ActiveX genera eventi per la comunicazione tra se stesso e il relativo contenitore di controlli. Un contenitore può anche comunicare con un controllo tramite metodi e proprietà. I metodi sono anche denominati funzioni.

I metodi e le proprietà forniscono un'interfaccia esportata per l'uso da parte di altre applicazioni, ad esempio client di automazione e contenitori di controlli ActiveX. Per ulteriori informazioni sulle proprietà del controllo ActiveX, vedere l'articolo [controlli ActiveX MFC: Proprietà](mfc-activex-controls-properties.md).

I metodi sono simili in uso e lo scopo delle funzioni membro di una classe C++. Sono disponibili due tipi di metodi che il controllo può implementare: Stock e Custom. Analogamente agli eventi azionari, i metodi azionari sono i metodi per i quali [COleControl](reference/colecontrol-class.md) fornisce un'implementazione. Per ulteriori informazioni sui metodi azionari, vedere l'articolo [controlli ActiveX MFC: aggiunta di metodi azionari](mfc-activex-controls-adding-stock-methods.md). I metodi personalizzati, definiti dallo sviluppatore, consentono una personalizzazione aggiuntiva del controllo. Per ulteriori informazioni, vedere l'articolo [controlli ActiveX MFC: aggiunta di metodi personalizzati](mfc-activex-controls-adding-custom-methods.md).

Il libreria Microsoft Foundation Class (MFC) implementa un meccanismo che consente al controllo di supportare i metodi di inventario e personalizzati. La prima parte è la classe `COleControl` . Derivate da `CWnd` , `COleControl` le funzioni membro supportano metodi azionari comuni a tutti i controlli ActiveX. La seconda parte di questo meccanismo è la mappa di invio. Una mappa di invio è simile a una mappa messaggi; Tuttavia, invece di eseguire il mapping di una funzione a un ID messaggio di Windows, una mappa di invio esegue il mapping delle funzioni membro virtuali agli ID IDispatch.

Affinché un controllo supporti i vari metodi in modo corretto, la relativa classe deve dichiarare una mappa di invio. Questa operazione viene eseguita dalla seguente riga di codice situata nell'intestazione della classe del controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#13](codesnippet/cpp/mfc-activex-controls-methods_1.h)]

Lo scopo principale della mappa di invio è stabilire la relazione tra i nomi di metodo utilizzati da un chiamante esterno (ad esempio il contenitore) e le funzioni membro della classe del controllo che implementano i metodi. Dopo che la mappa di invio è stata dichiarata, deve essere definita nell'implementazione del controllo (. File CPP). Le righe di codice seguenti definiscono la mappa di invio:

[!code-cpp[NVC_MFC_AxUI#14](codesnippet/cpp/mfc-activex-controls-methods_2.cpp)]
[!code-cpp[NVC_MFC_AxUI#15](codesnippet/cpp/mfc-activex-controls-methods_3.cpp)]

Se è stata utilizzata la [creazione guidata controllo ActiveX MFC](reference/mfc-activex-control-wizard.md) per creare il progetto, queste righe sono state aggiunte automaticamente. Se non è stata utilizzata la creazione guidata controllo ActiveX MFC, è necessario aggiungere queste righe manualmente.

Gli articoli seguenti illustrano i metodi in dettaglio:

- [Controlli ActiveX MFC: aggiunta di metodi predefiniti](mfc-activex-controls-adding-stock-methods.md)

- [Controlli ActiveX MFC: aggiunta di metodi personalizzati](mfc-activex-controls-adding-custom-methods.md)

- [Controlli ActiveX MFC: restituzione di codici di errore da un metodo](mfc-activex-controls-returning-error-codes-from-a-method.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
