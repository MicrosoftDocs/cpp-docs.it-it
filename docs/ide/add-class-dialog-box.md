---
title: Aggiungi classe (finestra di dialogo)
ms.date: 11/04/2016
f1_keywords:
- vc.addclass
helpviewer_keywords:
- Add Class dialog box
ms.assetid: 916259b8-8e5f-4267-bd10-313483beba67
ms.openlocfilehash: 405f88f7f77ea75584ec3cfd76af1ea9a0457ed6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643196"
---
# <a name="add-class-dialog-box"></a>Aggiungi classe (finestra di dialogo)

La finestra di dialogo **Aggiungi classe** contiene modelli che consentono se operazioni seguenti:

- Aprire una procedura guidata codice corrispondente, se una è disponibile. Per altre informazioni, vedere [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md).

   \- oppure -

- Creare automaticamente la nuova classe aggiungendo i file e codice sorgente appropriati al progetto.

È possibile accedere alla finestra di dialogo **Aggiungi classe** dal menu **Progetto** , **Esplora soluzioni**o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).

> [!NOTE]
>  Quando si prova ad aggiungere una classe che non è adatta al progetto corrente, si riceverà un messaggio di errore. Fare clic su **OK** per tornare alla finestra di dialogo **Aggiungi classe** .

## <a name="add-class-templates"></a>Aggiungere modelli di classe

Esistono quattro categorie di modelli **Aggiungi classe** : .NET, ATL, MFC e Generic. Quando si seleziona un modello nel riquadro **Modelli** , il testo che descrive la selezione verrà visualizzato al di sotto dei riquadri **Categorie** e **Modelli** .

### <a name="net"></a>.NET

|Modello|Wizard|
|--------------|------------|
|Servizio Web ASP.NET|Non disponibile|
|Classe Component (.NET)|Non disponibile|
|Classe Installer (.NET)|Non disponibile|
|Controllo utente (.NET)|Non disponibile|
|Windows Form (.NET)|Non disponibile|

### <a name="atl"></a>ATL

|Modello|Wizard|
|--------------|------------|
|Aggiungi supporto ATL a MFC|Non disponibile|
|Componente pagine ASP ATL|[Creazione guidata componente ASP ATL](../atl/reference/atl-active-server-page-component-wizard.md)|
|Controllo ATL|[Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)|
|Finestra di dialogo ATL|[Creazione guidata finestra di dialogo ATL](../atl/reference/atl-dialog-wizard.md)|
|Componente ATL COM+ 1.0|[Creazione guidata componente ATL COM+ 1.0](../atl/reference/atl-com-plus-1-0-component-wizard.md)|
|Consumer OLEDB ATL|[Creazione guidata consumer OLE DB ATL](../atl/reference/atl-ole-db-consumer-wizard.md)|
|Provider OLEDB ATL|[Creazione guidata provider OLE DB ATL](../atl/reference/atl-ole-db-provider-wizard.md)|
|Pagina delle proprietà ATL|[Creazione guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md)|
|Oggetto semplice ATL|[Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md)|
|Provider di eventi WMI|Configurazione guidata provider di eventi WMI|
|Provider di istanze WMI|Configurazione guidata provider di istanze WMI|

### <a name="mfc"></a>MFC

|Modello|Wizard|
|--------------|------------|
|Classe MFC|[Creazione guidata aggiunta classe MFC](../mfc/reference/mfc-add-class-wizard.md)|
|Classe MFC da controllo ActiveX|[Aggiunta guidata classe da controllo ActiveX](../ide/add-class-from-activex-control-wizard.md)|
|Classe MFC da libreria di tipi|[Aggiunta guidata classe da libreria dei tipi](../mfc/reference/add-class-from-typelib-wizard.md)|
|Consumer ODBC MFC|[Creazione guidata consumer ODBC MFC (C++)](../mfc/reference/mfc-odbc-consumer-wizard.md)|

### <a name="generic-classes"></a>Classi generiche

|Modello|Wizard|
|--------------|------------|
|Classe C++ generica|[Creazione guidata classe C++ generica](../ide/generic-cpp-class-wizard.md)|

## <a name="see-also"></a>Vedere anche

[Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)<br>
[Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)<br>
[Override di una funzione virtual](../ide/overriding-a-virtual-function-visual-cpp.md)<br>
[Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)<br>
[Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)