---
description: 'Ulteriori informazioni su: stringhe modello di documento, creazione guidata applicazione MFC'
title: Stringhe modello documento, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.doctemp
helpviewer_keywords:
- MFC Application Wizard, document template strings
ms.assetid: 8109f662-3182-4682-977a-2503321c678a
ms.openlocfilehash: 839626915b5e60dd47182dd42f1182a092f0b3ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219915"
---
# <a name="document-template-strings-mfc-application-wizard"></a>Stringhe modello documento, Creazione guidata applicazione MFC

In questa pagina della creazione guidata applicazione MFC fornire o ridefinire le opzioni seguenti per semplificare la gestione e la localizzazione dei documenti. Le stringhe di modello di documento sono disponibili per le applicazioni che includono il supporto per l' **architettura documento/visualizzazione** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md). Non sono disponibili per le finestre di dialogo. Poiché la maggior parte delle stringhe di modello di documento sono visibili e usate dagli utenti dell'applicazione, sono localizzate nella **lingua della risorsa** indicata nella pagina **tipo di applicazione** della procedura guidata.

- **Stringhe non localizzate**

   Si applica alle applicazioni che creano documenti utente. Gli utenti possono aprire, stampare e salvare documenti più facilmente se si forniscono un'estensione di file e un ID del tipo di file. Questi elementi non sono localizzati perché vengono usati dal sistema anziché dall'utente.

   |Opzione|Description|
   |------------|-----------------|
   |**Estensione file**|Imposta l'estensione di file associata ai documenti che l'utente salva quando usa l'applicazione. Ad esempio, se il progetto è denominato widget, è possibile assegnare al file l'estensione WGT. Quando si immette l'estensione di file, non includere il punto.<br /><br /> Se si fornisce un'estensione di file, Esplora risorse può stampare i documenti dell'applicazione senza avviare l'applicazione quando l'utente rilascia l'icona del documento sull'icona di una stampante.<br /><br /> Se non si specifica un'estensione, un utente deve specificare un'estensione di file durante il salvataggio dei file. La procedura guidata non fornisce un'estensione di file predefinita.|
   |**ID tipo di file**|Imposta l'etichetta per il tipo di documento nel registro di sistema.|

- **Stringhe localizzate**

   Produce stringhe associate all'applicazione e al documento che vengono lette e usate dagli utenti dell'applicazione, quindi le stringhe sono localizzate.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Lingua**|Indica la lingua in cui vengono visualizzate le stringhe per tutte le caselle sotto le **stringhe localizzate**. Per modificare il valore in questa casella, selezionare la lingua appropriata in **lingua risorse** nella pagina [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della creazione guidata applicazione MFC.|
   |**Didascalia del frame principale**|Imposta il testo visualizzato nella parte superiore del frame dell'applicazione principale. Per impostazione predefinita, il nome del progetto.|
   |**Nome del tipo di documento**|Identifica il tipo di documento in cui è possibile raggruppare un documento dell'applicazione. Per impostazione predefinita, il nome del progetto. La modifica dell'impostazione predefinita non comporta la modifica di altre opzioni in questa finestra di dialogo.|
   |**Nome filtro**|Imposta il nome che gli utenti possono indicare per trovare i file del tipo di file. Questa opzione è disponibile nelle finestre di dialogo **Apri** e **Salva con nome** **dei file di tipo** e **Salva come** . Per impostazione predefinita, il nome del progetto più i file, seguiti dall'estensione specificata nell' **estensione di file**. Ad esempio, se il progetto è denominato widget e l'estensione del file è. WGT, il **nome del filtro** è file widget (*. WGT) per impostazione predefinita.|
   |**Nuovo nome breve del file**|Imposta il nome visualizzato nella finestra di dialogo **nuovo** standard di Windows, se è presente più di un nuovo modello di documento. Se l'applicazione è un [server di automazione](../../mfc/automation-servers.md), questo nome viene usato come nome breve dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto.|
   |**Nome lungo del tipo di file**|Imposta il nome del tipo di file nel registro di sistema. Se l'applicazione è un server di automazione, questo nome viene usato come nome lungo dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto più. Documento.|

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
