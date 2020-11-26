---
title: Aggiungere una classe da un controllo ActiveX
ms.date: 11/08/2018
f1_keywords:
- vc.codewiz.class.axcontrol
helpviewer_keywords:
- ActiveX controls [C++], adding classes
- classes [C++], creating
- ActiveX Control Wizard
- add class from ActiveX control wizard [C++]
ms.assetid: 729fcb37-54b8-44d5-9b4e-50bb16e0eea4
ms.openlocfilehash: d63f73e17e47f2cabb8f1a55c71325ec7068a2c8
ms.sourcegitcommit: 6284bca6549e7b4f199d4560c30df6c1278bd4a0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2020
ms.locfileid: "96188926"
---
# <a name="add-a-class-from-an-activex-control"></a>Aggiungere una classe da un controllo ActiveX

Usare questa procedura guidata per creare una classe MFC da un'interfaccia in un controllo ActiveX disponibile. È possibile aggiungere una classe MFC in un'[applicazione MFC](../mfc/reference/creating-an-mfc-application.md), una [DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md) o un [controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).

> [!WARNING]
> In Visual Studio 2017 versione 15.9 Microsoft ha deprecato questa procedura guidata del codice che verrà rimossa in una versione futura di Visual Studio. Questa procedura guidata viene usata raramente. Il supporto generale per ATL e MFC non subisce attualmente l'effetto della rimozione di questa procedura guidata. Per condividere commenti e suggerimenti su questa deprecazione, compilare [questo sondaggio](https://www.surveymonkey.com/r/QDWKKCN). I tuoi commenti e suggerimenti sono importanti per noi.
<!-- Blank comment here to separate the warning and note. -->
> [!NOTE]
> Non è necessario creare il progetto MFC con l'automazione abilitata per aggiungere una classe da un controllo ActiveX.

Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM (Component Object Model) che supporta un'ampia gamma di funzionalità OLE e può essere personalizzato per soddisfare numerosi requisiti software. È possibile usare i controlli ActiveX nei normali contenitori di controlli ActiveX o nelle pagine Web di Internet.

**Per aggiungere una classe MFC da un controllo ActiveX:**

1. In **Esplora soluzioni** o nella [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) fare clic con il pulsante destro del mouse sul nome del progetto a cui si vuole aggiungere la classe del controllo ActiveX.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi **Aggiungi classe**.

