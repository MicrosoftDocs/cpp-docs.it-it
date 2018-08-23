---
title: Pagine delle proprietà COM ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- property pages, COM
- ATL COM objects
- COM property pages
- property pages, ATL
- COM objects, ATL
- ATL property pages
ms.assetid: 663c7caa-2e5e-4b5c-b8ea-fd434ceb1654
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3fdf0d53cca00424c2c933e2578fb5c70b7d07e1
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42571413"
---
# <a name="atl-com-property-pages"></a>Pagine delle proprietà COM ATL
Pagine delle proprietà COM forniscono un'interfaccia utente per impostare le proprietà (o la chiamata ai metodi) di uno o più oggetti COM. Pagine delle proprietà sono ampiamente usati da tutti i controlli ActiveX per fornire interfacce utente avanzate che consentono di essere impostata in fase di progettazione le proprietà del controllo.  
  
 Pagine delle proprietà sono oggetti COM che implementano il [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) oppure [IPropertyPage2](http://msdn.microsoft.com/library/windows/desktop/ms683996) interfaccia. Queste interfacce forniscono metodi che consentono alla pagina da associare a un `site` (un oggetto COM che rappresenta il contenitore della pagina) e numerosi *oggetti* (gli oggetti COM i cui metodi verranno chiamati in risposta alle modifiche apportate dall'utente della pagina delle proprietà). Il contenitore della pagina proprietà è responsabile per la chiamata a metodi nell'interfaccia di pagina di proprietà che indicano alla pagina quando per mostrare o nascondere la relativa interfaccia utente e quando applicare le modifiche apportate dall'utente per gli oggetti sottostanti.  
  
 Ogni pagina delle proprietà può essere compilato completamente indipendente dagli oggetti la cui proprietà possono essere impostate. Una pagina delle proprietà, non richiede che per comprendere una particolare interfaccia (o set di interfacce) e per fornire un'interfaccia utente per la chiamata di metodi in quell'interfaccia.  
  
 Per altre informazioni, vedere [finestre delle proprietà e pagine delle proprietà](http://msdn.microsoft.com/library/windows/desktop/ms686577) nel SDK di Windows.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Specifica delle pagine delle proprietà](../atl/specifying-property-pages.md)  
 Elenca i passaggi per la specifica di pagine delle proprietà per controllare e viene illustrato un esempio di classe.  
  
 [Implementazione delle pagine delle proprietà](../atl/implementing-property-pages.md)  
 Elenca i passaggi per l'implementazione di pagine delle proprietà, inclusi i metodi per eseguire l'override. Illustra un esempio completo basato sul programma di esempio ATLPages.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Esempio ATLPages](../visual-cpp-samples.md)  
 La classe astratta di esempio per l'esempio ATLPages, che implementa una pagina di proprietà mediante `IPropertyPageImpl`.  
  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

