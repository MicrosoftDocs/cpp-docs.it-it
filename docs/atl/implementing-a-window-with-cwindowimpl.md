---
description: 'Altre informazioni su: implementazione di una finestra con CWindowImpl'
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
ms.openlocfilehash: 4010450b21a7cbbb4c4f1e4b7a39f594ce1e466e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152881"
---
# <a name="implementing-a-window-with-cwindowimpl"></a>Implementazione di una finestra con CWindowImpl

Per implementare una finestra, derivare una classe da `CWindowImpl` . Nella classe derivata dichiarare una mappa messaggi e le funzioni del gestore messaggi. È ora possibile usare la classe in tre modi diversi:

- [Crea una finestra basata su una nuova classe di Windows](#_atl_creating_a_window_based_on_a_new_windows_class)

- [Superclasse di una classe Windows esistente](#_atl_superclassing_an_existing_windows_class)

- [Sottoclasse di una finestra esistente](#_atl_subclassing_an_existing_window)

## <a name="creating-a-window-based-on-a-new-windows-class"></a><a name="_atl_creating_a_window_based_on_a_new_windows_class"></a> Creazione di una finestra basata su una nuova classe di Windows

`CWindowImpl` contiene la macro [DECLARE_WND_CLASS](reference/window-class-macros.md#declare_wnd_class) per dichiarare le informazioni sulla classe di Windows. Questa macro implementa la `GetWndClassInfo` funzione, che usa [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) per definire le informazioni di una nuova classe di Windows. Quando `CWindowImpl::Create` viene chiamato il metodo, questa classe di Windows viene registrata e viene creata una nuova finestra.

> [!NOTE]
> `CWindowImpl` passa NULL alla `DECLARE_WND_CLASS` macro, il che significa che ATL genererà un nome di classe di Windows. Per specificare il proprio nome, passare una stringa a DECLARE_WND_CLASS nella `CWindowImpl` classe derivata da.

## <a name="example-implement-a-window"></a>Esempio: implementare una finestra

Di seguito è riportato un esempio di una classe che implementa una finestra basata su una nuova classe di Windows:

[!code-cpp[NVC_ATL_Windowing#64](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_1.h)]

Per creare una finestra, creare un'istanza di `CMyWindow` e quindi chiamare il `Create` metodo.

> [!NOTE]
> Per eseguire l'override delle informazioni sulle classi di Windows predefinite, implementare il `GetWndClassInfo` metodo nella classe derivata impostando i `CWndClassInfo` membri sui valori appropriati.

## <a name="superclassing-an-existing-windows-class"></a><a name="_atl_superclassing_an_existing_windows_class"></a> Superclasse di una classe Windows esistente

La macro [DECLARE_WND_SUPERCLASS](reference/window-class-macros.md#declare_wnd_superclass) consente di creare una finestra per la superclasse di una classe Windows esistente. Specificare questa macro nella `CWindowImpl` classe derivata da. Analogamente a qualsiasi altra finestra ATL, i messaggi vengono gestiti da una mappa messaggi.

Quando si utilizza DECLARE_WND_SUPERCLASS, verrà registrata una nuova classe di Windows. Questa nuova classe sarà identica alla classe esistente specificata, ma sostituirà la routine della finestra con `CWindowImpl::WindowProc` (o con la funzione che esegue l'override di questo metodo).

## <a name="example-superclass-the-edit-class"></a>Esempio: superclasse the Edit Class

Di seguito è riportato un esempio di una classe che rappresenta la superclasse della classe di modifica standard:

[!code-cpp[NVC_ATL_Windowing#65](../atl/codesnippet/cpp/implementing-a-window-with-cwindowimpl_2.h)]

Per creare la finestra di modifica superclasse, creare un'istanza di `CMyEdit` e quindi chiamare il `Create` metodo.

## <a name="subclassing-an-existing-window"></a><a name="_atl_subclassing_an_existing_window"></a> Sottoclasse di una finestra esistente

Per sottoporre a una sottoclasse una finestra esistente, derivare una classe da `CWindowImpl` e dichiarare una mappa messaggi, come nei due casi precedenti. Si noti, tuttavia, che non si specificano informazioni sulle classi di Windows, poiché si creerà una sottoclasse di una finestra già esistente.

Anziché chiamare `Create` , chiamare `SubclassWindow` e passare l'handle alla finestra esistente di cui si vuole eseguire la sottoclasse. Quando la finestra viene sottoclassata, utilizzerà `CWindowImpl::WindowProc` (o la funzione che esegue l'override di questo metodo) per indirizzare i messaggi alla mappa messaggi. Per scollegare una finestra sottoclassata dall'oggetto, chiamare `UnsubclassWindow` . Verrà ripristinata la routine della finestra originale della finestra.

## <a name="see-also"></a>Vedi anche

[Implementazione di una finestra](../atl/implementing-a-window.md)
