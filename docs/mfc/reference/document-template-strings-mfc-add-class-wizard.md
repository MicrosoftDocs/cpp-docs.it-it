---
title: Stringhe modello documento, aggiunta guidata classe MFC | Documenti Microsoft
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
ms.openlocfilehash: 79de28847809a9b9d7e0a160f2a4a45375f0e1fe
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121513"
---
# <a name="document-template-strings-mfc-add-class-wizard"></a>Stringhe modello documento, Creazione guidata aggiunta classe MFC
Questa pagina della procedura guidata è disponibile solo per le classi che soddisfano i criteri seguenti:  
  
-   Il progetto MFC supporta l'architettura documento/visualizzazione.  
  
-   La classe di base della nuova classe viene [CFormView](../../mfc/reference/cformview-class.md).  
  
-   La casella di controllo **genera risorse DocTemplate** è selezionata nella **nomi** sezione del [Creazione guidata classe MFC](../../mfc/reference/mfc-add-class-wizard.md).  
  
 La procedura guidata fornisce i valori predefiniti per i valori seguenti facilitare la progettazione di visualizzazione di form, la gestione e la localizzazione. Poiché la maggior parte delle stringhe di modello di documento sono visibili e utilizzate dagli utenti del form, vengono localizzate nel **lingua della risorsa** indicato nella [tipi di applicazioni](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC Quando è stato creato il progetto.  
  
> [!NOTE]
>  La procedura guidata non fornisce il supporto di stampa automatica per le classi derivate da `CFormView`.  
  
 Vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md) per altre informazioni.  
  
## <a name="nonlocalized-strings"></a>Stringhe non localizzate  
 Si applica alle applicazioni che creano documenti degli utenti. Gli utenti possono aprire e salvare i documenti più facilmente se il tipo di documento ha un'estensione di file e un ID di tipo file. Questi elementi non localizzati perché vengono usate dal sistema piuttosto che dall'utente.  
  
 **Estensione di file**  
 Imposta l'estensione di file associato al tipo di documento per questa applicazione di form. Estensione di file predefinita in base al nome di classe. Se, ad esempio, la nuova classe MFC è denominata `CWidget`, per impostazione predefinita, l'estensione è. apprezzabili. L'estensione del file viene utilizzata nei filtri di file e il **Open** e **Salva con nome** finestre di dialogo.  
  
 Se si modifica l'estensione di file, la modifica viene riflessa nella **nome del filtro** casella.  
  
> [!NOTE]
>  Se si modifica l'estensione di file predefinita, non includere il periodo.  
  
 **ID tipo di file**  
 Imposta l'etichetta per il tipo di documento nel Registro di sistema.  
  
## <a name="localized-strings"></a>Stringhe localizzate  
 Consente di produrre stringhe associate con i form e i documenti che vengono lette e utilizzati dagli utenti dell'applicazione, pertanto le stringhe sono localizzate.  
  
 **Nome del tipo di documento**  
 Identifica il tipo di documento in cui un documento dell'applicazione può essere raggruppato. Per impostazione predefinita, è basato sul nome della classe. Se, ad esempio, la nuova classe MFC è denominata **CWidget**, per impostazione predefinita, il nome del tipo di documento è Widget. Modifica il valore predefinito non modifica eventuali altre opzioni disponibili in questa finestra di dialogo.  
  
 **Nome filtro**  
 Imposta il nome che gli utenti possono indicare per individuare i file del tipo di file specificato. Questa opzione è disponibile il **i file di tipo** e **Salva come** opzioni standard di Windows **Open** e **Salva con nome** finestre di dialogo. Per impostazione predefinita, il nome è basato sul nome del progetto più file, seguiti dall'estensione indicata nel **estensione**. Ad esempio, se il progetto viene denominato Widget e l'estensione di file è WID, il **nome del filtro** è file Widget (*. WID) per impostazione predefinita.  
  
 **Nome breve nuovo file**  
 Imposta il nome visualizzato nella finestra standard di Windows **New** finestra di dialogo, se il progetto contenga più di un modello di documento. Se l'applicazione è un [server di automazione](../../mfc/automation-servers.md), questo nome viene utilizzato come il nome breve dell'oggetto di automazione. Per impostazione predefinita, questo nome è basato sul nome della classe.  
  
 **Nome lungo del tipo di file**  
 Imposta il nome del tipo di file nel Registro di sistema. Se l'applicazione è un server di automazione, questo nome viene utilizzato come il nome lungo dell'oggetto di automazione. Per impostazione predefinita, questo nome è basato sul nome della classe segno più. Documento. Ad esempio, se è il nome della classe `CWidget`, il **tipo di File nome lungo** è documento di Widget.  
  
 **Classe di documento**  
 Indica la classe di documento del progetto. Per impostazione predefinita, questa classe è una classe di documento dell'applicazione principale, come elencato nella [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC. È possibile selezionare un'altra classe documento dall'elenco, se sono stati aggiunti altre classi documento nel progetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta guidata classe MFC](../../mfc/reference/mfc-add-class-wizard.md)   
 [Classe MFC](../../mfc/reference/adding-an-mfc-class.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
