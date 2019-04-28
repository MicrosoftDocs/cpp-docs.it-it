---
title: Implementazione di una finestra con CWindowImpl
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- windows [C++], subclassing
- windows [C++], superclassing
- windows [C++], ATL
- subclassing ATL window classes
- superclassing, ATL
ms.assetid: 3fc40550-f1d6-4702-8b7c-4cf682b6a855
ms.openlocfilehash: 265c3145d8ceacae540286f72939dc046e7c8b35
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62197845"
---
# <a name="implementing-a-window-with-cwindowimpl"></a>Implementazione di una finestra con CWindowImpl

Per implementare una finestra, derivare una classe da `CWindowImpl`. Nella classe derivata, dichiarare una mappa dei messaggi e le funzioni del gestore messaggi. È ora possibile usare la classe in tre modi diversi:

- [Creare una finestra basata su una nuova classe di Windows](#_atl_creating_a_window_based_on_a_new_windows_class)

- [Superclasse una classe di Windows esistente](#_atl_superclassing_an_existing_windows_class)

- [Sottoclasse una finestra esistente](#_atl_subclassing_an_existing_window)

##  <a name="_atl_creating_a_window_based_on_a_new_windows_class"></a> Creazione di una finestra basata su una nuova classe di Windows

`CWindowImpl` contiene il [DECLARE_WND_CLASS](reference/window-class-macros.md#declare_wnd_class) macro per dichiarare le informazioni sulla classe di Windows. Questa macro implementa il `GetWndClassInfo` funzione, che usa [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) per definire le informazioni di una nuova classe di Windows. Quando si `CWindowImpl::Create` viene chiamato, questo Windows classe registrata e viene creata una nuova finestra.

> [!NOTE]
>  `CWindowImpl` passa valore NULL per il `DECLARE_WND_CLASS` (macro), il che significa ATL verrà generato un nome di classe di Windows. Per specificare il proprio nome, passare una stringa a DECLARE_WND_CLASS nel `CWindowImpl`-classe derivata.

## <a name="example"></a>Esempio

Ecco un esempio di una classe che implementa una finestra basata su una nuova classe di Windows:

[!code-cpp[NVC_ATL_Windowing#64](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_1.h)]

Per creare una finestra, creare un'istanza di `CMyWindow` e quindi chiamare il `Create` (metodo).

> [!NOTE]
>  Per ignorare le informazioni sulla classe di Windows predefinite, implementare il `GetWndClassInfo` metodo nella classe derivata, impostando il `CWndClassInfo` membri sui valori appropriati.

##  <a name="_atl_superclassing_an_existing_windows_class"></a> Creazione di superclassi una classe di Windows esistente

Il [DECLARE_WND_SUPERCLASS](reference/window-class-macros.md#declare_wnd_superclass) (macro) consente di creare una finestra che crea una superclasse un Windows esistenti classe. Specificare questa macro nel `CWindowImpl`-classe derivata. Come qualsiasi altra finestra ATL, vengono gestiti i messaggi da una mappa messaggi.

Quando si usa DECLARE_WND_SUPERCLASS, una nuova classe di Windows viene registrata. Questa nuova classe sarà quello utilizzato per la classe esistente si specifica, ma sostituisce la procedura della finestra con `CWindowImpl::WindowProc` (o con una funzione che esegue l'override di questo metodo).

## <a name="example"></a>Esempio

Seguito è riportato un esempio di una classe che crea una superclasse di modifica standard classe:

[!code-cpp[NVC_ATL_Windowing#65](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_2.h)]

Per creare la finestra Edit, creare un'istanza di `CMyEdit` e quindi chiamare il `Create` (metodo).

##  <a name="_atl_subclassing_an_existing_window"></a> Crea una sottoclasse di una finestra esistente

Per creare una sottoclasse di una finestra esistente, derivare una classe da `CWindowImpl` e dichiarare una mappa dei messaggi, come nei due casi precedenti. Si noti, tuttavia, che non si specifica alcuna informazione di classe di Windows, poiché si crea una sottoclasse di una finestra già esistente.

Invece di chiamare `Create`, chiamare `SubclassWindow` e passare l'handle alla finestra esistente desidera creare una sottoclasse. Una volta la finestra è una sottoclasse, userà `CWindowImpl::WindowProc` (o una funzione che esegue l'override di questo metodo) per indirizzare i messaggi alla mappa messaggi. Per scollegare una finestra sottoclassata dall'oggetto, chiamare `UnsubclassWindow`. Routine della finestra originale verrà quindi ripristinato.

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)
