---
description: 'Altre informazioni su: classi di supporto di Windows'
title: Classi di supporto di Windows (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
ms.assetid: 750b14d5-d787-4d2b-9728-ac199ccad489
ms.openlocfilehash: c88a6ef878a428581ca090e78b2fac3b5e02131d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138061"
---
# <a name="windows-support-classes"></a>Classi di supporto di Windows

Le classi seguenti forniscono supporto per Windows:

- [_U_MENUorID](../atl/reference/u-menuorid-class.md) Fornisce i wrapper per `CreateWindow` e `CreateWindowEx` .

- [CWindow](../atl/reference/cwindow-class.md) Contiene i metodi per la modifica di una finestra. `CWindow` è la classe base per `CWindowImpl`, `CDialogImpl` e `CContainedWindow`.

- [CWindowImpl](../atl/reference/cwindowimpl-class.md) Implementa una finestra basata su una nuova classe di finestra. Consente inoltre di sottoclassare o superclasse la finestra.

- [CDialogImpl](../atl/reference/cdialogimpl-class.md) Implementa una finestra di dialogo.

- [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) Implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.

- [CSimpleDialog](../atl/reference/csimpledialog-class.md) Implementa una finestra di dialogo (modale o non modale) con funzionalità di base.

- [CAxWindow](../atl/reference/caxwindow-class.md) Modifica una finestra che ospita un controllo ActiveX.

- [CAxWindow2T](../atl/reference/caxwindow2t-class.md) Fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e che include anche il supporto per l'hosting di controlli ActiveX con licenza.

- [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) Implementa una finestra contenuta in un altro oggetto.

- [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) Gestisce le informazioni di una nuova classe di finestra.

- [CDynamicChain](../atl/reference/cdynamicchain-class.md) Supporta la concatenazione dinamica delle mappe messaggi.

- [CMessageMap](../atl/reference/cmessagemap-class.md) Consente a un oggetto di esporre le mappe dei messaggi ad altri oggetti.

- [CWinTraits](../atl/reference/cwintraits-class.md) Fornisce un semplice metodo di standardizzazione dei tratti di un oggetto finestra ATL.

- [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) Fornisce i valori predefiniti per gli stili della finestra e gli stili estesi usati per creare una finestra. Questi valori vengono aggiunti, usando l'operatore logico OR, ai valori forniti durante la creazione di una finestra.

## <a name="related-articles"></a>Articoli correlati

[Classi di finestra ATL](../atl/atl-window-classes.md)

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../atl/atl-class-overview.md)<br/>
[Macro della mappa messaggi](../atl/reference/message-map-macros-atl.md)<br/>
[Macro della classe di finestra](../atl/reference/window-class-macros.md)
