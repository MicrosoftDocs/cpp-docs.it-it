---
title: Componente aggiuntivo DLL MBCS MFC
ms.date: 1/04/2018
helpviewer_keywords:
- MBCS
- MFC
ms.openlocfilehash: a78425ac92aa9ddfe7f0b1b61dde915b3e088383
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558914"
---
# <a name="mfc-mbcs-dll-add-on"></a>Componente aggiuntivo DLL MBCS MFC

Supporto di MFC e dalle librerie di set (MBCS) carattere multibyte prevede un passaggio aggiuntivo durante l'installazione di Visual Studio in Visual Studio 2013, 2015 e 2017.

**Visual Studio 2013**: per impostazione predefinita, le librerie MFC installate in Visual Studio 2013 supportano solo lo sviluppo di Unicode. Le DLL MBCS è necessario per compilare un progetto MFC in Visual Studio 2013 con il **del Set di caratteri** impostata su **utilizza Set caratteri multibyte** o **Nenastaveno**. Scaricare la DLL in [libreria MFC Multibyte per Visual Studio 2013](https://www.microsoft.com/download/details.aspx?id=40770).

**Visual Studio 2015**: sia Unicode e MBCS MFC (DLL) sono inclusi nei componenti di installazione di Visual C++, ma il supporto per MFC non è installato per impostazione predefinita. Visual C++ e MFC sono configurazioni di installazione facoltative nel programma di installazione di Visual Studio. Per assicurarsi che MFC venga installato, scegliere **Personalizzato** nel programma di installazione in **Linguaggi di programmazione**, assicurarsi che **Visual C++** e **Microsoft Foundation Classes per C++** siano selezionati. Se Visual Studio è già installato, verrà richiesto di installare Visual C++ e/o MFC quando si prova a creare un progetto MFC.

**Visual Studio 2017**: le DLL MFC MBCS e Unicode vengono installate con il **sviluppo di applicazioni Desktop con C++** carico di lavoro quando si seleziona **ATL e MFC supportano** dal **facoltativo Componenti** riquadro. Se l'installazione non include questi componenti, passare al **File | I nuovi progetti** finestra di dialogo e fare clic sui **aperto Visual Studio Installer** collegamento.

## <a name="see-also"></a>Vedere anche

[Versioni di librerie MFC](../mfc/mfc-library-versions.md)

