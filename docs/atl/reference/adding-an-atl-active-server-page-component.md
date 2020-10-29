---
title: Aggiunta di un componente ASP ATL
ms.date: 05/09/2019
ms.assetid: 7be2204c-6e58-4099-8892-001b848c8987
ms.openlocfilehash: 08d49baa547342843b525f871de9570d4e752068
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921165"
---
# <a name="adding-an-atl-active-server-page-component"></a>Aggiunta di un componente ASP ATL

::: moniker range="msvc-160"

La Creazione guidata componente ASP ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

Per aggiungere un oggetto ATL (Active Template Library) al progetto, questo deve essere stato creato come applicazione ATL COM o come applicazione MFC che contiene supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL, selezionare **Aggiungi supporto ATL a MFC** dalla [finestra di dialogo Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) oppure [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

I componenti ASP fanno parte dell'architettura di Internet Information Services, che fornisce le funzionalità di sviluppo Web avanzate seguenti:

- È possibile incorporare i componenti ASP nelle pagine HTML per creare contenuto dinamico e indipendente dal browser.

- È possibile usare le pagine ASP per fornire la connettività di database basata su standard.

- È possibile usare le funzionalità di gestione degli errori ASP per le applicazioni basate sul Web.

## <a name="to-add-an-atl-active-server-pages-component-to-your-project"></a>Per aggiungere un componente ASP ATL al progetto

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nome del progetto a cui si vuole aggiungere il componente ASP ATL.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe** .

1. Nella finestra di dialogo [Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box), nel riquadro **Modelli** , fare clic su **Componente pagine ASP ATL** e quindi su **Apri** per visualizzare la [Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una nuova interfaccia in un progetto ATL](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)<br/>
[Aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md)<br/>
[Aggiunta di un metodo](../../ide/adding-a-method-visual-cpp.md)<br/>
[Classe MFC](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Aggiunta di una classe C++ generica](../../ide/adding-a-generic-cpp-class.md)
