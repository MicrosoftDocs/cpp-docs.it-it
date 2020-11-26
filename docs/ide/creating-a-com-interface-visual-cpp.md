---
title: Creare un'interfaccia COM
ms.date: 05/14/2019
helpviewer_keywords:
- COM interfaces, creating
- methods [C++], adding to COM interfaces
- COM interfaces, editing
- properties [C++], adding to COM interfaces
ms.assetid: 1be84d3c-6886-4d1e-8493-56c4d38a96d4
ms.openlocfilehash: 6ad8d50049d34a711937f3d1f73157ce26f69808
ms.sourcegitcommit: 6284bca6549e7b4f199d4560c30df6c1278bd4a0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2020
ms.locfileid: "96188822"
---
# <a name="create-a-com-interface"></a>Creare un'interfaccia COM

Visual Studio offre modelli e procedure guidate che consentono di creare progetti che usano interfacce e interfacce dispatch definite con COM per gli oggetti COM e le classi di automazione.

È possibile usare queste procedure guidate per svolgere le tre attività comuni seguenti:

- [Aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).

  Aggiungere il supporto ATL a un'applicazione MFC dopo aver creato un progetto MFC usando la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) ed eseguendo quindi la procedura **Aggiungi supporto ATL a MFC** per il codice. Questo supporto si applica solo a oggetti COM semplici aggiunti a un progetto DLL o un file eseguibile MFC. Questi oggetti ATL possono avere più interfacce.

- [Creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).

  Aprire la [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare un controllo ActiveX con un'interfaccia dispatch e una mappa eventi, definite rispettivamente nel file con estensione idl e nella classe del controllo.

- [Aggiungere un controllo ATL](../atl/reference/adding-an-atl-control.md).

  Usare una combinazione tra la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) e la [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) per creare un controllo ActiveX ATL.

  È anche possibile aggiungere un controllo ATL a un progetto MFC al quale è stato aggiunto il supporto ATL, come descritto in precedenza. Inoltre se si seleziona **Controllo ATL** nella finestra di dialogo **Aggiungi classe** e il supporto ATL non è stato ancora aggiunto al progetto MFC, Visual Studio visualizza una finestra di dialogo che conferma l'aggiunta del supporto ATL al progetto MFC.

  Questa procedura guidata genera file di origine IDL e una mappa COM nelle classi del progetto.

Dopo l'apertura di un progetto ATL, la finestra di dialogo [Aggiungi classe](./adding-a-class-visual-cpp.md#add-class-dialog-box) consente di scegliere tra altre procedure guidate e modelli per l'aggiunta delle interfacce COM al progetto. Le seguenti procedure guidate consentono di stabilire una o più interfacce per l'oggetto:

- [Creazione guidata componente COM+ ATL 1,0](../atl/reference/atl-com-plus-1-0-component-wizard.md)
- [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md)
- [Creazione guidata componente Active Server ATL](../atl/reference/atl-active-server-page-component-wizard.md)
- [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)

È anche possibile implementare nuove interfacce nel controllo COM. È sufficiente fare clic con il pulsante destro del mouse sulla classe del controllo dell'oggetto in Visualizzazione classi e scegliere [Implementa interfaccia](./implementing-an-interface-visual-cpp.md#implement-interface-wizard).

> [!NOTE]
> In Visual Studio non è disponibile una procedura guidata per l'aggiunta di un'interfaccia a un progetto. È possibile aggiungere un'interfaccia a un progetto ATL o nel contesto dell'[aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) aggiungendo un oggetto semplice con la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md). In alternativa, aprire il file IDL del progetto e creare l'interfaccia digitando quanto segue:

```
interface IMyInterface {
};
```

Per altre informazioni, vedere [Implementare un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).

