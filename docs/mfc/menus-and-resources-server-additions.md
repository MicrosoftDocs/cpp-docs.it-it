---
description: 'Altre informazioni su: menu e risorse: aggiunte server'
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
ms.openlocfilehash: e53031fd030efa498bd80bdb191f76f66f63d343
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97122876"
---
# <a name="menus-and-resources-server-additions"></a>Menu e risorse: aggiunte di server

Questo articolo illustra le modifiche che devono essere apportate ai menu e ad altre risorse in un'applicazione del server di modifica visiva (componente). Un'applicazione server richiede molte aggiunte alla struttura dei menu e ad altre risorse perché può essere avviata in una delle tre modalità seguenti: autonoma, incorporata o sul posto. Come descritto nell'articolo [menu e risorse (OLE)](menus-and-resources-ole.md) , sono disponibili al massimo quattro set di menu. Tutte e quattro vengono utilizzate per un'applicazione server MDI completa, mentre solo tre vengono utilizzate per un miniserver. La creazione guidata applicazione creerà il layout di menu necessario per il tipo di server desiderato. Potrebbe essere necessaria una personalizzazione.

Se non si utilizza la creazione guidata applicazione, è consigliabile esaminare HIERSVR. RC, lo script di risorsa per l'applicazione di esempio MFC [HIERSVR](../overview/visual-cpp-samples.md), per vedere come vengono implementate queste modifiche.

Gli argomenti trattati in questo articolo includono:

- [Aggiunte al menu Server](#_core_server_menu_additions)

- [Aggiunte a tabella Accelerator](#_core_server_application_accelerator_table_additions)

- [Aggiunte di tabelle di stringhe](menus-and-resources-container-additions.md)

- [Aggiunte miniserver](#_core_mini.2d.server_additions)

## <a name="server-menu-additions"></a><a name="_core_server_menu_additions"></a> Aggiunte al menu Server

Per supportare la modifica visiva OLE, per le applicazioni server (componente) è necessario aggiungere risorse di menu. I menu usati quando l'applicazione viene eseguita in modalità autonoma non devono essere modificati, ma è necessario aggiungere due nuove risorse di menu prima di compilare l'applicazione: una per il supporto dell'attivazione sul posto e una per il supporto del server aperto completamente. Entrambe le risorse di menu vengono usate dalle applicazioni complete e miniserver.

- Per supportare l'attivazione sul posto, è necessario creare una risorsa di menu molto simile alla risorsa di menu utilizzata quando viene eseguita in modalità autonoma. La differenza in questo menu è che mancano gli elementi file e finestra (e tutte le altre voci di menu che gestiscono l'applicazione e non i dati). L'applicazione contenitore fornirà queste voci di menu. Per ulteriori informazioni su e un esempio di questa tecnica di Unione dei menu, vedere l'articolo [menu e risorse: Unione di menu](menus-and-resources-menu-merging.md).

- Per supportare l'attivazione completamente aperta, è necessario creare una risorsa di menu quasi identica alla risorsa di menu utilizzata quando viene eseguita in modalità autonoma. L'unica modifica a questa risorsa di menu è che alcuni elementi vengono riformulati per riflettere il fatto che il server opera su un elemento incorporato in un documento composto.

Oltre alle modifiche elencate in questo articolo, è necessario che il file di risorse includa AFXOLESV. RC, necessario per l'implementazione del libreria Microsoft Foundation Class. Questo file si trova nella sottodirectory MFC\Include

## <a name="server-application-accelerator-table-additions"></a><a name="_core_server_application_accelerator_table_additions"></a> Aggiunta tabella acceleratore applicazione server

È necessario aggiungere due nuove risorse della tabella dei tasti di scelta rapida alle applicazioni server. corrispondono direttamente alle nuove risorse di menu descritte in precedenza. La prima tabella dei tasti di scelta rapida viene utilizzata quando l'applicazione server viene attivata sul posto. È costituito da tutte le voci della tabella dei tasti di scelta rapida della visualizzazione, ad eccezione di quelle associate ai menu file e finestra.

La seconda tabella è quasi una copia esatta della tabella dei tasti di scelta rapida della visualizzazione. Eventuali differenze tra le modifiche parallele apportate nel menu di apertura completa indicato in [aggiunte al menu Server](#_core_server_menu_additions).

Per un esempio di queste modifiche della tabella dei tasti di scelta rapida, confrontare le tabelle IDR_HIERSVRTYPE_SRVR_IP e IDR_HIERSVRTYPE_SRVR_EMB Accelerator con IDR_MAINFRAME in HIERSVR. File RC incluso nell'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md). Gli acceleratori di file e finestre non sono presenti nella tabella sul posto e le loro copie esatte si trovano nella tabella incorporata.

## <a name="string-table-additions-for-server-applications"></a><a name="_core_string_table_additions_for_server_applications"></a> Aggiunte di tabelle di stringhe per le applicazioni server

In un'applicazione server è necessaria una sola tabella di stringhe, ovvero una stringa per indicare che l'inizializzazione OLE non è riuscita. Ecco ad esempio la voce della tabella di stringhe generata dalla procedura guidata dell'applicazione:

|ID|string|
|--------|------------|
|IDP_OLE_INIT_FAILED|Inizializzazione OLE non riuscita. Verificare che la versione delle librerie OLE sia corretta.|

## <a name="miniserver-additions"></a><a name="_core_mini.2d.server_additions"></a> Aggiunte miniserver

Le stesse aggiunte si applicano a miniservers come quelle elencate in precedenza per i server completi. Poiché un miniserver non può essere eseguito in modalità autonoma, il menu principale è molto più piccolo. Il menu principale creato dalla creazione guidata applicazione dispone solo di un menu file, che contiene solo gli elementi Exit e about. I menu incorporati e i tasti di scelta rapida per miniservers sono uguali a quelli dei server completi.

## <a name="see-also"></a>Vedi anche

[Menu e risorse (OLE)](menus-and-resources-ole.md)<br/>
[Menu e risorse: Unione di menu](menus-and-resources-menu-merging.md)
