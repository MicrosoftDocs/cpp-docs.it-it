---
title: Aggiunta di un consumer OLE DB ATL
ms.date: 05/09/2019
helpviewer_keywords:
- ATL OLE DB consumers
ms.assetid: f940a513-4e42-4148-b521-dd0d7dc89fa2
ms.openlocfilehash: c298a841bf0d37f90bcd6b53bc0c6cdf501f4dd3
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921152"
---
# <a name="adding-an-atl-ole-db-consumer"></a>Aggiunta di un consumer OLE DB ATL

::: moniker range="msvc-160"

La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente. Per altre informazioni, vedere [Creazione di un consumer senza utilizzare una procedura guidata](../../data/oledb/creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

Usare questa procedura guidata per aggiungere un consumer OLE DB ATL a un progetto. Un consumer OLE DB ATL è costituito da una classe di funzione di accesso OLE DB e dalle associazioni di dati necessarie per accedere a un'origine dati. Il progetto deve essere stato creato come applicazione ATL COM o come applicazione MFC o Win32 che contiene supporto ATL (aggiunto automaticamente dalla Creazione guidata consumer OLE DB ATL).

> [!NOTE]
> È possibile aggiungere un consumer OLE DB a un progetto MFC. In questo caso, la Creazione guidata consumer OLE DB ATL aggiunge il supporto COM necessario al progetto. A questo scopo, si presuppone che quando è stato creato il progetto MFC sia stata selezionata la casella di controllo **Controlli ActiveX** (nella pagina **Funzionalità avanzate** della Creazione guidata applicazione MFC), selezionata per impostazione predefinita. Se si seleziona questa opzione, l'applicazione chiama `CoInitialize` e `CoUninitialize`. Se durante la creazione del progetto MFC non è stata selezionata la casella di controllo **Controlli ActiveX** , è necessario chiamare `CoInitialize` e `CoUninitialize` nel codice principale.

## <a name="to-add-an-atl-ole-db-consumer-to-your-project"></a>Per aggiungere un consumer OLE DB ATL al progetto

1. In **Visualizzazione classi** fare clic con il pulsante destro del mouse sul progetto. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe** .

1. Nella cartella Visual C++ fare doppio clic sull'icona **Consumer OLE DB ATL** oppure selezionare il consumer e fare clic su **Apri** .

   Viene avviata la Creazione guidata consumer OLE DB ATL.

1. Definire le impostazioni come descritto in [Creazione guidata consumer OLE DB ATL](../../atl/reference/atl-ole-db-consumer-wizard.md).

1. Fare clic su **fine** per chiudere la procedura guidata. Il codice del nuovo consumer OLE DB creato verrà inserito nel progetto.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)
