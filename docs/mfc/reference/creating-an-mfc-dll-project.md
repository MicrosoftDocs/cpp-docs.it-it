---
title: Creazione di un progetto DLL MFC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfcdll.project
dev_langs:
- C++
helpviewer_keywords:
- MFC DLLs [C++], creating projects
- DLLs [C++], MFC
- projects [C++], creating
- DLLs [C++], creating
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: c403d1351c43e043fd3048d342dafcf069951446
ms.lasthandoff: 02/24/2017

---
# <a name="creating-an-mfc-dll-project"></a>Creazione di un progetto DLL MFC
Una DLL MFC è un file binario che funge da una libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni. Il modo più semplice per creare un progetto DLL MFC è utilizzare la procedura guidata DLL MFC.  
  
> [!NOTE]
>  L'aspetto delle funzionalità nell'IDE può variano a seconda delle impostazioni attive o l'edizione e potrebbero essere diversi da quelli descritti nella Guida. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/en-us/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### <a name="to-create-an-mfc-dll-project-using-the-mfc-dll-wizard"></a>Per creare un progetto DLL MFC mediante la creazione guidata DLL MFC  
  
1.  Seguire le istruzioni nell'argomento della Guida [creazione di un progetto con una creazione guidata applicazione Visual C++](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
 **Nota** nel **nuovo progetto** la finestra di dialogo, selezionare il `MFC DLL` icona nel riquadro Modelli per aprire la creazione guidata DLL MFC.  
  
1.  Definire le impostazioni dell'applicazione di [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-dll-wizard.md) pagina di [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md).  
  
    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.  
  
2.  Fare clic su **fine** per chiudere la procedura guidata e aprire il nuovo progetto in **Esplora**.  
  
 Una volta creato il progetto, è possibile visualizzare i file creati in Esplora soluzioni. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per ulteriori informazioni sui tipi di file, vedere [tipi di File creati per progetti Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di progetto Visual C++](http://msdn.microsoft.com/library/912b4ba2-7719-43d5-b087-db33e3f9329a)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   
 [Distribuzione di applicazioni](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)


