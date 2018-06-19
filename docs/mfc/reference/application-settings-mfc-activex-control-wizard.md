---
title: Impostazioni applicazione, creazione guidata controllo ActiveX MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfc.ctl.appset
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX Control Wizard, application settings
ms.assetid: 48475194-cc63-467f-8499-f142269a4c1c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8ffa17d484d6f35d04547dca58a9b8753c15b272
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33351602"
---
# <a name="application-settings-mfc-activex-control-wizard"></a>Impostazioni applicazione, Creazione guidata controllo ActiveX MFC
Questa schermata della Creazione guidata controllo ActiveX MFC può essere usata per progettare e aggiungere funzioni di base a un nuovo progetto ActiveX MFC. Queste impostazioni si applicano all'applicazione, non a funzionalità o elementi del controllo specifici.  
  
 **Licenza runtime**  
 Selezionare questa opzione per generare un file di licenza utente da distribuire con il controllo. La licenza è costituita da un file di testo denominato *projname*.lic. Questo file deve trovarsi nella stessa directory della DLL del controllo, in modo da consentire la creazione di un'istanza del controllo in un ambiente di progettazione. Il file di licenza viene in genere distribuito con il controllo dallo sviluppatore ad altri programmatori, i quali non lo distribuiscono con le proprie applicazioni.  
  
 **Generare file della Guida**  
 Selezionare questa opzione per generare prototipi di file della Guida e configurare il progetto in modo da includere la Guida relativa al controllo. Un progetto predefinito, creato senza questa opzione, genera solo una finestra **Informazioni su** che viene visualizzata facendo clic con il pulsante destro del mouse sul controllo, premendo F1 oppure scegliendo **?** nel contenitore del controllo.  
  
> [!NOTE]
>  Il modo in cui viene visualizzata la Guida dipende dal tipo di interazione esistente tra il controllo e il relativo contenitore. Se la Guida viene inclusa nel contenitore, per ottenere una visualizzazione adeguata è necessario gestire i messaggi tra il controllo e il contenitore.  
  
 Quando si generano file della Guida con la procedura guidata, il progetto comprende quanto riportato di seguito:  
  
-   Il file vcxproj contiene il codice usato per compilare e configurare il file della Guida al momento della compilazione del progetto.  
  
-   Il file *projnamePropPage*. cpp comprende una [SetHelpInfo](../../mfc/reference/colepropertypage-class.md#sethelpinfo) funzione nel costruttore.  
  
-   Il file projname.hpj è il file di progetto usato dal compilatore della Guida per creare il file della Guida del controllo ActiveX. Rappresenta un file di testo contenente le informazioni sulla compilazione del file della Guida e sui percorsi dei file aggiuntivi (ad esempio le bitmap) inclusi nel file della Guida.  
  
-   Il progetto include la directory HLP contenente i file bitmap della Guida del progetto e il file degli argomenti della Guida (*projname.rtf*), che comprende gli argomenti standard per le proprietà, gli eventi e i metodi comuni supportati da numerosi controlli ActiveX. Il file RTF può essere modificato allo scopo di aggiungere o rimuovere determinati argomenti della Guida.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)   
 [Nomi controllo, creazione guidata controllo ActiveX MFC](../../mfc/reference/control-names-mfc-activex-control-wizard.md)   
 [Impostazioni controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-settings-mfc-activex-control-wizard.md)

