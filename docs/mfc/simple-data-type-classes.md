---
title: Classi del tipo di dati semplici | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.data
dev_langs:
- C++
helpviewer_keywords:
- scalar classes [MFC]
- data classes [MFC]
- simple data type classes [MFC]
ms.assetid: 0d591d68-0a33-49e9-8a6d-90c90de5c16a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d2b4df05d64cb97032477ca50ff4b0ce572829b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="simple-data-type-classes"></a>Classi del tipo di dati semplice
Le classi seguenti incapsulano coordinate di disegno, stringhe di caratteri e informazioni di data e ora che consentono un utilizzo conveniente della sintassi di C++. Questi oggetti vengono utilizzati ampiamente come parametri alle funzioni membro delle classi di Windows nella libreria di classi. Poiché `CPoint`, `CSize`, e `CRect` corrispondono al **punto**, **dimensioni**, e `RECT` strutture, rispettivamente, in Windows SDK, è possibile utilizzare oggetti di questi Ogni volta che è possibile utilizzare queste strutture di linguaggio C, le classi C++. Le classi forniscono utili interfacce attraverso le funzioni membro. `CStringT` fornisce stringhe di caratteri dinamiche molto flessibili. `CTime`, `COleDateTime`, `CTimeSpan`, e **COleTimeSpan** rappresentano valori di data e ora. Per ulteriori informazioni su queste classi, vedere l'articolo [data e ora](../atl-mfc-shared/date-and-time.md).  
  
 Le classi che iniziano con "**COle**" sono incapsulamenti dei tipi di dati forniti da OLE. Questi tipi di dati possono essere utilizzati in programmi di Windows indipendentemente dall'utilizzo di altre funzionalità OLE.  
  
 [Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)  
 Contiene stringhe di caratteri.  
  
 [CTime](../atl-mfc-shared/reference/ctime-class.md)  
 Contiene valori assoluti di data e ora.  
  
 [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)  
 Wrapper per il tipo di automazione OLE **data**. Rappresenta valori di data e ora.  
  
 [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md)  
 Contiene valori relativi di data e ora.  
  
 [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md)  
 Contiene valori relativi di `COleDateTime`, come ad esempio la differenza tra due valori `COleDateTime`.  
  
 [CPoint](../atl-mfc-shared/reference/cpoint-class.md)  
 Contiene coppie di coordinate (x, y).  
  
 [CSize](../atl-mfc-shared/reference/csize-class.md)  
 Contiene distanze, posizioni relative o valori accoppiati.  
  
 [CRect](../atl-mfc-shared/reference/crect-class.md)  
 Contiene le coordinate delle aree rettangolari.  
  
 [CImageList](../mfc/reference/cimagelist-class.md)  
 Fornisce la funzionalità dell'elenco immagini di Windows. Gli elenchi immagini vengono utilizzati con controlli elenco e controlli struttura ad albero. Possono inoltre essere utilizzati per memorizzare e archiviare un set di immagini bitmap della stessa dimensione.  
  
 [COleVariant](../mfc/reference/colevariant-class.md)  
 Wrapper per il tipo di automazione OLE **VARIANT**. Dati in **VARIANT**possono essere archiviati in numerosi formati.  
  
 [COleCurrency](../mfc/reference/colecurrency-class.md)  
 Wrapper per il tipo di automazione OLE **valuta**, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.  
  
> [!NOTE]
>  `CRect`, `CSize`, e `CPoint` sono utilizzabili nelle applicazioni ATL o MFC. Inoltre, `CStringT` fornisce un indipendente da MFC `CString`-Analogamente alla classe. Per ulteriori informazioni sulle classi di utilità condivisi, vedere [classi condivise](../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

