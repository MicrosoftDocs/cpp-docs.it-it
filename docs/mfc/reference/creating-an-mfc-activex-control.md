---
title: Creazione di un controllo ActiveX MFC | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.activex.project
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], creating
- ActiveX controls [MFC], creating
ms.assetid: 8bd5a93c-d04d-414e-bb28-163fdc1c0dd5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0278ce0349b24680252100704031645c995fef51
ms.sourcegitcommit: b4432d30f255f0cb58dce69cbc8cbcb9d44bc68b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "45535080"
---
# <a name="creating-an-mfc-activex-control"></a>Creazione di un controllo ActiveX MFC
Programmi di controllo ActiveX sono modulare progettata per offrire un tipo specifico di funzionalità a un'applicazione padre. Ad esempio, è possibile creare un controllo, ad esempio un pulsante per l'uso in una finestra di dialogo oppure sulla barra degli strumenti per l'uso in una pagina Web.  

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni, vedere [controlli ActiveX](../activex-controls.md).
  
 Il modo più semplice per creare un controllo ActiveX di MFC è usare il [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md).  
  
### <a name="to-create-an-mfc-activex-control-using-the-mfc-activex-control-wizard"></a>Per creare un controllo ActiveX di MFC mediante la creazione guidata controllo ActiveX MFC  
  
1.  Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C++](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  Nel **nuovo progetto** finestra di dialogo, seleziona la **controllo ActiveX MFC** icona nel riquadro dei modelli per aprire la creazione guidata controllo ActiveX MFC.  
  
3.  Definire le [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md), [nomi controllo](../../mfc/reference/control-names-mfc-activex-control-wizard.md), e [controllare le impostazioni](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) utilizzando la creazione guidata controllo ActiveX MFC.  
  
    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.  
  
4.  Fare clic su **fine** per chiudere la procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.  
  
 Dopo aver creato il progetto, è possibile visualizzare i file creati nella **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [tipi di File creati per i progetti Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
 Dopo aver creato il progetto, è possibile utilizzare le procedure guidate di codice per aggiungere [funzioni](../../ide/add-member-function-wizard.md), [variabili](../../ide/add-member-variable-wizard.md), [eventi](../../ide/add-event-wizard.md), [proprietà](../../ide/names-add-property-wizard.md), e [metodi](../../ide/add-method-wizard.md). Per altre informazioni sulla personalizzazione del controllo ActiveX, vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   


