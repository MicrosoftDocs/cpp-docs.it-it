---
title: Aggiungere una classe
ms.date: 05/14/2019
f1_keywords:
- vc.addclass
helpviewer_keywords:
- ATL projects, adding classes
- classes [C++], creating
- classes [C++], adding
- Add Class dialog box
ms.assetid: c34b5f70-4e72-4faa-ba21-e2b05361c4d9
ms.openlocfilehash: fa53c2af5cd3e81c2d4877ef255430eac9525aad
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "66182681"
---
# <a name="add-a-class"></a>Aggiungere una classe

Per aggiungere una classe in un progetto Visual Studio C++, in **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, scegliere **Aggiungi** e quindi **Classe**. Viene visualizzata la finestra di dialogo [Aggiungi classe](#add-class-dialog-box).

Quando si aggiunge una classe, è necessario specificare un nome diverso dalle classi che esistono già in MFC o ATL. Se si specifica un nome che esiste già in una delle due librerie, l'IDE visualizza un messaggio di errore.

Se la convenzione di denominazione del progetto richiede l'uso di un nome esistente, è sufficiente modificare le maiuscole o minuscole del nome poiché C++ fa distinzione tra maiuscole e minuscole. Ad esempio, anche se non è possibile assegnare a una classe il nome `CDocument`, è possibile assegnarle il nome `cdocument`.

## <a name="in-this-section"></a>Contenuto della sezione

- [Tipo di classe da aggiungere](#what-kind-of-class-do-you-want-to-add)
- [Finestra di dialogo Aggiungi classe](#add-class-dialog-box)

## <a name="what-kind-of-class-do-you-want-to-add"></a>Tipo di classe da aggiungere

Nella finestra di dialogo **Aggiungi classe** quando si espande il nodo **Visual C++** nel riquadro sinistro vengono visualizzati diversi gruppi di modelli installati. I gruppi includono **CLR**, **ATL**, **MFC** e **C++** . Quando si seleziona un gruppo, nel riquadro centrale viene visualizzato un elenco dei modelli disponibili nel gruppo. Ogni modello contiene i file e il codice sorgente necessari per una classe.

Per generare una nuova classe, selezionare un modello nel riquadro centrale, digitare un nome per la classe nella casella **Nome** e selezionare **Aggiungi**. Viene visualizzata l'**Aggiunta guidata classe** che consente di specificare le opzioni per la classe.

- Per altre informazioni sulla creazione di classi MFC, vedere [Classe MFC](../mfc/reference/adding-an-mfc-class.md).

- Per altre informazioni sulla creazione di classi ATL, vedere [Oggetto semplice ATL](../atl/reference/adding-an-atl-simple-object.md).

> [!NOTE]
> Il modello **Aggiungi supporto ATL a MFC** non crea una classe ma configura il progetto per l'utilizzo di ATL. Per altre informazioni, vedere [Supporto ATL in un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).

Per creare una classe C++ che non usa MFC, ATL o CLR, usare il modello **Classe C++** nel gruppo **C++** dei modelli installati. Per altre informazioni, vedere [Aggiunta di una classe C++ generica](../ide/adding-a-generic-cpp-class.md).

Sono disponibili due tipi di classi C++ basate su form. La prima, la [classe CFormView](../mfc/reference/cformview-class.md), crea una classe MFC. La seconda crea una classe CLR Windows Form.

## <a name="add-class-dialog-box"></a>Aggiungi classe (finestra di dialogo)

La finestra di dialogo **Aggiungi classe** contiene modelli che consentono se operazioni seguenti:

- Aprire una procedura guidata codice corrispondente, se una è disponibile. Per altre informazioni, vedere [Aggiungere funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).

   \- oppure -

- Creare automaticamente la nuova classe aggiungendo i file e codice sorgente appropriati al progetto.

È possibile accedere alla finestra di dialogo **Aggiungi classe** dal menu **Progetto** , **Esplora soluzioni**o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).

> [!NOTE]
> Quando si prova ad aggiungere una classe che non è adatta al progetto corrente, si riceverà un messaggio di errore. Selezionare **OK** per tornare alla finestra di dialogo **Aggiungi classe**.

### <a name="add-class-templates"></a>Aggiungere modelli di classe

Esistono quattro categorie di modelli **Aggiungi classe** : .NET, ATL, MFC e Generic. Quando si seleziona un modello nel riquadro **Modelli** , il testo che descrive la selezione verrà visualizzato al di sotto dei riquadri **Categorie** e **Modelli** .

#### <a name="net"></a>.NET

|Modello|Wizard|
|--------------|------------|
|Servizio Web ASP.NET|Non disponibile|
|Classe Component (.NET)|Non disponibile|
|Classe Installer (.NET)|Non disponibile|
|Controllo utente (.NET)|Non disponibile|
|Windows Form (.NET)|Non disponibile|

#### <a name="atl"></a>ATL

|Modello|Wizard|
|--------------|------------|
|Aggiungi supporto ATL a MFC|Non disponibile|
|Controllo ATL|[Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)|
|Finestra di dialogo ATL|[Creazione guidata finestra di dialogo ATL](../atl/reference/atl-dialog-wizard.md)|
|Oggetto semplice ATL|[Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md)|
|Provider di eventi WMI|Configurazione guidata provider di eventi WMI|
|Provider di istanze WMI|Configurazione guidata provider di istanze WMI|

#### <a name="mfc"></a>MFC

|Modello|Wizard|
|--------------|------------|
|Classe MFC|[Creazione guidata aggiunta classe MFC](../mfc/reference/mfc-add-class-wizard.md)|

#### <a name="generic-classes"></a>Classi generiche

|Modello|Wizard|
|--------------|------------|
|Classe C++ generica|[Creazione guidata classe C++ generica](../ide/generic-cpp-class-wizard.md)|
