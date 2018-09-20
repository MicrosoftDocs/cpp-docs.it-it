---
title: Aggiunta del supporto ATL a un progetto MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.adding.atl.mfc
dev_langs:
- C++
helpviewer_keywords:
- MFC, ATL support
- ATL, MFC projects
ms.assetid: b5fe15d6-7752-4818-b9f9-62482ad35c95
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc0d21202478a02980dbc94dc866b769c3c71a9b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46429734"
---
# <a name="adding-atl-support-to-your-mfc-project"></a>Aggiunta del supporto ATL a un progetto MFC

Se è già stato creato un'applicazione basata su MFC, quindi è possibile aggiungere il supporto per la libreria ATL (Active Template) facilmente tramite l'esecuzione di Aggiungi supporto ATL per la creazione guidata progetto MFC.

> [!NOTE]
>  ATL e MFC sono generalmente non è supportata nelle edizioni Express di Visual Studio.

> [!NOTE]
>  Questo supporto si applica solo a oggetti COM semplici aggiunti a un progetto DLL o un file eseguibile MFC. È possibile aggiungere altri oggetti COM (inclusi i controlli ActiveX) per i progetti MFC, ma gli oggetti potrebbero non funzionare come previsto.

### <a name="to-add-atl-support-to-your-mfc-project"></a>Per aggiungere il supporto ATL a un progetto MFC

1. In Esplora soluzioni fare doppio clic su progetto a cui si desidera aggiungere supporto per ATL.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **Aggiungi classe**.

1. Selezionare il **Aggiungi supporto ATL a MFC** icona.

    > [!NOTE]
    >  Questa icona si trova nella cartella ATL il **categorie** riquadro.

1. Quando richiesto, fare clic su **Sì** per aggiungere il supporto ATL.

Per altre informazioni su come l'aggiunta del supporto ATL Cambia codice del progetto MFC, vedere [dettagli sul supporto ATL aggiunto dalla procedura guidata ATL](../../mfc/reference/details-of-atl-support-added-by-the-atl-wizard.md)

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)
