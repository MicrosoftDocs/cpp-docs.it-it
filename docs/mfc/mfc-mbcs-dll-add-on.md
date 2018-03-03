---
title: Componente aggiuntivo DLL MBCS MFC | Documenti Microsoft
ms.custom: 
ms.date: 1/04/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MBCS
- MFC
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d6f134110ff95956cc37d6e038a680ff27cbc298
ms.sourcegitcommit: 56f6fce7d80e4f61d45752f4c8512e4ef0453e58
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2018
---
# <a name="mfc-mbcs-dll-add-on"></a>Componente aggiuntivo DLL MBCS MFC

Supporto per MFC e le relative librerie set (MBCS) carattere multibyte prevede un passaggio aggiuntivo durante l'installazione di Visual Studio in Visual Studio 2013, 2015 e 2017.

**Visual Studio 2013**: per impostazione predefinita, le librerie MFC installate in Visual Studio 2013 supportano solo lo sviluppo di Unicode. Le DLL MBCS è necessario per compilare un progetto MFC in Visual Studio 2013 con il **del Set di caratteri** proprietà impostata su **del Set di caratteri multibyte utilizzare** o **non impostato**. Scaricare la DLL in [libreria MFC Multibyte per Visual Studio 2013](https://www.microsoft.com/en-us/download/details.aspx?id=40770).

**Visual Studio 2015**: sia Unicode e MBCS MFC (DLL) sono inclusi nei componenti del programma di installazione di Visual C++, ma il supporto di MFC non è installato per impostazione predefinita. Visual C++ e MFC sono configurazioni di installazione facoltative nel programma di installazione di Visual Studio. Per assicurarsi che MFC venga installato, scegliere **Personalizzato** nel programma di installazione in **Linguaggi di programmazione**, assicurarsi che **Visual C++** e **Microsoft Foundation Classes per C++** siano selezionati. Se Visual Studio è già installato, verrà richiesto di installare Visual C++ e/o MFC quando si prova a creare un progetto MFC.

**Visual Studio 2017**: Unicode e MBCS MFC (DLL) vengono installate con il **sviluppo di applicazioni Desktop con C++** carico di lavoro quando si seleziona **ATL e MFC supportano** dal  **Componenti facoltativi** riquadro. Se l'installazione non include questi componenti, è possibile avviare il programma di installazione dal **nuovi progetti** finestra di dialogo utilizzando il **aprire Visual Studio Installer** collegamento.

## <a name="see-also"></a>Vedere anche

[Versioni di librerie MFC](../mfc/mfc-library-versions.md)

