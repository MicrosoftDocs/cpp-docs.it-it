---
title: "Specificare le pagine delle proprietà (ATL) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: ISpecifyPropertyPages
dev_langs: C++
helpviewer_keywords:
- ISpecifyPropertyPages method
- property pages, specifying
ms.assetid: ee8678cf-c708-49ab-b0ad-fc2db31f1ac3
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8985499c76a7dc65523a5c2904bcb774a4364d41
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specifying-property-pages"></a>Specificare le pagine delle proprietà
Quando si crea un controllo ActiveX, è spesso che si desidera associarla pagine delle proprietà che può essere utilizzati per impostare le proprietà del controllo. Controlla l'uso di contenitori di **ISpecifyPropertyPages** interfaccia per scoprire quali pagine delle proprietà consente di impostare le proprietà del controllo. È necessario implementare questa interfaccia nel controllo.  
  
 Per implementare **ISpecifyPropertyPages** utilizzando ATL, procedere come segue:  
  
1.  Derivare la classe da [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md).  
  
2.  Aggiungere una voce per **ISpecifyPropertyPages** alla mappa COM della classe.  
  
3.  Aggiungere un [PROP_PAGE](reference/property-map-macros.md#prop_page) voce per il mapping di proprietà per ogni pagina associata al controllo.  
  
> [!NOTE]
>  Durante la generazione di un controllo standard utilizzando la [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md), è necessario aggiungere solo il `PROP_PAGE` voci per il mapping di proprietà. La procedura guidata genera il codice necessario per gli altri passaggi.  
  
 Contenitori ben progettati verranno visualizzate le pagine di proprietà specificato nello stesso ordine di `PROP_PAGE` voci nel mapping della proprietà. In genere, è necessario inserire voci pagina delle proprietà standard dopo le voci per le pagine personalizzate nel mapping della proprietà, in modo che gli utenti, vedere le pagine specifiche del controllo prima di tutto.  
  
## <a name="example"></a>Esempio  
 La classe seguente per un calendario di controllo Usa il **ISpecifyPropertyPages** interfaccia per comunicare ai contenitori che è possono impostare le relative proprietà utilizzando una pagina di date personalizzato e la pagina colore predefinita.  
  
 [!code-cpp[NVC_ATL_Windowing#72](../atl/codesnippet/cpp/specifying-property-pages_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../atl/atl-com-property-pages.md)   
 [Esempio ATLPages](../visual-cpp-samples.md)

