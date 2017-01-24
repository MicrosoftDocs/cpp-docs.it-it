---
title: "Nomi controllo, Creazione guidata controllo ActiveX MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.ctl.names"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata controllo ActiveX MFC, nomi controlli"
ms.assetid: 9b8b81d2-36df-48ed-b58a-a771a0e269ee
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Nomi controllo, Creazione guidata controllo ActiveX MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile specificare i nomi per la classe Control e la classe delle pagine delle proprietà, nonché i nomi e gli identificatori dei tipi relativi al controllo.  Ad eccezione di **Nome breve**, il testo di tutte le altre caselle può essere modificato in modo indipendente.  Se si cambia il testo in **Nome breve**, la modifica avrà effetto sui nomi specificati in tutte le altre caselle di questa schermata.  Grazie a questo comportamento di denominazione, tutti i nomi sono facilmente identificabili nel corso dello sviluppo del controllo.  
  
 **Nome breve**  
 Fornisce un nome breve per il controllo.  Per impostazione predefinita, questo nome è basato sul nome del progetto specificato nella finestra di dialogo **Nuovo progetto**.  A meno che le relative caselle non vengano modificate singolarmente, il nome fornito determina i nomi delle classi e i nomi e gli identificatori dei tipi.  
  
 **Nome classe Control**  
 Per impostazione predefinita, il nome della classe Control si basa sul nome breve, con `C` come prefisso e `Ctrl` come suffisso.  Se ad esempio il nome breve del controllo è `Price`, il nome della classe Control sarà `CPriceCtrl`.  
  
 **File .h del controllo**  
 Per impostazione predefinita, il nome del file di intestazione si basa sul nome breve, con `Ctrl` come suffisso e `.h` come estensione del file.  Se ad esempio il nome breve del controllo è `Price`, il nome del file di intestazione sarà `PriceCtrl.h`.  Il nome contenuto in questo campo deve corrispondere a quello della classe Control.  
  
 **File .cpp del controllo**  
 Per impostazione predefinita, il nome del file di intestazione si basa sul nome breve, con `Ctrl` come suffisso e `.cpp` come estensione del file.  Se ad esempio il nome breve del controllo è `Price`, il nome del file di intestazione sarà `PriceCtrl.cpp`.  Il nome in questa casella deve corrispondere a quello dell'intestazione.  
  
 **Nome tipo controllo**  
 Per impostazione predefinita, il nome del tipo di controllo si basa sul nome breve, seguito da `Control`.  Se ad esempio il nome breve del controllo è `Price`, il nome del tipo di classe Control sarà `Price Control`.  Se si modifica il valore contenuto in questa casella, è necessario assicurarsi che il nome indichi un'ereditarietà.  
  
 **ID tipo controllo**  
 Imposta l'ID del tipo di controllo della classe Control.  Questa stringa viene scritta nel Registro di sistema quando il controllo viene aggiunto a un progetto.  Le applicazioni contenitore utilizzano questa stringa per creare un'istanza del controllo.  
  
 Per impostazione predefinita, l'ID del tipo di controllo è basato sul nome del progetto indicato nella finestra di dialogo **Nuovo progetto** e sul nome breve.  Questo nome deve corrispondere a quello del tipo.  
  
 Per impostazione predefinita, l'ID del tipo di controllo assume il seguente formato:  
  
 *Nomeprogetto*.*Nomebreve*Ctrl.1  
  
 In caso di modifica del nome breve in questa finestra di dialogo, l'ID del tipo di controllo presenta quindi il seguente formato:  
  
 *Nomeprogetto*.*Nuovonomebreve*Ctrl.1  
  
 **Nome classe pagine delle proprietà**  
 Per impostazione predefinita, il nome della classe delle pagine delle proprietà è basato sul nome breve, al quale vengono aggiunti il prefisso `C` e il suffisso `PropPage`.  Se il nome breve del controllo è `Price`, ad esempio, il nome della classe delle pagine delle proprietà è `CPricePropPage`.  Questo nome deve corrispondere a quello della classe del controllo, con il suffisso `PropPage`.  
  
 **File .h pagine delle proprietà**  
 Per impostazione predefinita, il nome del file di intestazione delle pagine delle proprietà è basato sul nome breve, al quale vengono aggiunti il suffisso `PropPage` e l'estensione di file `.h`.  Se il nome breve del controllo è `Price`, ad esempio, il nome del file di intestazione delle pagine delle proprietà è `PricePropPage.h`.  Questo nome deve corrispondere a quello della classe.  
  
 **File .cpp pagine delle proprietà**  
 Per impostazione predefinita, il nome del file di implementazione delle pagine delle proprietà è basato sul nome breve, al quale vengono aggiunti il suffisso `PropPage` e l'estensione di file `.cpp`.  Se il nome breve del controllo è `Price`, ad esempio, il nome del file di intestazione delle pagine delle proprietà è `PricePropPage.cpp`.  Questo nome deve corrispondere a quello del file di intestazione.  
  
 **Nome tipo pagine delle proprietà**  
 Per impostazione predefinita, il nome del tipo delle pagine delle proprietà è basato sul nome breve, seguito da `Property Page`.  Se il nome breve del controllo è `Price`, ad esempio, il nome del tipo delle pagine delle proprietà è `Price Property Page`.  Se si modifica il valore contenuto in questa casella, è necessario assicurarsi che il nome indichi la classe Control.  
  
 **ID tipo pagine delle proprietà**  
 Imposta l'ID della classe delle pagine delle proprietà.  Questa stringa viene scritta nel Registro di sistema quando il controllo viene applicato a un progetto.  Un'applicazione contenitore utilizza questa stringa per creare un'istanza della pagina delle proprietà del controllo.  
  
 Per impostazione predefinita, l'ID del tipo delle pagine delle proprietà è basato sul nome del progetto indicato nella finestra di dialogo **Nuovo progetto** e sul nome breve.  Questo nome deve corrispondere a quello del tipo.  
  
 Per impostazione predefinita, l'ID del tipo delle pagine delle proprietà assume il seguente formato:  
  
 *Nomeprogetto*.*Nomebreve*PropPage.1  
  
 Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo delle pagine delle proprietà presenterà quindi il seguente formato:  
  
 *Nomeprogetto*.*Nuovonomebreve*PropPage.1  
  
## Vedere anche  
 [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)   
 [Impostazioni applicazione, Creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)   
 [Impostazioni controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-settings-mfc-activex-control-wizard.md)   
 [Tipi di file creati per i progetti di Visual C\+\+](../../ide/file-types-created-for-visual-cpp-projects.md)