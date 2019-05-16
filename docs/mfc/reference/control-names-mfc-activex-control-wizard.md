---
title: Nomi controllo, Creazione guidata controllo ActiveX MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.ctl.names
helpviewer_keywords:
- MFC ActiveX Control Wizard, control names
ms.assetid: 9b8b81d2-36df-48ed-b58a-a771a0e269ee
ms.openlocfilehash: 17c1b30811fa1d9c3f3bc04a46553c617eff966b
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65708149"
---
# <a name="control-names-mfc-activex-control-wizard"></a>Nomi controllo, Creazione guidata controllo ActiveX MFC

Specificare i nomi per la classe del controllo e la classe pagina delle proprietà, i nomi dei tipi e digitare gli identificatori per il controllo. Ad eccezione di **nome breve**, tutti gli altri campi possono essere modificate in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutti gli altri campi in questa pagina. Questo comportamento di denominazione è progettato per rendere facilmente identificabile tutti i nomi per l'utente quando si sviluppa il controllo.

- **Nome breve**

   Specificare un nome abbreviato per il controllo. Per impostazione predefinita, questo nome è basato sul nome del progetto specificato nella finestra di **nuovo progetto** nella finestra di dialogo. Il nome specificato determina i nomi delle classi, i nomi dei tipi e gli identificatori di tipo, a meno che non vengano modificati singolarmente questi campi.

- **Nome della classe Control**

   Per impostazione predefinita, il nome della classe del controllo è basato il nome breve, con `C` come prefisso e `Ctrl` come suffisso. Ad esempio, se il controllo breve del nome è `Price`, è il nome della classe controllo `CPriceCtrl`.

- **File con estensione h controllo**

   Per impostazione predefinita, il nome del file di intestazione è basato il nome breve, con `Ctrl` come suffisso e `.h` come estensione del file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione `PriceCtrl.h`. Il nome in questo campo deve corrispondere al nome di classe di controllo.

- **File con estensione cpp controllo**

   Per impostazione predefinita, il nome del file di intestazione è basato il nome breve, con `Ctrl` come suffisso e `.cpp` come estensione del file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione `PriceCtrl.cpp`. Il nome in questo campo deve corrispondere al nome di intestazione.

- **Nome del tipo di controllo**

   Per impostazione predefinita, il nome del tipo di controllo è basato il nome breve, seguita da `Control`. Ad esempio, se il controllo breve del nome è `Price`, il nome di tipo classe control `Price Control`. Se si modifica il valore in questo campo, assicurarsi che il nome indica un'ereditarietà.

- **ID del tipo di controllo**

   Imposta l'ID del tipo di controllo della classe del controllo. Il controllo, questa stringa viene scritta nel Registro di sistema quando viene aggiunto a un progetto. Le applicazioni contenitore questa stringa viene utilizzata per creare un'istanza del controllo.

   Per impostazione predefinita, l'ID del tipo di controllo è basato sul nome del progetto, è indicato nella finestra di **nuovo progetto** nella finestra di dialogo e il nome breve. Questo nome deve corrispondere al nome di tipo.

   Per impostazione predefinita, l'ID del tipo di controllo viene visualizzato come segue:

   *ProjectName. ShortName*CTRL. 1

   Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo di controllo viene visualizzato come segue:

   *ProjectName.NewShortName*Ctrl.1

- **Nome della classe pagina delle proprietà**

   Per impostazione predefinita, il nome della classe pagina delle proprietà si basa il nome breve, con `C` come prefisso e `PropPage` come suffisso. Ad esempio, se il controllo breve del nome è `Price`, è il nome della classe pagina proprietà `CPricePropPage`. Questo nome deve corrispondere al nome di classe di controllo, viene aggiunta `PropPage`.

- **File con estensione h pagina delle proprietà**

   Per impostazione predefinita, il nome del file di intestazione della pagina proprietà si basa il nome breve, con come un `PropPage` come suffisso e `.h` come estensione del file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione delle pagine delle proprietà `PricePropPage.h`. Questo nome deve corrispondere al nome di classe.

- **File con estensione cpp pagina delle proprietà**

   Per impostazione predefinita, il nome del file di implementazione della pagina proprietà si basa il nome breve, con come un `PropPage` come suffisso e `.cpp` come estensione del file. Ad esempio, se il controllo breve del nome è `Price`, il nome del file di intestazione delle pagine delle proprietà `PricePropPage.cpp`. Questo nome deve corrispondere al nome di file di intestazione.

- **Nome del tipo pagina delle proprietà**

   Per impostazione predefinita, il nome del tipo di pagina di proprietà si basa il nome breve, seguita da `Property Page`. Ad esempio, se il controllo breve del nome è `Price`, il nome del tipo di pagina proprietà `Price Property Page`. Se si modifica il valore in questo campo, assicurarsi che il nome indica la classe del controllo.

- **ID tipo pagina delle proprietà**

   Imposta l'ID della classe pagina delle proprietà. Il controllo, questa stringa viene scritta nel Registro di sistema quando viene applicato a un progetto. Un'applicazione contenitore Usa questa stringa per creare un'istanza della pagina delle proprietà del controllo.

   Per impostazione predefinita, l'ID tipo è basato sul nome del progetto, è indicato nella finestra di **nuovo progetto** nella finestra di dialogo e il nome breve. Questo nome deve corrispondere al nome di tipo.

   Per impostazione predefinita, l'ID del tipo di pagina di proprietà viene visualizzata come indicato di seguito:

   *ProjectName.ShortName*PropPage.1

   Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo di pagina di proprietà viene visualizzata come indicato di seguito:

   *ProjectName.NewShortName*PropPage.1

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)<br/>
[Impostazioni applicazione, Creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)<br/>
[Impostazioni controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-settings-mfc-activex-control-wizard.md)<br/>
[Tipi di file creati per Visual Studio C++ progetti](../../build/reference/file-types-created-for-visual-cpp-projects.md)

