---
title: Stringhe modello documento, guidata aggiunta classe MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.class.mfc.simple.doctemp
dev_langs:
- C++
helpviewer_keywords:
- MFC Add Class Wizard, document control strings
ms.assetid: 14e1c834-5e79-4dbd-811f-ec8f0a9cdcb2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 247793199b1e865941659b970e4e59a688137a8e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712231"
---
# <a name="document-template-strings-mfc-add-class-wizard"></a>Stringhe modello documento, Creazione guidata aggiunta classe MFC
Questa pagina della procedura guidata è disponibile solo per le classi che soddisfano i criteri seguenti:  
  
-   Il progetto supporta l'architettura documento/visualizzazione.  
  
-   La classe di base della nuova classe viene [CFormView](../../mfc/reference/cformview-class.md).  
  
-   La casella di controllo **genera risorse DocTemplate** viene controllata in base il **nomi** sezione del [Creazione guidata classe MFC](../../mfc/reference/mfc-add-class-wizard.md).  
  
 La procedura guidata offre impostazioni predefinite per i valori seguenti facilitare la progettazione di visualizzazione di form, la gestione e la localizzazione. Poiché la maggior parte delle stringhe di modello di documento sono visibili e utilizzate dagli utenti del modulo, sono localizzate nel **lingua della risorsa** indicato nel [tipi di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC Quando è stato creato il progetto.  
  
> [!NOTE]
>  La procedura guidata non fornisce il supporto della stampa automatico per le classi derivate da `CFormView`.  
  
 Visualizzare [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md) per altre informazioni.  
  
## <a name="nonlocalized-strings"></a>Stringhe canonico non localizzate  
 Si applica alle applicazioni che creano i documenti dell'utente. Gli utenti possono aprire e salvare i documenti più facilmente se il tipo di documento è un'estensione di file e un ID del tipo di file. Questi elementi non localizzati perché vengono usate dal sistema piuttosto che dall'utente.  
  
- **Estensione di file**

   Imposta l'estensione di file associato al tipo di documento per l'applicazione di form. Estensione di file predefinita in base al nome di classe. Ad esempio, se la nuova classe MFC è denominata `CWidget`, per impostazione predefinita, l'estensione è. apprezzabili. L'estensione del file viene usato nei filtri di file e il **aperto** e **Salva con nome** finestre di dialogo.  
  
   Se si modifica l'estensione di file, la modifica viene riflessa nel **nome del filtro** casella.  
  
   > [!NOTE]
   > Se si modifica l'estensione di file predefinito, non includere il punto.  
  
- **ID del tipo di file**

   Imposta l'etichetta per il tipo di documento nel Registro di sistema.  
  
## <a name="localized-strings"></a>Stringhe localizzate  
 Genera stringhe associate i form e i documenti che vengono letti e usati dagli utenti dell'applicazione, in modo che le stringhe localizzate.  
  
- **Nome del tipo di documento**

   Identifica il tipo di documento in cui un documento dell'applicazione può essere raggruppato. Per impostazione predefinita, si basa sul nome della classe. Ad esempio, se la nuova classe MFC è denominata **CWidget**, per impostazione predefinita, il nome del tipo di documento è Widget. Modificando il valore predefinito non modifica eventuali altre opzioni nella finestra di dialogo.  
  
- **Nome del filtro**

   Imposta il nome che gli utenti possono indicare per trovare i file del tipo di file specificato. Questa opzione è disponibile il **i file di tipo** e **Salva come tipo** opzioni nella finestra di Windows standard **Open** e **Salva con nome** finestre di dialogo. Per impostazione predefinita, il nome è basato sul nome del progetto e i file, seguiti dall'estensione indicata nel **estensione di File**. Ad esempio, se il progetto è denominato Widget e l'estensione è WID, il **nome del filtro** è Widget file (*. WID) per impostazione predefinita.  
  
- **Nome breve del file nuovo**

   Imposta il nome visualizzato nella finestra di Windows standard **New** finestra di dialogo, se il progetto contiene più di un modello di documento. Se l'applicazione è un' [server di automazione](../../mfc/automation-servers.md), questo nome viene usato come nome breve dell'oggetto di automazione. Per impostazione predefinita, questo nome è basato sul nome della classe.  
  
- **Nome lungo del tipo di file**

   Imposta il nome del tipo di file nel Registro di sistema. Se l'applicazione è un server di automazione, questo nome viene utilizzato come il nome lungo dell'oggetto di automazione. Per impostazione predefinita, questo nome è basato sul nome della classe sul segno più. Documento. Ad esempio, se è il nome della classe `CWidget`, il **tipo di File nome esteso** è documento di Widget.  
  
- **Classe documento**

   Indica la classe del progetto documento. Per impostazione predefinita, questa classe è la classe del principale dell'applicazione documento, come elencato nella [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC. È possibile selezionare un'altra classe documento dall'elenco, se sono stati aggiunti altre classi documento nel progetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Guidata aggiunta classe MFC](../../mfc/reference/mfc-add-class-wizard.md)   
 [Classe MFC](../../mfc/reference/adding-an-mfc-class.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
