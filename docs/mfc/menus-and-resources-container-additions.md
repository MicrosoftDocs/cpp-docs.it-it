---
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
ms.openlocfilehash: c8da58316f471f7b7d26e142cc1dd1ccaa6ad8b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364786"
---
# <a name="menus-and-resources-container-additions"></a>Menu e risorse: aggiunte di contenitori

In questo articolo vengono illustrate le modifiche che devono essere apportate ai menu e altre risorse in un'applicazione contenitore di modifica visiva.

Nelle applicazioni contenitore, è necessario apportare due tipi di modifiche: modifiche alle risorse esistenti per supportare la modifica visiva OLE e l'aggiunta di nuove risorse utilizzate per l'attivazione sul posto. Se si utilizza la creazione guidata applicazione per creare l'applicazione contenitore, questi passaggi verranno eseguiti automaticamente, ma potrebbero richiedere alcune personalizzazioni.

Se non si utilizza la creazione guidata applicazione, è possibile esaminare OCLIENT. RC, lo script di risorsa per l'applicazione di esempio OCLIENT, per vedere come vengono implementate queste modifiche. Vedere l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md).

Gli argomenti trattati in questo articolo includono:Topics covered in this article include:

- [Aggiunte al menu Contenitore](#_core_container_menu_additions)

- [Aggiunte alla tabella degli acceleratori](#_core_container_application_accelerator_table_additions)

- [Aggiunte tabella stringheString Table Additions](#_core_string_table_additions_for_container_applications)

## <a name="container-menu-additions"></a><a name="_core_container_menu_additions"></a>Aggiunte al menu Contenitore

È necessario aggiungere le seguenti voci al menu Modifica:

|Elemento|Scopo|
|----------|-------------|
|**Inserisci nuovo oggetto**|Apre la finestra di dialogo Inserisci oggetto OLE per inserire un elemento collegato o incorporato nel documento.|
|**Incolla collegamento**|Incolla un collegamento all'elemento negli Appunti nel documento.|
|**Verbo OLE**|Chiama il verbo principale dell'elemento selezionato. Il testo di questa voce di menu cambia per riflettere il verbo primario della voce selezionata.|
|**Link**|Apre la finestra di dialogo Modifica collegamenti OLE per modificare gli elementi collegati esistenti.|

Oltre alle modifiche elencate in questo articolo, il file di origine deve includere AFXOLECL. RC, necessario per l'implementazione della libreria Microsoft Foundation Class. Inserisci nuovo oggetto è l'unica aggiunta di menu necessaria. È possibile aggiungere altri elementi, ma quelli elencati di seguito sono i più comuni.

È necessario creare un nuovo menu per l'applicazione contenitore se si desidera supportare l'attivazione sul posto degli elementi contenuti. Questo menu è costituito dallo stesso menu File e dai menu a comparsa Finestra utilizzati quando i file sono aperti, ma ha due separatori posizionati tra di loro. Questi separatori vengono utilizzati per indicare dove il server (componente) elemento (applicazione) deve posizionare i propri menu quando attivato sul posto. Per ulteriori informazioni su questa tecnica di unione dei menu, vedere [Menu e risorse: Unione menu](../mfc/menus-and-resources-menu-merging.md).

## <a name="container-application-accelerator-table-additions"></a><a name="_core_container_application_accelerator_table_additions"></a>Container Application Accelerator Table Additions

Piccole modifiche alle risorse della tabella dei tasti di scelta rapida di un'applicazione contenitore sono necessarie se si supporta l'attivazione sul posto. La prima modifica consente all'utente di premere il tasto escape (ESC) per annullare la modalità di modifica sul posto. Aggiungere la seguente voce alla tabella principale dei tasti di scelta rapida:

|ID|Chiave|Type|
|--------|---------|----------|
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|

La seconda modifica consiste nel creare una nuova tabella dei tasti di scelta rapida che corrisponde alla nuova risorsa di menu creata per l'attivazione sul posto. In questa tabella sono riportate le voci per i menu File e Finestra oltre alla voce VK_ESCAPE precedente. L'esempio seguente è la tabella dei tasti di scelta rapida creata per l'attivazione sul posto nell'esempio MFC [CONTAINER](../overview/visual-cpp-samples.md):

|ID|Chiave|Type|
|--------|---------|----------|
|ID_FILE_NEW|CTRL+N|**VIRTKEY**|
|ID_FILE_OPEN|CTRL+O|**VIRTKEY**|
|ID_FILE_SAVE|CTRL+S|**VIRTKEY**|
|ID_FILE_PRINT|CTRL+P|**VIRTKEY**|
|ID_NEXT_PANE|VK_F6|**VIRTKEY**|
|ID_PREV_PANE|Maiusc-VK_F6|**VIRTKEY**|
|ID_CANCEL_EDIT_CNTR|VK_ESCAPE|**VIRTKEY**|

## <a name="string-table-additions-for-container-applications"></a><a name="_core_string_table_additions_for_container_applications"></a>Aggiunte alla tabella di stringhe per le applicazioni contenitoreString Table Additions for Container Applications

La maggior parte delle modifiche apportate alle tabelle di stringhe per le applicazioni contenitore corrisponde alle voci di menu aggiuntive indicate in [Aggiunte menu contenitore](#_core_container_menu_additions). Forniscono il testo visualizzato nella barra di stato quando viene visualizzata ogni voce di menu. Ad esempio, di seguito sono riportate le voci della tabella di stringhe generate dalla procedura guidata dell'applicazione:As an example, here are the string-table entries the application-wizard generates:

|ID|string|
|--------|------------|
|IDP_OLE_INIT_FAILED|Inizializzazione OLE non riuscita. Assicurarsi che le librerie OLE siano la versione corretta.|
|IDP_FAILED_TO_CREATE|Impossibile creare l'oggetto. Assicurarsi che l'oggetto sia immesso nel Registro di sistema.|

## <a name="see-also"></a>Vedere anche

[Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)<br/>
[Menu e risorse: aggiunte di server](../mfc/menus-and-resources-server-additions.md)
