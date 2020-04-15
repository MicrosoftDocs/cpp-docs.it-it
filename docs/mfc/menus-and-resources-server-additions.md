---
title: 'Menu e risorse: aggiunte di server'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE visual editing servers [MFC]
- accelerator tables [MFC], server applications
- visual editing [MFC], application menus and resources
- server applications [MFC], accelerator table
- string tables [MFC], visual editing applications
- servers [MFC], menu additions
- resources [MFC], server applications
- OLE server applications [MFC], menus and resources
- string editing [MFC], visual editing applications
- IDP_OLE_INIT_FAILED macro [MFC]
- server applications [MFC], OLE menus and resources
- OLE initialization failure [MFC]
ms.assetid: 56ce9e8d-8f41-4db8-8dee-e8b0702d057c
ms.openlocfilehash: 8366cd8b0376766b7914c94a24cef6598761a805
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375984"
---
# <a name="menus-and-resources-server-additions"></a>Menu e risorse: aggiunte di server

In questo articolo vengono illustrate le modifiche che devono essere apportate ai menu e ad altre risorse in un'applicazione server di modifica visiva (componente). Un'applicazione server richiede molte aggiunte alla struttura di menu e ad altre risorse perché può essere avviata in una delle tre modalità seguenti: autonoma, incorporata o sul posto. Come descritto nell'articolo [Menu e risorse (OLE),](../mfc/menus-and-resources-ole.md) sono disponibili un massimo di quattro set di menu. Tutti e quattro vengono utilizzati per un'applicazione MDI full-server, mentre solo tre vengono utilizzati per un miniserver. La creazione guidata applicazione creerà il layout di menu necessario per il tipo di server desiderato. Alcune personalizzazioni potrebbero essere necessarie.

Se non si utilizza la creazione guidata applicazione, è possibile esaminare HIERSVR. RC, lo script di risorsa per l'applicazione di esempio MFC [HIERSVR](../overview/visual-cpp-samples.md), per vedere come vengono implementate queste modifiche.

Gli argomenti trattati in questo articolo includono:Topics covered in this article include:

- [Aggiunte al menu Server](#_core_server_menu_additions)

- [Aggiunte alla tabella degli acceleratori](#_core_server_application_accelerator_table_additions)

- [Aggiunte tabella stringheString Table Additions](../mfc/menus-and-resources-container-additions.md)

- [Aggiunte Miniserver](#_core_mini.2d.server_additions)

## <a name="server-menu-additions"></a><a name="_core_server_menu_additions"></a>Aggiunte al menu Server

Le applicazioni server (componente) devono avere risorse di menu aggiunte per supportare la modifica visiva OLE. I menu utilizzati quando l'applicazione viene eseguita in modalità autonoma non devono essere modificati, ma è necessario aggiungere due nuove risorse di menu prima di compilare l'applicazione: uno per supportare l'attivazione sul posto e uno per supportare il server completamente aperto. Entrambe le risorse di menu vengono utilizzate dalle applicazioni full e miniserver.

- Per supportare l'attivazione sul posto, è necessario creare una risorsa menu molto simile alla risorsa menu usata quando viene eseguita in modalità autonoma. La differenza in questo menu è che le voci di File e finestra (e tutte le altre voci di menu che si occupano dell'applicazione e non i dati) sono mancanti. L'applicazione contenitore fornirà queste voci di menu. Per ulteriori informazioni e un esempio di questa tecnica di unione dei menu, vedere l'articolo [Menu e risorse: unione dei](../mfc/menus-and-resources-menu-merging.md)menu .

- Per supportare l'attivazione completamente aperta, è necessario creare una risorsa menu quasi identica alla risorsa menu utilizzata quando viene eseguita in modalità autonoma. L'unica modifica a questa risorsa di menu è che alcuni elementi vengono riformulati per riflettere il fatto che il server sta operando su un elemento incorporato in un documento composto.

Oltre alle modifiche elencate in questo articolo, il file di risorse deve includere AFXOLESV. RC, necessario per l'implementazione della libreria Microsoft Foundation Class. Questo file si trova nella sottodirectory MFC-Include.

## <a name="server-application-accelerator-table-additions"></a><a name="_core_server_application_accelerator_table_additions"></a>Aggiunte alla tabella di Server Application Accelerator

Due nuove risorse della tabella dei tasti di scelta rapida devono essere aggiunte alle applicazioni server. corrispondono direttamente alle nuove risorse di menu descritte in precedenza. La prima tabella dei tasti di scelta rapida viene utilizzata quando l'applicazione server viene attivata sul posto. È costituito da tutte le voci nella tabella dei tasti di scelta rapida della visualizzazione, ad eccezione di quelle collegate ai menu File e Finestra.

La seconda tabella è quasi una copia esatta della tabella dei tasti di scelta rapida della vista. Eventuali differenze di modifiche parallele apportate nel menu completamente aperto menzionato in [Aggiunte menu server](#_core_server_menu_additions).

Per un esempio di queste modifiche alla tabella dei tasti di scelta rapida, confrontare le tabelle dei tasti di scelta rapida IDR_HIERSVRTYPE_SRVR_IP e IDR_HIERSVRTYPE_SRVR_EMB con IDR_MAINFRAME in HIERSVR. RC incluso nell'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md). I tasti di scelta rapida File e Finestra non sono presenti nella tabella sul posto e copie esatte di essi sono nella tabella incorporata.

## <a name="string-table-additions-for-server-applications"></a><a name="_core_string_table_additions_for_server_applications"></a>Aggiunte alla tabella di stringhe per le applicazioni serverString Table Additions for Server Applications

In un'applicazione server è necessaria una sola aggiunta di tabella di stringa, ovvero una stringa per indicare che l'inizializzazione OLE non è riuscita. Ad esempio, di seguito è riportata la voce della tabella di stringhe generata dalla creazione guidata applicazione:As an example, here is the string-table entry that the application wizard generates:

|ID|string|
|--------|------------|
|IDP_OLE_INIT_FAILED|Inizializzazione OLE non riuscita. Assicurarsi che le librerie OLE siano la versione corretta.|

## <a name="miniserver-additions"></a><a name="_core_mini.2d.server_additions"></a>Aggiunte Miniserver

Le stesse aggiunte si applicano ai miniserver di quelli sopra elencati per i server completi. Poiché un miniserver non può essere eseguito in modalità autonoma, il relativo menu principale è molto più piccolo. Il menu principale creato dalla creazione guidata applicazione ha solo un menu File, contenente solo le voci Exit e About. I menu e gli acceleratori incorporati e sul posto per i miniserver sono gli stessi dei server completi.

## <a name="see-also"></a>Vedere anche

[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Menu e risorse: unione di menu](../mfc/menus-and-resources-menu-merging.md)
