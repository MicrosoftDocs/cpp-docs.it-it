---
title: "Classi del tipo di dati semplice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di dati [C++]"
  - "classi scalari [C++]"
  - "classi del tipo di dati semplice"
ms.assetid: 0d591d68-0a33-49e9-8a6d-90c90de5c16a
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classi del tipo di dati semplice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi seguenti incapsulano coordinate di disegno, stringhe di caratteri e informazioni di data e ora che consentono un utilizzo conveniente della sintassi di C\+\+.  Questi oggetti vengono utilizzati ampiamente come parametri alle funzioni membro delle classi di Windows nella libreria di classi.  Poiché `CPoint`, `CSize` e `CRect` corrispondono alle strutture **POINT**, **SIZE** e `RECT`, rispettivamente, in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], è possibile utilizzare gli oggetti di queste classi C\+\+ ovunque sia possibile utilizzare queste strutture di linguaggio C.  Le classi forniscono interfacce utili attraverso le loro funzioni membro.  `CStringT` fornisce stringhe di caratteri dinamiche molto flessibili.  `CTime`, `COleDateTime`, `CTimeSpan` e **COleTimeSpan** rappresentano valori di data e ora.  Per ulteriori informazioni su queste classi, vedere l'articolo [Data e ora](../atl-mfc-shared/date-and-time.md).  
  
 Le classi che iniziano con "**COle**" sono incapsulamenti dei tipi di dati forniti da OLE.  Questi tipi di dati possono essere utilizzati in programmi di Windows indipendentemente dall'utilizzo di altre funzionalità OLE.  
  
 [Classe CstringT](../atl-mfc-shared/reference/cstringt-class.md)  
 Contiene stringhe di caratteri.  
  
 [CTime](../atl-mfc-shared/reference/ctime-class.md)  
 Contiene valori assoluti di data e ora.  
  
 [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)  
 Wrapper per il tipo di automazione **DATA** di OLE.  Rappresenta valori di data e ora.  
  
 [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md)  
 Contiene valori relativi di data e ora.  
  
 [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md)  
 Contiene valori relativi di `COleDateTime`, come ad esempio la differenza tra due valori `COleDateTime`.  
  
 [CPoint](../atl-mfc-shared/reference/cpoint-class.md)  
 Contiene coppie \(x, y\) di coordinate.  
  
 [CSize](../atl-mfc-shared/reference/csize-class.md)  
 Contiene distanze, posizioni relative o valori accoppiati.  
  
 [CRect](../atl-mfc-shared/reference/crect-class.md)  
 Contiene le coordinate delle aree rettangolari.  
  
 [CImageList](../mfc/reference/cimagelist-class.md)  
 Fornisce la funzionalità dell'elenco immagini di Windows.  Gli elenchi di immagini vengono utilizzati con controlli elenco e controlli di struttura ad albero.  Possono essere utilizzati per memorizzare e archiviare un set di immagini bitmap della stessa dimensione.  
  
 [COleVariant](../mfc/reference/colevariant-class.md)  
 Wrapper per il tipo di automazione **VARIANT** di OLE.  I dati in **VARIANT** possono essere archiviati in numerosi formati.  
  
 [COleCurrency](../mfc/reference/colecurrency-class.md)  
 Wrapper per il tipo di automazione **CURRENCY** di OLE, un tipo aritmetico a virgola fissa, con 15 cifre prima del separatore decimale e 4 cifre dopo.  
  
> [!NOTE]
>  A partire da Visual C\+\+ .NET, `CRect`, `CSize` e `CPoint` sono state modificate per poter essere utilizzate da applicazioni ATL o MFC.  Inoltre, è stata aggiunta `CStringT` per fornire una classe simile a `CString` indipendente da MFC.  Per ulteriori informazioni sulle classi di utilità condivise, vedere [Classi condivise](../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)