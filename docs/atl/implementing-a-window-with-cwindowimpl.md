---
title: Implementazione di una finestra con CWindowImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CWindowImpl
dev_langs: C++
helpviewer_keywords:
- ATL, windows
- windows [C++], subclassing
- windows [C++], superclassing
- windows [C++], ATL
- subclassing ATL window classes
- superclassing, ATL
ms.assetid: 3fc40550-f1d6-4702-8b7c-4cf682b6a855
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b21557fce0735f23e89fe1594a7025170f5f7e7f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="implementing-a-window-with-cwindowimpl"></a>Implementazione di una finestra con CWindowImpl
Per implementare una finestra, derivare una classe da `CWindowImpl`. Nella classe derivata, dichiarare una mappa messaggi e le funzioni del gestore di messaggi. È ora possibile utilizzare la classe in tre modi diversi:  
  
-   [Creare una finestra in base a una nuova classe di Windows](#_atl_creating_a_window_based_on_a_new_windows_class)  
  
-   [Una classe di Windows esistente superclasse](#_atl_superclassing_an_existing_windows_class)  
  
-   [Sottoclasse di una finestra esistente](#_atl_subclassing_an_existing_window)  
  
##  <a name="_atl_creating_a_window_based_on_a_new_windows_class"></a>Creazione di una finestra in base a una nuova classe di Windows  
 `CWindowImpl`contiene il [DECLARE_WND_CLASS](reference/window-class-macros.md#declare_wnd_class) macro per dichiarare informazioni sulle classi di Windows. Questa macro implementa il `GetWndClassInfo` funzione, che usa [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) per definire le informazioni di una nuova classe di Windows. Quando `CWindowImpl::Create` viene chiamato, questo Windows classe viene registrata e viene creata una nuova finestra.  
  
> [!NOTE]
>  `CWindowImpl`passa **NULL** per il `DECLARE_WND_CLASS` (macro), ovvero ATL verrà generato un nome di classe di Windows. Per specificare un nome personalizzato, passare una stringa per `DECLARE_WND_CLASS` nel `CWindowImpl`-classe derivata.  
  
## <a name="example"></a>Esempio  
 Ecco un esempio di una classe che implementa una finestra basata su una nuova classe di Windows:  
  
 [!code-cpp[NVC_ATL_Windowing#64](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_1.h)]  
  
 Per creare una finestra, creare un'istanza di `CMyWindow` e quindi chiamare il **crea** metodo.  
  
> [!NOTE]
>  Per ignorare le informazioni sulla classe di Windows predefinite, implementare il `GetWndClassInfo` metodo nella classe derivata, impostando il `CWndClassInfo` membri per i valori appropriati.  
  
##  <a name="_atl_superclassing_an_existing_windows_class"></a>Creazione di superclassi una classe esistente di Windows  
 Il [DECLARE_WND_SUPERCLASS](reference/window-class-macros.md#declare_wnd_superclass) che consente di creare una finestra che crea una superclasse un esistenti di Windows classe. Specificare questa macro nel `CWindowImpl`-classe derivata. Come qualsiasi altra finestra ATL, vengono gestiti i messaggi da una mappa messaggi.  
  
 Quando si utilizza `DECLARE_WND_SUPERCLASS`, verrà registrata una nuova classe di Windows. La nuova classe sarà lo stesso come la classe esistente si specifica, ma verrà sostituito con la procedura della finestra `CWindowImpl::WindowProc` (o con la funzione che esegue l'override di questo metodo).  
  
## <a name="example"></a>Esempio  
 Seguente è riportato un esempio di una classe che modifica standard superclassi classe:  
  
 [!code-cpp[NVC_ATL_Windowing#65](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_2.h)]  
  
 Per creare la finestra Edit, creare un'istanza di `CMyEdit` e quindi chiamare il **crea** metodo.  
  
##  <a name="_atl_subclassing_an_existing_window"></a>Crea una sottoclasse di una finestra esistente  
 Per creare una sottoclasse di una finestra esistente, derivare una classe da `CWindowImpl` e dichiarare una mappa messaggi, come in due casi precedenti. Si noti, tuttavia, che non si specifica informazioni sulle classi Windows, poiché si crea una sottoclasse di una finestra già esistente.  
  
 Anziché chiamare **crea**, chiamare `SubclassWindow` e passare l'handle alla finestra esistente che desidera creare una sottoclasse. Una volta la finestra è una sottoclasse, userà `CWindowImpl::WindowProc` (o la funzione che esegue l'override di questo metodo) per inviare messaggi alla mappa messaggi. Per disconnettere una finestra con sottoclasse dall'oggetto, chiamare `UnsubclassWindow`. Routine della finestra originale verrà quindi ripristinato.  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)

