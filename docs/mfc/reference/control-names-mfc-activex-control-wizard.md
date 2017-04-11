---
title: Nomi controllo, creazione guidata controllo ActiveX MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.ctl.names
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX Control Wizard, control names
ms.assetid: 9b8b81d2-36df-48ed-b58a-a771a0e269ee
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 28ef331cb66ee184c4bc104fedddf69e9296367c
ms.lasthandoff: 04/04/2017

---
# <a name="control-names-mfc-activex-control-wizard"></a>Nomi controllo, Creazione guidata controllo ActiveX MFC
Specificare i nomi per la classe di controllo e una classe delle pagine di proprietà, i nomi dei tipi e digitare gli identificatori per il controllo. Ad eccezione di **nome breve**, tutti gli altri campi possono essere modificati in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutti gli altri campi in questa pagina. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.  
  
 **Nome breve**  
 Fornisce un nome breve per il controllo. Per impostazione predefinita, questo nome è basato sul nome del progetto specificato nella **nuovo progetto** la finestra di dialogo. Il nome fornito determina i nomi delle classi, i nomi dei tipi e gli identificatori di tipo, a meno che non vengano modificati singolarmente tali campi.  
  
 **Nome classe del controllo**  
 Per impostazione predefinita, il nome della classe del controllo è basato sul nome breve, con `C` come prefisso e `Ctrl` come suffisso. Ad esempio, se il controllo breve del nome è `Price`, è il nome della classe controllo `CPriceCtrl`.  
  
 **File di controllo. h**  
 Per impostazione predefinita, il nome del file di intestazione è basato sul nome breve, con `Ctrl` come suffisso e `.h` l'estensione di file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione `PriceCtrl.h`. Il nome in questo campo deve corrispondere al nome di classe di controllo.  
  
 **File con estensione cpp controllo**  
 Per impostazione predefinita, il nome del file di intestazione è basato sul nome breve, con `Ctrl` come suffisso e `.cpp` l'estensione di file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione `PriceCtrl.cpp`. Il nome in questo campo deve corrispondere al nome di intestazione.  
  
 **Nome del tipo di controllo**  
 Per impostazione predefinita, il nome del tipo di controllo è basato sul nome breve, seguito da `Control`. Ad esempio, se il controllo breve del nome è `Price`, il nome di tipo classe control `Price Control`. Se si modifica il valore in questo campo, verificare che il nome indica un'ereditarietà.  
  
 **ID del tipo di controllo**  
 Imposta l'ID del tipo di controllo della classe del controllo. Il controllo, questa stringa viene scritta nel Registro di sistema quando viene aggiunto a un progetto. Applicazioni contenitore questa stringa viene utilizzata per creare un'istanza del controllo.  
  
 Per impostazione predefinita, l'ID del tipo di controllo è basato sul nome del progetto, è indicato nella finestra di **nuovo progetto** la finestra di dialogo e il nome breve. Questo nome deve corrispondere al nome di tipo.  
  
 Per impostazione predefinita, l'ID del tipo di controllo viene visualizzato come segue:  
  
 *ProjectName. ShortName*CTRL. 1  
  
 Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo di controllo viene visualizzato come segue:  
  
 *ProjectName. NewShortName*CTRL. 1  
  
 **Nome di classe delle pagine delle proprietà**  
 Per impostazione predefinita, il nome della classe della pagina delle proprietà è basato sul nome breve, con `C` come prefisso e `PropPage` come suffisso. Ad esempio, se il controllo breve del nome è `Price`, il nome di classe di pagine di proprietà `CPricePropPage`. Questo nome deve corrispondere al nome di classe del controllo, verrà aggiunto `PropPage`.  
  
 **File con estensione h pagine delle proprietà**  
 Per impostazione predefinita, il nome del file di intestazione di pagina di proprietà è basato sul nome breve, con come un `PropPage` come suffisso e `.h` l'estensione di file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione delle pagine delle proprietà `PricePropPage.h`. Questo nome deve corrispondere al nome di classe.  
  
 **File con estensione cpp pagine delle proprietà**  
 Per impostazione predefinita, il nome del file di implementazione della proprietà è basato sul nome breve, con come un `PropPage` come suffisso e `.cpp` l'estensione di file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione delle pagine delle proprietà `PricePropPage.cpp`. Questo nome deve corrispondere al nome di file di intestazione.  
  
 **Nome del tipo di pagine delle proprietà**  
 Per impostazione predefinita, il nome del tipo di pagina di proprietà si basa sul nome breve, seguito da `Property Page`. Ad esempio, se il controllo breve del nome è `Price`, il nome del tipo di pagina di proprietà `Price Property Page`. Se si modifica il valore in questo campo, verificare che il nome indica la classe del controllo.  
  
 **ID tipo pagine delle proprietà**  
 Imposta l'ID della classe della pagina delle proprietà. Il controllo, questa stringa viene scritta nel Registro di sistema quando viene applicato a un progetto. Un'applicazione contenitore utilizza questa stringa per creare un'istanza del controllo pagina delle proprietà.  
  
 Per impostazione predefinita, l'ID del tipo di pagina di proprietà è basato sul nome del progetto, è indicato nella finestra di **nuovo progetto** la finestra di dialogo e il nome breve. Questo nome deve corrispondere al nome di tipo.  
  
 Per impostazione predefinita, l'ID del tipo di pagina di proprietà visualizzato come segue:  
  
 *ProjectName. ShortName*PropPage. 1  
  
 Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo di pagina di proprietà visualizzato come segue:  
  
 *ProjectName. NewShortName*PropPage. 1  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)   
 [Impostazioni applicazione, creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)   
 [Impostazioni di controllo, creazione guidata controllo ActiveX MFC](../../mfc/reference/control-settings-mfc-activex-control-wizard.md)   
 [Tipi di file creati per i progetti di Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md)


