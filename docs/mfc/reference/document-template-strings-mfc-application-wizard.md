---
title: Stringhe modello documento, creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.doctemp
dev_langs:
- C++
helpviewer_keywords:
- MFC Application Wizard, document template strings
ms.assetid: 8109f662-3182-4682-977a-2503321c678a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5d2fdabb971ab9aad06f5500b98e9d8591266c85
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="document-template-strings-mfc-application-wizard"></a>Stringhe modello documento, Creazione guidata applicazione MFC
In questa pagina della creazione guidata applicazione MFC, fornire o ridefinire le opzioni seguenti per la localizzazione e la gestione dei documenti. Stringhe modello documento sono disponibili per le applicazioni che includono **Supporto architettura documento/visualizzazione** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md). Non sono disponibili per le finestre di dialogo. Poiché la maggior parte delle stringhe di modello di documento sono visibili e utilizzate dagli utenti dell'applicazione, vengono localizzate nel **lingua della risorsa** indicato nella **tipo di applicazione** pagina della procedura guidata.  
  
 **Stringhe non localizzate**  
 Si applica alle applicazioni che creano i documenti utente. Gli utenti possono aprire, stampare e salvare i documenti più facilmente se si specifica un'estensione di file e un ID di tipo file. Questi elementi non sono localizzati perché vengono usate dal sistema piuttosto che dall'utente.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Estensione di file**|Imposta l'estensione di file associata con i documenti salvati dall'utente quando si utilizza l'applicazione. Se il progetto viene denominato Widget, ad esempio, è possibile chiamare il wgt estensione di file. (Quando si immette l'estensione di file, non includere il periodo.)<br /><br /> Se si specifica un'estensione di file, Esplora risorse è possibile stampare documenti dell'applicazione senza avviare l'applicazione quando l'utente rilascia l'icona del documento sull'icona della stampante.<br /><br /> Se non si specifica un'estensione, un utente deve specificare un'estensione di file durante il salvataggio di file. La procedura guidata non fornisce un'estensione di file predefinita.|  
|**ID del tipo di file**|Imposta l'etichetta per il tipo di documento nel Registro di sistema.|  
  
 **Stringhe localizzate**  
 Produce stringhe associate al documento che vengono lette e utilizzate dagli utenti dell'applicazione, pertanto le stringhe localizzate e l'applicazione.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Lingua**|Indica la lingua in cui sono visualizzate le stringhe in tutte le caselle in **stringhe localizzate**. Per modificare il valore in questa casella, selezionare la lingua appropriata in **lingua della risorsa** nel [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.|  
|**Didascalia del frame principale**|Imposta il testo visualizzato nella parte superiore del frame principale dell'applicazione. Per impostazione predefinita, il nome del progetto.|  
|**Nome del tipo di documento**|Identifica il tipo di documento in cui un documento dell'applicazione può essere raggruppato. Per impostazione predefinita, il nome del progetto. Modifica il valore predefinito non modificare le opzioni nella finestra di dialogo.|  
|**Nome filtro**|Imposta il nome che possono indicare agli utenti per individuare i file del tipo di file. Questa opzione è disponibile il **i file di tipo** e **Salva come** opzioni standard di Windows **aprire** e **salvare come** finestre di dialogo. Per impostazione predefinita, il nome del progetto più file, seguito dall'estensione specificata **estensione di File**. Se il progetto viene denominato Widget e l'estensione del file è wgt, ad esempio il **nome filtro** è file Widget (wgt) per impostazione predefinita.|  
|**Nuovo nome breve di file**|Imposta il nome visualizzato nelle finestre standard `New` la finestra di dialogo, se è presente più di un nuovo modello di documento. Se l'applicazione è un [server di automazione](../../mfc/automation-servers.md), questo nome viene utilizzato come il nome breve dell'oggetto di automazione. Per impostazione predefinita, il nome del progetto.|  
|**Nome lungo del tipo di file**|Imposta il nome del tipo di file nel Registro di sistema. Se l'applicazione è un server di automazione, questo nome viene utilizzato come il nome lungo dell'oggetto di automazione. Per impostazione predefinita, più il nome del progetto. Documento.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)

