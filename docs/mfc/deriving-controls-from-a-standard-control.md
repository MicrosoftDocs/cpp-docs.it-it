---
title: Derivazione di controlli da un controllo standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard controls [MFC], deriving controls from
- common controls [MFC], deriving from
- derived controls
- controls [MFC], derived
- Windows common controls [MFC], deriving from
- standard controls
ms.assetid: a6f84315-7007-4e0e-8576-78be81254802
ms.openlocfilehash: 54e43c8445bb6b8db4c6a7a4b28890e81be52d6c
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616962"
---
# <a name="deriving-controls-from-a-standard-control"></a>Derivazione di controlli da un controllo standard

Come per qualsiasi classe derivata da [CWnd](reference/cwnd-class.md), è possibile modificare il comportamento di un controllo derivando una nuova classe da una classe di controlli esistente.

### <a name="to-create-a-derived-control-class"></a>Per creare una classe di controlli derivata

1. Derivare la classe da una classe del controllo esistente e, facoltativamente, eseguire l'override della `Create` funzione membro in modo che fornisca gli argomenti necessari alla funzione della classe di base `Create` .

1. Fornire funzioni membro del gestore di messaggi e voci della mappa messaggi per modificare il comportamento del controllo in risposta a messaggi di Windows specifici. Vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md).

1. Fornire nuove funzioni membro per estendere la funzionalità del controllo (facoltativo).

L'utilizzo di un controllo derivato in una finestra di dialogo richiede un lavoro aggiuntivo. I tipi e le posizioni dei controlli in una finestra di dialogo vengono in genere specificati in una risorsa modello di finestra di dialogo. Se si crea una classe di controlli derivata, non è possibile specificarla in un modello di finestra di dialogo perché il compilatore di risorse non è in grado di riconoscere la classe derivata.

#### <a name="to-place-your-derived-control-in-a-dialog-box"></a>Per inserire il controllo derivato in una finestra di dialogo

1. Incorporare un oggetto della classe del controllo derivato nella dichiarazione della classe della finestra di dialogo derivata.

1. Eseguire l'override della `OnInitDialog` funzione membro nella classe della finestra di dialogo per chiamare la `SubclassDlgItem` funzione membro per il controllo derivato.

`SubclassDlgItem`"sottoclassi dinamiche" un controllo creato da un modello di finestra di dialogo. Quando un controllo viene sottoclassato dinamicamente, si esegue l'hook in Windows, si elaborano alcuni messaggi all'interno dell'applicazione, quindi si passano i messaggi rimanenti a Windows. Per ulteriori informazioni, vedere la funzione membro [SubclassDlgItem](reference/cwnd-class.md#subclassdlgitem) della classe `CWnd` nelle informazioni di *riferimento su MFC*. Nell'esempio seguente viene illustrato come è possibile scrivere un override di `OnInitDialog` per chiamare `SubclassDlgItem` :

[!code-cpp[NVC_MFCControlLadenDialog#3](codesnippet/cpp/deriving-controls-from-a-standard-control_1.cpp)]

Poiché il controllo derivato è incorporato nella classe della finestra di dialogo, verrà creato quando la finestra di dialogo viene costruita e verrà distrutta quando la finestra di dialogo viene distrutta. Confrontare questo codice con l'esempio nell' [aggiunta manuale di controlli](adding-controls-by-hand.md).

## <a name="see-also"></a>Vedere anche

[Creazione e utilizzo di controlli](making-and-using-controls.md)<br/>
[Controlli](controls-mfc.md)
