---
title: Componente aggiuntivo DLL MBCS MFC | Documenti Microsoft
ms.custom: ''
ms.date: 1/04/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MBCS
- MFC
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: df6ecf03a5b1c92dc7e435fc014615db09422638
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-mbcs-dll-add-on"></a>Componente aggiuntivo DLL MBCS MFC

Supporto per MFC e le relative librerie set (MBCS) carattere multibyte prevede un passaggio aggiuntivo durante l'installazione di Visual Studio in Visual Studio 2013, 2015 e 2017.

**Visual Studio 2013**: per impostazione predefinita, le librerie MFC installate in Visual Studio 2013 supportano solo lo sviluppo di Unicode. Le DLL MBCS è necessario per compilare un progetto MFC in Visual Studio 2013 con il **del Set di caratteri** proprietà impostata su **del Set di caratteri multibyte utilizzare** o **non impostato**. Scaricare la DLL in [libreria MFC Multibyte per Visual Studio 2013](https://www.microsoft.com/en-us/download/details.aspx?id=40770).

**Visual Studio 2015**: sia Unicode e MBCS MFC (DLL) sono inclusi nei componenti di installazione di Visual C++, ma il supporto di MFC non è installato per impostazione predefinita. Visual C++ e MFC sono configurazioni di installazione facoltative nel programma di installazione di Visual Studio. Per assicurarsi che MFC venga installato, scegliere **Personalizzato** nel programma di installazione in **Linguaggi di programmazione**, assicurarsi che **Visual C++** e **Microsoft Foundation Classes per C++** siano selezionati. Se Visual Studio è già installato, verrà richiesto di installare Visual C++ e/o MFC quando si prova a creare un progetto MFC.

**Visual Studio 2017**: DLL MFC MBCS e Unicode vengono installate con il **sviluppo di applicazioni Desktop con C++** carico di lavoro quando si seleziona **ATL e MFC supportano** dal **facoltativo Componenti** riquadro. Se l'installazione non include questi componenti, è possibile avviare il programma di installazione dal **nuovi progetti** finestra di dialogo utilizzando il **aprire Visual Studio Installer** collegamento.

## <a name="see-also"></a>Vedere anche

[Versioni di librerie MFC](../mfc/mfc-library-versions.md)

