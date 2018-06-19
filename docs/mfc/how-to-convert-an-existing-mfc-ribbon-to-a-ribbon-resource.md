---
title: 'Procedura: convertire una barra multifunzione MFC esistente in una risorsa barra multifunzione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ribbon resource, converting from an MFC ribbon
- MFC ribbon, converting to a ribbon resource
ms.assetid: 324b7ff6-58f9-4691-96a9-9836a79d0fb6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8024acc4abbb02b14ed968df83779d34bd4a7271
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33351650"
---
# <a name="how-to-convert-an-existing-mfc-ribbon-to-a-ribbon-resource"></a>Procedura: convertire una barra multifunzione MFC esistente in una risorsa Ribbon
Le risorse barra multifunzione sono più facili da visualizzare, modificare e gestire rispetto alle barre multifunzione codificate manualmente. In questo argomento viene descritto come convertire una barra multifunzione codificata manualmente in un progetto MFC in una risorsa barra multifunzione.  
  
 È necessario disporre di un progetto MFC esistente che include il codice che utilizza le classi ribbon MFC, ad esempio, [classe CMFCRibbonBar](../mfc/reference/cmfcribbonbar-class.md).  
  
### <a name="to-convert-an-mfc-ribbon-to-a-ribbon-resource"></a>Per convertire una barra multifunzione MFC in una risorsa barra multifunzione  
  
1.  In Visual Studio, in un progetto MFC esistente, aprire il file sorgente in cui viene inizializzato l'oggetto CMFCRibbonBar. In genere, è il file mainfrm.cpp. Aggiungere il codice seguente dopo il codice di inizializzazione per la barra multifunzione.  
  
 ```  
    m_wndRibbonBar.SaveToXMLFile("RibbonOutput.xml");

 ```  
  
     Salvare e chiudere il file.  
  
2.  Compilare ed eseguire l'applicazione MFC, quindi aprire RibbonOutput.txt nel Blocco Note e copiarne il contenuto.  
  
3.  In Visual Studio, sul **progetto** menu, fare clic su **Aggiungi risorsa**. Nel **Aggiungi risorsa** nella finestra di dialogo **della barra multifunzione** e quindi fare clic su **New**.  
  
     In Visual Studio verrà creata una risorsa barra multifunzione che verrà aperta nella visualizzazione Progettazione. L'ID di risorsa della barra multifunzione è IDR_RIBBON1, il quale viene visualizzato in **visualizzazione risorse**. La barra multifunzione viene definita nel file XML ribbon1.mfcribbon-ms.  
  
4.  In Visual Studio, aprire ribbon1.mfcribbon-ms, eliminarne il contenuto, quindi incollarvi il contenuto del file RibbonOutput.txt copiato precedentemente. Salvare e chiudere il file ribbon1.mfcribbon-ms.  
  
5.  Aprire nuovamente il file sorgente in cui viene inizializzato l'oggetto CMFCRibbonBar (in genere mainfrm.cpp) e commentare il codice della barra multifunzione esistente. Aggiungere il codice seguente dopo il codice commentato.  
  
 ```  
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);

 ```  
  
6.  Compilare il progetto ed eseguire il programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)

