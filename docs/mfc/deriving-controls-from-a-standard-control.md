---
title: Derivazione di controlli da un controllo Standard | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- standard controls [MFC], deriving controls from
- common controls [MFC], deriving from
- derived controls
- controls [MFC], derived
- Windows common controls [MFC], deriving from
- standard controls
ms.assetid: a6f84315-7007-4e0e-8576-78be81254802
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc1b0b047bc8d594a34177cabf1081c0a1c67970
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399769"
---
# <a name="deriving-controls-from-a-standard-control"></a>Derivazione di controlli da un controllo standard

Come per qualsiasi [CWnd](../mfc/reference/cwnd-class.md)-derivato (classe), è possibile modificare il comportamento di un controllo mediante la derivazione di una nuova classe da una classe di controllo esistente.

### <a name="to-create-a-derived-control-class"></a>Per creare una classe derivata control

1. Derivare la classe da una classe di controllo esistente e, facoltativamente, eseguire l'override di `Create` funzione di membro, in modo che fornisca gli argomenti necessari per la classe base `Create` (funzione).

1. Fornire le funzioni membro di gestore di messaggi e le voci della mappa messaggi per modificare il comportamento del controllo in risposta a specifici messaggi di Windows. Visualizzare [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

1. Offrono nuove funzioni membro per estendere la funzionalità del controllo (facoltativo).

L'utilizzo di un controllo derivato in una finestra di dialogo richiede un lavoro aggiuntivo. I tipi e le posizioni dei controlli in una finestra di dialogo vengono in genere specificate in una risorsa modello di finestra. Se si crea una classe del controllo derivata, è possibile specificarlo in un modello di finestra di dialogo, poiché il compilatore di risorse dispone di alcuna informazione sulla classe derivata.

#### <a name="to-place-your-derived-control-in-a-dialog-box"></a>Per inserire un controllo derivato in una finestra di dialogo

1. Incorporare un oggetto della classe del controllo derivata nella dichiarazione della classe di finestre di dialogo derivata.

1. Eseguire l'override di `OnInitDialog` funzione di membro nella classe della finestra per chiamare il `SubclassDlgItem` funzione membro per il controllo derivato.

`SubclassDlgItem` "in modo dinamico le sottoclassi" un controllo creato da un modello di finestra di dialogo. Quando un controllo è una sottoclasse dinamica, si collegano in Windows, elaborano alcuni messaggi all'interno di un'applicazione personalizzata, quindi passa i messaggi rimanenti a Windows. Per altre informazioni, vedere la [SubclassDlgItem](../mfc/reference/cwnd-class.md#subclassdlgitem) la funzione membro della classe `CWnd` nel *riferimenti alla libreria MFC*. L'esempio seguente illustra come scrivere un override di `OnInitDialog` chiamare `SubclassDlgItem`:

[!code-cpp[NVC_MFCControlLadenDialog#3](../mfc/codesnippet/cpp/deriving-controls-from-a-standard-control_1.cpp)]

Poiché il controllo derivato viene incorporato nella classe di finestra di dialogo, verrà costruito quando viene costruita la finestra di dialogo e verrà eliminato definitivamente quando viene eliminata definitivamente la finestra di dialogo. Confrontare questo codice di esempio nella [aggiunta di controlli By mano](../mfc/adding-controls-by-hand.md).

## <a name="see-also"></a>Vedere anche

[Creazione e uso di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)

