---
title: Stringhe modello documento, creazione guidata applicazione MFC | Documenti Microsoft
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
ms.openlocfilehash: 32d684d7b9b5f8057893d79b864be7b6d9b512fc
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122196"
---
# <a name="document-template-strings-mfc-application-wizard"></a>Stringhe modello documento, Creazione guidata applicazione MFC
In questa pagina della creazione guidata applicazione MFC, fornire o ridefinire le opzioni seguenti per agevolare la localizzazione e la gestione dei documenti. Stringhe modello documento sono disponibili per le applicazioni che includono **Supporto architettura documento/visualizzazione** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md). Non sono disponibili per le finestre di dialogo. Poiché la maggior parte delle stringhe di modello di documento sono visibili e utilizzate dagli utenti dell'applicazione, vengono localizzate nel **lingua della risorsa** indicato nella **tipo di applicazione** pagina della procedura guidata.  
  
 **Stringhe non localizzate**  
 Si applica alle applicazioni che creano documenti degli utenti. Gli utenti possono aprire, stampare e salvare i documenti più facilmente se si fornisce un'estensione di file e un ID di tipo file. Questi elementi non localizzati perché vengono usate dal sistema piuttosto che dall'utente.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Estensione di file**|Imposta l'estensione di file associata con i documenti salvati dall'utente quando si utilizza l'applicazione. Ad esempio, se il progetto viene denominato Widget, è possibile chiamare wgt l'estensione file. (Quando si immette l'estensione di file, non includere un punto.)<br /><br /> Se si specifica un'estensione di file, le soluzioni possono stampare documenti dell'applicazione senza avviare l'applicazione quando l'utente rilascia l'icona del documento su un'icona della stampante.<br /><br /> Se non si specifica un'estensione, un utente deve specificare un'estensione di file durante il salvataggio di file. La procedura guidata non fornisce un'estensione di file predefinita.|  
|**ID tipo di file**|Imposta l'etichetta per il tipo di documento nel Registro di sistema.|  
  
 **Stringhe localizzate**  
 Consente di produrre stringhe associate al documento che vengono lette e utilizzate dagli utenti dell'applicazione, pertanto le stringhe sono localizzate e l'applicazione.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Lingua**|Indica la lingua in cui sono visualizzate le stringhe in tutte le caselle in **stringhe localizzate**. Per modificare il valore in questa finestra, selezionare la lingua appropriata dall'elenco **lingua della risorsa** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.|  
|**Didascalia del frame principale**|Imposta il testo visualizzato nella parte superiore del frame principale dell'applicazione. Per impostazione predefinita, il nome del progetto.|  
|**Nome del tipo di documento**|Identifica il tipo di documento in cui un documento dell'applicazione può essere raggruppato. Per impostazione predefinita, il nome del progetto. Modifica il valore predefinito non modifica eventuali altre opzioni disponibili in questa finestra di dialogo.|  
|**Nome filtro**|Imposta il nome che possono indicare agli utenti per individuare i file del tipo di file. Questa opzione è disponibile il **i file di tipo** e **Salva come** opzioni standard di Windows **Open** e **Salva con nome** finestre di dialogo. Per impostazione predefinita, il nome del progetto più file, seguito dall'estensione fornita nel **estensione di File**. Ad esempio, se il progetto viene denominato Widget e l'estensione del file è wgt, il **nome del filtro** è file Widget (wgt) per impostazione predefinita.|  
|**Nome breve nuovo file**|Imposta il nome visualizzato nella finestra standard di Windows **New** finestra di dialogo, se è presente più di un nuovo modello di documento. Se l'applicazione è un [server di automazione](../../mfc/automation-servers.md), questo nome viene utilizzato come il nome breve dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto.|  
|**Nome lungo del tipo di file**|Imposta il nome del tipo di file nel Registro di sistema. Se l'applicazione è un server di automazione, questo nome viene utilizzato come il nome lungo dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto sul segno più. Documento.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)