Visual C++ offre diversi modi per visualizzare e [modificare le interfacce COM](#edit-a-com-interface) definite per i progetti. [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) visualizza le icone per ogni interfaccia o interfaccia dispatch definita in un file IDL del progetto C++.

Per le classi di oggetti COM basate su ATL, Visualizzazione classi legge la mappa COM nella classe ATL per visualizzare la relazione tra la classe ATL e le interfacce che implementa.

In Visualizzazione classi e nei relativi menu di scelta rapida è possibile usare le interfacce come indicato di seguito:

- Aggiungere gli oggetti ATL a un'applicazione basata su MFC.
- Aggiungere metodi, proprietà ed eventi.
- Passare direttamente al codice dell'interfaccia di un elemento facendo doppio clic sull'elemento.

## <a name="in-this-section"></a>Contenuto della sezione

- [Modificare un'interfaccia COM](#edit-a-com-interface)

## <a name="edit-a-com-interface"></a>Modificare un'interfaccia COM

I comandi del menu di scelta rapida di Visualizzazione classi consentono di definire nuovi metodi e proprietà per le interfacce COM nei progetti Visual Studio C++. Nella casella degli strumenti è anche possibile definire eventi per i controlli ActiveX.

Per le classi di oggetti COM basati su ATL e MFC è possibile modificare l'implementazione della classe durante la modifica dell'interfaccia.

> [!NOTE]
> Per le interfacce definite al di fuori della finestra di dialogo **Aggiungi classe**, Visual C++ aggiunge i metodi o le proprietà al file con estensione idl e aggiunge stub alle classi che implementano i metodi, anche quando le interfacce vengono aggiunte manualmente.

Le tre procedure guidate seguenti consentono di personalizzare le interfacce esistenti. Sono disponibili in Visualizzazione classi:

|Procedura guidata|Tipo di progetto|
|------------|------------------|
|[Aggiunta guidata proprietà](./adding-a-property-visual-cpp.md#names-add-property-wizard)|Progetti ATL o MFC che supportano ATL. Fare clic con il pulsante destro del mouse sull'interfaccia a cui si vuole aggiungere la proprietà.<br /><br />Visual C++ rileva il tipo di progetto e modifica le opzioni dell'Aggiunta guidata proprietà in base alle esigenze:<br /><br />-Per dispinterfaces nei progetti creati tramite la [creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la chiamata della procedura guidata Aggiungi proprietà fornisce opzioni specifiche di MFC.<br />- Per le interfacce del controllo ActiveX MFC, l'Aggiunta guidata proprietà offre un elenco di proprietà e metodi predefiniti da usare così come sono o da personalizzare per il controllo.<br />- Per tutte le altre interfacce, l'Aggiunta guidata proprietà offre opzioni utili nella maggior parte delle situazioni.|
|[Aggiunta guidata metodo](./adding-a-method-visual-cpp.md#add-method-wizard)|Progetti ATL o MFC che supportano ATL. Fare clic con il pulsante destro del mouse sull'interfaccia a cui si vuole aggiungere il metodo.<br /><br />Visual C++ rileva il tipo di progetto e modifica le opzioni dell'Aggiunta guidata metodo in base alle esigenze:<br /><br />- Per le interfacce dispatch nei progetti creati tramite la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), l'uso di Aggiunta guidata metodo determina la visualizzazione di opzioni specifiche di MFC.<br />- Per le interfacce del controllo ActiveX MFC, l'Aggiunta guidata metodo offre un elenco di proprietà e metodi predefiniti da usare così come sono o da personalizzare per il controllo.<br />-Per tutte le altre interfacce, le procedure guidate per l' **aggiunta di metodi** offrono opzioni utili nella maggior parte dei casi.|

È anche possibile implementare nuove interfacce nel controllo COM. È sufficiente fare clic con il pulsante destro del mouse sulla classe del controllo dell'oggetto in Visualizzazione classi e scegliere [Implementa interfaccia](./implementing-an-interface-visual-cpp.md#implement-interface-wizard).
