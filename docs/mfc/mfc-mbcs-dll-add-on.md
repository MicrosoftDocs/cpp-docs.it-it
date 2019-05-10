---
title: Componente aggiuntivo DLL MBCS MFC
ms.date: 05/08/2019
helpviewer_keywords:
- MBCS
- MFC
ms.openlocfilehash: 20145b200a0f8bac8ccb461331d4d233a3b0251e
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65524824"
---
# <a name="mfc-mbcs-dll-add-on"></a>Componente aggiuntivo DLL MBCS MFC

Supporto di MFC e dalle librerie di set (MBCS) carattere multibyte prevede un passaggio aggiuntivo durante l'installazione di Visual Studio in Visual Studio 2013 e versioni successive.

**Visual Studio 2013**: Per impostazione predefinita, le librerie MFC installate in Visual Studio 2013 supportano solo lo sviluppo di Unicode. Le DLL MBCS è necessario per compilare un progetto MFC in Visual Studio 2013 con il **del Set di caratteri** impostata su **utilizza Set caratteri multibyte** o **Nenastaveno**. Scaricare la DLL in [libreria MFC Multibyte per Visual Studio 2013](https://www.microsoft.com/download/details.aspx?id=40770).

**Visual Studio 2015**: Unicode e MBCS MFC (DLL) sono inclusi nei componenti di installazione di Visual C++, ma il supporto per MFC non è installato per impostazione predefinita. Visual C++ e MFC sono configurazioni di installazione facoltative nel programma di installazione di Visual Studio. Per assicurarsi che MFC venga installato, scegliere **Personalizzato** nel programma di installazione in **Linguaggi di programmazione**, assicurarsi che **Visual C++** e **Microsoft Foundation Classes per C++** siano selezionati. Se Visual Studio è già installato, verrà richiesto di installare Visual C++ e/o MFC quando si prova a creare un progetto MFC.

**Visual Studio 2017 e versioni successive**: Unicode e le DLL MBCS MFC vengono installate con il **sviluppo di applicazioni Desktop con C++** carico di lavoro quando si seleziona **ATL e MFC supportano** dal **componenti facoltativi** riquadro. Se l'installazione non include questi componenti, passare al **File | I nuovi progetti** finestra di dialogo e fare clic sui **aperto Visual Studio Installer** collegamento.

## <a name="see-also"></a>Vedere anche

[Versioni di librerie MFC](../mfc/mfc-library-versions.md)
