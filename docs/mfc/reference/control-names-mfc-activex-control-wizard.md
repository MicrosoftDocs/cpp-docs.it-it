---
title: Nomi controllo, Creazione guidata controllo ActiveX MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.ctl.names
helpviewer_keywords:
- MFC ActiveX Control Wizard, control names
ms.assetid: 9b8b81d2-36df-48ed-b58a-a771a0e269ee
ms.openlocfilehash: eff7b537e7fe5c19d10cce8766557a3d1ff49342
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077511"
---
# <a name="control-names-mfc-activex-control-wizard"></a>Nomi controllo, Creazione guidata controllo ActiveX MFC

Specificare i nomi per la classe del controllo e la classe della pagina delle proprietà, i nomi dei tipi e gli identificatori di tipo per il controllo. Ad eccezione del **nome breve**, tutti gli altri campi possono essere modificati in modo indipendente. Se si modifica il testo per **nome breve**, la modifica viene riflessa nei nomi di tutti gli altri campi in questa pagina. Questo comportamento di denominazione è progettato per rendere tutti i nomi facilmente identificabili durante lo sviluppo del controllo.

- **Nome breve**

   Consente di specificare un nome abbreviato per il controllo. Per impostazione predefinita, questo nome è basato sul nome del progetto specificato nella finestra di dialogo **nuovo progetto** . Il nome specificato determina i nomi delle classi, i nomi dei tipi e gli identificatori di tipo, a meno che non si modifichino singolarmente questi campi.

- **Nome della classe del controllo**

   Per impostazione predefinita, il nome della classe del controllo è basato sul nome breve, con `C` come prefisso e `Ctrl` come suffisso. Se, ad esempio, il nome breve del controllo è `Price`, il nome della classe del controllo è `CPriceCtrl`.

- **File Control. h**

   Per impostazione predefinita, il nome del file di intestazione è basato sul nome breve, con `Ctrl` come suffisso e `.h` come estensione di file. Se, ad esempio, il nome breve del controllo è `Price`, il nome del file di intestazione è `PriceCtrl.h`. Il nome in questo campo deve corrispondere al nome della classe del controllo.

- **File Control. cpp**

   Per impostazione predefinita, il nome del file di intestazione è basato sul nome breve, con `Ctrl` come suffisso e `.cpp` come estensione di file. Se, ad esempio, il nome breve del controllo è `Price`, il nome del file di intestazione è `PriceCtrl.cpp`. Il nome in questo campo deve corrispondere al nome dell'intestazione.

- **Nome del tipo di controllo**

   Per impostazione predefinita, il nome del tipo di controllo è basato sul nome breve, seguito da `Control`. Se, ad esempio, il nome breve del controllo è `Price`, il nome del tipo di classe del controllo è `Price Control`. Se si modifica il valore in questo campo, verificare che il nome indichi un'ereditarietà.

- **ID tipo di controllo**

   Imposta l'ID del tipo di controllo della classe del controllo. Il controllo scrive questa stringa nel registro di sistema quando viene aggiunta a un progetto. Le applicazioni contenitore usano questa stringa per creare un'istanza del controllo.

   Per impostazione predefinita, l'ID del tipo di controllo è basato sul nome del progetto, indicato nella finestra di dialogo **nuovo progetto** e nel nome breve. Questo nome deve corrispondere al nome del tipo.

   Per impostazione predefinita, l'ID del tipo di controllo viene visualizzato come segue:

   *NomeProgetto. ShortName* CTRL. 1

   Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo di controllo viene visualizzato come segue:

   *NomeProgetto. NewShortName* CTRL. 1

- **Nome della classe di appoggio**

   Per impostazione predefinita, il nome della classe della pagina delle proprietà è basato sul nome breve, con `C` come prefisso e `PropPage` come suffisso. Se, ad esempio, il nome breve del controllo è `Price`, il nome della classe della pagina delle proprietà è `CPricePropPage`. Questo nome deve corrispondere al nome della classe del controllo, accodato con `PropPage`.

- **File con estensione h**

   Per impostazione predefinita, il nome del file di intestazione della pagina delle proprietà è basato sul nome breve, con come `PropPage` come suffisso e `.h` come estensione di file. Se, ad esempio, il nome breve del controllo è `Price`, il nome del file di intestazione della pagina delle proprietà è `PricePropPage.h`. Questo nome deve corrispondere al nome della classe.

- **File con estensione cpp**

   Per impostazione predefinita, il nome del file di implementazione della pagina delle proprietà è basato sul nome breve, con come `PropPage` come suffisso e `.cpp` come estensione di file. Se, ad esempio, il nome breve del controllo è `Price`, il nome del file di intestazione della pagina delle proprietà è `PricePropPage.cpp`. Questo nome deve corrispondere al nome del file di intestazione.

- **Nome del tipo di pagina**

   Per impostazione predefinita, il nome del tipo di pagina delle proprietà è basato sul nome breve, seguito da `Property Page`. Se, ad esempio, il nome breve del controllo è `Price`, il nome del tipo di pagina delle proprietà è `Price Property Page`. Se si modifica il valore in questo campo, verificare che il nome indichi la classe del controllo.

- **ID del tipo di appoggio**

   Imposta l'ID della classe della pagina delle proprietà. Il controllo scrive questa stringa nel registro di sistema quando viene applicata a un progetto. Un'applicazione contenitore usa questa stringa per creare un'istanza della pagina delle proprietà del controllo.

   Per impostazione predefinita, l'ID del tipo di pagina delle proprietà è basato sul nome del progetto, indicato nella finestra di dialogo **nuovo progetto** e nel nome breve. Questo nome deve corrispondere al nome del tipo.

   Per impostazione predefinita, l'ID del tipo di pagina delle proprietà viene visualizzato come segue:

   *NomeProgetto. ShortName* Pagina 1

   Se si modifica il nome breve in questa finestra di dialogo, l'ID del tipo di pagina delle proprietà viene visualizzato come segue:

   *NomeProgetto. NewShortName* Pagina 1

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md)<br/>
[Impostazioni applicazione, Creazione guidata controllo ActiveX MFC](../../mfc/reference/application-settings-mfc-activex-control-wizard.md)<br/>
[Impostazioni controllo, Creazione guidata controllo ActiveX MFC](../../mfc/reference/control-settings-mfc-activex-control-wizard.md)<br/>
[Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md)
