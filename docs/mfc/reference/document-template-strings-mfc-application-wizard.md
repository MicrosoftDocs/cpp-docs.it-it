---
title: Stringhe modello documento, creazione guidata applicazione MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfc.exe.doctemp
dev_langs:
- C++
helpviewer_keywords:
- MFC Application Wizard, document template strings
ms.assetid: 8109f662-3182-4682-977a-2503321c678a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 616bbeee5e148bbd2e230ad33d0140b224c1ab9e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384009"
---
# <a name="document-template-strings-mfc-application-wizard"></a>Stringhe modello documento, Creazione guidata applicazione MFC

In questa pagina della creazione guidata applicazione MFC, fornire o perfezionare le opzioni seguenti per facilitare la localizzazione e la gestione dei documenti. Stringhe modello documento sono disponibili per le applicazioni che includono **supporto per l'architettura documento/visualizzazione** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md). Non sono disponibili per le finestre di dialogo. Poiché la maggior parte delle stringhe di modello di documento sono visibili e utilizzate dagli utenti dell'applicazione, sono localizzate nel **lingua della risorsa** indicato nel **tipo di applicazione** pagina della procedura guidata.

- **Stringhe canonico non localizzate**

   Si applica alle applicazioni che creano i documenti dell'utente. Gli utenti possono aprire, stampare e salvare i documenti più facilmente se si specifica un'estensione di file e un ID del tipo di file. Questi elementi non localizzati perché vengono usate dal sistema piuttosto che dall'utente.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Estensione di file**|Imposta l'estensione di file associata ai documenti in cui l'utente vengono salvate quando si usa l'applicazione. Ad esempio, se il progetto viene denominato Widget, è possibile denominare il wgt estensione di file. (Quando si immette l'estensione di file, non includere il periodo.)<br /><br /> Se si specifica un'estensione di file, finestra di esplorazione possibile stampare documenti dell'applicazione senza avviare l'applicazione quando l'utente rilascia l'icona del documento su un'icona della stampante.<br /><br /> Se non si specifica un'estensione, un utente deve specificare un'estensione di file durante il salvataggio di file. La procedura guidata non fornisce un'estensione di file predefinita.|
   |**ID del tipo di file**|Imposta l'etichetta per il tipo di documento nel Registro di sistema.|

- **Stringhe localizzate**

   Genera stringhe associate le applicazioni e dei documenti che vengono letti e usato dagli utenti dell'applicazione, in modo che le stringhe localizzate.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Lingua**|Indica la lingua in cui sono visualizzate le stringhe in tutte le caselle sotto **stringhe localizzate**. Per modificare il valore in questa casella, selezionare la lingua appropriata dall'elenco **lingua della risorsa** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.|
   |**Didascalia del frame principale**|Imposta il testo visualizzato nella parte superiore del frame principale dell'applicazione. Per impostazione predefinita, il nome del progetto.|
   |**Nome del tipo di documento**|Identifica il tipo di documento in cui un documento dell'applicazione può essere raggruppato. Per impostazione predefinita, il nome del progetto. Modificando il valore predefinito non modifica eventuali altre opzioni nella finestra di dialogo.|
   |**Nome del filtro**|Imposta il nome che possono indicare gli utenti per trovare i file del tipo di file. Questa opzione è disponibile il **i file di tipo** e **Salva come tipo** opzioni nella finestra di Windows standard **Open** e **Salva con nome** finestre di dialogo. Per impostazione predefinita, il nome del progetto più file, seguito dall'estensione fornita nel **estensione di File**. Ad esempio, se il progetto è denominato Widget e l'estensione del file è wgt, il **nome del filtro** è file Widget (wgt) per impostazione predefinita.|
   |**Nome breve del file nuovo**|Imposta il nome visualizzato nella finestra di Windows standard **New** finestra di dialogo, se è presente più di un nuovo modello di documento. Se l'applicazione è un' [server di automazione](../../mfc/automation-servers.md), questo nome viene usato come nome breve dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto.|
   |**Nome lungo del tipo di file**|Imposta il nome del tipo di file nel Registro di sistema. Se l'applicazione è un server di automazione, questo nome viene utilizzato come il nome lungo dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto sul segno più. Documento.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)

