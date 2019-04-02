---
title: 'Menu e risorse: Aggiunte di server'
ms.date: 11/04/2016
f1_keywords:
- IDP_OLE_INIT_FAILED
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
ms.openlocfilehash: 85c7b6059a868e93c6c6a7ebbd7b08dac3233612
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767203"
---
# <a name="menus-and-resources-server-additions"></a>Menu e risorse: Aggiunte di server

Questo articolo vengono illustrate le modifiche da apportare ai menu e altre risorse in un'applicazione server (componente) modifica visiva. Un'applicazione server richiede molti aggiunte alla struttura di menu e altre risorse, perché può essere avviato in una delle tre modalità: autonoma, incorporati, o sul posto. Come descritto nel [menu e risorse (OLE)](../mfc/menus-and-resources-ole.md) articolo, sono presenti un massimo di quattro set di menu. Tutti e quattro vengono usate per un'applicazione MDI server completo, mentre vengono utilizzati per un server ridotto solo tre. La creazione guidata applicazione creerà il layout del menu necessari per il tipo di server desiderato. Alcune personalizzazioni possono essere necessarie.

Se non si utilizza la creazione guidata applicazione, è possibile esaminare HIERSVR. RC, lo script di risorsa per l'applicazione di esempio MFC [HIERSVR](../overview/visual-cpp-samples.md), per vedere come vengono implementate queste modifiche.

Gli argomenti trattati in questo articolo includono:

- [Aggiunte al Menu di server](#_core_server_menu_additions)

- [Tasti di scelta rapida aggiunte alla tabella](#_core_server_application_accelerator_table_additions)

- [Aggiunte alla tabella delle stringhe](../mfc/menus-and-resources-container-additions.md)

- [Aggiunte di server ridotto](#_core_mini.2d.server_additions)

##  <a name="_core_server_menu_additions"></a> Aggiunte al Menu di server

Le applicazioni server, componente, devono disporre di risorse di menu aggiunte per supportare la modifica visiva OLE. I menu utilizzati quando l'applicazione viene eseguita in modalità autonoma non deve essere modificata, ma è necessario aggiungere due nuove risorse di menu prima di compilare l'applicazione: una per il supporto di attivazione sul posto e l'altra per supportare il server è completamente aperto. Entrambe le risorse di menu vengono usate dalle applicazioni ridotto e full.

- Per supportare l'attivazione sul posto, è necessario creare una risorsa di menu che è molto simile alla risorsa di menu usata durante l'esecuzione in modalità autonoma. La differenza in questo menu è che le voci di File e finestra e altre voci di menu che gestiscono l'applicazione e non i dati sono mancanti. L'applicazione contenitore fornirà queste voci di menu. Per altre informazioni su e un esempio di, questa tecnica di unione di menu, vedere l'articolo [menu e risorse: Menu Merging](../mfc/menus-and-resources-menu-merging.md).

- Per supportare l'attivazione completamente aperto, è necessario creare una risorsa di menu quasi identica alla risorsa di menu usata quando è stata eseguita in modalità autonoma. L'unica modifica a questa risorsa di menu è che alcuni elementi sono riformulate per rispecchiare il fatto che il server opera su un elemento incorporato in un documento composito.

Oltre alle modifiche elencate in questo articolo, il file di risorse deve includere AFXOLESV. RC, è necessario per l'implementazione della libreria Microsoft Foundation Class. Questo file si trova nella sottodirectory MFC\Include.

##  <a name="_core_server_application_accelerator_table_additions"></a> Aggiunta di server applicazioni tasti di scelta rapida tabella

Due nuove risorse di tabella di tasti di scelta rapida devono essere aggiunto per le applicazioni server; corrispondono direttamente alle nuove risorse di menu descritte in precedenza. La prima tabella di tasti di scelta rapida viene usata quando l'applicazione server è attivata sul posto. Costituita da tutte le voci nella tabella di tasti di scelta rapida della visualizzazione tranne quelle associate al File e una finestra del menu.

Nella seconda tabella è quasi una copia esatta della tabella di tasti di scelta rapida della visualizzazione. Eventuali differenze in parallelo le modifiche apportate nel menu di scelta completamente aperti indicato nella [aggiunte al Menu di Server](#_core_server_menu_additions).

Per un esempio di queste modifiche nella tabella di tasti di scelta rapida, confrontare le tabelle di tasti di scelta rapida IDR_HIERSVRTYPE_SRVR_IP e IDR_HIERSVRTYPE_SRVR_EMB con IDR_MAINFRAME in HIERSVR. File RC inclusi nell'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md). I File e finestra di scelta rapida non sono presenti nella tabella sul posto e nella tabella incorporata sono copie esatte di essi.

##  <a name="_core_string_table_additions_for_server_applications"></a> Aggiunte alla tabella delle stringhe per le applicazioni Server

Aggiungere alla tabella solo una stringa è necessaria in un'applicazione server, ovvero una stringa per indicare che l'inizializzazione OLE non riuscita. Ad esempio, ecco la voce della tabella di stringhe che genera la creazione guidata applicazione:

|Id|Stringa|
|--------|------------|
|IDP_OLE_INIT_FAILED|Inizializzazione OLE non riuscita. Assicurarsi che le librerie OLE sono la versione corretta.|

##  <a name="_core_mini.2d.server_additions"></a> Aggiunte di server ridotto

Si applicano le stesse aggiunte per i server ridotti a quelli elencati in precedenza per i server completi. Poiché un server ridotto non può essere eseguito in modalità autonoma, il relativo menu principale è molto più piccolo. Nel menu principale creato dalla procedura guidata dell'applicazione sono disponibili solo un menu di File, contenente solo le voci di uscita e circa. Sul posto e incorporati menu e tasti di scelta rapida per i server ridotti sono identici a quelli per i server completi.

## <a name="see-also"></a>Vedere anche

[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Menu e risorse: Unione di menu](../mfc/menus-and-resources-menu-merging.md)
