---
title: Implementazione di una finestra con CWindowImplImplementing a Window with CWindowImpl
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- windows [C++], subclassing
- windows [C++], superclassing
- windows [C++], ATL
- subclassing ATL window classes
- superclassing, ATL
ms.assetid: 3fc40550-f1d6-4702-8b7c-4cf682b6a855
ms.openlocfilehash: e5fdbf15ddd7edc69f0667a9b7e08c7c5e531a5e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319454"
---
# <a name="implementing-a-window-with-cwindowimpl"></a>Implementazione di una finestra con CWindowImplImplementing a Window with CWindowImpl

Per implementare una finestra, `CWindowImpl`derivare una classe da . Nella classe derivata dichiarare una mappa messaggi e le funzioni del gestore messaggi. Ora puoi usare la tua classe in tre modi diversi:

- [Creare una finestra basata su una nuova classe di WindowsCreate a window based on a new Windows class](#_atl_creating_a_window_based_on_a_new_windows_class)

- [Superclasse di una classe Windows esistente](#_atl_superclassing_an_existing_windows_class)

- [Sottoclasse di una finestra esistente](#_atl_subclassing_an_existing_window)

## <a name="creating-a-window-based-on-a-new-windows-class"></a><a name="_atl_creating_a_window_based_on_a_new_windows_class"></a>Creazione di una finestra basata su una nuova classe di WindowsCreating a Window Based on a New Windows Class

`CWindowImpl`contiene la macro [DECLARE_WND_CLASS](reference/window-class-macros.md#declare_wnd_class) per dichiarare le informazioni sulla classe windows. Questa macro `GetWndClassInfo` implementa la funzione , che utilizza [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) per definire le informazioni di una nuova classe di Windows. Quando `CWindowImpl::Create` viene chiamato, questa classe di Windows viene registrata e viene creata una nuova finestra.

> [!NOTE]
> `CWindowImpl`passa NULL `DECLARE_WND_CLASS` alla macro, il che significa che ATL genererà un nome di classe di Windows. Per specificare il proprio nome, passare `CWindowImpl`una stringa a DECLARE_WND_CLASS nella classe derivata.

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di una classe che implementa una finestra basata su una nuova classe di Windows:Following is an example of a class that implements a window based on a new Windows class:

[!code-cpp[NVC_ATL_Windowing#64](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_1.h)]

Per creare una finestra, `CMyWindow` creare un'istanza di e quindi chiamare il `Create` metodo .

> [!NOTE]
> Per eseguire l'override delle `GetWndClassInfo` informazioni predefinite sulla classe `CWndClassInfo` Windows, implementare il metodo nella classe derivata impostando i membri sui valori appropriati.

## <a name="superclassing-an-existing-windows-class"></a><a name="_atl_superclassing_an_existing_windows_class"></a>Superclassing di una classe Windows esistente

La macro [DECLARE_WND_SUPERCLASS](reference/window-class-macros.md#declare_wnd_superclass) consente di creare una finestra che sovraclassa una classe Windows esistente. Specificare questa `CWindowImpl`macro nella classe derivata. Come qualsiasi altra finestra ATL, i messaggi vengono gestiti da una mappa messaggi.

Quando si utilizza DECLARE_WND_SUPERCLASS, verrà registrata una nuova classe di Windows. Questa nuova classe sarà la stessa della classe esistente specificata, `CWindowImpl::WindowProc` ma sostituirà la routine della finestra con (o con la funzione che esegue l'override di questo metodo).

## <a name="example"></a>Esempio

Di seguito è riportato un esempio di una classe che esegue la superclasse della classe Edit standard:

[!code-cpp[NVC_ATL_Windowing#65](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_2.h)]

Per creare la finestra di modifica superclasse, creare un'istanza di `CMyEdit` e quindi chiamare il `Create` metodo .

## <a name="subclassing-an-existing-window"></a><a name="_atl_subclassing_an_existing_window"></a>Sottoclasse di una finestra esistente

Per fare una sottoclasse di `CWindowImpl` una finestra esistente, derivare una classe da e dichiarare una mappa messaggi, come nei due casi precedenti. Si noti, tuttavia, che non si specifica alcuna informazione sulla classe di Windows, poiché verrà suddivisa una finestra già esistente.

Anziché `Create`chiamare `SubclassWindow` , chiamare e passare l'handle alla finestra esistente che si desidera sottoclasse. Una volta che la finestra è `CWindowImpl::WindowProc` sottoclassata, verrà utilizzato (o la funzione che esegue l'override di questo metodo) per indirizzare i messaggi alla mappa messaggi. Per scollegare una finestra sottoclassata dall'oggetto, chiamare `UnsubclassWindow`. La procedura originale della finestra verrà quindi ripristinata.

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestraImplementing a Window](../atl/implementing-a-window.md)
