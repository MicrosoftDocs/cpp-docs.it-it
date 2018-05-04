---
title: Pagine delle proprietà COM ATL | Documenti Microsoft
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
ms.openlocfilehash: d5d7904b9f31a1be858dadaa8a087c720c277465
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-com-property-pages"></a>Pagine delle proprietà COM ATL
Pagine delle proprietà COM forniscono un'interfaccia utente per l'impostazione delle proprietà (o chiamare i metodi) di uno o più oggetti COM. Pagine delle proprietà sono ampiamente utilizzati per i controlli ActiveX per fornire le interfacce utente avanzate che consentono di impostare in fase di progettazione le proprietà del controllo.  
  
 Pagine delle proprietà sono oggetti COM che implementano il [interfaccia IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) o [IPropertyPage2](http://msdn.microsoft.com/library/windows/desktop/ms683996) interfaccia. Queste interfacce forniscono metodi che consentono la pagina può essere associato un `site` (un oggetto COM che rappresenta il contenitore della pagina) e un numero di *oggetti* (COM gli oggetti i cui metodi vengono chiamati in risposta alle modifiche apportate dall'utente della pagina delle proprietà). Il contenitore della pagina proprietà è responsabile della chiamata di metodi sull'interfaccia pagina proprietà per indicare la pagina quando per mostrare o nascondere la relativa interfaccia utente e quando applicare le modifiche apportate dall'utente per gli oggetti sottostanti.  
  
 Ogni pagina delle proprietà può essere compilato completamente in modo indipendente dagli oggetti la cui proprietà possono essere impostate. Una pagina delle proprietà, non è necessario che per comprendere una particolare interfaccia (o set di interfacce) e per fornire un'interfaccia utente per la chiamata di metodi su tale interfaccia.  
  
 Per ulteriori informazioni, vedere [finestre delle proprietà e pagine delle proprietà](http://msdn.microsoft.com/library/windows/desktop/ms686577) nel [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## <a name="in-this-section"></a>In questa sezione  
 [Specifica delle pagine delle proprietà](../atl/specifying-property-pages.md)  
 Elenca i passaggi per la specifica delle pagine delle proprietà per il controllo e viene illustrato un esempio di classe.  
  
 [Implementazione delle pagine delle proprietà](../atl/implementing-property-pages.md)  
 Elenca i passaggi per l'implementazione delle pagine delle proprietà, inclusi i metodi per eseguire l'override. Viene illustrato un esempio completo basato sul programma di esempio ATLPages.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Esempio ATLPages](../visual-cpp-samples.md)  
 La classe astratta di esempio per l'esempio ATLPages, che implementa una pagina delle proprietà utilizzando `IPropertyPageImpl`.  
  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

