---
title: "Implementing a Window with CWindowImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWindowImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, finestre"
  - "subclassing ATL window classes"
  - "superclassing, ATL"
  - "windows [C++], ATL"
  - "windows [C++], subclassing"
  - "windows [C++], superclassing"
ms.assetid: 3fc40550-f1d6-4702-8b7c-4cf682b6a855
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Implementing a Window with CWindowImpl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per implementare una finestra, derivare una classe da `CWindowImpl`.  Nella classe derivata, dichiarare una mappa messaggi e le funzioni del gestore.  È ora possibile utilizzare la classe in tre modi diversi:  
  
-   [Creazione di una finestra basata su una nuova classe di Windows](#_atl_creating_a_window_based_on_a_new_windows_class)  
  
-   [Superclasse una classe esistente di Windows](#_atl_superclassing_an_existing_windows_class)  
  
-   [Sottoclasse di una finestra esistente](#_atl_subclassing_an_existing_window)  
  
##  <a name="_atl_creating_a_window_based_on_a_new_windows_class"></a> Creazione di una finestra basata su una nuova classe di Windows  
 `CWindowImpl` contiene la macro [DECLARE\_WND\_CLASS](../Topic/DECLARE_WND_CLASS.md) per dichiarare le informazioni sulle classi di Windows.  Questa macro implementa la funzione `GetWndClassInfo`, che utilizza [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) per definire le informazioni della nuova classe di Windows.  Quando `CWindowImpl::Create` viene chiamato, questa classe di Windows viene registrata e una nuova finestra viene creata.  
  
> [!NOTE]
>  `CWindowImpl` passa **NULL** alla macro `DECLARE_WND_CLASS`, ovvero ATL genera un nome di classe di Windows.  Per specificare il nome, passare una stringa in `DECLARE_WND_CLASS` nel `CWindowImpl`classe derivata da.  
  
## Esempio  
 Di seguito è riportato un esempio di una classe che implementa una finestra basata su una nuova classe di Windows:  
  
 [!code-cpp[NVC_ATL_Windowing#64](../atl/codesnippet/CPP/implementing-a-window-with-cwindowimpl_1.h)]  
  
 Per creare una finestra, creare un'istanza `CMyWindow` quindi chiamare il metodo **Crea**.  
  
> [!NOTE]
>  Per eseguire l'override delle informazioni sulle classi predefinite di Windows, implementare il metodo `GetWndClassInfo` nella classe derivata impostando i membri `CWndClassInfo` i valori appropriati.  
  
##  <a name="_atl_superclassing_an_existing_windows_class"></a> Una superclasse basata su una classe esistente di Windows  
 La macro [DECLARE\_WND\_SUPERCLASS](../Topic/DECLARE_WND_SUPERCLASS.md) consente di creare una finestra che superiore una classe esistente di Windows.  Specificare questa macro nel `CWindowImpl`classe derivata da.  Come qualsiasi altra finestra ATL, i messaggi vengono gestiti da una mappa messaggi.  
  
 Quando si utilizza `DECLARE_WND_SUPERCLASS`, una nuova classe di Windows verrà registrata.  Questa nuova classe sarà uguale alla classe esistente si specifica, ma sostituire la routine della finestra con `CWindowImpl::WindowProc` \(o alla funzione che esegue l'override di questo metodo.  
  
## Esempio  
 Di seguito è riportato un esempio di classe che superiore alla classe standard di modifica:  
  
 [!code-cpp[NVC_ATL_Windowing#65](../atl/codesnippet/CPP/implementing-a-window-with-cwindowimpl_2.h)]  
  
 Per creare la finestra impostato come superclasse di modifica, creare un'istanza `CMyEdit` quindi chiamare il metodo **Crea**.  
  
##  <a name="_atl_subclassing_an_existing_window"></a> Creazione di una sottoclasse di una finestra esistente  
 Creare una sottoclasse di una finestra esistente, derivare una classe da `CWindowImpl` e dichiarare una mappa messaggi, ad esempio nei due casi precedenti.  Si noti, tuttavia, non si specificano alcune informazioni sulle classi Windows, poiché sottoclasse di una finestra già esistente.  
  
 Anziché chiamare **Crea**, chiamare `SubclassWindow` e passare l'handle della finestra esistente che si desidera creare una sottoclasse.  Una volta che la finestra è impostata come sottoclasse, utilizzerà `CWindowImpl::WindowProc` \(o la funzione che esegue l'override di questo metodo per indirizzare i messaggi alla mappa messaggi.  Per rimuovere una finestra impostata come sottoclasse dall'oggetto, chiamare `UnsubclassWindow`.  La routine della finestra originale della finestra verrà ripristinata.  
  
## Vedere anche  
 [Implementing a Window](../atl/implementing-a-window.md)