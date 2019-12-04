---
title: Componente aggiuntivo DLL MBCS MFC
ms.date: 12/02/2019
helpviewer_keywords:
- MBCS
- MFC
ms.openlocfilehash: fe74e0639664b6a6a86a4c3269f174de441002f4
ms.sourcegitcommit: 8762a3f9b5476b4dee03f0ee8064ea606550986e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/04/2019
ms.locfileid: "74810364"
---
# <a name="mfc-mbcs-dll-add-on"></a>Componente aggiuntivo DLL MBCS MFC

Il supporto per MFC e le relative librerie di Multibyte Character Set (MBCS) richiede un passaggio aggiuntivo durante l'installazione di Visual Studio in Visual Studio 2013 e versioni successive.

**Visual Studio 2013**: per impostazione predefinita, le librerie MFC installate in Visual Studio 2013 supportano solo lo sviluppo Unicode. Sono necessarie le DLL MBCS per compilare un progetto MFC in Visual Studio 2013 con la proprietà set di **caratteri** impostata su **utilizza set di caratteri multibyte** o **non impostato**. Scaricare la DLL nella [libreria MFC multibyte per Visual Studio 2013](https://www.microsoft.com/download/details.aspx?id=40770).

**Visual Studio 2015**: le DLL MFC Unicode e MBCS sono incluse nei componenti di C++ installazione visivi, ma il supporto per MFC non è installato per impostazione predefinita. Visual C++ e MFC sono configurazioni di installazione facoltative nel programma di installazione di Visual Studio. Per assicurarsi che MFC venga installato, scegliere **Personalizzato** nel programma di installazione in **Linguaggi di programmazione**, assicurarsi che **Visual C++** e **Microsoft Foundation Classes per C++** siano selezionati. Se Visual Studio è già installato, verrà richiesto di installare Visual C++ e/o MFC quando si prova a creare un progetto MFC.

**Visual Studio 2017 e versioni successive**: le DLL MFC Unicode e MBCS vengono installate con il carico di lavoro **sviluppo C++**  di applicazioni desktop quando si seleziona il **supporto MFC e ATL** dal riquadro **componenti facoltativi** del programma programma di installazione di Visual Studio. Se l'installazione non include questi componenti, passare al **file |** Finestra di dialogo nuovo progetto e fare clic sul collegamento **Apri programma di installazione di Visual Studio** . Per altre informazioni, vedere [installare Visual Studio](/visualstudio/install/install-visual-studio).

## <a name="see-also"></a>Vedere anche

[Versioni di librerie MFC](../mfc/mfc-library-versions.md)