1. Nella finestra di dialogo [Aggiungi classe](./adding-a-class-visual-cpp.md#add-class-dialog-box) nel riquadro **Modelli** scegliere **Classe MFC da controllo ActiveX** e quindi **Apri** per visualizzare l'[Aggiunta guidata classe da controllo ActiveX](#add-class-from-activex-control-wizard).

Nella procedura guidata è possibile aggiungere più di un'interfaccia in un controllo ActiveX. È anche possibile creare classi da più di un controllo ActiveX in un'unica sessione della procedura guidata.

È possibile aggiungere classi da controlli ActiveX registrati nel sistema oppure da controlli ActiveX presenti nei file di libreria dei tipi (file con estensione tlb, olb, ocx o exe) senza prima registrarli nel sistema. Per altre informazioni sulla registrazione di controlli ActiveX, vedere [Registrazione di controlli OLE](../mfc/reference/registering-ole-controls.md).

La procedura guidata crea una classe MFC, derivata da [CWnd](../mfc/reference/cwnd-class.md) o da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dal controllo ActiveX selezionato.

## <a name="in-this-section"></a>Contenuto della sezione

- [Aggiunta guidata classe da controllo ActiveX](#add-class-from-activex-control-wizard)

## <a name="add-class-from-activex-control-wizard"></a>Aggiunta guidata classe da controllo ActiveX

Usare questa procedura guidata per aggiungere una classe MFC da un controllo ActiveX disponibile. La procedura guidata crea una classe per ogni interfaccia aggiunta dal controllo ActiveX selezionato.

- **Aggiungi classe da**

  Specifica il percorso della libreria dei tipi da cui viene creata la classe.

  |Opzione|Description|
  |------------|-----------------|
  |**Registro**|La libreria dei tipi è registrata nel sistema. Le librerie dei tipi registrate sono elencate in **Available type libraries** (Librerie dei tipi disponibili).|
  |**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è archiviata in un file. Specificare il percorso del file in **Percorso**.|

- **Controlli ActiveX disponibili**

  Specifica i controlli ActiveX attualmente registrati nel sistema. Selezionare un controllo ActiveX dall'elenco per visualizzarne le interfacce nell'elenco **Interfacce**. Per altre informazioni sulla registrazione dei controlli ActiveX, vedere [Controlli ActiveX MFC: distribuzione dei controlli ActiveX](../mfc/mfc-activex-controls-distributing-activex-controls.md).

  Se si seleziona **File** in **Aggiungi classe da**, questa casella non è disponibile per la modifica.

- **Posizione**

  Specifica il percorso del controllo ActiveX. Se si seleziona **File** in **Aggiungi classe da**, è possibile specificare il percorso del file contenente la libreria dei tipi. Per passare al percorso del file, fare clic sul pulsante con i puntini di sospensione.

  Se si seleziona **Registro di sistema** in **Aggiungi classe da**, questa casella non è disponibile per la modifica.

- **Interfacce**

  Specifica le interfacce nel controllo ActiveX. La procedura guidata usa le interfacce della selezione corrente di **Controlli ActiveX disponibili** o le interfacce del file della libreria dei tipi specificato in **Percorso**.

  |Pulsante di trasferimento|Description|
  |---------------------|-----------------|
  |**>**|Aggiunge l'interfaccia selezionata nell'elenco **Interfacce**. Non disponibile se non è selezionata alcuna interfaccia.|
  |**>>**|Aggiunge tutte le interfacce nel controllo ActiveX. La procedura guidata usa le interfacce della selezione corrente di **Controlli ActiveX disponibili** o le interfacce del file della libreria dei tipi specificato in **Percorso**.|
  |**\<**|Rimuove la classe selezionata nell'elenco **Classi generate**. Non disponibile se non è selezionata alcuna classe nell'elenco **Classi generate**.|
  |**\<\<**|Rimuove tutte le classi dell'elenco **Classi generate**. Non disponibile se l'elenco **Classi generate** è vuoto.|

- **Classi generate**

  Specifica i nomi di classe da generare dalle interfacce aggiunte utilizzando il **>** pulsante o **>>** . È possibile selezionare questa casella per selezionare una classe e quindi usare le frecce Su o Giù per scorrere l'elenco. Quando si seleziona **Fine** il nome di ogni classe creata viene visualizzato nella casella **Classe** e il nome di ogni file generato viene visualizzato nella casella **File .h**. È possibile selezionare solo una classe alla volta in questa casella.

  È possibile rimuovere una classe selezionandola in questo elenco e selezionando **<** . Non è necessario selezionare una classe nella casella **Classi generate** per rimuovere tutte le classi. Selezionando **<<** , vengono rimosse tutte le classi nella casella **classi generate** .

- **Classe**

   Specifica il nome della classe selezionata nella casella **Classi generate** aggiunta dalla procedura guidata quando si fa clic su **Fine**. È possibile modificare il nome nella casella **Classe**.

- **File con estensione h**

  Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato fino a quando non si seleziona **Fine**.

  La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente e quindi si sceglie **Fine**, la procedura guidata chiede di specificare se aggiungere la dichiarazione di classe al contenuto del file. Selezionare **Sì** per aggiungere il file. Selezionare **No** per tornare alla procedura guidata e specificare un altro nome file.

- **File con estensione cpp**

  Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

  La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente e quindi si sceglie **Fine**, la procedura guidata chiede di specificare se aggiungere l'implementazione della classe al contenuto del file. Selezionare **Sì** per aggiungere il file. Selezionare **No** per tornare alla procedura guidata e specificare un altro nome file.
