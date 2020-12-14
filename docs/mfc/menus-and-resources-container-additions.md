---
description: 'Altre informazioni su: menu e risorse: aggiunte di contenitori'
title: 'Menu e risorse: aggiunte di contenitori'
ms.date: 11/04/2016
f1_keywords:
- IDP_OLE_INIT_FAILED
- IDP_FAILED_TO_CREATE
- VK_ESCAPE
helpviewer_keywords:
- application accelerator table [MFC]
- VK_ESCAPE key [MFC]
- IDP_FAILED_TO_CREATE macro [MFC]
- visual editing, application menus and resources
- OLE containers [MFC], menus and resources
- accelerator tables [MFC], container applications
- IDP_OLE_INIT_FAILED macro [MFC]
- CONTAIN tutorial [MFC]
- Links menu item [MFC]
ms.assetid: 425448be-8ca0-412e-909a-a3a9ce845288
ms.openlocfilehash: e32167e66693587a32732c1c20fc6d85d3010ecb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253364"
---
# <a name="menus-and-resources-container-additions"></a>Menu e risorse: aggiunte di contenitori

Questo articolo illustra le modifiche che devono essere apportate ai menu e ad altre risorse in un'applicazione contenitore di modifica visiva.

Nelle applicazioni contenitore è necessario effettuare due tipi di modifiche: le modifiche alle risorse esistenti per supportare la modifica visiva OLE e l'aggiunta di nuove risorse utilizzate per l'attivazione sul posto. Se si usa la creazione guidata applicazione per creare l'applicazione contenitore, questa procedura verrà eseguita per l'utente, ma potrebbe essere necessaria una certa personalizzazione.

Se non si utilizza la creazione guidata applicazione, è consigliabile esaminare OCLIENT. RC, lo script di risorsa per l'applicazione di esempio OCLIENT, per vedere come vengono implementate queste modifiche. Vedere l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md).

Gli argomenti trattati in questo articolo includono:

- [Aggiunte al menu contenitore](#_core_container_menu_additions)

- [Aggiunte a tabella Accelerator](#_core_container_application_accelerator_table_additions)

- [Aggiunte di tabelle di stringhe](#_core_string_table_additions_for_container_applications)

## <a name="container-menu-additions"></a><a name="_core_container_menu_additions"></a> Aggiunte al menu contenitore

È necessario aggiungere gli elementi seguenti al menu modifica:

|Elemento|Scopo|
|----------|-------------|
|**Inserisci nuovo oggetto**|Apre la finestra di dialogo OLE Insert Object per inserire un elemento collegato o incorporato nel documento.|
|**Incolla collegamento**|Incolla un collegamento all'elemento negli Appunti nel documento.|
|**Verbo OLE**|Chiama il verbo primario dell'elemento selezionato. Il testo di questa voce di menu viene modificato in modo da riflettere il verbo primario dell'elemento selezionato.|
|**Collegamenti**|Apre la finestra di dialogo Modifica collegamenti OLE per modificare gli elementi collegati esistenti.|

Oltre alle modifiche elencate in questo articolo, il file di origine deve includere AFXOLECL. RC, necessario per l'implementazione del libreria Microsoft Foundation Class. Inserisci nuovo oggetto è l'unica aggiunta di menu richiesta. È possibile aggiungere altri elementi, ma quelli elencati di seguito sono i più comuni.

È necessario creare un nuovo menu per l'applicazione contenitore se si desidera supportare l'attivazione sul posto degli elementi contenuti. Questo menu è costituito dallo stesso menu di file e dai menu popup della finestra utilizzati quando i file sono aperti, ma sono presenti due separatori tra di essi. Questi separatori vengono usati per indicare la posizione in cui l'elemento (componente) del server (applicazione) deve inserire i menu quando viene attivato sul posto. Per ulteriori informazioni su questa tecnica di Unione dei menu, vedere menu [e risorse: Unione di menu](menus-and-resources-menu-merging.md).

## <a name="container-application-accelerator-table-additions"></a><a name="_core_container_application_accelerator_table_additions"></a> Aggiunta tabella acceleratore applicazione contenitore

Sono necessarie piccole modifiche alle risorse della tabella dei tasti di scelta rapida dell'applicazione contenitore se si supporta l'attivazione sul posto. La prima modifica consente all'utente di premere il tasto di escape (ESC) per annullare la modalità di modifica sul posto. Aggiungere la voce seguente alla tabella di tasti di scelta rapida principale:

|ID|Chiave|Tipo|
|--------|---------|----------|
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|

La seconda modifica consiste nel creare una nuova tabella di tasti di scelta rapida che corrisponde alla nuova risorsa di menu creata per l'attivazione sul posto. Questa tabella include voci per i menu file e finestra oltre alla voce VK_ESCAPE precedente. Nell'esempio seguente viene illustrata la tabella dei tasti di scelta rapida creata per l'attivazione sul posto nel [contenitore](../overview/visual-cpp-samples.md)di esempio MFC:

|ID|Chiave|Tipo|
|--------|---------|----------|
|ID_FILE_NEW|CTRL+N|**VIRTKEY**|
|ID_FILE_OPEN|CTRL+O|**VIRTKEY**|
|ID_FILE_SAVE|CTRL+S|**VIRTKEY**|
|ID_FILE_PRINT|CTRL+P|**VIRTKEY**|
|ID_NEXT_PANE|VK_F6|**VIRTKEY**|
|ID_PREV_PANE|MAIUSC + VK_F6|**VIRTKEY**|
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|

## <a name="string-table-additions-for-container-applications"></a><a name="_core_string_table_additions_for_container_applications"></a> Aggiunte di tabelle di stringhe per le applicazioni contenitore

La maggior parte delle modifiche apportate alle tabelle di stringhe per le applicazioni contenitore corrisponde alle voci di menu aggiuntive indicate in [aggiunte al menu contenitore](#_core_container_menu_additions). Forniscono il testo visualizzato nella barra di stato quando ogni voce di menu viene visualizzata. Ad esempio, di seguito sono riportate le voci della tabella di stringhe generate dalla creazione guidata applicazione:

|ID|string|
|--------|------------|
|IDP_OLE_INIT_FAILED|Inizializzazione OLE non riuscita. Verificare che la versione delle librerie OLE sia corretta.|
|IDP_FAILED_TO_CREATE|Impossibile creare l'oggetto. Verificare che l'oggetto sia stato immesso nel registro di sistema.|

## <a name="see-also"></a>Vedi anche

[Menu e risorse (OLE)](menus-and-resources-ole.md)<br/>
[Menu e risorse: aggiunte server](menus-and-resources-server-additions.md)
