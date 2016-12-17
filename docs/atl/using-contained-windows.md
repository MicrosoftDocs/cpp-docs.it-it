---
title: "Using Contained Windows | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, finestre"
  - "contained windows in ATL"
  - "windows [C++], ATL"
ms.assetid: 7b3d79e5-b569-413f-9b98-df4f14efbe2b
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using Contained Windows
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementa ATL contenute le finestre con [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md).  Una finestra che rappresenta una finestra che delega i messaggi un oggetto contenitore anziché gestirli nella propria classe.  
  
> [!NOTE]
>  Non è necessario derivare una classe da `CContainedWindowT` per utilizzare le finestre contenute.  
  
 Con windows, è contenuto è una superclasse una classe o una sottoclasse esistente di Windows una finestra esistente.  Per creare una finestra superiore una classe esistente di Windows, è necessario specificare il nome della classe esistente nel costruttore per l'oggetto `CContainedWindowT`.  Successivamente chiamare `CContainedWindowT::Create`.  Creare una sottoclasse di una finestra esistente, non è necessario specificare un nome di classe di Windows \(sessione **NULL** al costruttore\).  È sufficiente chiamare il metodo `CContainedWindowT::SubclassWindow` con un handle di finestra che viene impostata come sottoclasse.  
  
 In genere si utilizzano le finestre contenute come membri dati di una classe di contenitori.  Il contenitore non deve essere una finestra; tuttavia, deve derivare da [CMessageMap](../atl/reference/cmessagemap-class.md).  
  
 Una finestra che può utilizzare più mappe messaggi alternate per gestire i messaggi.  Se si dispone di più finestre contenuto, è necessario dichiarare diverse mappe messaggi alternate, ognuno corrispondente a una finestra separata contenuta.  
  
## Esempio  
 Di seguito è riportato un esempio di una classe di contenitori con due finestre contenute:  
  
 [!code-cpp[NVC_ATL_Windowing#67](../atl/codesnippet/CPP/using-contained-windows_1.h)]  
  
 Per ulteriori informazioni sulle finestre contenuti, vedere l'esempio [Esempio SUBEDIT](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)